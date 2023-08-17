# '''
# The copyright in this software is being made available under this Software
# Copyright License. This software may be subject to other third party and
# contributor rights, including patent rights, and no such rights are
# granted under this license.
# Copyright (c) 1995 - 2021 Fraunhofer-Gesellschaft zur Förderung der
# angewandten Forschung e.V. (Fraunhofer)
# All rights reserved.
# Redistribution and use in source and binary forms, with or without
# modification, are permitted for purpose of testing the functionalities of
# this software provided that the following conditions are met:
# *     Redistributions of source code must retain the above copyright notice,
# this list of conditions and the following disclaimer.
# *     Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
# *     Neither the names of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from this
# software without specific prior written permission.
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
# CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
# INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
# CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
# ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# NO EXPRESS OR IMPLIED LICENSES TO ANY PATENT CLAIMS, INCLUDING
# WITHOUT LIMITATION THE PATENTS OF THE COPYRIGHT HOLDERS AND
# CONTRIBUTORS, ARE GRANTED BY THIS SOFTWARE LICENSE. THE
# COPYRIGHT HOLDERS AND CONTRIBUTORS PROVIDE NO WARRANTY OF PATENT
# NON-INFRINGEMENT WITH RESPECT TO THIS SOFTWARE.
# '''

from cmath import cos, log, sin
import numpy as np
import pandas
from pyquaternion import Quaternion
import logging
import math
import pandas as pd

class Evaluator():
    """Compute evaluation metrics MAE and RMSE for different predictors"""
    def __init__(self, zs, preds, pred_step,head_trace_name,obj_trace_name,original,stream):
        self.zs = zs
        self.preds = preds
        self.pred_step = pred_step
        self.head_trace_name = head_trace_name
        self.obj_trace_name = obj_trace_name
        self.original_obj = original  #原始位置
        self.stream_obj = stream  #串流位置，只用於ours
        self.euc_dists = None
        self.ang_dists = None
        self.pos_error2D = None
        self.metrics = {}
        


    def compute_metrics(self, zs_pos, zs_rot, preds_pos, preds_rot,original_obj,usemethod):
        # Compute Eucliden and angular distances
        
        self.euc_dists = np.linalg.norm(zs_pos - preds_pos, axis=1)
        self.ang_dists = np.array([Quaternion.distance(q1, q2) for q1, q2 in zip(zs_rot,preds_rot)])
        self.pos_error2D = np.array([ calculate_position_error_2D(p_true,q_true,p_preds,q_preds,original_obj) for p_true, q_true, p_preds, q_preds, original_obj in zip( zs_pos, zs_rot, preds_pos, preds_rot,original_obj)])                                                                       
        logging.info( self.pos_error2D)
        pd.DataFrame(self.pos_error2D).to_csv('./results/Pos_error/pos_error_{}_{}_{}_{}_ms.csv'.format(usemethod, self.head_trace_name, self.obj_trace_name, int(self.pred_step)))
        # Mean Absolute Error (MAE)
        self.metrics['mae_euc'] = np.sum(self.euc_dists) / self.euc_dists.shape[0]
        logging.info("MAE position = %s", self.metrics['mae_euc'])
        self.metrics['mae_ang'] = np.rad2deg(np.sum(self.ang_dists) / self.ang_dists.shape[0])
        logging.info("MAE rotation = %s", self.metrics['mae_ang'])
        self.metrics['mae_pos_error'] = np.sum(self.pos_error2D) / self.pos_error2D.shape[0]
        logging.info("MAE pos error = %s", self.metrics['mae_pos_error'])

        # # Root Mean Squared Error (RMSE)
        # self.metrics['rmse_euc'] = np.sqrt((self.euc_dists ** 2).mean())
        # logging.info("RMSE position = %s", self.metrics['rmse_euc'])
        # self.metrics['rmse_ang'] = np.rad2deg(np.sqrt((self.ang_dists ** 2).mean()))
        # logging.info("RMSE rotation = %s", self.metrics['rmse_ang'])
    def compute_metrics_ours(self, zs_pos, zs_rot, preds_pos, preds_rot,original_obj,stream_obj,usemethod):
        # Compute Eucliden and angular distances
        
        self.euc_dists = np.linalg.norm(zs_pos - preds_pos, axis=1)
        self.ang_dists = np.array([Quaternion.distance(q1, q2) for q1, q2 in zip(zs_rot,preds_rot)])
        self.pos_error2D = np.array([ calculate_position_error_2D_ours(p_preds,q_preds,original_obj,stream_obj) for p_preds,q_preds,original_obj,stream_obj in zip( preds_pos, preds_rot,original_obj,stream_obj)])                                                                       
        logging.info( self.pos_error2D)
        pd.DataFrame(self.pos_error2D).to_csv('./results/Pos_error/pos_error_{}_{}_{}_{}_ms.csv'.format(usemethod, self.head_trace_name, self.obj_trace_name, int(self.pred_step)))
        # Mean Absolute Error (MAE)
        self.metrics['mae_euc'] = np.sum(self.euc_dists) / self.euc_dists.shape[0]
        logging.info("MAE position = %s", self.metrics['mae_euc'])
        self.metrics['mae_ang'] = np.rad2deg(np.sum(self.ang_dists) / self.ang_dists.shape[0])
        logging.info("MAE rotation = %s", self.metrics['mae_ang'])
        self.metrics['mae_pos_error'] = np.sum(self.pos_error2D) / self.pos_error2D.shape[0]
        logging.info("MAE pos error = %s", self.metrics['mae_pos_error'])

    def eval_kalman(self):
        original_obj = self.original_obj[self.pred_step:,:]
        zs_pos = self.zs[self.pred_step:, :3]
        zs_rot = self.zs[self.pred_step:, 3:]
        zs_rot = np.array([Quaternion(q) for q in zs_rot])

        preds_pos = self.preds[:-self.pred_step, :3]
        preds_rot = self.preds[:-self.pred_step:, 3:]
        preds_rot = np.array([Quaternion(q) for q in preds_rot])

        self.compute_metrics(zs_pos, zs_rot, preds_pos, preds_rot, original_obj,"kalman")
        #zs_pos, zs_rot, preds_pos, preds_rot,original_obj,usemethod
        
    def eval_autoreg(self, hw):
        original_obj = self.original_obj[hw + self.pred_step - 1:,:]
        zs_pos = self.zs[hw + self.pred_step - 1 :, :3]
        zs_rot = self.zs[hw + self.pred_step - 1 :, 3:]
        zs_rot = np.array([Quaternion(q) for q in zs_rot])
        
        preds_pos = self.preds[:, :3]
        preds_rot = self.preds[:, 3:]
        preds_rot = np.array([Quaternion(q) for q in preds_rot])
        
        self.compute_metrics(zs_pos, zs_rot, preds_pos, preds_rot, original_obj, "autoreg")
        
    def eval_baseline(self):
        original_obj = self.original_obj[:-self.pred_step,:]
        zs_pos = self.zs[:-self.pred_step, :3]
        zs_rot = self.zs[:-self.pred_step:, 3:]
        zs_rot = np.array([Quaternion(q) for q in zs_rot])
        
        zs_shifted_pos = self.preds[:, :3]
        zs_shifted_rot = self.preds[:, 3:]
        zs_shifted_rot = np.array([Quaternion(q) for q in zs_shifted_rot])

    
        self.compute_metrics(zs_pos, zs_rot, zs_shifted_pos, zs_shifted_rot, original_obj, "baseline")
        #zs_pos, zs_rot, preds_pos, preds_rot,original_obj,usemethod
    
    def eval_ours(self):
        zs_pos = self.zs[:-self.pred_step, :3]
        zs_rot = self.zs[:-self.pred_step:, 3:]
        zs_rot = np.array([Quaternion(q) for q in zs_rot])
        
        zs_shifted_pos = self.preds[:, :3]
        zs_shifted_rot = self.preds[:, 3:]
        zs_shifted_rot = np.array([Quaternion(q) for q in zs_shifted_rot])
        original_obj = self.original_obj
        stream_obj = self.stream_obj
    
        self.compute_metrics_ours(zs_pos, zs_rot, zs_shifted_pos, zs_shifted_rot,original_obj,stream_obj,"ours")
        # zs_pos, zs_rot, preds_pos, preds_rot,original_obj,stream_obj,usemethod



def calculate_position_error_2D (true_pos, true_quat, preds_pos, preds_quat,obj_pos):
    
    position_true = np.array([cam_to_screen(projection_to_camera(true_pos,true_quat,obj_pos),1) ])# 1 為焦平面距離
    position_preds = np.array ([cam_to_screen(projection_to_camera(preds_pos,preds_quat,obj_pos),1) ])# 1 為焦平面距離
    position_error = np.linalg.norm(position_true - position_preds,axis=1)
    #logging.info("position_true = %s", position_true)
    #logging.info("position_preds = %s", position_preds)
    #logging.info("position error = %s", position_error)
    return position_error

def calculate_position_error_2D_ours (true_pos, true_quat, original_obj_pos, stream_obj_pos):
    
    position_original = np.array([cam_to_screen(projection_to_camera(true_pos,true_quat,original_obj_pos),1) ])# 1 為焦平面距離
    position_stream = np.array ([cam_to_screen(projection_to_camera(true_pos,true_quat,stream_obj_pos),1) ])# 1 為焦平面距離
    position_error = np.linalg.norm(position_original - position_stream,axis=1)
    #logging.info("position_true = %s", position_true)
    #logging.info("position_preds = %s", position_preds)
    #logging.info("position error = %s", position_error)
    return position_error

def projection_to_camera(cam_pos,cam_quaternion,obj_pos):  # 外參矩陣
    
    vector_objtocam = obj_pos - cam_pos
    cam_eular = euler_from_quaternion(cam_quaternion[0],cam_quaternion[1],cam_quaternion[2],cam_quaternion[3])
    projection_matrix_roll = np.array([[1,0,0],[0,np.cos(cam_eular[0]),np.sin(cam_eular[0])],[0,-np.sin(cam_eular[0]),np.cos(cam_eular[0])]]) # np.cos(theta) theta is radian
    projection_matrix_pitch = np.array([[np.cos(cam_eular[1]),0,-np.sin(cam_eular[1])],[0,1,0],[np.sin(cam_eular[1]),0,np.cos(cam_eular[1])]])
    projection_matrix_yaw = np.array([[np.cos(cam_eular[2]),np.sin(cam_eular[2]),0],[-np.sin(cam_eular[2]),np.cos(cam_eular[2]),0],[0,0,1]])
    projection_matrix = np.matmul(np.matmul(projection_matrix_roll,projection_matrix_pitch),projection_matrix_yaw)
    obj_in_cam_space = np.matmul(projection_matrix,vector_objtocam)

    return obj_in_cam_space 

def cam_to_screen( obj_in_cam_space , distance):  #內參矩陣
    near_x = 0
    near_y = 0
    near_z = distance
    # x = obj_in_cam_space[0] * ( near_z /obj_in_cam_space[2] ) + near_x
    # y = obj_in_cam_space[1] * ( near_z /obj_in_cam_space[2] ) + near_y
    # x = obj_in_cam_space[0] 
    # y = obj_in_cam_space[1] 
    projection_matrix_toscreen = np.array([[near_z,0,near_x],[0,near_z,near_y],[0,0,1]])
    obj_in_screen = np.matmul(projection_matrix_toscreen,obj_in_cam_space)

    return obj_in_screen[0],obj_in_screen[1]


def euler_from_quaternion(x, y, z, w):
    """
    Convert a quaternion into euler angles (roll, pitch, yaw)
    roll is rotation around x in radians (counterclockwise)
    pitch is rotation around y in radians (counterclockwise)
    yaw is rotation around z in radians (counterclockwise)
    """
    t0 = +2.0 * (w * x + y * z)
    t1 = +1.0 - 2.0 * (x * x + y * y)
    roll_x = math.atan2(t0, t1)
    
    t2 = +2.0 * (w * y - z * x)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    pitch_y = math.asin(t2)
 
    t3 = +2.0 * (w * z + x * y)
    t4 = +1.0 - 2.0 * (y * y + z * z)
    yaw_z = math.atan2(t3, t4)
 
    return np.array([roll_x, pitch_y, yaw_z]) # in radians


# def meas_fn(inp, K):
#     """
#         Measurement function which projects landmark into image plane of camera.
#         :param x: first 6 params are keyframe pose, latter 3 are landmark location in world frame.
#                   First 3 params of pose are the translation and latter 3 are SO(3) minimal rep.
#         :param K: camera matrix.
#     """
#     # print(K.dtype)
#     assert len(inp) == 9

#     T = inp[:3]

#     R_cw = so3exp(inp[3:6])
    
#     y_wf = inp[6:9]
    
#     return proj(K @ (R_cw @ y_wf + T))
    
# def proj(x):
#     if x.ndim == 1:
#         return x[:-1] / x[-1]
#     elif x.ndim == 2:
#         return np.divide(x[:, :-1].T, x[:, -1]).T

# _EPS = np.finfo(float).eps

# def so3exp(w):
#     """
#         Maps so(3) --> SO(3) group with closed form expression.
#     """
#     theta = np.linalg.norm(w)
#     if theta < _EPS * 3:
#         return np.eye(3)
#     else:
#         w_hat = S03_hat_operator(w)
#         R = np.eye(3) + (np.sin(theta) / theta) * w_hat + ((1 - np.cos(theta)) / theta**2) * np.matmul(w_hat, w_hat)
#         return R

# def S03_hat_operator(x):
#     """
#         Hat operator for SO(3) Lie Group
#     """
#     return np.array([[0., -x[2], x[1]], [x[2], 0., -x[0]], [-x[1], x[0], 0.]])
