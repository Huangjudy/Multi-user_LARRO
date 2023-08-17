#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>
struct IEnumerable_1_t2B9913D3A516FD389D1F8DD573D215DE3F85783C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_t0B318FD1E679075100AD98005E79F32F387FAED8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tEB4537E121ED7128292F5E49486823EB846576FE;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// unity4dv.AnimationSource4DS[]
struct AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7;
// unity4dv.AudioSource4DS[]
struct AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// MRTK.Tutorials.GettingStarted.PartAssemblyController[]
struct PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// unity4dv.AnimationSource4DS
struct AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// unity4dv.AudioSource4DS
struct AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// unity4dv.Bridge4DS
struct Bridge4DS_t531D3A3E9A2F2EB7667052C3D809E2C4A2E8A923;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// unity4dv.DataSource4DS
struct DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// MRTK.Tutorials.GettingStarted.DirectionalIndicatorController
struct DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588;
// MRTK.Tutorials.GettingStarted.ExplodeViewController
struct ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// FlyCamera
struct FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GetObject
struct GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// LoadingBar4DS
struct LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573;
// MRTK.Tutorials.GettingStarted.PlacementHintsController
struct PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC;
// Playable4DS
struct Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t451A3E3A605FDB6CD89DE1DAD0CBE96C20687D82;
// unity4dv.Plugin4DS
struct Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// unity4dv.Sync4DS
struct Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimelineBehaviour4DS
struct TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F;
// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3;
// Track4DS
struct Track4DS_t06C2BB912C38F443ECC4AFF9D08014951442F9BB;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// remove
struct remove_t93C5EDD0AB94A1406BA457CA22ACC32732B8966B;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155;
// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87;
// unity4dv.Plugin4DS/<SequenceTrigger>d__152
struct U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693;
// unity4dv.Plugin4DS/EventFDV
struct EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2B9913D3A516FD389D1F8DD573D215DE3F85783C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDB38FB6AB422E000350B5DBF1B2E91D22AF69F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052EBED23ACF6C9AE08A68BB015AE836A45F2B2F;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08;
IL2CPP_EXTERN_C String_t* _stringLiteral184DED9BD97ADD9B93353A30A8B9A128977F8042;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9DE700AC72C42570263404DA1C9811E7D0F20C;
IL2CPP_EXTERN_C String_t* _stringLiteral29332365B016B9EC195CA3B90B107C7233547C17;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral5607F23A0F05E34965EEA1AE18EC6FFAFE3722FF;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral58F79C2CBFA4D6355EC31B25108F59CF9A28C106;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA680579CB96360FE2CD31719EE05F72B8BE402;
IL2CPP_EXTERN_C String_t* _stringLiteral62E186050A20122B0BDDC175BA7E70AA574B38EC;
IL2CPP_EXTERN_C String_t* _stringLiteral6397B9AB1173E22C838830BBE223E86651EC5616;
IL2CPP_EXTERN_C String_t* _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral7110DB47A1B8F2BCDC5A2A121D11083782ADAE31;
IL2CPP_EXTERN_C String_t* _stringLiteral71486B8738C402F6EADDA5BA47D381489B63C81B;
IL2CPP_EXTERN_C String_t* _stringLiteral7E729DC7601785912B62D7424D20C9F9DD7B3466;
IL2CPP_EXTERN_C String_t* _stringLiteral7F81C8BBDEFDF90EA5980E3A76F541B76B1A0471;
IL2CPP_EXTERN_C String_t* _stringLiteral84471E812A71C30A81C76E9585E8269F64FEDBB0;
IL2CPP_EXTERN_C String_t* _stringLiteral853B6B17B50EB86BA0D2FC61CDA572B1784EC1EA;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8E2AF474B91111E4B30F59E74DB0C3BE0455DFA3;
IL2CPP_EXTERN_C String_t* _stringLiteral934188BF126473DDD6D9A3F6E7B36F732E9A8219;
IL2CPP_EXTERN_C String_t* _stringLiteralA34FB1B89EF98C26306C2451EFC2609E558B7B31;
IL2CPP_EXTERN_C String_t* _stringLiteralA99F3A35F9871335422D453B40BB2F50AADFC873;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C5F3F2AFA586BF46BCFBD93D476C32B66FDC4C;
IL2CPP_EXTERN_C String_t* _stringLiteralAC3067A6F0287D9FBBEE667CDEA23B178FBFC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteralAD02BBEC9DB388993BDEAD3C32F4FE10AF4AAB4D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD0580DC73BFDBBAEE6668BE8346D69284D28877;
IL2CPP_EXTERN_C String_t* _stringLiteralB25361BD92DB4AED4236551E394743922FA19154;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9015830A09FDC0FED051C05289570B7261AD45;
IL2CPP_EXTERN_C String_t* _stringLiteralBE314552DBBF009D5DA203F1E242A60342D869FB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203;
IL2CPP_EXTERN_C String_t* _stringLiteralC80D8F4A883B5DB12E0934A8966167559250CF61;
IL2CPP_EXTERN_C String_t* _stringLiteralCD70C3E82D8893B724D90F24668BFCFDC8721849;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBD7CB81923B58CE4862730D2B0EF3BE29F8FEE;
IL2CPP_EXTERN_C String_t* _stringLiteralD394C8F6058A87B659625448936ECFAB02018739;
IL2CPP_EXTERN_C String_t* _stringLiteralD58423BBD82AD93EBB7BBA15BC528743D60C8E55;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1354D6D4069B0A43AC316DD56CE5B70FD5AE1DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B9B9CB5482EE91FFA10FF0D7020F6BDE7E99FD;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF54B0C5F27D7BCFA2EFA843E6130C369D84B2AB4;
IL2CPP_EXTERN_C String_t* _stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF;
IL2CPP_EXTERN_C String_t* _stringLiteralFA12CE392F603CC2A9888D612CB7FBD8F73492B2;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB8180CF7924EE3D457D6D858A3EEBD0270EC6F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m08B162396589928174E0F3A5281525AB8AB8E80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3_mE0D001FFE1848B1A6CAAD58CD0641C92C050A212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m52936C90DCE33761796E2A6E4D9A837E079E1626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m6BA574906966075ABCA04D2F8C81C42E725AA096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_mC02498CE6F903C36F89E29626A529E3B1BCA1152_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sync4DS_SyncAnimationSources_m4652C74B101123ABE31ADA22DAD3812F92429B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSequenceTriggerU3Ed__152_System_Collections_IEnumerator_Reset_m7068260C32F6C54ADAB059F3FDBC9BB5C70A0CB4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7;
struct AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____items_1)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__items_1() const { return ____items_1; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_StaticFields, ____emptyArray_5)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____items_1)); }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* get__items_1() const { return ____items_1; }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_StaticFields, ____emptyArray_5)); }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// unity4dv.AnimationSource4DS
struct AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7  : public RuntimeObject
{
public:
	// UnityEngine.Animator unity4dv.AnimationSource4DS::animationSource
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animationSource_0;

public:
	inline static int32_t get_offset_of_animationSource_0() { return static_cast<int32_t>(offsetof(AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7, ___animationSource_0)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animationSource_0() const { return ___animationSource_0; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animationSource_0() { return &___animationSource_0; }
	inline void set_animationSource_0(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animationSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationSource_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// unity4dv.AudioSource4DS
struct AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454  : public RuntimeObject
{
public:
	// UnityEngine.AudioSource unity4dv.AudioSource4DS::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_0;
	// System.Int32 unity4dv.AudioSource4DS::startOnFrame
	int32_t ___startOnFrame_1;

public:
	inline static int32_t get_offset_of_audioSource_0() { return static_cast<int32_t>(offsetof(AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454, ___audioSource_0)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_0() const { return ___audioSource_0; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_0() { return &___audioSource_0; }
	inline void set_audioSource_0(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_startOnFrame_1() { return static_cast<int32_t>(offsetof(AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454, ___startOnFrame_1)); }
	inline int32_t get_startOnFrame_1() const { return ___startOnFrame_1; }
	inline int32_t* get_address_of_startOnFrame_1() { return &___startOnFrame_1; }
	inline void set_startOnFrame_1(int32_t value)
	{
		___startOnFrame_1 = value;
	}
};


// unity4dv.Bridge4DS
struct Bridge4DS_t531D3A3E9A2F2EB7667052C3D809E2C4A2E8A923  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t451A3E3A605FDB6CD89DE1DAD0CBE96C20687D82  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6  : public RuntimeObject
{
public:
	// System.Int32 MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>4__this
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E4__this_2)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// unity4dv.Plugin4DS/<SequenceTrigger>d__152
struct U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693  : public RuntimeObject
{
public:
	// System.Int32 unity4dv.Plugin4DS/<SequenceTrigger>d__152::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object unity4dv.Plugin4DS/<SequenceTrigger>d__152::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// unity4dv.Plugin4DS unity4dv.Plugin4DS/<SequenceTrigger>d__152::<>4__this
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * ___U3CU3E4__this_2;
	// System.Single unity4dv.Plugin4DS/<SequenceTrigger>d__152::<duration>5__2
	float ___U3CdurationU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693, ___U3CU3E4__this_2)); }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdurationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693, ___U3CdurationU3E5__2_3)); }
	inline float get_U3CdurationU3E5__2_3() const { return ___U3CdurationU3E5__2_3; }
	inline float* get_address_of_U3CdurationU3E5__2_3() { return &___U3CdurationU3E5__2_3; }
	inline void set_U3CdurationU3E5__2_3(float value)
	{
		___U3CdurationU3E5__2_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>
struct Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___list_0)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_list_0() const { return ___list_0; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___current_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_current_3() const { return ___current_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___list_0)); }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * get_list_0() const { return ___list_0; }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___current_3)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_current_3() const { return ___current_3; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___kMaxTime_1 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Objects_0)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Cache_1)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_pinvoke
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_com
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// TimelineBehaviour4DS
struct TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304  : public PlayableBehaviour_t451A3E3A605FDB6CD89DE1DAD0CBE96C20687D82
{
public:
	// System.Int32 TimelineBehaviour4DS::firstFrame
	int32_t ___firstFrame_0;
	// System.Int32 TimelineBehaviour4DS::lastFrame
	int32_t ___lastFrame_1;
	// System.Boolean TimelineBehaviour4DS::onstart
	bool ___onstart_2;
	// unity4dv.Plugin4DS TimelineBehaviour4DS::Plugin
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * ___Plugin_3;
	// System.Single TimelineBehaviour4DS::frame
	float ___frame_4;
	// System.Single TimelineBehaviour4DS::pdt
	float ___pdt_5;
	// System.Single TimelineBehaviour4DS::dt
	float ___dt_6;

public:
	inline static int32_t get_offset_of_firstFrame_0() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___firstFrame_0)); }
	inline int32_t get_firstFrame_0() const { return ___firstFrame_0; }
	inline int32_t* get_address_of_firstFrame_0() { return &___firstFrame_0; }
	inline void set_firstFrame_0(int32_t value)
	{
		___firstFrame_0 = value;
	}

	inline static int32_t get_offset_of_lastFrame_1() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___lastFrame_1)); }
	inline int32_t get_lastFrame_1() const { return ___lastFrame_1; }
	inline int32_t* get_address_of_lastFrame_1() { return &___lastFrame_1; }
	inline void set_lastFrame_1(int32_t value)
	{
		___lastFrame_1 = value;
	}

	inline static int32_t get_offset_of_onstart_2() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___onstart_2)); }
	inline bool get_onstart_2() const { return ___onstart_2; }
	inline bool* get_address_of_onstart_2() { return &___onstart_2; }
	inline void set_onstart_2(bool value)
	{
		___onstart_2 = value;
	}

	inline static int32_t get_offset_of_Plugin_3() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___Plugin_3)); }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * get_Plugin_3() const { return ___Plugin_3; }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 ** get_address_of_Plugin_3() { return &___Plugin_3; }
	inline void set_Plugin_3(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * value)
	{
		___Plugin_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugin_3), (void*)value);
	}

	inline static int32_t get_offset_of_frame_4() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___frame_4)); }
	inline float get_frame_4() const { return ___frame_4; }
	inline float* get_address_of_frame_4() { return &___frame_4; }
	inline void set_frame_4(float value)
	{
		___frame_4 = value;
	}

	inline static int32_t get_offset_of_pdt_5() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___pdt_5)); }
	inline float get_pdt_5() const { return ___pdt_5; }
	inline float* get_address_of_pdt_5() { return &___pdt_5; }
	inline void set_pdt_5(float value)
	{
		___pdt_5 = value;
	}

	inline static int32_t get_offset_of_dt_6() { return static_cast<int32_t>(offsetof(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304, ___dt_6)); }
	inline float get_dt_6() const { return ___dt_6; }
	inline float* get_address_of_dt_6() { return &___dt_6; }
	inline void set_dt_6(float value)
	{
		___dt_6 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset/TransientBuildData::trackList
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/TransientBuildData::clipList
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset/TransientBuildData::markerList
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___trackList_0)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___clipList_1)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___markerList_2)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t6AC8C31BC7161427E9FCC65350B7AB6350B79BFB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t6AC8C31BC7161427E9FCC65350B7AB6350B79BFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Timeline.ClipCaps
struct ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType
struct ConnectorFollowType_t0A17C26C19B376878DB01D45EC6A647E681378CC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorFollowType_t0A17C26C19B376878DB01D45EC6A647E681378CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType
struct ConnectorOrientType_tF616FFB28AB719E4E5F26A270A67881A746A9EFB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorOrientType_tF616FFB28AB719E4E5F26A270A67881A746A9EFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection
struct ConnectorPivotDirection_t11ECB7A7D2F1E2CD4FF813FFD6BD9FB0C450C525 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorPivotDirection_t11ECB7A7D2F1E2CD4FF813FFD6BD9FB0C450C525, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode
struct ConnectorPivotMode_t4991D6AAE482AEE5C1FE3A3BB7268A28F34161FD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorPivotMode_t4991D6AAE482AEE5C1FE3A3BB7268A28F34161FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FilterMode
struct FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FontStyle
struct FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.Rendering.IndexFormat
struct IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20 
{
public:
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// unity4dv.OUT_RANGE_MODE
struct OUT_RANGE_MODE_t5A9F822EBEB35605CF6F88B61CEE27CA2E3EE7DF 
{
public:
	// System.Int32 unity4dv.OUT_RANGE_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OUT_RANGE_MODE_t5A9F822EBEB35605CF6F88B61CEE27CA2E3EE7DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.RigidbodyConstraints
struct RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// unity4dv.SOURCE_TYPE
struct SOURCE_TYPE_tF44A87BE896B428E01249A1DE514FD6832CED165 
{
public:
	// System.Int32 unity4dv.SOURCE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SOURCE_TYPE_tF44A87BE896B428E01249A1DE514FD6832CED165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureWrapMode
struct TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.FrameData/Flags
struct Flags_t64F4A80C88F9E613B720DA0195BAB2B34C5307D5 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t64F4A80C88F9E613B720DA0195BAB2B34C5307D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType
struct AppearType_t7092870AAB02E5E7BEB00AF8D8BB2802514DF903 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppearType_t7092870AAB02E5E7BEB00AF8D8BB2802514DF903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType
struct RemainType_tFA7EC16221D170BCDE6A2FCEDF2D3FA3CFDF387E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemainType_tFA7EC16221D170BCDE6A2FCEDF2D3FA3CFDF387E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType
struct VanishType_t73596EEDD832F9F15CFA8C2F50E1BC6B4AE43132 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VanishType_t73596EEDD832F9F15CFA8C2F50E1BC6B4AE43132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectTransform/Axis
struct Axis_t8881AF0DB9EDF3F36FE049AA194D0206695EBF83 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t8881AF0DB9EDF3F36FE049AA194D0206695EBF83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/BlendCurveMode
struct BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/ClipExtrapolation
struct ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode
struct SettingsMode_t3522E6AC4DE56BC71F3FE58A8EF0FA6604D65775 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SettingsMode_t3522E6AC4DE56BC71F3FE58A8EF0FA6604D65775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<TimelineBehaviour4DS>
struct ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// unity4dv.DataSource4DS
struct DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42  : public RuntimeObject
{
public:
	// System.Int32 unity4dv.DataSource4DS::FDVUUID
	int32_t ___FDVUUID_0;
	// UnityEngine.TextureFormat unity4dv.DataSource4DS::TextureFormat
	int32_t ___TextureFormat_1;
	// System.Int32 unity4dv.DataSource4DS::TextureSize
	int32_t ___TextureSize_2;
	// System.Boolean unity4dv.DataSource4DS::ColorPerVertex
	bool ___ColorPerVertex_3;
	// System.Int32 unity4dv.DataSource4DS::MaxVertices
	int32_t ___MaxVertices_4;
	// System.Int32 unity4dv.DataSource4DS::MaxTriangles
	int32_t ___MaxTriangles_5;
	// System.Single unity4dv.DataSource4DS::FrameRate
	float ___FrameRate_6;

public:
	inline static int32_t get_offset_of_FDVUUID_0() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___FDVUUID_0)); }
	inline int32_t get_FDVUUID_0() const { return ___FDVUUID_0; }
	inline int32_t* get_address_of_FDVUUID_0() { return &___FDVUUID_0; }
	inline void set_FDVUUID_0(int32_t value)
	{
		___FDVUUID_0 = value;
	}

	inline static int32_t get_offset_of_TextureFormat_1() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___TextureFormat_1)); }
	inline int32_t get_TextureFormat_1() const { return ___TextureFormat_1; }
	inline int32_t* get_address_of_TextureFormat_1() { return &___TextureFormat_1; }
	inline void set_TextureFormat_1(int32_t value)
	{
		___TextureFormat_1 = value;
	}

	inline static int32_t get_offset_of_TextureSize_2() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___TextureSize_2)); }
	inline int32_t get_TextureSize_2() const { return ___TextureSize_2; }
	inline int32_t* get_address_of_TextureSize_2() { return &___TextureSize_2; }
	inline void set_TextureSize_2(int32_t value)
	{
		___TextureSize_2 = value;
	}

	inline static int32_t get_offset_of_ColorPerVertex_3() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___ColorPerVertex_3)); }
	inline bool get_ColorPerVertex_3() const { return ___ColorPerVertex_3; }
	inline bool* get_address_of_ColorPerVertex_3() { return &___ColorPerVertex_3; }
	inline void set_ColorPerVertex_3(bool value)
	{
		___ColorPerVertex_3 = value;
	}

	inline static int32_t get_offset_of_MaxVertices_4() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___MaxVertices_4)); }
	inline int32_t get_MaxVertices_4() const { return ___MaxVertices_4; }
	inline int32_t* get_address_of_MaxVertices_4() { return &___MaxVertices_4; }
	inline void set_MaxVertices_4(int32_t value)
	{
		___MaxVertices_4 = value;
	}

	inline static int32_t get_offset_of_MaxTriangles_5() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___MaxTriangles_5)); }
	inline int32_t get_MaxTriangles_5() const { return ___MaxTriangles_5; }
	inline int32_t* get_address_of_MaxTriangles_5() { return &___MaxTriangles_5; }
	inline void set_MaxTriangles_5(int32_t value)
	{
		___MaxTriangles_5 = value;
	}

	inline static int32_t get_offset_of_FrameRate_6() { return static_cast<int32_t>(offsetof(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42, ___FrameRate_6)); }
	inline float get_FrameRate_6() const { return ___FrameRate_6; }
	inline float* get_address_of_FrameRate_6() { return &___FrameRate_6; }
	inline void set_FrameRate_6(float value)
	{
		___FrameRate_6 = value;
	}
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Playables.Playable
struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Asset_11)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ParentTrack_14)); }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixInCurve_19)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixOutCurve_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ExposedParameterNames_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_AnimationCurves_24)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}
};

struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Playables.FrameData
struct FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___m_Output_8;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentDelay_4() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_EffectiveParentDelay_4)); }
	inline double get_m_EffectiveParentDelay_4() const { return ___m_EffectiveParentDelay_4; }
	inline double* get_address_of_m_EffectiveParentDelay_4() { return &___m_EffectiveParentDelay_4; }
	inline void set_m_EffectiveParentDelay_4(double value)
	{
		___m_EffectiveParentDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentSpeed_5() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_EffectiveParentSpeed_5)); }
	inline float get_m_EffectiveParentSpeed_5() const { return ___m_EffectiveParentSpeed_5; }
	inline float* get_address_of_m_EffectiveParentSpeed_5() { return &___m_EffectiveParentSpeed_5; }
	inline void set_m_EffectiveParentSpeed_5(float value)
	{
		___m_EffectiveParentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_6() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_EffectiveSpeed_6)); }
	inline float get_m_EffectiveSpeed_6() const { return ___m_EffectiveSpeed_6; }
	inline float* get_address_of_m_EffectiveSpeed_6() { return &___m_EffectiveSpeed_6; }
	inline void set_m_EffectiveSpeed_6(float value)
	{
		___m_EffectiveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_Output_8() { return static_cast<int32_t>(offsetof(FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B, ___m_Output_8)); }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  get_m_Output_8() const { return ___m_Output_8; }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * get_address_of_m_Output_8() { return &___m_Output_8; }
	inline void set_m_Output_8(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  value)
	{
		___m_Output_8 = value;
	}
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856  : public MulticastDelegate_t
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155  : public MulticastDelegate_t
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87  : public MulticastDelegate_t
{
public:

public:
};


// unity4dv.Plugin4DS/EventFDV
struct EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Playable4DS
struct Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Double Playable4DS::clipstarttime
	double ___clipstarttime_4;
	// System.Double Playable4DS::clipendtime
	double ___clipendtime_5;
	// TimelineBehaviour4DS Playable4DS::sequence4DS
	TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * ___sequence4DS_6;

public:
	inline static int32_t get_offset_of_clipstarttime_4() { return static_cast<int32_t>(offsetof(Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9, ___clipstarttime_4)); }
	inline double get_clipstarttime_4() const { return ___clipstarttime_4; }
	inline double* get_address_of_clipstarttime_4() { return &___clipstarttime_4; }
	inline void set_clipstarttime_4(double value)
	{
		___clipstarttime_4 = value;
	}

	inline static int32_t get_offset_of_clipendtime_5() { return static_cast<int32_t>(offsetof(Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9, ___clipendtime_5)); }
	inline double get_clipendtime_5() const { return ___clipendtime_5; }
	inline double* get_address_of_clipendtime_5() { return &___clipendtime_5; }
	inline void set_clipendtime_5(double value)
	{
		___clipendtime_5 = value;
	}

	inline static int32_t get_offset_of_sequence4DS_6() { return static_cast<int32_t>(offsetof(Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9, ___sequence4DS_6)); }
	inline TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * get_sequence4DS_6() const { return ___sequence4DS_6; }
	inline TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 ** get_address_of_sequence4DS_6() { return &___sequence4DS_6; }
	inline void set_sequence4DS_6(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * value)
	{
		___sequence4DS_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequence4DS_6), (void*)value);
	}
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_AnimClip_6)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Curves_14)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Parent_15)); }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Children_16)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Start_19)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_End_20)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Clips_26)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Markers_27)); }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler
struct BaseFocusHandler_t0086FA041EB9E41385B8A4BF2DEDF0E62CF7FBC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::focusEnabled
	bool ___focusEnabled_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::<Focusers>k__BackingField
	List_1_t0B318FD1E679075100AD98005E79F32F387FAED8 * ___U3CFocusersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_focusEnabled_4() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t0086FA041EB9E41385B8A4BF2DEDF0E62CF7FBC4, ___focusEnabled_4)); }
	inline bool get_focusEnabled_4() const { return ___focusEnabled_4; }
	inline bool* get_address_of_focusEnabled_4() { return &___focusEnabled_4; }
	inline void set_focusEnabled_4(bool value)
	{
		___focusEnabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CFocusersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t0086FA041EB9E41385B8A4BF2DEDF0E62CF7FBC4, ___U3CFocusersU3Ek__BackingField_5)); }
	inline List_1_t0B318FD1E679075100AD98005E79F32F387FAED8 * get_U3CFocusersU3Ek__BackingField_5() const { return ___U3CFocusersU3Ek__BackingField_5; }
	inline List_1_t0B318FD1E679075100AD98005E79F32F387FAED8 ** get_address_of_U3CFocusersU3Ek__BackingField_5() { return &___U3CFocusersU3Ek__BackingField_5; }
	inline void set_U3CFocusersU3Ek__BackingField_5(List_1_t0B318FD1E679075100AD98005E79F32F387FAED8 * value)
	{
		___U3CFocusersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusersU3Ek__BackingField_5), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.DirectionalIndicatorController
struct DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.ExplodeViewController
struct ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MRTK.Tutorials.GettingStarted.ExplodeViewController::speed
	float ___speed_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MRTK.Tutorials.GettingStarted.ExplodeViewController::defaultPositions
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___defaultPositions_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MRTK.Tutorials.GettingStarted.ExplodeViewController::explodedPositions
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___explodedPositions_6;
	// System.Boolean MRTK.Tutorials.GettingStarted.ExplodeViewController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MRTK.Tutorials.GettingStarted.ExplodeViewController::explodedPos
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___explodedPos_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MRTK.Tutorials.GettingStarted.ExplodeViewController::startingPos
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___startingPos_9;
	// System.Boolean MRTK.Tutorials.GettingStarted.ExplodeViewController::isInDefaultPosition
	bool ___isInDefaultPosition_10;
	// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate MRTK.Tutorials.GettingStarted.ExplodeViewController::OnToggleExplodedView
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * ___OnToggleExplodedView_11;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_defaultPositions_5() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___defaultPositions_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_defaultPositions_5() const { return ___defaultPositions_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_defaultPositions_5() { return &___defaultPositions_5; }
	inline void set_defaultPositions_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___defaultPositions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultPositions_5), (void*)value);
	}

	inline static int32_t get_offset_of_explodedPositions_6() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___explodedPositions_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_explodedPositions_6() const { return ___explodedPositions_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_explodedPositions_6() { return &___explodedPositions_6; }
	inline void set_explodedPositions_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___explodedPositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explodedPositions_6), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_7() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___isPunEnabled_7)); }
	inline bool get_isPunEnabled_7() const { return ___isPunEnabled_7; }
	inline bool* get_address_of_isPunEnabled_7() { return &___isPunEnabled_7; }
	inline void set_isPunEnabled_7(bool value)
	{
		___isPunEnabled_7 = value;
	}

	inline static int32_t get_offset_of_explodedPos_8() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___explodedPos_8)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_explodedPos_8() const { return ___explodedPos_8; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_explodedPos_8() { return &___explodedPos_8; }
	inline void set_explodedPos_8(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___explodedPos_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explodedPos_8), (void*)value);
	}

	inline static int32_t get_offset_of_startingPos_9() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___startingPos_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_startingPos_9() const { return ___startingPos_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_startingPos_9() { return &___startingPos_9; }
	inline void set_startingPos_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___startingPos_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startingPos_9), (void*)value);
	}

	inline static int32_t get_offset_of_isInDefaultPosition_10() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___isInDefaultPosition_10)); }
	inline bool get_isInDefaultPosition_10() const { return ___isInDefaultPosition_10; }
	inline bool* get_address_of_isInDefaultPosition_10() { return &___isInDefaultPosition_10; }
	inline void set_isInDefaultPosition_10(bool value)
	{
		___isInDefaultPosition_10 = value;
	}

	inline static int32_t get_offset_of_OnToggleExplodedView_11() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___OnToggleExplodedView_11)); }
	inline ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * get_OnToggleExplodedView_11() const { return ___OnToggleExplodedView_11; }
	inline ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 ** get_address_of_OnToggleExplodedView_11() { return &___OnToggleExplodedView_11; }
	inline void set_OnToggleExplodedView_11(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * value)
	{
		___OnToggleExplodedView_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnToggleExplodedView_11), (void*)value);
	}
};


// FlyCamera
struct FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single FlyCamera::mainSpeed
	float ___mainSpeed_4;
	// System.Single FlyCamera::shiftAdd
	float ___shiftAdd_5;
	// System.Single FlyCamera::maxShift
	float ___maxShift_6;
	// System.Single FlyCamera::camSens
	float ___camSens_7;
	// UnityEngine.Vector3 FlyCamera::lastMouse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastMouse_8;
	// System.Single FlyCamera::totalRun
	float ___totalRun_9;

public:
	inline static int32_t get_offset_of_mainSpeed_4() { return static_cast<int32_t>(offsetof(FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034, ___mainSpeed_4)); }
	inline float get_mainSpeed_4() const { return ___mainSpeed_4; }
	inline float* get_address_of_mainSpeed_4() { return &___mainSpeed_4; }
	inline void set_mainSpeed_4(float value)
	{
		___mainSpeed_4 = value;
	}

	inline static int32_t get_offset_of_shiftAdd_5() { return static_cast<int32_t>(offsetof(FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034, ___shiftAdd_5)); }
	inline float get_shiftAdd_5() const { return ___shiftAdd_5; }
	inline float* get_address_of_shiftAdd_5() { return &___shiftAdd_5; }
	inline void set_shiftAdd_5(float value)
	{
		___shiftAdd_5 = value;
	}

	inline static int32_t get_offset_of_maxShift_6() { return static_cast<int32_t>(offsetof(FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034, ___maxShift_6)); }
	inline float get_maxShift_6() const { return ___maxShift_6; }
	inline float* get_address_of_maxShift_6() { return &___maxShift_6; }
	inline void set_maxShift_6(float value)
	{
		___maxShift_6 = value;
	}

	inline static int32_t get_offset_of_camSens_7() { return static_cast<int32_t>(offsetof(FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034, ___camSens_7)); }
	inline float get_camSens_7() const { return ___camSens_7; }
	inline float* get_address_of_camSens_7() { return &___camSens_7; }
	inline void set_camSens_7(float value)
	{
		___camSens_7 = value;
	}

	inline static int32_t get_offset_of_lastMouse_8() { return static_cast<int32_t>(offsetof(FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034, ___lastMouse_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastMouse_8() const { return ___lastMouse_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastMouse_8() { return &___lastMouse_8; }
	inline void set_lastMouse_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastMouse_8 = value;
	}

	inline static int32_t get_offset_of_totalRun_9() { return static_cast<int32_t>(offsetof(FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034, ___totalRun_9)); }
	inline float get_totalRun_9() const { return ___totalRun_9; }
	inline float* get_address_of_totalRun_9() { return &___totalRun_9; }
	inline void set_totalRun_9(float value)
	{
		___totalRun_9 = value;
	}
};


// GetObject
struct GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GetObject::ObjectSet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ObjectSet_4;
	// UnityEngine.GameObject GetObject::lens
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lens_5;
	// UnityEngine.GameObject GetObject::Table
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Table_6;
	// UnityEngine.GameObject GetObject::SettingTable
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SettingTable_7;
	// UnityEngine.Rigidbody GetObject::Table_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___Table_Rigidbody_8;

public:
	inline static int32_t get_offset_of_ObjectSet_4() { return static_cast<int32_t>(offsetof(GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65, ___ObjectSet_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ObjectSet_4() const { return ___ObjectSet_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ObjectSet_4() { return &___ObjectSet_4; }
	inline void set_ObjectSet_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ObjectSet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectSet_4), (void*)value);
	}

	inline static int32_t get_offset_of_lens_5() { return static_cast<int32_t>(offsetof(GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65, ___lens_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lens_5() const { return ___lens_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lens_5() { return &___lens_5; }
	inline void set_lens_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lens_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lens_5), (void*)value);
	}

	inline static int32_t get_offset_of_Table_6() { return static_cast<int32_t>(offsetof(GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65, ___Table_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Table_6() const { return ___Table_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Table_6() { return &___Table_6; }
	inline void set_Table_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Table_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_6), (void*)value);
	}

	inline static int32_t get_offset_of_SettingTable_7() { return static_cast<int32_t>(offsetof(GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65, ___SettingTable_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SettingTable_7() const { return ___SettingTable_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SettingTable_7() { return &___SettingTable_7; }
	inline void set_SettingTable_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SettingTable_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingTable_7), (void*)value);
	}

	inline static int32_t get_offset_of_Table_Rigidbody_8() { return static_cast<int32_t>(offsetof(GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65, ___Table_Rigidbody_8)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_Table_Rigidbody_8() const { return ___Table_Rigidbody_8; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_Table_Rigidbody_8() { return &___Table_Rigidbody_8; }
	inline void set_Table_Rigidbody_8(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___Table_Rigidbody_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_Rigidbody_8), (void*)value);
	}
};


// LoadingBar4DS
struct LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// unity4dv.Plugin4DS LoadingBar4DS::_plugin4DS
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * ____plugin4DS_4;
	// UnityEngine.RectTransform LoadingBar4DS::_currentFrame
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____currentFrame_5;
	// UnityEngine.RectTransform LoadingBar4DS::_meshBuffer
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____meshBuffer_6;
	// UnityEngine.RectTransform LoadingBar4DS::_chunkBuffer
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____chunkBuffer_7;
	// System.Single LoadingBar4DS::_unit
	float ____unit_8;
	// UnityEngine.RectTransform LoadingBar4DS::mbDuplicate
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___mbDuplicate_9;
	// UnityEngine.RectTransform LoadingBar4DS::cbDuplicate
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___cbDuplicate_10;
	// UnityEngine.RectTransform LoadingBar4DS::background
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___background_11;

public:
	inline static int32_t get_offset_of__plugin4DS_4() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ____plugin4DS_4)); }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * get__plugin4DS_4() const { return ____plugin4DS_4; }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 ** get_address_of__plugin4DS_4() { return &____plugin4DS_4; }
	inline void set__plugin4DS_4(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * value)
	{
		____plugin4DS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____plugin4DS_4), (void*)value);
	}

	inline static int32_t get_offset_of__currentFrame_5() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ____currentFrame_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__currentFrame_5() const { return ____currentFrame_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__currentFrame_5() { return &____currentFrame_5; }
	inline void set__currentFrame_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____currentFrame_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentFrame_5), (void*)value);
	}

	inline static int32_t get_offset_of__meshBuffer_6() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ____meshBuffer_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__meshBuffer_6() const { return ____meshBuffer_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__meshBuffer_6() { return &____meshBuffer_6; }
	inline void set__meshBuffer_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____meshBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__chunkBuffer_7() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ____chunkBuffer_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__chunkBuffer_7() const { return ____chunkBuffer_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__chunkBuffer_7() { return &____chunkBuffer_7; }
	inline void set__chunkBuffer_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____chunkBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chunkBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__unit_8() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ____unit_8)); }
	inline float get__unit_8() const { return ____unit_8; }
	inline float* get_address_of__unit_8() { return &____unit_8; }
	inline void set__unit_8(float value)
	{
		____unit_8 = value;
	}

	inline static int32_t get_offset_of_mbDuplicate_9() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ___mbDuplicate_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_mbDuplicate_9() const { return ___mbDuplicate_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_mbDuplicate_9() { return &___mbDuplicate_9; }
	inline void set_mbDuplicate_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___mbDuplicate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mbDuplicate_9), (void*)value);
	}

	inline static int32_t get_offset_of_cbDuplicate_10() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ___cbDuplicate_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_cbDuplicate_10() const { return ___cbDuplicate_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_cbDuplicate_10() { return &___cbDuplicate_10; }
	inline void set_cbDuplicate_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___cbDuplicate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cbDuplicate_10), (void*)value);
	}

	inline static int32_t get_offset_of_background_11() { return static_cast<int32_t>(offsetof(LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D, ___background_11)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_background_11() const { return ___background_11; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_background_11() { return &___background_11; }
	inline void set_background_11(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___background_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_11), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::locationToPlace
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___locationToPlace_4;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::shouldCheckPlacement
	bool ___shouldCheckPlacement_8;
	// UnityEngine.AudioSource MRTK.Tutorials.GettingStarted.PartAssemblyController::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_9;
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner MRTK.Tutorials.GettingStarted.PartAssemblyController::toolTipSpawner
	ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * ___toolTipSpawner_10;
	// System.Collections.Generic.List`1<UnityEngine.Collider> MRTK.Tutorials.GettingStarted.PartAssemblyController::colliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___colliders_11;
	// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController> MRTK.Tutorials.GettingStarted.PartAssemblyController::partAssemblyControllers
	List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * ___partAssemblyControllers_12;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::originalParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___originalParent_13;
	// UnityEngine.Vector3 MRTK.Tutorials.GettingStarted.PartAssemblyController::originalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalPosition_14;
	// UnityEngine.Quaternion MRTK.Tutorials.GettingStarted.PartAssemblyController::originalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___originalRotation_15;
	// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::checkPlacementCoroutine
	RuntimeObject* ___checkPlacementCoroutine_16;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasAudioSource
	bool ___hasAudioSource_17;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasToolTip
	bool ___hasToolTip_18;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPlaced
	bool ___isPlaced_19;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isResetting
	bool ___isResetting_20;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnResetPlacement
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___OnResetPlacement_21;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnSetPlacement
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___OnSetPlacement_22;

public:
	inline static int32_t get_offset_of_locationToPlace_4() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___locationToPlace_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_locationToPlace_4() const { return ___locationToPlace_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_locationToPlace_4() { return &___locationToPlace_4; }
	inline void set_locationToPlace_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___locationToPlace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locationToPlace_4), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_7() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isPunEnabled_7)); }
	inline bool get_isPunEnabled_7() const { return ___isPunEnabled_7; }
	inline bool* get_address_of_isPunEnabled_7() { return &___isPunEnabled_7; }
	inline void set_isPunEnabled_7(bool value)
	{
		___isPunEnabled_7 = value;
	}

	inline static int32_t get_offset_of_shouldCheckPlacement_8() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___shouldCheckPlacement_8)); }
	inline bool get_shouldCheckPlacement_8() const { return ___shouldCheckPlacement_8; }
	inline bool* get_address_of_shouldCheckPlacement_8() { return &___shouldCheckPlacement_8; }
	inline void set_shouldCheckPlacement_8(bool value)
	{
		___shouldCheckPlacement_8 = value;
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___audioSource_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_toolTipSpawner_10() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___toolTipSpawner_10)); }
	inline ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * get_toolTipSpawner_10() const { return ___toolTipSpawner_10; }
	inline ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 ** get_address_of_toolTipSpawner_10() { return &___toolTipSpawner_10; }
	inline void set_toolTipSpawner_10(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * value)
	{
		___toolTipSpawner_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolTipSpawner_10), (void*)value);
	}

	inline static int32_t get_offset_of_colliders_11() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___colliders_11)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_colliders_11() const { return ___colliders_11; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_colliders_11() { return &___colliders_11; }
	inline void set_colliders_11(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___colliders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_11), (void*)value);
	}

	inline static int32_t get_offset_of_partAssemblyControllers_12() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___partAssemblyControllers_12)); }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * get_partAssemblyControllers_12() const { return ___partAssemblyControllers_12; }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 ** get_address_of_partAssemblyControllers_12() { return &___partAssemblyControllers_12; }
	inline void set_partAssemblyControllers_12(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * value)
	{
		___partAssemblyControllers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___partAssemblyControllers_12), (void*)value);
	}

	inline static int32_t get_offset_of_originalParent_13() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalParent_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_originalParent_13() const { return ___originalParent_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_originalParent_13() { return &___originalParent_13; }
	inline void set_originalParent_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___originalParent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalParent_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalPosition_14() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalPosition_14() const { return ___originalPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalPosition_14() { return &___originalPosition_14; }
	inline void set_originalPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalPosition_14 = value;
	}

	inline static int32_t get_offset_of_originalRotation_15() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_originalRotation_15() const { return ___originalRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_originalRotation_15() { return &___originalRotation_15; }
	inline void set_originalRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___originalRotation_15 = value;
	}

	inline static int32_t get_offset_of_checkPlacementCoroutine_16() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___checkPlacementCoroutine_16)); }
	inline RuntimeObject* get_checkPlacementCoroutine_16() const { return ___checkPlacementCoroutine_16; }
	inline RuntimeObject** get_address_of_checkPlacementCoroutine_16() { return &___checkPlacementCoroutine_16; }
	inline void set_checkPlacementCoroutine_16(RuntimeObject* value)
	{
		___checkPlacementCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkPlacementCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_hasAudioSource_17() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___hasAudioSource_17)); }
	inline bool get_hasAudioSource_17() const { return ___hasAudioSource_17; }
	inline bool* get_address_of_hasAudioSource_17() { return &___hasAudioSource_17; }
	inline void set_hasAudioSource_17(bool value)
	{
		___hasAudioSource_17 = value;
	}

	inline static int32_t get_offset_of_hasToolTip_18() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___hasToolTip_18)); }
	inline bool get_hasToolTip_18() const { return ___hasToolTip_18; }
	inline bool* get_address_of_hasToolTip_18() { return &___hasToolTip_18; }
	inline void set_hasToolTip_18(bool value)
	{
		___hasToolTip_18 = value;
	}

	inline static int32_t get_offset_of_isPlaced_19() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isPlaced_19)); }
	inline bool get_isPlaced_19() const { return ___isPlaced_19; }
	inline bool* get_address_of_isPlaced_19() { return &___isPlaced_19; }
	inline void set_isPlaced_19(bool value)
	{
		___isPlaced_19 = value;
	}

	inline static int32_t get_offset_of_isResetting_20() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isResetting_20)); }
	inline bool get_isResetting_20() const { return ___isResetting_20; }
	inline bool* get_address_of_isResetting_20() { return &___isResetting_20; }
	inline void set_isResetting_20(bool value)
	{
		___isResetting_20 = value;
	}

	inline static int32_t get_offset_of_OnResetPlacement_21() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___OnResetPlacement_21)); }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * get_OnResetPlacement_21() const { return ___OnResetPlacement_21; }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** get_address_of_OnResetPlacement_21() { return &___OnResetPlacement_21; }
	inline void set_OnResetPlacement_21(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * value)
	{
		___OnResetPlacement_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResetPlacement_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnSetPlacement_22() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___OnSetPlacement_22)); }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * get_OnSetPlacement_22() const { return ___OnSetPlacement_22; }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** get_address_of_OnSetPlacement_22() { return &___OnSetPlacement_22; }
	inline void set_OnSetPlacement_22(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * value)
	{
		___OnSetPlacement_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSetPlacement_22), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.PlacementHintsController
struct PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean MRTK.Tutorials.GettingStarted.PlacementHintsController::activeAtStart
	bool ___activeAtStart_4;
	// UnityEngine.GameObject[] MRTK.Tutorials.GettingStarted.PlacementHintsController::placementHints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___placementHints_5;
	// System.Boolean MRTK.Tutorials.GettingStarted.PlacementHintsController::isPunEnabled
	bool ___isPunEnabled_6;
	// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate MRTK.Tutorials.GettingStarted.PlacementHintsController::OnTogglePlacementHints
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * ___OnTogglePlacementHints_7;

public:
	inline static int32_t get_offset_of_activeAtStart_4() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___activeAtStart_4)); }
	inline bool get_activeAtStart_4() const { return ___activeAtStart_4; }
	inline bool* get_address_of_activeAtStart_4() { return &___activeAtStart_4; }
	inline void set_activeAtStart_4(bool value)
	{
		___activeAtStart_4 = value;
	}

	inline static int32_t get_offset_of_placementHints_5() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___placementHints_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_placementHints_5() const { return ___placementHints_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_placementHints_5() { return &___placementHints_5; }
	inline void set_placementHints_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___placementHints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementHints_5), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_6() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___isPunEnabled_6)); }
	inline bool get_isPunEnabled_6() const { return ___isPunEnabled_6; }
	inline bool* get_address_of_isPunEnabled_6() { return &___isPunEnabled_6; }
	inline void set_isPunEnabled_6(bool value)
	{
		___isPunEnabled_6 = value;
	}

	inline static int32_t get_offset_of_OnTogglePlacementHints_7() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___OnTogglePlacementHints_7)); }
	inline PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * get_OnTogglePlacementHints_7() const { return ___OnTogglePlacementHints_7; }
	inline PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 ** get_address_of_OnTogglePlacementHints_7() { return &___OnTogglePlacementHints_7; }
	inline void set_OnTogglePlacementHints_7(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * value)
	{
		___OnTogglePlacementHints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTogglePlacementHints_7), (void*)value);
	}
};


// unity4dv.Plugin4DS
struct Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// unity4dv.Plugin4DS/EventFDV unity4dv.Plugin4DS::OnNewModel
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___OnNewModel_4;
	// unity4dv.Plugin4DS/EventFDV unity4dv.Plugin4DS::OnModelNotFound
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___OnModelNotFound_5;
	// unity4dv.Plugin4DS/EventFDV unity4dv.Plugin4DS::OnLastFrame
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___OnLastFrame_6;
	// System.String unity4dv.Plugin4DS::_sequenceName
	String_t* ____sequenceName_7;
	// unity4dv.SOURCE_TYPE unity4dv.Plugin4DS::_sourceType
	int32_t ____sourceType_8;
	// System.String unity4dv.Plugin4DS::_mainDataPath
	String_t* ____mainDataPath_9;
	// System.Boolean unity4dv.Plugin4DS::_dataInStreamingAssets
	bool ____dataInStreamingAssets_10;
	// System.Int32 unity4dv.Plugin4DS::_meshBufferMaxSize
	int32_t ____meshBufferMaxSize_11;
	// System.Int32 unity4dv.Plugin4DS::_chunkBufferMaxSize
	int32_t ____chunkBufferMaxSize_12;
	// System.Int32 unity4dv.Plugin4DS::_HTTPDownloadSize
	int32_t ____HTTPDownloadSize_13;
	// System.Boolean unity4dv.Plugin4DS::_HTTPKeepInCache
	bool ____HTTPKeepInCache_14;
	// System.Boolean unity4dv.Plugin4DS::_autoPlay
	bool ____autoPlay_16;
	// unity4dv.OUT_RANGE_MODE unity4dv.Plugin4DS::_outRangeMode
	int32_t ____outRangeMode_17;
	// System.Boolean unity4dv.Plugin4DS::_loop
	bool ____loop_18;
	// System.Boolean unity4dv.Plugin4DS::playAudio
	bool ___playAudio_19;
	// System.Single unity4dv.Plugin4DS::_activeRangeMin
	float ____activeRangeMin_20;
	// System.Single unity4dv.Plugin4DS::_activeRangeMax
	float ____activeRangeMax_21;
	// System.Boolean unity4dv.Plugin4DS::_debugInfo
	bool ____debugInfo_22;
	// System.Single unity4dv.Plugin4DS::_decodingFPS
	float ____decodingFPS_23;
	// System.Int32 unity4dv.Plugin4DS::_lastDecodingId
	int32_t ____lastDecodingId_24;
	// System.DateTime unity4dv.Plugin4DS::_lastDecodingTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____lastDecodingTime_25;
	// System.Single unity4dv.Plugin4DS::_updatingFPS
	float ____updatingFPS_26;
	// System.Int32 unity4dv.Plugin4DS::_lastUpdatingId
	int32_t ____lastUpdatingId_27;
	// System.DateTime unity4dv.Plugin4DS::_lastUpdatingTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____lastUpdatingTime_28;
	// System.Int32 unity4dv.Plugin4DS::_totalFramesPlayed
	int32_t ____totalFramesPlayed_29;
	// System.DateTime unity4dv.Plugin4DS::_playDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____playDate_30;
	// System.Int32 unity4dv.Plugin4DS::prevFrame
	int32_t ___prevFrame_31;
	// unity4dv.DataSource4DS unity4dv.Plugin4DS::_dataSource
	DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * ____dataSource_32;
	// System.Int32 unity4dv.Plugin4DS::_lastModelId
	int32_t ____lastModelId_33;
	// UnityEngine.Mesh[] unity4dv.Plugin4DS::_meshes
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ____meshes_34;
	// UnityEngine.Texture2D[] unity4dv.Plugin4DS::_textures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ____textures_35;
	// UnityEngine.MeshFilter unity4dv.Plugin4DS::_meshComponent
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ____meshComponent_36;
	// UnityEngine.Renderer unity4dv.Plugin4DS::_rendererComponent
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ____rendererComponent_37;
	// UnityEngine.Vector3[] unity4dv.Plugin4DS::_newVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____newVertices_38;
	// UnityEngine.Vector2[] unity4dv.Plugin4DS::_newUVs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____newUVs_39;
	// System.Int32[] unity4dv.Plugin4DS::_newTriangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____newTriangles_40;
	// System.Byte[] unity4dv.Plugin4DS::_newTextureData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____newTextureData_41;
	// UnityEngine.Vector3[] unity4dv.Plugin4DS::_newNormals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____newNormals_42;
	// UnityEngine.Color32[] unity4dv.Plugin4DS::_newColors
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____newColors_43;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::_newVerticesHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____newVerticesHandle_44;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::_newUVsHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____newUVsHandle_45;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::_newTrianglesHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____newTrianglesHandle_46;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::_newTextureDataHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____newTextureDataHandle_47;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::_newNormalsHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____newNormalsHandle_48;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::_newColorsHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____newColorsHandle_49;
	// System.Single[] unity4dv.Plugin4DS::samples
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples_50;
	// System.Runtime.InteropServices.GCHandle unity4dv.Plugin4DS::audioBufferHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___audioBufferHandle_51;
	// System.Int32 unity4dv.Plugin4DS::_nbGeometryBuffers
	int32_t ____nbGeometryBuffers_52;
	// System.Int32 unity4dv.Plugin4DS::_currentGeometryBuffer
	int32_t ____currentGeometryBuffer_53;
	// System.Int32 unity4dv.Plugin4DS::_nbTextureBuffers
	int32_t ____nbTextureBuffers_54;
	// System.Int32 unity4dv.Plugin4DS::_currentTextureBuffer
	int32_t ____currentTextureBuffer_55;
	// System.Boolean unity4dv.Plugin4DS::_newMeshAvailable
	bool ____newMeshAvailable_56;
	// System.Boolean unity4dv.Plugin4DS::_isSequenceTriggerON
	bool ____isSequenceTriggerON_57;
	// System.Single unity4dv.Plugin4DS::_triggerRate
	float ____triggerRate_58;
	// UnityEngine.MeshCollider unity4dv.Plugin4DS::_meshCollider
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ____meshCollider_59;
	// System.Boolean unity4dv.Plugin4DS::_isInitialized
	bool ____isInitialized_60;
	// System.Boolean unity4dv.Plugin4DS::_isPlaying
	bool ____isPlaying_61;
	// System.Int32 unity4dv.Plugin4DS::_previewFrame
	int32_t ____previewFrame_62;
	// System.DateTime unity4dv.Plugin4DS::last_preview_time
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___last_preview_time_63;
	// System.Int32 unity4dv.Plugin4DS::_nbFrames
	int32_t ____nbFrames_64;
	// System.Single unity4dv.Plugin4DS::_speedRatio
	float ____speedRatio_65;
	// System.Int32 unity4dv.Plugin4DS::_nbVertices
	int32_t ____nbVertices_66;
	// System.Int32 unity4dv.Plugin4DS::_nbTriangles
	int32_t ____nbTriangles_67;
	// System.Boolean unity4dv.Plugin4DS::wasPlayingWhenFocusLost
	bool ___wasPlayingWhenFocusLost_69;
	// System.Single unity4dv.Plugin4DS::unityTimeScale
	float ___unityTimeScale_70;

public:
	inline static int32_t get_offset_of_OnNewModel_4() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___OnNewModel_4)); }
	inline EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * get_OnNewModel_4() const { return ___OnNewModel_4; }
	inline EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** get_address_of_OnNewModel_4() { return &___OnNewModel_4; }
	inline void set_OnNewModel_4(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * value)
	{
		___OnNewModel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNewModel_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnModelNotFound_5() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___OnModelNotFound_5)); }
	inline EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * get_OnModelNotFound_5() const { return ___OnModelNotFound_5; }
	inline EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** get_address_of_OnModelNotFound_5() { return &___OnModelNotFound_5; }
	inline void set_OnModelNotFound_5(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * value)
	{
		___OnModelNotFound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnModelNotFound_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnLastFrame_6() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___OnLastFrame_6)); }
	inline EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * get_OnLastFrame_6() const { return ___OnLastFrame_6; }
	inline EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** get_address_of_OnLastFrame_6() { return &___OnLastFrame_6; }
	inline void set_OnLastFrame_6(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * value)
	{
		___OnLastFrame_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLastFrame_6), (void*)value);
	}

	inline static int32_t get_offset_of__sequenceName_7() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____sequenceName_7)); }
	inline String_t* get__sequenceName_7() const { return ____sequenceName_7; }
	inline String_t** get_address_of__sequenceName_7() { return &____sequenceName_7; }
	inline void set__sequenceName_7(String_t* value)
	{
		____sequenceName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequenceName_7), (void*)value);
	}

	inline static int32_t get_offset_of__sourceType_8() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____sourceType_8)); }
	inline int32_t get__sourceType_8() const { return ____sourceType_8; }
	inline int32_t* get_address_of__sourceType_8() { return &____sourceType_8; }
	inline void set__sourceType_8(int32_t value)
	{
		____sourceType_8 = value;
	}

	inline static int32_t get_offset_of__mainDataPath_9() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____mainDataPath_9)); }
	inline String_t* get__mainDataPath_9() const { return ____mainDataPath_9; }
	inline String_t** get_address_of__mainDataPath_9() { return &____mainDataPath_9; }
	inline void set__mainDataPath_9(String_t* value)
	{
		____mainDataPath_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainDataPath_9), (void*)value);
	}

	inline static int32_t get_offset_of__dataInStreamingAssets_10() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____dataInStreamingAssets_10)); }
	inline bool get__dataInStreamingAssets_10() const { return ____dataInStreamingAssets_10; }
	inline bool* get_address_of__dataInStreamingAssets_10() { return &____dataInStreamingAssets_10; }
	inline void set__dataInStreamingAssets_10(bool value)
	{
		____dataInStreamingAssets_10 = value;
	}

	inline static int32_t get_offset_of__meshBufferMaxSize_11() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____meshBufferMaxSize_11)); }
	inline int32_t get__meshBufferMaxSize_11() const { return ____meshBufferMaxSize_11; }
	inline int32_t* get_address_of__meshBufferMaxSize_11() { return &____meshBufferMaxSize_11; }
	inline void set__meshBufferMaxSize_11(int32_t value)
	{
		____meshBufferMaxSize_11 = value;
	}

	inline static int32_t get_offset_of__chunkBufferMaxSize_12() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____chunkBufferMaxSize_12)); }
	inline int32_t get__chunkBufferMaxSize_12() const { return ____chunkBufferMaxSize_12; }
	inline int32_t* get_address_of__chunkBufferMaxSize_12() { return &____chunkBufferMaxSize_12; }
	inline void set__chunkBufferMaxSize_12(int32_t value)
	{
		____chunkBufferMaxSize_12 = value;
	}

	inline static int32_t get_offset_of__HTTPDownloadSize_13() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____HTTPDownloadSize_13)); }
	inline int32_t get__HTTPDownloadSize_13() const { return ____HTTPDownloadSize_13; }
	inline int32_t* get_address_of__HTTPDownloadSize_13() { return &____HTTPDownloadSize_13; }
	inline void set__HTTPDownloadSize_13(int32_t value)
	{
		____HTTPDownloadSize_13 = value;
	}

	inline static int32_t get_offset_of__HTTPKeepInCache_14() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____HTTPKeepInCache_14)); }
	inline bool get__HTTPKeepInCache_14() const { return ____HTTPKeepInCache_14; }
	inline bool* get_address_of__HTTPKeepInCache_14() { return &____HTTPKeepInCache_14; }
	inline void set__HTTPKeepInCache_14(bool value)
	{
		____HTTPKeepInCache_14 = value;
	}

	inline static int32_t get_offset_of__autoPlay_16() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____autoPlay_16)); }
	inline bool get__autoPlay_16() const { return ____autoPlay_16; }
	inline bool* get_address_of__autoPlay_16() { return &____autoPlay_16; }
	inline void set__autoPlay_16(bool value)
	{
		____autoPlay_16 = value;
	}

	inline static int32_t get_offset_of__outRangeMode_17() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____outRangeMode_17)); }
	inline int32_t get__outRangeMode_17() const { return ____outRangeMode_17; }
	inline int32_t* get_address_of__outRangeMode_17() { return &____outRangeMode_17; }
	inline void set__outRangeMode_17(int32_t value)
	{
		____outRangeMode_17 = value;
	}

	inline static int32_t get_offset_of__loop_18() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____loop_18)); }
	inline bool get__loop_18() const { return ____loop_18; }
	inline bool* get_address_of__loop_18() { return &____loop_18; }
	inline void set__loop_18(bool value)
	{
		____loop_18 = value;
	}

	inline static int32_t get_offset_of_playAudio_19() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___playAudio_19)); }
	inline bool get_playAudio_19() const { return ___playAudio_19; }
	inline bool* get_address_of_playAudio_19() { return &___playAudio_19; }
	inline void set_playAudio_19(bool value)
	{
		___playAudio_19 = value;
	}

	inline static int32_t get_offset_of__activeRangeMin_20() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____activeRangeMin_20)); }
	inline float get__activeRangeMin_20() const { return ____activeRangeMin_20; }
	inline float* get_address_of__activeRangeMin_20() { return &____activeRangeMin_20; }
	inline void set__activeRangeMin_20(float value)
	{
		____activeRangeMin_20 = value;
	}

	inline static int32_t get_offset_of__activeRangeMax_21() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____activeRangeMax_21)); }
	inline float get__activeRangeMax_21() const { return ____activeRangeMax_21; }
	inline float* get_address_of__activeRangeMax_21() { return &____activeRangeMax_21; }
	inline void set__activeRangeMax_21(float value)
	{
		____activeRangeMax_21 = value;
	}

	inline static int32_t get_offset_of__debugInfo_22() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____debugInfo_22)); }
	inline bool get__debugInfo_22() const { return ____debugInfo_22; }
	inline bool* get_address_of__debugInfo_22() { return &____debugInfo_22; }
	inline void set__debugInfo_22(bool value)
	{
		____debugInfo_22 = value;
	}

	inline static int32_t get_offset_of__decodingFPS_23() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____decodingFPS_23)); }
	inline float get__decodingFPS_23() const { return ____decodingFPS_23; }
	inline float* get_address_of__decodingFPS_23() { return &____decodingFPS_23; }
	inline void set__decodingFPS_23(float value)
	{
		____decodingFPS_23 = value;
	}

	inline static int32_t get_offset_of__lastDecodingId_24() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____lastDecodingId_24)); }
	inline int32_t get__lastDecodingId_24() const { return ____lastDecodingId_24; }
	inline int32_t* get_address_of__lastDecodingId_24() { return &____lastDecodingId_24; }
	inline void set__lastDecodingId_24(int32_t value)
	{
		____lastDecodingId_24 = value;
	}

	inline static int32_t get_offset_of__lastDecodingTime_25() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____lastDecodingTime_25)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__lastDecodingTime_25() const { return ____lastDecodingTime_25; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__lastDecodingTime_25() { return &____lastDecodingTime_25; }
	inline void set__lastDecodingTime_25(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____lastDecodingTime_25 = value;
	}

	inline static int32_t get_offset_of__updatingFPS_26() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____updatingFPS_26)); }
	inline float get__updatingFPS_26() const { return ____updatingFPS_26; }
	inline float* get_address_of__updatingFPS_26() { return &____updatingFPS_26; }
	inline void set__updatingFPS_26(float value)
	{
		____updatingFPS_26 = value;
	}

	inline static int32_t get_offset_of__lastUpdatingId_27() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____lastUpdatingId_27)); }
	inline int32_t get__lastUpdatingId_27() const { return ____lastUpdatingId_27; }
	inline int32_t* get_address_of__lastUpdatingId_27() { return &____lastUpdatingId_27; }
	inline void set__lastUpdatingId_27(int32_t value)
	{
		____lastUpdatingId_27 = value;
	}

	inline static int32_t get_offset_of__lastUpdatingTime_28() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____lastUpdatingTime_28)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__lastUpdatingTime_28() const { return ____lastUpdatingTime_28; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__lastUpdatingTime_28() { return &____lastUpdatingTime_28; }
	inline void set__lastUpdatingTime_28(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____lastUpdatingTime_28 = value;
	}

	inline static int32_t get_offset_of__totalFramesPlayed_29() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____totalFramesPlayed_29)); }
	inline int32_t get__totalFramesPlayed_29() const { return ____totalFramesPlayed_29; }
	inline int32_t* get_address_of__totalFramesPlayed_29() { return &____totalFramesPlayed_29; }
	inline void set__totalFramesPlayed_29(int32_t value)
	{
		____totalFramesPlayed_29 = value;
	}

	inline static int32_t get_offset_of__playDate_30() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____playDate_30)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__playDate_30() const { return ____playDate_30; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__playDate_30() { return &____playDate_30; }
	inline void set__playDate_30(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____playDate_30 = value;
	}

	inline static int32_t get_offset_of_prevFrame_31() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___prevFrame_31)); }
	inline int32_t get_prevFrame_31() const { return ___prevFrame_31; }
	inline int32_t* get_address_of_prevFrame_31() { return &___prevFrame_31; }
	inline void set_prevFrame_31(int32_t value)
	{
		___prevFrame_31 = value;
	}

	inline static int32_t get_offset_of__dataSource_32() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____dataSource_32)); }
	inline DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * get__dataSource_32() const { return ____dataSource_32; }
	inline DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 ** get_address_of__dataSource_32() { return &____dataSource_32; }
	inline void set__dataSource_32(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * value)
	{
		____dataSource_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSource_32), (void*)value);
	}

	inline static int32_t get_offset_of__lastModelId_33() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____lastModelId_33)); }
	inline int32_t get__lastModelId_33() const { return ____lastModelId_33; }
	inline int32_t* get_address_of__lastModelId_33() { return &____lastModelId_33; }
	inline void set__lastModelId_33(int32_t value)
	{
		____lastModelId_33 = value;
	}

	inline static int32_t get_offset_of__meshes_34() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____meshes_34)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get__meshes_34() const { return ____meshes_34; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of__meshes_34() { return &____meshes_34; }
	inline void set__meshes_34(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		____meshes_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshes_34), (void*)value);
	}

	inline static int32_t get_offset_of__textures_35() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____textures_35)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get__textures_35() const { return ____textures_35; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of__textures_35() { return &____textures_35; }
	inline void set__textures_35(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		____textures_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textures_35), (void*)value);
	}

	inline static int32_t get_offset_of__meshComponent_36() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____meshComponent_36)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get__meshComponent_36() const { return ____meshComponent_36; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of__meshComponent_36() { return &____meshComponent_36; }
	inline void set__meshComponent_36(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		____meshComponent_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshComponent_36), (void*)value);
	}

	inline static int32_t get_offset_of__rendererComponent_37() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____rendererComponent_37)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get__rendererComponent_37() const { return ____rendererComponent_37; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of__rendererComponent_37() { return &____rendererComponent_37; }
	inline void set__rendererComponent_37(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		____rendererComponent_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rendererComponent_37), (void*)value);
	}

	inline static int32_t get_offset_of__newVertices_38() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newVertices_38)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__newVertices_38() const { return ____newVertices_38; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__newVertices_38() { return &____newVertices_38; }
	inline void set__newVertices_38(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____newVertices_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newVertices_38), (void*)value);
	}

	inline static int32_t get_offset_of__newUVs_39() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newUVs_39)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__newUVs_39() const { return ____newUVs_39; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__newUVs_39() { return &____newUVs_39; }
	inline void set__newUVs_39(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____newUVs_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newUVs_39), (void*)value);
	}

	inline static int32_t get_offset_of__newTriangles_40() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newTriangles_40)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__newTriangles_40() const { return ____newTriangles_40; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__newTriangles_40() { return &____newTriangles_40; }
	inline void set__newTriangles_40(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____newTriangles_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newTriangles_40), (void*)value);
	}

	inline static int32_t get_offset_of__newTextureData_41() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newTextureData_41)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__newTextureData_41() const { return ____newTextureData_41; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__newTextureData_41() { return &____newTextureData_41; }
	inline void set__newTextureData_41(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____newTextureData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newTextureData_41), (void*)value);
	}

	inline static int32_t get_offset_of__newNormals_42() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newNormals_42)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__newNormals_42() const { return ____newNormals_42; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__newNormals_42() { return &____newNormals_42; }
	inline void set__newNormals_42(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____newNormals_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newNormals_42), (void*)value);
	}

	inline static int32_t get_offset_of__newColors_43() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newColors_43)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__newColors_43() const { return ____newColors_43; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__newColors_43() { return &____newColors_43; }
	inline void set__newColors_43(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____newColors_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newColors_43), (void*)value);
	}

	inline static int32_t get_offset_of__newVerticesHandle_44() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newVerticesHandle_44)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__newVerticesHandle_44() const { return ____newVerticesHandle_44; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__newVerticesHandle_44() { return &____newVerticesHandle_44; }
	inline void set__newVerticesHandle_44(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____newVerticesHandle_44 = value;
	}

	inline static int32_t get_offset_of__newUVsHandle_45() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newUVsHandle_45)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__newUVsHandle_45() const { return ____newUVsHandle_45; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__newUVsHandle_45() { return &____newUVsHandle_45; }
	inline void set__newUVsHandle_45(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____newUVsHandle_45 = value;
	}

	inline static int32_t get_offset_of__newTrianglesHandle_46() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newTrianglesHandle_46)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__newTrianglesHandle_46() const { return ____newTrianglesHandle_46; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__newTrianglesHandle_46() { return &____newTrianglesHandle_46; }
	inline void set__newTrianglesHandle_46(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____newTrianglesHandle_46 = value;
	}

	inline static int32_t get_offset_of__newTextureDataHandle_47() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newTextureDataHandle_47)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__newTextureDataHandle_47() const { return ____newTextureDataHandle_47; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__newTextureDataHandle_47() { return &____newTextureDataHandle_47; }
	inline void set__newTextureDataHandle_47(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____newTextureDataHandle_47 = value;
	}

	inline static int32_t get_offset_of__newNormalsHandle_48() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newNormalsHandle_48)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__newNormalsHandle_48() const { return ____newNormalsHandle_48; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__newNormalsHandle_48() { return &____newNormalsHandle_48; }
	inline void set__newNormalsHandle_48(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____newNormalsHandle_48 = value;
	}

	inline static int32_t get_offset_of__newColorsHandle_49() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newColorsHandle_49)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__newColorsHandle_49() const { return ____newColorsHandle_49; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__newColorsHandle_49() { return &____newColorsHandle_49; }
	inline void set__newColorsHandle_49(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____newColorsHandle_49 = value;
	}

	inline static int32_t get_offset_of_samples_50() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___samples_50)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_samples_50() const { return ___samples_50; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_samples_50() { return &___samples_50; }
	inline void set_samples_50(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___samples_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_50), (void*)value);
	}

	inline static int32_t get_offset_of_audioBufferHandle_51() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___audioBufferHandle_51)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_audioBufferHandle_51() const { return ___audioBufferHandle_51; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_audioBufferHandle_51() { return &___audioBufferHandle_51; }
	inline void set_audioBufferHandle_51(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___audioBufferHandle_51 = value;
	}

	inline static int32_t get_offset_of__nbGeometryBuffers_52() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____nbGeometryBuffers_52)); }
	inline int32_t get__nbGeometryBuffers_52() const { return ____nbGeometryBuffers_52; }
	inline int32_t* get_address_of__nbGeometryBuffers_52() { return &____nbGeometryBuffers_52; }
	inline void set__nbGeometryBuffers_52(int32_t value)
	{
		____nbGeometryBuffers_52 = value;
	}

	inline static int32_t get_offset_of__currentGeometryBuffer_53() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____currentGeometryBuffer_53)); }
	inline int32_t get__currentGeometryBuffer_53() const { return ____currentGeometryBuffer_53; }
	inline int32_t* get_address_of__currentGeometryBuffer_53() { return &____currentGeometryBuffer_53; }
	inline void set__currentGeometryBuffer_53(int32_t value)
	{
		____currentGeometryBuffer_53 = value;
	}

	inline static int32_t get_offset_of__nbTextureBuffers_54() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____nbTextureBuffers_54)); }
	inline int32_t get__nbTextureBuffers_54() const { return ____nbTextureBuffers_54; }
	inline int32_t* get_address_of__nbTextureBuffers_54() { return &____nbTextureBuffers_54; }
	inline void set__nbTextureBuffers_54(int32_t value)
	{
		____nbTextureBuffers_54 = value;
	}

	inline static int32_t get_offset_of__currentTextureBuffer_55() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____currentTextureBuffer_55)); }
	inline int32_t get__currentTextureBuffer_55() const { return ____currentTextureBuffer_55; }
	inline int32_t* get_address_of__currentTextureBuffer_55() { return &____currentTextureBuffer_55; }
	inline void set__currentTextureBuffer_55(int32_t value)
	{
		____currentTextureBuffer_55 = value;
	}

	inline static int32_t get_offset_of__newMeshAvailable_56() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____newMeshAvailable_56)); }
	inline bool get__newMeshAvailable_56() const { return ____newMeshAvailable_56; }
	inline bool* get_address_of__newMeshAvailable_56() { return &____newMeshAvailable_56; }
	inline void set__newMeshAvailable_56(bool value)
	{
		____newMeshAvailable_56 = value;
	}

	inline static int32_t get_offset_of__isSequenceTriggerON_57() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____isSequenceTriggerON_57)); }
	inline bool get__isSequenceTriggerON_57() const { return ____isSequenceTriggerON_57; }
	inline bool* get_address_of__isSequenceTriggerON_57() { return &____isSequenceTriggerON_57; }
	inline void set__isSequenceTriggerON_57(bool value)
	{
		____isSequenceTriggerON_57 = value;
	}

	inline static int32_t get_offset_of__triggerRate_58() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____triggerRate_58)); }
	inline float get__triggerRate_58() const { return ____triggerRate_58; }
	inline float* get_address_of__triggerRate_58() { return &____triggerRate_58; }
	inline void set__triggerRate_58(float value)
	{
		____triggerRate_58 = value;
	}

	inline static int32_t get_offset_of__meshCollider_59() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____meshCollider_59)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get__meshCollider_59() const { return ____meshCollider_59; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of__meshCollider_59() { return &____meshCollider_59; }
	inline void set__meshCollider_59(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		____meshCollider_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshCollider_59), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_60() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____isInitialized_60)); }
	inline bool get__isInitialized_60() const { return ____isInitialized_60; }
	inline bool* get_address_of__isInitialized_60() { return &____isInitialized_60; }
	inline void set__isInitialized_60(bool value)
	{
		____isInitialized_60 = value;
	}

	inline static int32_t get_offset_of__isPlaying_61() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____isPlaying_61)); }
	inline bool get__isPlaying_61() const { return ____isPlaying_61; }
	inline bool* get_address_of__isPlaying_61() { return &____isPlaying_61; }
	inline void set__isPlaying_61(bool value)
	{
		____isPlaying_61 = value;
	}

	inline static int32_t get_offset_of__previewFrame_62() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____previewFrame_62)); }
	inline int32_t get__previewFrame_62() const { return ____previewFrame_62; }
	inline int32_t* get_address_of__previewFrame_62() { return &____previewFrame_62; }
	inline void set__previewFrame_62(int32_t value)
	{
		____previewFrame_62 = value;
	}

	inline static int32_t get_offset_of_last_preview_time_63() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___last_preview_time_63)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_last_preview_time_63() const { return ___last_preview_time_63; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_last_preview_time_63() { return &___last_preview_time_63; }
	inline void set_last_preview_time_63(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___last_preview_time_63 = value;
	}

	inline static int32_t get_offset_of__nbFrames_64() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____nbFrames_64)); }
	inline int32_t get__nbFrames_64() const { return ____nbFrames_64; }
	inline int32_t* get_address_of__nbFrames_64() { return &____nbFrames_64; }
	inline void set__nbFrames_64(int32_t value)
	{
		____nbFrames_64 = value;
	}

	inline static int32_t get_offset_of__speedRatio_65() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____speedRatio_65)); }
	inline float get__speedRatio_65() const { return ____speedRatio_65; }
	inline float* get_address_of__speedRatio_65() { return &____speedRatio_65; }
	inline void set__speedRatio_65(float value)
	{
		____speedRatio_65 = value;
	}

	inline static int32_t get_offset_of__nbVertices_66() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____nbVertices_66)); }
	inline int32_t get__nbVertices_66() const { return ____nbVertices_66; }
	inline int32_t* get_address_of__nbVertices_66() { return &____nbVertices_66; }
	inline void set__nbVertices_66(int32_t value)
	{
		____nbVertices_66 = value;
	}

	inline static int32_t get_offset_of__nbTriangles_67() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ____nbTriangles_67)); }
	inline int32_t get__nbTriangles_67() const { return ____nbTriangles_67; }
	inline int32_t* get_address_of__nbTriangles_67() { return &____nbTriangles_67; }
	inline void set__nbTriangles_67(int32_t value)
	{
		____nbTriangles_67 = value;
	}

	inline static int32_t get_offset_of_wasPlayingWhenFocusLost_69() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___wasPlayingWhenFocusLost_69)); }
	inline bool get_wasPlayingWhenFocusLost_69() const { return ___wasPlayingWhenFocusLost_69; }
	inline bool* get_address_of_wasPlayingWhenFocusLost_69() { return &___wasPlayingWhenFocusLost_69; }
	inline void set_wasPlayingWhenFocusLost_69(bool value)
	{
		___wasPlayingWhenFocusLost_69 = value;
	}

	inline static int32_t get_offset_of_unityTimeScale_70() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209, ___unityTimeScale_70)); }
	inline float get_unityTimeScale_70() const { return ___unityTimeScale_70; }
	inline float* get_address_of_unityTimeScale_70() { return &___unityTimeScale_70; }
	inline void set_unityTimeScale_70(float value)
	{
		___unityTimeScale_70 = value;
	}
};

struct Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_StaticFields
{
public:
	// System.Int64 unity4dv.Plugin4DS::_HTTPCacheSize
	int64_t ____HTTPCacheSize_15;

public:
	inline static int32_t get_offset_of__HTTPCacheSize_15() { return static_cast<int32_t>(offsetof(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_StaticFields, ____HTTPCacheSize_15)); }
	inline int64_t get__HTTPCacheSize_15() const { return ____HTTPCacheSize_15; }
	inline int64_t* get_address_of__HTTPCacheSize_15() { return &____HTTPCacheSize_15; }
	inline void set__HTTPCacheSize_15(int64_t value)
	{
		____HTTPCacheSize_15 = value;
	}
};


// unity4dv.Sync4DS
struct Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// unity4dv.Plugin4DS unity4dv.Sync4DS::_sequence
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * ____sequence_4;
	// System.Int32 unity4dv.Sync4DS::_audioPrecisionInMsec
	int32_t ____audioPrecisionInMsec_5;
	// System.Single unity4dv.Sync4DS::_audioSynchroPrecision
	float ____audioSynchroPrecision_6;
	// unity4dv.AudioSource4DS[] unity4dv.Sync4DS::_audioSources
	AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* ____audioSources_7;
	// unity4dv.AnimationSource4DS[] unity4dv.Sync4DS::_animationSources
	AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* ____animationSources_8;
	// System.Single unity4dv.Sync4DS::_animationNormalizer
	float ____animationNormalizer_9;
	// System.Boolean unity4dv.Sync4DS::_debugInfo
	bool ____debugInfo_10;

public:
	inline static int32_t get_offset_of__sequence_4() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____sequence_4)); }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * get__sequence_4() const { return ____sequence_4; }
	inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 ** get_address_of__sequence_4() { return &____sequence_4; }
	inline void set__sequence_4(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * value)
	{
		____sequence_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequence_4), (void*)value);
	}

	inline static int32_t get_offset_of__audioPrecisionInMsec_5() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____audioPrecisionInMsec_5)); }
	inline int32_t get__audioPrecisionInMsec_5() const { return ____audioPrecisionInMsec_5; }
	inline int32_t* get_address_of__audioPrecisionInMsec_5() { return &____audioPrecisionInMsec_5; }
	inline void set__audioPrecisionInMsec_5(int32_t value)
	{
		____audioPrecisionInMsec_5 = value;
	}

	inline static int32_t get_offset_of__audioSynchroPrecision_6() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____audioSynchroPrecision_6)); }
	inline float get__audioSynchroPrecision_6() const { return ____audioSynchroPrecision_6; }
	inline float* get_address_of__audioSynchroPrecision_6() { return &____audioSynchroPrecision_6; }
	inline void set__audioSynchroPrecision_6(float value)
	{
		____audioSynchroPrecision_6 = value;
	}

	inline static int32_t get_offset_of__audioSources_7() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____audioSources_7)); }
	inline AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* get__audioSources_7() const { return ____audioSources_7; }
	inline AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157** get_address_of__audioSources_7() { return &____audioSources_7; }
	inline void set__audioSources_7(AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* value)
	{
		____audioSources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSources_7), (void*)value);
	}

	inline static int32_t get_offset_of__animationSources_8() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____animationSources_8)); }
	inline AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* get__animationSources_8() const { return ____animationSources_8; }
	inline AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7** get_address_of__animationSources_8() { return &____animationSources_8; }
	inline void set__animationSources_8(AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* value)
	{
		____animationSources_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animationSources_8), (void*)value);
	}

	inline static int32_t get_offset_of__animationNormalizer_9() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____animationNormalizer_9)); }
	inline float get__animationNormalizer_9() const { return ____animationNormalizer_9; }
	inline float* get_address_of__animationNormalizer_9() { return &____animationNormalizer_9; }
	inline void set__animationNormalizer_9(float value)
	{
		____animationNormalizer_9 = value;
	}

	inline static int32_t get_offset_of__debugInfo_10() { return static_cast<int32_t>(offsetof(Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15, ____debugInfo_10)); }
	inline bool get__debugInfo_10() const { return ____debugInfo_10; }
	inline bool* get_address_of__debugInfo_10() { return &____debugInfo_10; }
	inline void set__debugInfo_10(bool value)
	{
		____debugInfo_10 = value;
	}
};


// Track4DS
struct Track4DS_t06C2BB912C38F443ECC4AFF9D08014951442F9BB  : public TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628
{
public:

public:
};


// remove
struct remove_t93C5EDD0AB94A1406BA457CA22ACC32732B8966B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject remove::allobject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___allobject_4;
	// System.Int32 remove::childCount
	int32_t ___childCount_5;

public:
	inline static int32_t get_offset_of_allobject_4() { return static_cast<int32_t>(offsetof(remove_t93C5EDD0AB94A1406BA457CA22ACC32732B8966B, ___allobject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_allobject_4() const { return ___allobject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_allobject_4() { return &___allobject_4; }
	inline void set_allobject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___allobject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allobject_4), (void*)value);
	}

	inline static int32_t get_offset_of_childCount_5() { return static_cast<int32_t>(offsetof(remove_t93C5EDD0AB94A1406BA457CA22ACC32732B8966B, ___childCount_5)); }
	inline int32_t get_childCount_5() const { return ___childCount_5; }
	inline int32_t* get_address_of_childCount_5() { return &___childCount_5; }
	inline void set_childCount_5(int32_t value)
	{
		___childCount_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner
struct PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE  : public BaseFocusHandler_t0086FA041EB9E41385B8A4BF2DEDF0E62CF7FBC4
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_6;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::tooltipToggleAction
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___tooltipToggleAction_7;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::appearType
	int32_t ___appearType_8;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::vanishType
	int32_t ___vanishType_9;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::remainType
	int32_t ___remainType_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::appearDelay
	float ___appearDelay_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::vanishDelay
	float ___vanishDelay_12;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::lifetime
	float ___lifetime_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::keepWorldRotation
	bool ___keepWorldRotation_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::focusEnterTime
	float ___focusEnterTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::focusExitTime
	float ___focusExitTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::tappedTime
	float ___tappedTime_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::spawnable
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnable_18;

public:
	inline static int32_t get_offset_of_prefab_6() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___prefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_6() const { return ___prefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_6() { return &___prefab_6; }
	inline void set_prefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_tooltipToggleAction_7() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___tooltipToggleAction_7)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_tooltipToggleAction_7() const { return ___tooltipToggleAction_7; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_tooltipToggleAction_7() { return &___tooltipToggleAction_7; }
	inline void set_tooltipToggleAction_7(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___tooltipToggleAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tooltipToggleAction_7))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_appearType_8() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___appearType_8)); }
	inline int32_t get_appearType_8() const { return ___appearType_8; }
	inline int32_t* get_address_of_appearType_8() { return &___appearType_8; }
	inline void set_appearType_8(int32_t value)
	{
		___appearType_8 = value;
	}

	inline static int32_t get_offset_of_vanishType_9() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___vanishType_9)); }
	inline int32_t get_vanishType_9() const { return ___vanishType_9; }
	inline int32_t* get_address_of_vanishType_9() { return &___vanishType_9; }
	inline void set_vanishType_9(int32_t value)
	{
		___vanishType_9 = value;
	}

	inline static int32_t get_offset_of_remainType_10() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___remainType_10)); }
	inline int32_t get_remainType_10() const { return ___remainType_10; }
	inline int32_t* get_address_of_remainType_10() { return &___remainType_10; }
	inline void set_remainType_10(int32_t value)
	{
		___remainType_10 = value;
	}

	inline static int32_t get_offset_of_appearDelay_11() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___appearDelay_11)); }
	inline float get_appearDelay_11() const { return ___appearDelay_11; }
	inline float* get_address_of_appearDelay_11() { return &___appearDelay_11; }
	inline void set_appearDelay_11(float value)
	{
		___appearDelay_11 = value;
	}

	inline static int32_t get_offset_of_vanishDelay_12() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___vanishDelay_12)); }
	inline float get_vanishDelay_12() const { return ___vanishDelay_12; }
	inline float* get_address_of_vanishDelay_12() { return &___vanishDelay_12; }
	inline void set_vanishDelay_12(float value)
	{
		___vanishDelay_12 = value;
	}

	inline static int32_t get_offset_of_lifetime_13() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___lifetime_13)); }
	inline float get_lifetime_13() const { return ___lifetime_13; }
	inline float* get_address_of_lifetime_13() { return &___lifetime_13; }
	inline void set_lifetime_13(float value)
	{
		___lifetime_13 = value;
	}

	inline static int32_t get_offset_of_keepWorldRotation_14() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___keepWorldRotation_14)); }
	inline bool get_keepWorldRotation_14() const { return ___keepWorldRotation_14; }
	inline bool* get_address_of_keepWorldRotation_14() { return &___keepWorldRotation_14; }
	inline void set_keepWorldRotation_14(bool value)
	{
		___keepWorldRotation_14 = value;
	}

	inline static int32_t get_offset_of_focusEnterTime_15() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___focusEnterTime_15)); }
	inline float get_focusEnterTime_15() const { return ___focusEnterTime_15; }
	inline float* get_address_of_focusEnterTime_15() { return &___focusEnterTime_15; }
	inline void set_focusEnterTime_15(float value)
	{
		___focusEnterTime_15 = value;
	}

	inline static int32_t get_offset_of_focusExitTime_16() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___focusExitTime_16)); }
	inline float get_focusExitTime_16() const { return ___focusExitTime_16; }
	inline float* get_address_of_focusExitTime_16() { return &___focusExitTime_16; }
	inline void set_focusExitTime_16(float value)
	{
		___focusExitTime_16 = value;
	}

	inline static int32_t get_offset_of_tappedTime_17() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___tappedTime_17)); }
	inline float get_tappedTime_17() const { return ___tappedTime_17; }
	inline float* get_address_of_tappedTime_17() { return &___tappedTime_17; }
	inline void set_tappedTime_17(float value)
	{
		___tappedTime_17 = value;
	}

	inline static int32_t get_offset_of_spawnable_18() { return static_cast<int32_t>(offsetof(PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE, ___spawnable_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnable_18() const { return ___spawnable_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnable_18() { return &___spawnable_18; }
	inline void set_spawnable_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnable_18), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3  : public PrefabSpawner_tD3CDBD30A55BC85109CFC38BBEBAA8D5D0DA56BE
{
public:
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::settingsMode
	int32_t ___settingsMode_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showBackground
	bool ___showBackground_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showOutline
	bool ___showOutline_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showConnector
	bool ___showConnector_22;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::followType
	int32_t ___followType_23;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotMode
	int32_t ___pivotMode_24;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDirection
	int32_t ___pivotDirection_25;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDirectionOrient
	int32_t ___pivotDirectionOrient_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::manualPivotDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___manualPivotDirection_27;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::manualPivotLocalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___manualPivotLocalPosition_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDistance
	float ___pivotDistance_29;
	// System.String Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::toolTipText
	String_t* ___toolTipText_30;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::anchor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___anchor_31;

public:
	inline static int32_t get_offset_of_settingsMode_19() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___settingsMode_19)); }
	inline int32_t get_settingsMode_19() const { return ___settingsMode_19; }
	inline int32_t* get_address_of_settingsMode_19() { return &___settingsMode_19; }
	inline void set_settingsMode_19(int32_t value)
	{
		___settingsMode_19 = value;
	}

	inline static int32_t get_offset_of_showBackground_20() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___showBackground_20)); }
	inline bool get_showBackground_20() const { return ___showBackground_20; }
	inline bool* get_address_of_showBackground_20() { return &___showBackground_20; }
	inline void set_showBackground_20(bool value)
	{
		___showBackground_20 = value;
	}

	inline static int32_t get_offset_of_showOutline_21() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___showOutline_21)); }
	inline bool get_showOutline_21() const { return ___showOutline_21; }
	inline bool* get_address_of_showOutline_21() { return &___showOutline_21; }
	inline void set_showOutline_21(bool value)
	{
		___showOutline_21 = value;
	}

	inline static int32_t get_offset_of_showConnector_22() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___showConnector_22)); }
	inline bool get_showConnector_22() const { return ___showConnector_22; }
	inline bool* get_address_of_showConnector_22() { return &___showConnector_22; }
	inline void set_showConnector_22(bool value)
	{
		___showConnector_22 = value;
	}

	inline static int32_t get_offset_of_followType_23() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___followType_23)); }
	inline int32_t get_followType_23() const { return ___followType_23; }
	inline int32_t* get_address_of_followType_23() { return &___followType_23; }
	inline void set_followType_23(int32_t value)
	{
		___followType_23 = value;
	}

	inline static int32_t get_offset_of_pivotMode_24() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___pivotMode_24)); }
	inline int32_t get_pivotMode_24() const { return ___pivotMode_24; }
	inline int32_t* get_address_of_pivotMode_24() { return &___pivotMode_24; }
	inline void set_pivotMode_24(int32_t value)
	{
		___pivotMode_24 = value;
	}

	inline static int32_t get_offset_of_pivotDirection_25() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___pivotDirection_25)); }
	inline int32_t get_pivotDirection_25() const { return ___pivotDirection_25; }
	inline int32_t* get_address_of_pivotDirection_25() { return &___pivotDirection_25; }
	inline void set_pivotDirection_25(int32_t value)
	{
		___pivotDirection_25 = value;
	}

	inline static int32_t get_offset_of_pivotDirectionOrient_26() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___pivotDirectionOrient_26)); }
	inline int32_t get_pivotDirectionOrient_26() const { return ___pivotDirectionOrient_26; }
	inline int32_t* get_address_of_pivotDirectionOrient_26() { return &___pivotDirectionOrient_26; }
	inline void set_pivotDirectionOrient_26(int32_t value)
	{
		___pivotDirectionOrient_26 = value;
	}

	inline static int32_t get_offset_of_manualPivotDirection_27() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___manualPivotDirection_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_manualPivotDirection_27() const { return ___manualPivotDirection_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_manualPivotDirection_27() { return &___manualPivotDirection_27; }
	inline void set_manualPivotDirection_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___manualPivotDirection_27 = value;
	}

	inline static int32_t get_offset_of_manualPivotLocalPosition_28() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___manualPivotLocalPosition_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_manualPivotLocalPosition_28() const { return ___manualPivotLocalPosition_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_manualPivotLocalPosition_28() { return &___manualPivotLocalPosition_28; }
	inline void set_manualPivotLocalPosition_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___manualPivotLocalPosition_28 = value;
	}

	inline static int32_t get_offset_of_pivotDistance_29() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___pivotDistance_29)); }
	inline float get_pivotDistance_29() const { return ___pivotDistance_29; }
	inline float* get_address_of_pivotDistance_29() { return &___pivotDistance_29; }
	inline void set_pivotDistance_29(float value)
	{
		___pivotDistance_29 = value;
	}

	inline static int32_t get_offset_of_toolTipText_30() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___toolTipText_30)); }
	inline String_t* get_toolTipText_30() const { return ___toolTipText_30; }
	inline String_t** get_address_of_toolTipText_30() { return &___toolTipText_30; }
	inline void set_toolTipText_30(String_t* value)
	{
		___toolTipText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolTipText_30), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_31() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3, ___anchor_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_anchor_31() const { return ___anchor_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_anchor_31() { return &___anchor_31; }
	inline void set_anchor_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___anchor_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_31), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MRTK.Tutorials.GettingStarted.PartAssemblyController[]
struct PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * m_Items[1];

public:
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * m_Items[1];

public:
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// unity4dv.AudioSource4DS[]
struct AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * m_Items[1];

public:
	inline AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// unity4dv.AnimationSource4DS[]
struct AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * m_Items[1];

public:
	inline AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ScriptPlayable_1_Create_mB185CE384B12D64228DA44E8A7179370DA090DCE_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ScriptPlayable_1_op_Implicit_m93B777FC690A8A1700ADEC08D20C44C8AF93A1E8_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Create_m2C278C920C8B40322EB632EC620A83B021C90725 (String_t* ___path0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.WWW::get_bytesDownloaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWW_get_bytesDownloaded_mD4AF80DF37B74950C738539F6A69B12C7D94F1E5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void unity4dv.DataSource4DS::.ctor(System.Int32,System.String,System.Int32,System.Int32,unity4dv.OUT_RANGE_MODE,System.Boolean&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource4DS__ctor_m8299B908CE6A3A95D8767AA914871E2B85D84B0E (DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * __this, int32_t ___key0, String_t* ___rootpath1, int32_t ___activeRangeBegin2, int32_t ___activeRangeEnd3, int32_t ___outRangeMode4, bool* ___success5, String_t** ___errorMsg6, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::CreateSequence(System.Int32,System.String,System.Int32,System.Int32,unity4dv.OUT_RANGE_MODE,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_CreateSequence_m36534B0630E8A3B3436952A4C3E5D6BCF25AADD6 (int32_t ___key0, String_t* ___dataPath1, int32_t ___rangeBegin2, int32_t ___rangeEnd3, int32_t ___outRangeMode4, intptr_t ___errorMsg5, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::AddDXTSupport(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_AddDXTSupport_mEEED208ABB62672D280B00F08B797A5757D82076 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetTextureSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetTextureSize_m73C03581060CF9D4E31C87B7E4D16ED3334E3471 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetTextureEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetTextureEncoding_m2B3ED495444FDFCFBDB45BB6CCBFDAC28529810D (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetSequenceMaxVertices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceMaxVertices_mC311B8F715217583E702180A18FFFD52A2D35271 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetSequenceMaxTriangles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceMaxTriangles_m717806FFB33ED4FD1943831D463322647AFD39FB (int32_t ___key0, const RuntimeMethod* method);
// System.Single unity4dv.Bridge4DS::GetSequenceFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bridge4DS_GetSequenceFramerate_m0FB3873F82F3BB3F6DBCE1EA3847816207572FFE (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Toggle_m321B6176A1D390111076B1919CC2E44D6DB7E5E2 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 FlyCamera::GetBaseInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FlyCamera_GetBaseInput_mE237DA7093F91878530126D111176B134AF822D2 (FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GetObject::RemoveAllParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_RemoveAllParent_m218A8DAF485E0D7FF9EDB832590B779B63048D08 (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 unity4dv.Plugin4DS::get_ActiveNbOfFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_ActiveNbOfFrames_m16721140C3D81FFDB14C783385DD57ED07A95775 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::get_SequenceNbOfFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_SequenceNbOfFrames_m8803DFD2044F28C9B4EAF7178AEFFE93E0C480C0 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, int32_t ___axis0, float ___size1, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::get_CurrentFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::get_FirstActiveFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_FirstActiveFrame_mADE4163DE2A26A0F6C32C61588955C16D2E8746F (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::get_MeshBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_MeshBufferSize_m2455EC3AE05BF8D3634EC522FB7DEDC7C826E4EC (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.RectTransform>(!!0,UnityEngine.Transform)
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Int32 unity4dv.Plugin4DS::get_ChunkBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_ChunkBufferSize_m2158FCD26E9C8D1B8DB2A2EC2E270897AB5EE234 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::GotoFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_GotoFrame_m95529234FD0D4D7CCD5851739A2255BFEA634F78 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___frame0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner>()
inline ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * Component_GetComponent_TisToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3_mE0D001FFE1848B1A6CAAD58CD0641C92C050A212 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(!0)
inline void List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4 (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::.ctor()
inline void List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1 (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<MRTK.Tutorials.GettingStarted.PartAssemblyController>()
inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27 (const RuntimeMethod* method)
{
	return ((  PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::Add(!0)
inline void List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80 (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * __this, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::CheckPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyController_CheckPlacement_m058EC3FBCB6313D9C85FF551A4831601805F5A4D (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Set_m77CC9BC1F649F4F08C89FD060E2C74C4F45C91FD (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Collider>::GetEnumerator()
inline Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57 (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::get_Current()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::MoveNext()
inline bool Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::Dispose()
inline void Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17 (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::GetEnumerator()
inline Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339 (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  (*) (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::get_Current()
inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_inline (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE * __this, const RuntimeMethod* method)
{
	return ((  PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * (*) (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Reset_m129940529723E9498D4E5035FB917610DA5C8981 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::MoveNext()
inline bool Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39 (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::Dispose()
inline void Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537 (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Toggle_mED247D0E903D8499BE48BC9C0DF2EC3B94F3494B (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<TimelineBehaviour4DS>::Create(UnityEngine.Playables.PlayableGraph,!0,System.Int32)
inline ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  ScriptPlayable_1_Create_m6BA574906966075ABCA04D2F8C81C42E725AA096 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 *, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mB185CE384B12D64228DA44E8A7179370DA090DCE_gshared)(___graph0, ___template1, ___inputCount2, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<TimelineBehaviour4DS>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ScriptPlayable_1_op_Implicit_mC02498CE6F903C36F89E29626A529E3B1BCA1152 (ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  (*) (ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m93B777FC690A8A1700ADEC08D20C44C8AF93A1E8_gshared)(___playable0, method);
}
// System.Void TimelineBehaviour4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineBehaviour4DS__ctor_mA2C4A96AB7986E7BCE5F3654788687C1991A80FD (TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_mAE1FA54D280C75ADC9486656C5C36AC1917D5FE4 (PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::GetCurrentFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetCurrentFrame_m5A34EDE7986865A6487A84705A5D1CB5F06E7C25 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Single unity4dv.Plugin4DS::GetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::GetSequenceNbFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetSequenceNbFrames_m43E23F3C2B1D3496FE32C75D8220299E223A7CA3 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::GetActiveNbFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetActiveNbFrames_mDA3F5FB7FD8C48E86DB7730772A5E8E0505261BF (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// UnityEngine.TextureFormat unity4dv.Plugin4DS::GetTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetTextureFormat_m419E846918F764C95F8BC2A487C775ED3D162365 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetMeshBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetMeshBufferSize_mBA741CD40DF9A93E72CC6CF4ECA0513AAB8E1AE1 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetChunkBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetChunkBufferSize_m1EBB1C3B21A10D88088D51289F1BCBB3737BEF11 (int32_t ___key0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// unity4dv.DataSource4DS unity4dv.DataSource4DS::CreateDataSource(System.Int32,System.String,System.Boolean,System.String,System.Int32,System.Int32,unity4dv.OUT_RANGE_MODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * DataSource4DS_CreateDataSource_m96C41FEB4FB7BBFCAED9FE4A04D6F27CDB416723 (int32_t ___key0, String_t* ___sequenceName1, bool ___dataInStreamingAssets2, String_t* ___mainPath3, int32_t ___activeRangeBegin4, int32_t ___activeRangeLastFrame5, int32_t ___outRangeMode6, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS/EventFDV::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFDV_Invoke_m445ECBC5C869D774DFEC66C1C070719CCEDE4208 (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 unity4dv.Bridge4DS::GetSequenceNbFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceNbFrames_mC240F0FD20CF75717E91E8743CE54C080848F7CA (int32_t ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::SetSpeed(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetSpeed_m4FE1B4DC6786AEFC6DBB0AA6117A636F2173D90B (int32_t ___key0, float ___speedRatio1, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::SetHTTPDownloadSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetHTTPDownloadSize_mDCEEEED367B9B81995CB7BED99731A84F8843332 (int32_t ___key0, int32_t ___size1, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::SetHTTPKeepInCache(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetHTTPKeepInCache_m6E9E0C3FCE3CE9AD5E99EDBC64FD320423BF742A (int32_t ___key0, bool ___val1, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::SetHTTPCacheSize(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetHTTPCacheSize_m4BD4CD13E4FDD29CD3C68627AA82A1358475B305 (int32_t ___key0, int64_t ___size1, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::SetChunkBufferMaxSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetChunkBufferMaxSize_m0A28953FEE72C88412369D5C4E9DF0D577D7CC35 (int32_t ___key0, int32_t ___size1, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::SetMeshBufferMaxSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetMeshBufferMaxSize_m89DD946D32AF43AE92CE1B76D0E93EE7ED99EC16 (int32_t ___key0, int32_t ___size1, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::AllocateGeometryBuffers(UnityEngine.Vector3[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,System.Int32[]&,UnityEngine.Color32[]&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_AllocateGeometryBuffers_m68DA7AF6DD94D8CDB06D88ECD17182F794836529 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___verts0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___uvs1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___norms2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___tris3, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** ___colors4, int32_t ___nbMaxVerts5, int32_t ___nbMaxTris6, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___value0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::InitAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_InitAudio_mD793F92F8E78176DCF537136601EE4316AD0934C (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetAudioBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioBufferSize_m9864A1B56678E2B0E40C9D6CAFB37D5A6A7204A1 (int32_t ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<unity4dv.Sync4DS>()
inline Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Int32 unity4dv.Bridge4DS::GetAudioNbSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioNbSamples_mAF1A95FA57C8D3C25835415D9766ABF49A5737F0 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetAudioNbChannels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioNbChannels_m3A0021D950C912C16DF071347574293D8120322A (int32_t ___key0, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::GetAudioBuffer(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_GetAudioBuffer_mE0353B98BB14C85DC2BBFB72749C340234B63AE0 (int32_t ___key0, intptr_t ___samples1, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::GetAudioSampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioSampleRate_m81AE0358B85D77BA02EC36D3AB10475CCB1F604B (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::DestroySequence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_DestroySequence_mF22FE9B1F3072614C655466A8B6D0DF84A9251D4 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Close_mCA6AEC7DB99F0AF3E701687BB4740DBFA93FC26D (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::Uninitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Uninitialize_m0DC93872C3BDE5942E6A795FD8FD7D032F506D02 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Initialize_mD794AB33AEAEA1F48F13FC5C4E1BBF458AA42408 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___resetRange0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::Play(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Play_m93EFD8F08EC97137F4B432EB6B79CAAD3A4BB3A8 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___on0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_m93A620CC97332F351305E3A93AD11CB2E0EFDAF4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_m3745185BFF4D9B970DEB23EEB6FD93DCAFFA8C07 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, bool ___markNoLongerReadable0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Boolean unity4dv.Plugin4DS::get_IsPlaying()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plugin4DS_get_IsPlaying_mADFE4E9812EF471BF3FA15D000F5B5353A4A97C4_inline (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Plugin4DS::get_LastActiveFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_LastActiveFrame_m547BDCE7A899D914045BF03B1F9D7059608F7CD1 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Stop_mD70181CC57BE66C89002A7BFEA67B8E6EF73644F (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_m03B73B5C97033F939387D1785BDF2619CADAEEB0 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406 (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Bridge4DS::UpdateModel(System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_UpdateModel_m53B448AB746D781B1EADA62DE13B76A8C9DD8FD1 (int32_t ___key0, intptr_t ___ptrVertices1, intptr_t ___ptrUVs2, intptr_t ___ptrTriangles3, intptr_t ___texture4, intptr_t ___normals5, intptr_t ___colors6, int32_t ___lastModelId7, int32_t* ___nbVertices8, int32_t* ___nbTriangles9, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS/<SequenceTrigger>d__152::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceTriggerU3Ed__152__ctor_mB37B17259FFD74094FF850B352377FCF2FCF3026 (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::Play(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_Play_mC5D702708221D1A96ED06367F488673EA7240564 (int32_t ___key0, bool ___on1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::Stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_Stop_m8C4E02C699AD4CACDAFB3E6B89D16BBFFF965698 (int32_t ___key0, const RuntimeMethod* method);
// System.Void unity4dv.Bridge4DS::GotoFrame(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_GotoFrame_m808A2D57B7689E4D808B2C1C46E78CA64740DA4D (int32_t ___key0, int32_t ___frame1, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_UpdateMesh_mA7FDB953AA7CEF26EA04856E88C72D833E85AAAD (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_mE158697020EE5D1044460A605FC8243AA8640F39 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C (double* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Update_m1704279B2DF7562F155491B36A02E899A85639B9 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* Texture2D_GetPixels32_m419F7BF2D2D374C08247BE66838148DA485A6ECA (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<unity4dv.Plugin4DS>()
inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * Component_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m08B162396589928174E0F3A5281525AB8AB8E80A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS/EventFDV::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFDV__ctor_mF9F82F036F7D3B0CEC4B895D4D00FEF945234363 (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::add_OnNewModel(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_add_OnNewModel_mE476D076AAB4F5D67AC97B2BDDE1A0F2C643C757 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method);
// System.Void unity4dv.Plugin4DS::remove_OnNewModel(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_remove_OnNewModel_mA8769D6AFF9D16E705A35CD0615D8240D8AF8A46 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method);
// System.Void unity4dv.Sync4DS::SyncAudioSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_SyncAudioSources_m717134D6D3162AD72FA8E9FAA1AC5406BBF3E967 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 unity4dv.Sync4DS::SeqToClipSample(UnityEngine.AudioSource,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sync4DS_SeqToClipSample_mE11E1846E87239A11898030C0F1486F1EAFD22D6 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, int32_t ___frame1, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single unity4dv.Plugin4DS::get_Framerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plugin4DS_get_Framerate_m626A2A7D34675532D6DD9E50D1A90D23197DF0AE (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m1438EDACA2804B50ED0D00D9986E30BCF903418B (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
inline double PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , const RuntimeMethod*))PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E_gshared)(___playable0, method);
}
// System.Void unity4dv.Plugin4DS::set_SpeedRatio(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plugin4DS_set_SpeedRatio_mC146D986D73A86FE4BD3B5BB31BD8624EA1F0DE0_inline (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.FrameData::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_deltaTime_m3A7174B358C0A82BD5344F7F0C11BAE2E9F76C7C (FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B * __this, const RuntimeMethod* method);
// System.Single unity4dv.Plugin4DS::get_SpeedRatio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plugin4DS_get_SpeedRatio_m326A202890648318DB678CF24D2F55B0752BB96D_inline (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_m5EB22A817FFF0662E0E3AFAB34C41D7B09D4326F (PlayableBehaviour_t451A3E3A605FDB6CD89DE1DAD0CBE96C20687D82 * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPlay_m71A792D97CD840F5D6C73889D00C2887F41A0F41 (PlayableBehaviour_t451A3E3A605FDB6CD89DE1DAD0CBE96C20687D82 * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  ___info1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_m1EA2FC6B8DE3503745344E7BBAA0B40FDCD50FC8 (PlayableBehaviour_t451A3E3A605FDB6CD89DE1DAD0CBE96C20687D82 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<unity4dv.Plugin4DS>()
inline Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * GameObject_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m52936C90DCE33761796E2A6E4D9A837E079E1626 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_GetClips_m31018DAFC45C73E0F9BB6CC60C734016ED1D28CE (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Timeline.TimelineClip::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * TimelineClip_get_asset_m147143A7209205C975960CA4E67BE2B6E408DBDA_inline (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Timeline.TimelineClip::get_start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Timeline.TimelineClip::get_end()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimelineClip_get_end_m00D8AEC52D2496C97CE07A266570AB94306ABC22 (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Timeline.TrackAsset::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  TrackAsset_CreateTrackMixer_m4EAF8A5C574780BF154F503B8AE0B606E84629BA (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, int32_t ___inputCount2, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_m7C48D12914098F6029C001D474737762AF76A78F (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CreateSequence(int32_t, char*, int32_t, int32_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DestroySequence(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Play(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Stop(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL StartBuffering(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UpdateModel(int32_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, int32_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTextureSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTextureEncoding(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSequenceMaxVertices(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSequenceMaxTriangles(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C float DEFAULT_CALL GetSequenceFramerate(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSequenceNbFrames(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSequenceCurrentFrame(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GotoFrame(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetSpeed(int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetChunkBufferSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetMeshBufferSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetChunkBufferMaxSize(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetMeshBufferMaxSize(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetHTTPDownloadSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetHTTPDownloadSize(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetHTTPKeepInCache(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetHTTPKeepInCache(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL GetHTTPCacheSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetHTTPCacheSize(int32_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetAudioBuffer(int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAudioBufferSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAudioNbSamples(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAudioNbChannels(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAudioSampleRate(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AddDXTSupport(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AddASTCSupport(int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unity4dv.AnimationSource4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSource4DS__ctor_mEC2856CB9EC030E542971DA3B73319D933365CB6 (AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unity4dv.AudioSource4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource4DS__ctor_mA25130C9F4CBEA5F85BEDFA5C833B1D753F9460A (AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 unity4dv.Bridge4DS::CreateSequence(System.Int32,System.String,System.Int32,System.Int32,unity4dv.OUT_RANGE_MODE,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_CreateSequence_m36534B0630E8A3B3436952A4C3E5D6BCF25AADD6 (int32_t ___key0, String_t* ___dataPath1, int32_t ___rangeBegin2, int32_t ___rangeEnd3, int32_t ___outRangeMode4, intptr_t ___errorMsg5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, int32_t, int32_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "CreateSequence", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___dataPath1' to native representation
	char* ____dataPath1_marshaled = NULL;
	____dataPath1_marshaled = il2cpp_codegen_marshal_string(___dataPath1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CreateSequence)(___key0, ____dataPath1_marshaled, ___rangeBegin2, ___rangeEnd3, ___outRangeMode4, ___errorMsg5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0, ____dataPath1_marshaled, ___rangeBegin2, ___rangeEnd3, ___outRangeMode4, ___errorMsg5);
	#endif

	// Marshaling cleanup of parameter '___dataPath1' native representation
	il2cpp_codegen_marshal_free(____dataPath1_marshaled);
	____dataPath1_marshaled = NULL;

	return returnValue;
}
// System.Void unity4dv.Bridge4DS::DestroySequence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_DestroySequence_mF22FE9B1F3072614C655466A8B6D0DF84A9251D4 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "DestroySequence", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(DestroySequence)(___key0);
	#else
	il2cppPInvokeFunc(___key0);
	#endif

}
// System.Void unity4dv.Bridge4DS::Play(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_Play_mC5D702708221D1A96ED06367F488673EA7240564 (int32_t ___key0, bool ___on1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "Play", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(Play)(___key0, static_cast<int32_t>(___on1));
	#else
	il2cppPInvokeFunc(___key0, static_cast<int32_t>(___on1));
	#endif

}
// System.Void unity4dv.Bridge4DS::Stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_Stop_m8C4E02C699AD4CACDAFB3E6B89D16BBFFF965698 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "Stop", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(Stop)(___key0);
	#else
	il2cppPInvokeFunc(___key0);
	#endif

}
// System.Void unity4dv.Bridge4DS::StartBuffering(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_StartBuffering_m5F52BA0C03F700F17FB7AAC027F9005B8FAF0263 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "StartBuffering", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(StartBuffering)(___key0);
	#else
	il2cppPInvokeFunc(___key0);
	#endif

}
// System.Int32 unity4dv.Bridge4DS::UpdateModel(System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_UpdateModel_m53B448AB746D781B1EADA62DE13B76A8C9DD8FD1 (int32_t ___key0, intptr_t ___ptrVertices1, intptr_t ___ptrUVs2, intptr_t ___ptrTriangles3, intptr_t ___texture4, intptr_t ___normals5, intptr_t ___colors6, int32_t ___lastModelId7, int32_t* ___nbVertices8, int32_t* ___nbTriangles9, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, int32_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "UpdateModel", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UpdateModel)(___key0, ___ptrVertices1, ___ptrUVs2, ___ptrTriangles3, ___texture4, ___normals5, ___colors6, ___lastModelId7, ___nbVertices8, ___nbTriangles9);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0, ___ptrVertices1, ___ptrUVs2, ___ptrTriangles3, ___texture4, ___normals5, ___colors6, ___lastModelId7, ___nbVertices8, ___nbTriangles9);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetTextureSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetTextureSize_m73C03581060CF9D4E31C87B7E4D16ED3334E3471 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetTextureSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTextureSize)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetTextureEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetTextureEncoding_m2B3ED495444FDFCFBDB45BB6CCBFDAC28529810D (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetTextureEncoding", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTextureEncoding)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetSequenceMaxVertices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceMaxVertices_mC311B8F715217583E702180A18FFFD52A2D35271 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetSequenceMaxVertices", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSequenceMaxVertices)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetSequenceMaxTriangles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceMaxTriangles_m717806FFB33ED4FD1943831D463322647AFD39FB (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetSequenceMaxTriangles", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSequenceMaxTriangles)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Single unity4dv.Bridge4DS::GetSequenceFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bridge4DS_GetSequenceFramerate_m0FB3873F82F3BB3F6DBCE1EA3847816207572FFE (int32_t ___key0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetSequenceFramerate", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(GetSequenceFramerate)(___key0);
	#else
	float returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetSequenceNbFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceNbFrames_mC240F0FD20CF75717E91E8743CE54C080848F7CA (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetSequenceNbFrames", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSequenceNbFrames)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetSequenceCurrentFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetSequenceCurrentFrame_mCB0FBF7D7EE567771F59EA12A474CA7C639E51CE (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetSequenceCurrentFrame", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSequenceCurrentFrame)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Void unity4dv.Bridge4DS::GotoFrame(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_GotoFrame_m808A2D57B7689E4D808B2C1C46E78CA64740DA4D (int32_t ___key0, int32_t ___frame1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GotoFrame", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(GotoFrame)(___key0, ___frame1);
	#else
	il2cppPInvokeFunc(___key0, ___frame1);
	#endif

}
// System.Void unity4dv.Bridge4DS::SetSpeed(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetSpeed_m4FE1B4DC6786AEFC6DBB0AA6117A636F2173D90B (int32_t ___key0, float ___speedRatio1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "SetSpeed", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetSpeed)(___key0, ___speedRatio1);
	#else
	il2cppPInvokeFunc(___key0, ___speedRatio1);
	#endif

}
// System.Int32 unity4dv.Bridge4DS::GetChunkBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetChunkBufferSize_m1EBB1C3B21A10D88088D51289F1BCBB3737BEF11 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetChunkBufferSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetChunkBufferSize)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetMeshBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetMeshBufferSize_mBA741CD40DF9A93E72CC6CF4ECA0513AAB8E1AE1 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetMeshBufferSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetMeshBufferSize)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Void unity4dv.Bridge4DS::SetChunkBufferMaxSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetChunkBufferMaxSize_m0A28953FEE72C88412369D5C4E9DF0D577D7CC35 (int32_t ___key0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "SetChunkBufferMaxSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetChunkBufferMaxSize)(___key0, ___size1);
	#else
	il2cppPInvokeFunc(___key0, ___size1);
	#endif

}
// System.Void unity4dv.Bridge4DS::SetMeshBufferMaxSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetMeshBufferMaxSize_m89DD946D32AF43AE92CE1B76D0E93EE7ED99EC16 (int32_t ___key0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "SetMeshBufferMaxSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetMeshBufferMaxSize)(___key0, ___size1);
	#else
	il2cppPInvokeFunc(___key0, ___size1);
	#endif

}
// System.Int32 unity4dv.Bridge4DS::GetHTTPDownloadSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetHTTPDownloadSize_m3AA7462740439BFF355E63E20EBDDA1A481A2F96 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetHTTPDownloadSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetHTTPDownloadSize)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Void unity4dv.Bridge4DS::SetHTTPDownloadSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetHTTPDownloadSize_mDCEEEED367B9B81995CB7BED99731A84F8843332 (int32_t ___key0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "SetHTTPDownloadSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetHTTPDownloadSize)(___key0, ___size1);
	#else
	il2cppPInvokeFunc(___key0, ___size1);
	#endif

}
// System.Boolean unity4dv.Bridge4DS::GetHTTPKeepInCache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bridge4DS_GetHTTPKeepInCache_m6889ACACE2DC33304B2C97D710C7EDA888DC8225 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetHTTPKeepInCache", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetHTTPKeepInCache)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void unity4dv.Bridge4DS::SetHTTPKeepInCache(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetHTTPKeepInCache_m6E9E0C3FCE3CE9AD5E99EDBC64FD320423BF742A (int32_t ___key0, bool ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "SetHTTPKeepInCache", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetHTTPKeepInCache)(___key0, static_cast<int32_t>(___val1));
	#else
	il2cppPInvokeFunc(___key0, static_cast<int32_t>(___val1));
	#endif

}
// System.Int64 unity4dv.Bridge4DS::GetHTTPCacheSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Bridge4DS_GetHTTPCacheSize_m252A672FAF34D5465CC6A0836B992A3394D17040 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetHTTPCacheSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(GetHTTPCacheSize)(___key0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Void unity4dv.Bridge4DS::SetHTTPCacheSize(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_SetHTTPCacheSize_m4BD4CD13E4FDD29CD3C68627AA82A1358475B305 (int32_t ___key0, int64_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "SetHTTPCacheSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetHTTPCacheSize)(___key0, ___size1);
	#else
	il2cppPInvokeFunc(___key0, ___size1);
	#endif

}
// System.Void unity4dv.Bridge4DS::GetAudioBuffer(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_GetAudioBuffer_mE0353B98BB14C85DC2BBFB72749C340234B63AE0 (int32_t ___key0, intptr_t ___samples1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetAudioBuffer", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetAudioBuffer)(___key0, ___samples1);
	#else
	il2cppPInvokeFunc(___key0, ___samples1);
	#endif

}
// System.Int32 unity4dv.Bridge4DS::GetAudioBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioBufferSize_m9864A1B56678E2B0E40C9D6CAFB37D5A6A7204A1 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetAudioBufferSize", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAudioBufferSize)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetAudioNbSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioNbSamples_mAF1A95FA57C8D3C25835415D9766ABF49A5737F0 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetAudioNbSamples", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAudioNbSamples)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetAudioNbChannels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioNbChannels_m3A0021D950C912C16DF071347574293D8120322A (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetAudioNbChannels", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAudioNbChannels)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Int32 unity4dv.Bridge4DS::GetAudioSampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bridge4DS_GetAudioSampleRate_m81AE0358B85D77BA02EC36D3AB10475CCB1F604B (int32_t ___key0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "GetAudioSampleRate", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAudioSampleRate)(___key0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___key0);
	#endif

	return returnValue;
}
// System.Void unity4dv.Bridge4DS::AddDXTSupport(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_AddDXTSupport_mEEED208ABB62672D280B00F08B797A5757D82076 (int32_t ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "AddDXTSupport", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(AddDXTSupport)(___key0);
	#else
	il2cppPInvokeFunc(___key0);
	#endif

}
// System.Void unity4dv.Bridge4DS::AddASTCSupport(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS_AddASTCSupport_m41197A3604EA9A58511803916E20B322EA62A75A (int32_t ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("BridgeCodec4DS"), "AddASTCSupport", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_BridgeCodec4DS_INTERNAL
	reinterpret_cast<PInvokeFunc>(AddASTCSupport)(___key0);
	#else
	il2cppPInvokeFunc(___key0);
	#endif

}
// System.Void unity4dv.Bridge4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge4DS__ctor_mE4B194AA9B0AC7437313270057E506B3C5D61D1B (Bridge4DS_t531D3A3E9A2F2EB7667052C3D809E2C4A2E8A923 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// unity4dv.DataSource4DS unity4dv.DataSource4DS::CreateDataSource(System.Int32,System.String,System.Boolean,System.String,System.Int32,System.Int32,unity4dv.OUT_RANGE_MODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * DataSource4DS_CreateDataSource_m96C41FEB4FB7BBFCAED9FE4A04D6F27CDB416723 (int32_t ___key0, String_t* ___sequenceName1, bool ___dataInStreamingAssets2, String_t* ___mainPath3, int32_t ___activeRangeBegin4, int32_t ___activeRangeLastFrame5, int32_t ___outRangeMode6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052EBED23ACF6C9AE08A68BB015AE836A45F2B2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral184DED9BD97ADD9B93353A30A8B9A128977F8042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58F79C2CBFA4D6355EC31B25108F59CF9A28C106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E2AF474B91111E4B30F59E74DB0C3BE0455DFA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA99F3A35F9871335422D453B40BB2F50AADFC873);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD58423BBD82AD93EBB7BBA15BC528743D60C8E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * V_3 = NULL;
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * V_4 = NULL;
	DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * V_5 = NULL;
	int32_t G_B4_0 = 0;
	{
		// bool success = false;
		V_0 = (bool)0;
		// string errorMsg = new string(' ',300);
		String_t* L_0;
		L_0 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((int32_t)32), ((int32_t)300), /*hidden argument*/NULL);
		V_1 = L_0;
		// if (!(sequenceName.StartsWith("http") || sequenceName.StartsWith("holosys")) && key == 0 && dataInStreamingAssets)
		String_t* L_1 = ___sequenceName1;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_1, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___sequenceName1;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_3, _stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = ___key0;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		bool L_6 = ___dataInStreamingAssets2;
		if (!((int32_t)((int32_t)G_B4_0&(int32_t)L_6)))
		{
			goto IL_0122;
		}
	}
	{
		// rootpath = Application.streamingAssetsPath + "/" + mainPath + sequenceName;
		String_t* L_7;
		L_7 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_8 = ___mainPath3;
		String_t* L_9 = ___sequenceName1;
		String_t* L_10;
		L_10 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (rootpath.StartsWith("jar"))
		String_t* L_11 = V_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_11, _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00f3;
		}
	}
	{
		// WWW www = new WWW(rootpath);
		String_t* L_13 = V_2;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_14 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_14, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
	}

IL_0061:
	{
		// while (!www.isDone) ;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_15 = V_4;
		NullCheck(L_15);
		bool L_16;
		L_16 = WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// if (!string.IsNullOrEmpty(www.error))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_17 = V_4;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.LogError("PATH : " + rootpath);
		String_t* L_20 = V_2;
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral052EBED23ACF6C9AE08A68BB015AE836A45F2B2F, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_21, /*hidden argument*/NULL);
		// Debug.LogError("Can't read data in streaming assets: "+www.error);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_22 = V_4;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD58423BBD82AD93EBB7BBA15BC528743D60C8E55, L_23, /*hidden argument*/NULL);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_24, /*hidden argument*/NULL);
		// }
		goto IL_00f3;
	}

IL_00a0:
	{
		// rootpath = Application.persistentDataPath + "/" + sequenceName;
		String_t* L_25;
		L_25 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_26 = ___sequenceName1;
		String_t* L_27;
		L_27 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_25, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// if (!System.IO.File.Exists(rootpath))
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		// Debug.Log("4DVIEWS: NEW Roopath: " + rootpath);
		String_t* L_30 = V_2;
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8E2AF474B91111E4B30F59E74DB0C3BE0455DFA3, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
		// System.IO.FileStream fs = System.IO.File.Create(rootpath);
		String_t* L_32 = V_2;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_33;
		L_33 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(L_32, /*hidden argument*/NULL);
		// fs.Write(www.bytes, 0, www.bytesDownloaded);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_34 = L_33;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_35 = V_4;
		NullCheck(L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
		L_36 = WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A(L_35, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_37 = V_4;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = WWW_get_bytesDownloaded_mD4AF80DF37B74950C738539F6A69B12C7D94F1E5(L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_36, 0, L_38);
		// Debug.Log("4DVIEWS: data copied");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral58F79C2CBFA4D6355EC31B25108F59CF9A28C106, /*hidden argument*/NULL);
		// fs.Dispose();
		NullCheck(L_34);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_34, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// DataSource4DS instance = new DataSource4DS(key, rootpath, activeRangeBegin, activeRangeLastFrame, outRangeMode, ref success, ref errorMsg);
		int32_t L_39 = ___key0;
		String_t* L_40 = V_2;
		int32_t L_41 = ___activeRangeBegin4;
		int32_t L_42 = ___activeRangeLastFrame5;
		int32_t L_43 = ___outRangeMode6;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_44 = (DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 *)il2cpp_codegen_object_new(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42_il2cpp_TypeInfo_var);
		DataSource4DS__ctor_m8299B908CE6A3A95D8767AA914871E2B85D84B0E(L_44, L_39, L_40, L_41, L_42, L_43, (bool*)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		V_3 = L_44;
		// if (success)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_010a;
		}
	}
	{
		// return instance;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_46 = V_3;
		return L_46;
	}

IL_010a:
	{
		// Debug.LogError("FDV Error: cannot open 4ds file at location " + rootpath);
		String_t* L_47 = V_2;
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA99F3A35F9871335422D453B40BB2F50AADFC873, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_48, /*hidden argument*/NULL);
		// Debug.LogError(errorMsg);
		String_t* L_49 = V_1;
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_49, /*hidden argument*/NULL);
		// return null;
		return (DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 *)NULL;
	}

IL_0122:
	{
		// if (sequenceName.StartsWith("http") || sequenceName.StartsWith("holosys"))
		String_t* L_50 = ___sequenceName1;
		NullCheck(L_50);
		bool L_51;
		L_51 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_50, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_013c;
		}
	}
	{
		String_t* L_52 = ___sequenceName1;
		NullCheck(L_52);
		bool L_53;
		L_53 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_52, _stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0140;
		}
	}

IL_013c:
	{
		// rootpath = sequenceName;
		String_t* L_54 = ___sequenceName1;
		V_2 = L_54;
		goto IL_0148;
	}

IL_0140:
	{
		// rootpath = mainPath + sequenceName;
		String_t* L_55 = ___mainPath3;
		String_t* L_56 = ___sequenceName1;
		String_t* L_57;
		L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_55, L_56, /*hidden argument*/NULL);
		V_2 = L_57;
	}

IL_0148:
	{
		// DataSource4DS instance = new DataSource4DS(key, rootpath, activeRangeBegin, activeRangeLastFrame, outRangeMode, ref success, ref errorMsg);
		int32_t L_58 = ___key0;
		String_t* L_59 = V_2;
		int32_t L_60 = ___activeRangeBegin4;
		int32_t L_61 = ___activeRangeLastFrame5;
		int32_t L_62 = ___outRangeMode6;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_63 = (DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 *)il2cpp_codegen_object_new(DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42_il2cpp_TypeInfo_var);
		DataSource4DS__ctor_m8299B908CE6A3A95D8767AA914871E2B85D84B0E(L_63, L_58, L_59, L_60, L_61, L_62, (bool*)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		V_5 = L_63;
		// if (success)
		bool L_64 = V_0;
		if (!L_64)
		{
			goto IL_0161;
		}
	}
	{
		// return instance;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_65 = V_5;
		return L_65;
	}

IL_0161:
	{
		// Debug.LogError("FDV Error: cannot open file at location " + rootpath);
		String_t* L_66 = V_2;
		String_t* L_67;
		L_67 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral184DED9BD97ADD9B93353A30A8B9A128977F8042, L_66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_67, /*hidden argument*/NULL);
		// Debug.LogError(errorMsg);
		String_t* L_68 = V_1;
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_68, /*hidden argument*/NULL);
		// return null;
		return (DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 *)NULL;
	}
}
// System.Void unity4dv.DataSource4DS::.ctor(System.Int32,System.String,System.Int32,System.Int32,unity4dv.OUT_RANGE_MODE,System.Boolean&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource4DS__ctor_m8299B908CE6A3A95D8767AA914871E2B85D84B0E (DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * __this, int32_t ___key0, String_t* ___rootpath1, int32_t ___activeRangeBegin2, int32_t ___activeRangeEnd3, int32_t ___outRangeMode4, bool* ___success5, String_t** ___errorMsg6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// private DataSource4DS(int key, string rootpath, int activeRangeBegin, int activeRangeEnd, OUT_RANGE_MODE outRangeMode, ref bool success, ref string errorMsg)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.FDVUUID = 0;
		__this->set_FDVUUID_0(0);
		// success = true;
		bool* L_0 = ___success5;
		*((int8_t*)L_0) = (int8_t)1;
		// GCHandle errorMsgHandle = GCHandle.Alloc(errorMsg, GCHandleType.Pinned);
		String_t** L_1 = ___errorMsg6;
		String_t* L_2 = *((String_t**)L_1);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3;
		L_3 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(L_2, 3, /*hidden argument*/NULL);
		V_0 = L_3;
		// this.FDVUUID = Bridge4DS.CreateSequence(key, rootpath, activeRangeBegin, activeRangeEnd, outRangeMode, errorMsgHandle.AddrOfPinnedObject());
		int32_t L_4 = ___key0;
		String_t* L_5 = ___rootpath1;
		int32_t L_6 = ___activeRangeBegin2;
		int32_t L_7 = ___activeRangeEnd3;
		int32_t L_8 = ___outRangeMode4;
		intptr_t L_9;
		L_9 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Bridge4DS_CreateSequence_m36534B0630E8A3B3436952A4C3E5D6BCF25AADD6(L_4, L_5, L_6, L_7, L_8, (intptr_t)L_9, /*hidden argument*/NULL);
		__this->set_FDVUUID_0(L_10);
		// errorMsg = Marshal.PtrToStringAnsi(errorMsgHandle.AddrOfPinnedObject());
		String_t** L_11 = ___errorMsg6;
		intptr_t L_12;
		L_12 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_12, /*hidden argument*/NULL);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_13);
		// if (this.FDVUUID == 0)
		int32_t L_14 = __this->get_FDVUUID_0();
		if (L_14)
		{
			goto IL_004f;
		}
	}
	{
		// success = false;
		bool* L_15 = ___success5;
		*((int8_t*)L_15) = (int8_t)0;
	}

IL_004f:
	{
		// if (success)
		bool* L_16 = ___success5;
		int32_t L_17 = *((uint8_t*)L_16);
		if (!L_17)
		{
			goto IL_019a;
		}
	}
	{
		// Bridge4DS.AddDXTSupport(this.FDVUUID);
		int32_t L_18 = __this->get_FDVUUID_0();
		Bridge4DS_AddDXTSupport_mEEED208ABB62672D280B00F08B797A5757D82076(L_18, /*hidden argument*/NULL);
		// this.TextureSize = Bridge4DS.GetTextureSize(this.FDVUUID);
		int32_t L_19 = __this->get_FDVUUID_0();
		int32_t L_20;
		L_20 = Bridge4DS_GetTextureSize_m73C03581060CF9D4E31C87B7E4D16ED3334E3471(L_19, /*hidden argument*/NULL);
		__this->set_TextureSize_2(L_20);
		// if (this.TextureSize == 0)
		int32_t L_21 = __this->get_TextureSize_2();
		if (L_21)
		{
			goto IL_0086;
		}
	}
	{
		// this.TextureSize = 1024;    //put 1024 by default => will crash if we have 2048 texture and it's not written in xml fi
		__this->set_TextureSize_2(((int32_t)1024));
	}

IL_0086:
	{
		// int textureEncoding = Bridge4DS.GetTextureEncoding(this.FDVUUID);
		int32_t L_22 = __this->get_FDVUUID_0();
		int32_t L_23;
		L_23 = Bridge4DS_GetTextureEncoding_m2B3ED495444FDFCFBDB45BB6CCBFDAC28529810D(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)120))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_25 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0115;
			}
			case 1:
			{
				goto IL_0138;
			}
			case 2:
			{
				goto IL_0138;
			}
			case 3:
			{
				goto IL_010b;
			}
			case 4:
			{
				goto IL_00f7;
			}
			case 5:
			{
				goto IL_0101;
			}
			case 6:
			{
				goto IL_0138;
			}
			case 7:
			{
				goto IL_011f;
			}
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)100))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)120))))
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_0138;
	}

IL_00cb:
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)131))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)130))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)131))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_0138;
	}

IL_00e5:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)164))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)190))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0138;
	}

IL_00f7:
	{
		// this.TextureFormat = TextureFormat.ETC_RGB4;
		__this->set_TextureFormat_1(((int32_t)34));
		// break;
		goto IL_0140;
	}

IL_0101:
	{
		// this.TextureFormat = TextureFormat.PVRTC_RGB4;
		__this->set_TextureFormat_1(((int32_t)32));
		// break;
		goto IL_0140;
	}

IL_010b:
	{
		// this.TextureFormat = TextureFormat.PVRTC_RGB2;
		__this->set_TextureFormat_1(((int32_t)30));
		// break;
		goto IL_0140;
	}

IL_0115:
	{
		// this.TextureFormat = TextureFormat.DXT1;
		__this->set_TextureFormat_1(((int32_t)10));
		// break;
		goto IL_0140;
	}

IL_011f:
	{
		// this.TextureFormat = TextureFormat.RGBA32;
		__this->set_TextureFormat_1(4);
		// break;
		goto IL_0140;
	}

IL_0128:
	{
		// this.TextureFormat = 0;
		__this->set_TextureFormat_1(0);
		// this.ColorPerVertex = true;
		__this->set_ColorPerVertex_3((bool)1);
		// break;
		goto IL_0140;
	}

IL_0138:
	{
		// this.TextureFormat = TextureFormat.DXT1;
		__this->set_TextureFormat_1(((int32_t)10));
	}

IL_0140:
	{
		// this.MaxVertices = Bridge4DS.GetSequenceMaxVertices(this.FDVUUID);
		int32_t L_33 = __this->get_FDVUUID_0();
		int32_t L_34;
		L_34 = Bridge4DS_GetSequenceMaxVertices_mC311B8F715217583E702180A18FFFD52A2D35271(L_33, /*hidden argument*/NULL);
		__this->set_MaxVertices_4(L_34);
		// if (this.MaxVertices == 0)
		int32_t L_35 = __this->get_MaxVertices_4();
		if (L_35)
		{
			goto IL_0164;
		}
	}
	{
		// this.MaxVertices = 65535;
		__this->set_MaxVertices_4(((int32_t)65535));
	}

IL_0164:
	{
		// this.MaxTriangles = Bridge4DS.GetSequenceMaxTriangles(this.FDVUUID);
		int32_t L_36 = __this->get_FDVUUID_0();
		int32_t L_37;
		L_37 = Bridge4DS_GetSequenceMaxTriangles_m717806FFB33ED4FD1943831D463322647AFD39FB(L_36, /*hidden argument*/NULL);
		__this->set_MaxTriangles_5(L_37);
		// if (this.MaxTriangles == 0)
		int32_t L_38 = __this->get_MaxTriangles_5();
		if (L_38)
		{
			goto IL_0188;
		}
	}
	{
		// this.MaxTriangles = 65535;
		__this->set_MaxTriangles_5(((int32_t)65535));
	}

IL_0188:
	{
		// this.FrameRate = (float)Bridge4DS.GetSequenceFramerate(this.FDVUUID);
		int32_t L_39 = __this->get_FDVUUID_0();
		float L_40;
		L_40 = Bridge4DS_GetSequenceFramerate_m0FB3873F82F3BB3F6DBCE1EA3847816207572FFE(L_39, /*hidden argument*/NULL);
		__this->set_FrameRate_6(((float)((float)L_40)));
	}

IL_019a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.DirectionalIndicatorController::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalIndicatorController_OnBecameInvisible_m0E4A338FC4C70E296D1B8286AA2FD9E833D947C2 (DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.DirectionalIndicatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalIndicatorController__ctor_mD5EA1948C4529FAFD1E496942ADAFBEC7E4A8018 (DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_set_IsPunEnabled_mF24170F7F9A608F7414FFF2ABF39EE706BC434F5 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->set_isPunEnabled_7(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Start_mE07825796104C61B74ED0AD2D5A5CC38E0BAAE6D (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_defaultPositions_5();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_000e:
		{
			// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_startingPos_9();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_1;
			NullCheck(L_4);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_3, L_6, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		}

IL_002c:
		{
			// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
			bool L_7;
			L_7 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_explodedPositions_6();
		NullCheck(L_8);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_9;
		L_9 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_8, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0053:
		{
			// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
			L_10 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_2 = L_10;
			// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = __this->get_explodedPos_8();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
			NullCheck(L_12);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
			L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
			NullCheck(L_11);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_11, L_14, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		}

IL_0071:
		{
			// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
			bool L_15;
			L_15 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0053;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Update_mC1FADA194292F3EBAE4E56B1AE64EB407E87F2F8 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (isInDefaultPosition)
		bool L_0 = __this->get_isInDefaultPosition_10();
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_000c:
	{
		// defaultPositions[i].transform.localPosition = Vector3.Lerp(
		//     defaultPositions[i].transform.localPosition,
		//     explodedPos[i], speed);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_defaultPositions_5();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_defaultPositions_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_10 = __this->get_explodedPos_8();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_13 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_9, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_4, L_14, /*hidden argument*/NULL);
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0053:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_16 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_17 = __this->get_defaultPositions_5();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_17, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_0062:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		V_1 = 0;
		goto IL_00ad;
	}

IL_0066:
	{
		// defaultPositions[i].transform.localPosition = Vector3.Lerp(
		//     defaultPositions[i].transform.localPosition,
		//     startingPos[i], speed);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_defaultPositions_5();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = __this->get_defaultPositions_5();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_26, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_28 = __this->get_startingPos_9();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_31 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_27, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_22, L_32, /*hidden argument*/NULL);
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ad:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_34 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_35 = __this->get_defaultPositions_5();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_35, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0066;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::ToggleExplodedView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_ToggleExplodedView_m74189DE87897AB5232FA72B72753903F85952972 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * G_B3_0 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->get_isPunEnabled_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnToggleExplodedView?.Invoke();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_1 = __this->get_OnToggleExplodedView_11();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C(G_B3_0, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// Toggle();
		ExplodeViewController_Toggle_m321B6176A1D390111076B1919CC2E44D6DB7E5E2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Toggle_m321B6176A1D390111076B1919CC2E44D6DB7E5E2 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	{
		// isInDefaultPosition = !isInDefaultPosition;
		bool L_0 = __this->get_isInDefaultPosition_10();
		__this->set_isInDefaultPosition_10((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::add_OnToggleExplodedView(MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_add_OnToggleExplodedView_mA25D0A8E94652AC021B35E5C2591EFB4A65EFAE0 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_0 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_1 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_2 = NULL;
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_0 = __this->get_OnToggleExplodedView_11();
		V_0 = L_0;
	}

IL_0007:
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_1 = V_0;
		V_1 = L_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_2 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)CastclassSealed((RuntimeObject*)L_4, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var));
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 ** L_5 = __this->get_address_of_OnToggleExplodedView_11();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_6 = V_2;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_7 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *>((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 **)L_5, L_6, L_7);
		V_0 = L_8;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_9 = V_0;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_9) == ((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::remove_OnToggleExplodedView(MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_remove_OnToggleExplodedView_mF561824B96EAA8FD7770BEA6265349C3A65B8ECA (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_0 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_1 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_2 = NULL;
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_0 = __this->get_OnToggleExplodedView_11();
		V_0 = L_0;
	}

IL_0007:
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_1 = V_0;
		V_1 = L_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_2 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)CastclassSealed((RuntimeObject*)L_4, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var));
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 ** L_5 = __this->get_address_of_OnToggleExplodedView_11();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_6 = V_2;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_7 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *>((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 **)L_5, L_6, L_7);
		V_0 = L_8;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_9 = V_0;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_9) == ((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController__ctor_mE72637A87DA07F869CC7C9FD74591AE0C8F60176 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float speed = 0.1f;
		__this->set_speed_4((0.100000001f));
		// private readonly List<Vector3> explodedPos = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_explodedPos_8(L_0);
		// private readonly List<Vector3> startingPos = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_1, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_startingPos_9(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlyCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyCamera_Update_mB647CE2395A594DDA61DFCBC6ADEAC4900B94E2E (FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// lastMouse = Input.mousePosition - lastMouse;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_lastMouse_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_lastMouse_8(L_2);
		// lastMouse = new Vector3(-lastMouse.y * camSens, lastMouse.x * camSens, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_lastMouse_8();
		float L_4 = L_3->get_y_3();
		float L_5 = __this->get_camSens_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_lastMouse_8();
		float L_7 = L_6->get_x_2();
		float L_8 = __this->get_camSens_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)((-L_4)), (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (0.0f), /*hidden argument*/NULL);
		__this->set_lastMouse_8(L_9);
		// lastMouse = new Vector3(transform.eulerAngles.x + lastMouse.x, transform.eulerAngles.y + lastMouse.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_lastMouse_8();
		float L_14 = L_13->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_lastMouse_8();
		float L_19 = L_18->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((float)il2cpp_codegen_add((float)L_12, (float)L_14)), ((float)il2cpp_codegen_add((float)L_17, (float)L_19)), (0.0f), /*hidden argument*/NULL);
		__this->set_lastMouse_8(L_20);
		// transform.eulerAngles = lastMouse;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_lastMouse_8();
		NullCheck(L_21);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_21, L_22, /*hidden argument*/NULL);
		// lastMouse = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_lastMouse_8(L_23);
		// Vector3 p = GetBaseInput(); //take WASD input from user
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = FlyCamera_GetBaseInput_mE237DA7093F91878530126D111176B134AF822D2(__this, /*hidden argument*/NULL);
		V_0 = L_24;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_25;
		L_25 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_014e;
		}
	}
	{
		// totalRun += Time.deltaTime;
		float L_26 = __this->get_totalRun_9();
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_totalRun_9(((float)il2cpp_codegen_add((float)L_26, (float)L_27)));
		// p = p * totalRun * shiftAdd;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_0;
		float L_29 = __this->get_totalRun_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_shiftAdd_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		// p.x = Mathf.Clamp(p.x, -maxShift, maxShift);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		float L_34 = L_33.get_x_2();
		float L_35 = __this->get_maxShift_6();
		float L_36 = __this->get_maxShift_6();
		float L_37;
		L_37 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_34, ((-L_35)), L_36, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_37);
		// p.y = Mathf.Clamp(p.y, -maxShift, maxShift);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_0;
		float L_39 = L_38.get_y_3();
		float L_40 = __this->get_maxShift_6();
		float L_41 = __this->get_maxShift_6();
		float L_42;
		L_42 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_39, ((-L_40)), L_41, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_42);
		// p.z = Mathf.Clamp(p.z, -maxShift, maxShift);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_0;
		float L_44 = L_43.get_z_4();
		float L_45 = __this->get_maxShift_6();
		float L_46 = __this->get_maxShift_6();
		float L_47;
		L_47 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_44, ((-L_45)), L_46, /*hidden argument*/NULL);
		(&V_0)->set_z_4(L_47);
		// }
		goto IL_017c;
	}

IL_014e:
	{
		// totalRun = Mathf.Clamp(totalRun * 0.5f, 1f, 1000f);
		float L_48 = __this->get_totalRun_9();
		float L_49;
		L_49 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)L_48, (float)(0.5f))), (1.0f), (1000.0f), /*hidden argument*/NULL);
		__this->set_totalRun_9(L_49);
		// p = p * mainSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_0;
		float L_51 = __this->get_mainSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_50, L_51, /*hidden argument*/NULL);
		V_0 = L_52;
	}

IL_017c:
	{
		// p = p * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_0;
		float L_54;
		L_54 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_53, L_54, /*hidden argument*/NULL);
		V_0 = L_55;
		// Vector3 newPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		V_1 = L_57;
		// if (Input.GetKey(KeyCode.Space))
		bool L_58;
		L_58 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)32), /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01e4;
		}
	}
	{
		// transform.Translate(p);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_0;
		NullCheck(L_59);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_59, L_60, /*hidden argument*/NULL);
		// newPosition.x = transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		float L_63 = L_62.get_x_2();
		(&V_1)->set_x_2(L_63);
		// newPosition.z = transform.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
		float L_66 = L_65.get_z_4();
		(&V_1)->set_z_4(L_66);
		// transform.position = newPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = V_1;
		NullCheck(L_67);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_67, L_68, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01e4:
	{
		// transform.Translate(p);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_0;
		NullCheck(L_69);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_69, L_70, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 FlyCamera::GetBaseInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FlyCamera_GetBaseInput_mE237DA7093F91878530126D111176B134AF822D2 (FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 p_Velocity = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// p_Velocity += new Vector3(0, 0, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_002c:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4;
		L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// p_Velocity += new Vector3(0, 0, -1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0050:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8;
		L_8 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// p_Velocity += new Vector3(-1, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0074:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12;
		L_12 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		// p_Velocity += new Vector3(1, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_0098:
	{
		// return p_Velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		return L_16;
	}
}
// System.Void FlyCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyCamera__ctor_m2B2576EB7E789F5C3A529771D190B213AD85564C (FlyCamera_t0F7C83E6F594881ABF5D95311D45D45BBA3B3034 * __this, const RuntimeMethod* method)
{
	{
		// public float mainSpeed = 100.0f;
		__this->set_mainSpeed_4((100.0f));
		// public float shiftAdd = 250.0f;
		__this->set_shiftAdd_5((250.0f));
		// public float maxShift = 1000.0f;
		__this->set_maxShift_6((1000.0f));
		// public float camSens = 0.25f;
		__this->set_camSens_7((0.25f));
		// private Vector3 lastMouse = new Vector3(255, 255, 255);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->set_lastMouse_8(L_0);
		// private float totalRun = 1.0f;
		__this->set_totalRun_9((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GetObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_Start_mAFB2FB36F699728BE2E174A660367487BFB4BD43 (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Table_Rigidbody = Table.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Table_6();
		NullCheck(L_0);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		__this->set_Table_Rigidbody_8(L_1);
		// }
		return;
	}
}
// System.Void GetObject::GenerateOpticalModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_GenerateOpticalModel_mE32C3DB8DAB1DD5D105F9FDCDC61489821A89DBA (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 offset = new Vector3(0, 1, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 lensposition = Table.transform.position + offset;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Table_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// GameObject newobject = Instantiate(lens, lensposition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_lens_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newobject.transform.parent = ObjectSet.transform;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_ObjectSet_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetObject::ControlSettingTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_ControlSettingTable_m89ABC5D5E35D56A39984748EF7871A730B8DA90C (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.Find("Open") != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// GameObject.Find("Open").transform.name = "Close";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_3, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, /*hidden argument*/NULL);
		// SettingTable.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_SettingTable_7();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0038:
	{
		// GameObject.Find("Close").transform.name = "Open";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_6, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, /*hidden argument*/NULL);
		// SettingTable.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_SettingTable_7();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetObject::Showtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_Showtable_mB1D692634BDB3DAB50954BA3C7DB20C9CECE2867 (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	{
		// Table.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Table_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// RemoveAllParent();
		GetObject_RemoveAllParent_m218A8DAF485E0D7FF9EDB832590B779B63048D08(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetObject::hiddentable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_hiddentable_m3D54EEA08AA73C8D9FF040779DF709716C23455E (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	{
		// Table.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Table_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetObject::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_Lock_mC0E351E060919F3C2CB159D26CCB4B0993BD412F (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	{
		// Table_Rigidbody.constraints = RigidbodyConstraints.FreezePosition | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_Table_Rigidbody_8();
		NullCheck(L_0);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_0, ((int32_t)126), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetObject::unLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_unLock_mA2ECA3CABE9982E0FE844372F9AA57AD786E8172 (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	{
		// Table_Rigidbody.constraints = RigidbodyConstraints.None;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_Table_Rigidbody_8();
		NullCheck(L_0);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetObject::RemoveAllParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject_RemoveAllParent_m218A8DAF485E0D7FF9EDB832590B779B63048D08 (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < ObjectSet.transform.childCount; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// GameObject removedobject = ObjectSet.transform.GetChild(i).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ObjectSet_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		// Destroy(removedobject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < ObjectSet.transform.childCount; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < ObjectSet.transform.childCount; i++)
		int32_t L_6 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_ObjectSet_4();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GetObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetObject__ctor_m4137E26E3C24EF52561ABDBD944ED3EE7D4240F3 (GetObject_tDC4F4420E68F0D922AA9C07697DD0D1E0DC01B65 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadingBar4DS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBar4DS_Start_mDA210C92C0CF9E0E0267E3D94EDA49240C535063 (LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// background = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_background_11(L_0);
		// if (_plugin4DS.ActiveNbOfFrames > 0)
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_1 = __this->get__plugin4DS_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Plugin4DS_get_ActiveNbOfFrames_m16721140C3D81FFDB14C783385DD57ED07A95775(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// _unit = background.rect.width / _plugin4DS.ActiveNbOfFrames;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_background_11();
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_6 = __this->get__plugin4DS_4();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Plugin4DS_get_ActiveNbOfFrames_m16721140C3D81FFDB14C783385DD57ED07A95775(L_6, /*hidden argument*/NULL);
		__this->set__unit_8(((float)((float)L_5/(float)((float)((float)L_7)))));
		goto IL_0068;
	}

IL_0042:
	{
		// _unit = background.rect.width / _plugin4DS.SequenceNbOfFrames;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_background_11();
		NullCheck(L_8);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		L_9 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_11 = __this->get__plugin4DS_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Plugin4DS_get_SequenceNbOfFrames_m8803DFD2044F28C9B4EAF7178AEFFE93E0C480C0(L_11, /*hidden argument*/NULL);
		__this->set__unit_8(((float)((float)L_10/(float)((float)((float)L_12)))));
	}

IL_0068:
	{
		// _currentFrame.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _unit*2);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = __this->get__currentFrame_5();
		float L_14 = __this->get__unit_8();
		NullCheck(L_13);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_13, 0, ((float)il2cpp_codegen_multiply((float)L_14, (float)(2.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadingBar4DS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBar4DS_Update_m5ECA32DE9AD51FA49D051FC959689A186DB6315A (LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _currentFrame.localPosition = new Vector3((_plugin4DS.CurrentFrame-_plugin4DS.FirstActiveFrame) * _unit, 0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__currentFrame_5();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_1 = __this->get__plugin4DS_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(L_1, /*hidden argument*/NULL);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_3 = __this->get__plugin4DS_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Plugin4DS_get_FirstActiveFrame_mADE4163DE2A26A0F6C32C61588955C16D2E8746F(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get__unit_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_4)))), (float)L_5)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_6, /*hidden argument*/NULL);
		// _meshBuffer.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _unit * _plugin4DS.MeshBufferSize);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get__meshBuffer_6();
		float L_8 = __this->get__unit_8();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_9 = __this->get__plugin4DS_4();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Plugin4DS_get_MeshBufferSize_m2455EC3AE05BF8D3634EC522FB7DEDC7C826E4EC(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_7, 0, ((float)il2cpp_codegen_multiply((float)L_8, (float)((float)((float)L_10)))), /*hidden argument*/NULL);
		// _meshBuffer.localPosition = new Vector3(((_plugin4DS.CurrentFrame - _plugin4DS.FirstActiveFrame) + 1) * _unit, 0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = __this->get__meshBuffer_6();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_12 = __this->get__plugin4DS_4();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(L_12, /*hidden argument*/NULL);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_14 = __this->get__plugin4DS_4();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Plugin4DS_get_FirstActiveFrame_mADE4163DE2A26A0F6C32C61588955C16D2E8746F(L_14, /*hidden argument*/NULL);
		float L_16 = __this->get__unit_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_15)), (int32_t)1)))), (float)L_16)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_17, /*hidden argument*/NULL);
		// float diff = _meshBuffer.localPosition.x + _meshBuffer.rect.size.x - background.rect.size.x;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = __this->get__meshBuffer_6();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21 = __this->get__meshBuffer_6();
		NullCheck(L_21);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22;
		L_22 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = L_23.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_25 = __this->get_background_11();
		NullCheck(L_25);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26;
		L_26 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_28 = L_27.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_20, (float)L_24)), (float)L_28));
		// if (diff > 0)
		float L_29 = V_0;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0157;
		}
	}
	{
		// _meshBuffer.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, (_unit * _plugin4DS.MeshBufferSize ) - diff);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30 = __this->get__meshBuffer_6();
		float L_31 = __this->get__unit_8();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_32 = __this->get__plugin4DS_4();
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Plugin4DS_get_MeshBufferSize_m2455EC3AE05BF8D3634EC522FB7DEDC7C826E4EC(L_32, /*hidden argument*/NULL);
		float L_34 = V_0;
		NullCheck(L_30);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_30, 0, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_33)))), (float)L_34)), /*hidden argument*/NULL);
		// if (mbDuplicate == null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_35 = __this->get_mbDuplicate_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0129;
		}
	}
	{
		// mbDuplicate = Instantiate<RectTransform>(_meshBuffer, this.gameObject.transform);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_37 = __this->get__meshBuffer_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_40;
		L_40 = Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D(L_37, L_39, /*hidden argument*/Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D_RuntimeMethod_var);
		__this->set_mbDuplicate_9(L_40);
	}

IL_0129:
	{
		// mbDuplicate.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, diff);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_41 = __this->get_mbDuplicate_9();
		float L_42 = V_0;
		NullCheck(L_41);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_41, 0, L_42, /*hidden argument*/NULL);
		// mbDuplicate.localPosition = new Vector3(0, 0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_43 = __this->get_mbDuplicate_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_43, L_44, /*hidden argument*/NULL);
		// }
		goto IL_0175;
	}

IL_0157:
	{
		// if (mbDuplicate != null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_45 = __this->get_mbDuplicate_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0175;
		}
	}
	{
		// Destroy(mbDuplicate.gameObject);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_47 = __this->get_mbDuplicate_9();
		NullCheck(L_47);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_48, /*hidden argument*/NULL);
	}

IL_0175:
	{
		// _chunkBuffer.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _unit * _plugin4DS.ChunkBufferSize/2);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_49 = __this->get__chunkBuffer_7();
		float L_50 = __this->get__unit_8();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_51 = __this->get__plugin4DS_4();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = Plugin4DS_get_ChunkBufferSize_m2158FCD26E9C8D1B8DB2A2EC2E270897AB5EE234(L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_49, 0, ((float)((float)((float)il2cpp_codegen_multiply((float)L_50, (float)((float)((float)L_52))))/(float)(2.0f))), /*hidden argument*/NULL);
		// _chunkBuffer.localPosition = new Vector3(_meshBuffer.localPosition.x + _meshBuffer.rect.size.x, 0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_53 = __this->get__chunkBuffer_7();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_54 = __this->get__meshBuffer_6();
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_57 = __this->get__meshBuffer_6();
		NullCheck(L_57);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_58;
		L_58 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_57, /*hidden argument*/NULL);
		V_1 = L_58;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_60 = L_59.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_61), ((float)il2cpp_codegen_add((float)L_56, (float)L_60)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_53, L_61, /*hidden argument*/NULL);
		// diff = _chunkBuffer.localPosition.x + _chunkBuffer.rect.size.x - background.rect.size.x;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_62 = __this->get__chunkBuffer_7();
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_65 = __this->get__chunkBuffer_7();
		NullCheck(L_65);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_66;
		L_66 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_65, /*hidden argument*/NULL);
		V_1 = L_66;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_68 = L_67.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_69 = __this->get_background_11();
		NullCheck(L_69);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_70;
		L_70 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_69, /*hidden argument*/NULL);
		V_1 = L_70;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		L_71 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_72 = L_71.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_64, (float)L_68)), (float)L_72));
		// if (diff > 0)
		float L_73 = V_0;
		if ((!(((float)L_73) > ((float)(0.0f)))))
		{
			goto IL_02a6;
		}
	}
	{
		// _chunkBuffer.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, (_unit * _plugin4DS.ChunkBufferSize / 2) - diff);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_74 = __this->get__chunkBuffer_7();
		float L_75 = __this->get__unit_8();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_76 = __this->get__plugin4DS_4();
		NullCheck(L_76);
		int32_t L_77;
		L_77 = Plugin4DS_get_ChunkBufferSize_m2158FCD26E9C8D1B8DB2A2EC2E270897AB5EE234(L_76, /*hidden argument*/NULL);
		float L_78 = V_0;
		NullCheck(L_74);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_74, 0, ((float)il2cpp_codegen_subtract((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_75, (float)((float)((float)L_77))))/(float)(2.0f))), (float)L_78)), /*hidden argument*/NULL);
		// if (cbDuplicate == null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_79 = __this->get_cbDuplicate_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_79, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_0279;
		}
	}
	{
		// cbDuplicate = Instantiate<RectTransform>(_chunkBuffer, this.gameObject.transform);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_81 = __this->get__chunkBuffer_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82;
		L_82 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_84;
		L_84 = Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D(L_81, L_83, /*hidden argument*/Object_Instantiate_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_mDBA114B7EA5EB55373C2B27FBA5F7C87AA58B65D_RuntimeMethod_var);
		__this->set_cbDuplicate_10(L_84);
	}

IL_0279:
	{
		// cbDuplicate.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, diff);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_85 = __this->get_cbDuplicate_10();
		float L_86 = V_0;
		NullCheck(L_85);
		RectTransform_SetSizeWithCurrentAnchors_m69641A375B011EA52C69C5E2553406FFB819F44B(L_85, 0, L_86, /*hidden argument*/NULL);
		// cbDuplicate.localPosition = new Vector3(0, 0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_87 = __this->get_cbDuplicate_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_88), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_87, L_88, /*hidden argument*/NULL);
		// }
		return;
	}

IL_02a6:
	{
		// if (cbDuplicate != null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_89 = __this->get_cbDuplicate_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_89, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_02c4;
		}
	}
	{
		// Destroy(cbDuplicate.gameObject);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_91 = __this->get_cbDuplicate_10();
		NullCheck(L_91);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92;
		L_92 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_91, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_92, /*hidden argument*/NULL);
	}

IL_02c4:
	{
		// }
		return;
	}
}
// System.Void LoadingBar4DS::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBar4DS_onClick_m37955FAA2E49791F38F725E22D129846DC9572CB (LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_unit == 0)
		float L_0 = __this->get__unit_8();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Input.touchCount == 1){
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_1 = L_2;
		// clickedFrame = (int)(touch.position.x / _unit);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		float L_5 = __this->get__unit_8();
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)L_4/(float)L_5)));
		// } else {
		goto IL_0047;
	}

IL_0034:
	{
		// clickedFrame = (int)(Input.mousePosition.x / _unit);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		float L_8 = __this->get__unit_8();
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)L_7/(float)L_8)));
	}

IL_0047:
	{
		// _plugin4DS.GotoFrame(clickedFrame);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_9 = __this->get__plugin4DS_4();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Plugin4DS_GotoFrame_m95529234FD0D4D7CCD5851739A2255BFEA634F78(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadingBar4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBar4DS__ctor_mCA5591E97C32F8082F51F435A2E14AD7DD431DEA (LoadingBar4DS_tB42D4B9956FB90152F90C573CFCE6AB983B9104D * __this, const RuntimeMethod* method)
{
	{
		// private float _unit = 1;
		__this->set__unit_8((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_set_IsPunEnabled_m87E32D7952387591F37EC578D7850CCF1CCE4D55 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->set_isPunEnabled_7(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Start_m76EEAA396C555EFAC8E6EA60B32B1E7380570CE7 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3_mE0D001FFE1848B1A6CAAD58CD0641C92C050A212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_1 = NULL;
	int32_t V_2 = 0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_3 = NULL;
	PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* V_4 = NULL;
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_5 = NULL;
	{
		// if (locationToPlace != transform) shouldCheckPlacement = true;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_locationToPlace_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (locationToPlace != transform) shouldCheckPlacement = true;
		__this->set_shouldCheckPlacement_8((bool)1);
	}

IL_001a:
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_9(L_3);
		// toolTipSpawner = GetComponent<ToolTipSpawner>();
		ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * L_4;
		L_4 = Component_GetComponent_TisToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3_mE0D001FFE1848B1A6CAAD58CD0641C92C050A212(__this, /*hidden argument*/Component_GetComponent_TisToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3_mE0D001FFE1848B1A6CAAD58CD0641C92C050A212_RuntimeMethod_var);
		__this->set_toolTipSpawner_10(L_4);
		// colliders = new List<Collider>();
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_5 = (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *)il2cpp_codegen_object_new(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_il2cpp_TypeInfo_var);
		List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C(L_5, /*hidden argument*/List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C_RuntimeMethod_var);
		__this->set_colliders_11(L_5);
		// if (shouldCheckPlacement)
		bool L_6 = __this->get_shouldCheckPlacement_8();
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// foreach (var col in GetComponents<Collider>())
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_7;
		L_7 = Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE(__this, /*hidden argument*/Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE_RuntimeMethod_var);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0064;
	}

IL_0050:
	{
		// foreach (var col in GetComponents<Collider>())
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// colliders.Add(col);
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_12 = __this->get_colliders_11();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4(L_12, L_13, /*hidden argument*/List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4_RuntimeMethod_var);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0064:
	{
		// foreach (var col in GetComponents<Collider>())
		int32_t L_15 = V_2;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_006a:
	{
		// partAssemblyControllers = new List<PartAssemblyController>();
		List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * L_17 = (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *)il2cpp_codegen_object_new(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_il2cpp_TypeInfo_var);
		List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1(L_17, /*hidden argument*/List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1_RuntimeMethod_var);
		__this->set_partAssemblyControllers_12(L_17);
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* L_18;
		L_18 = Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27(/*hidden argument*/Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27_RuntimeMethod_var);
		V_4 = L_18;
		V_2 = 0;
		goto IL_0097;
	}

IL_0080:
	{
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* L_19 = V_4;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		// partAssemblyControllers.Add(controller);
		List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * L_23 = __this->get_partAssemblyControllers_12();
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_24 = V_5;
		NullCheck(L_23);
		List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80(L_23, L_24, /*hidden argument*/List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80_RuntimeMethod_var);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0097:
	{
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		int32_t L_26 = V_2;
		PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0080;
		}
	}
	{
		// var trans = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = L_28;
		// originalParent = trans.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_0;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_29, /*hidden argument*/NULL);
		__this->set_originalParent_13(L_30);
		// originalPosition = trans.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = V_0;
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_31, /*hidden argument*/NULL);
		__this->set_originalPosition_14(L_32);
		// originalRotation = trans.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_0;
		NullCheck(L_33);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_33, /*hidden argument*/NULL);
		__this->set_originalRotation_15(L_34);
		// checkPlacementCoroutine = CheckPlacement();
		RuntimeObject* L_35;
		L_35 = PartAssemblyController_CheckPlacement_m058EC3FBCB6313D9C85FF551A4831601805F5A4D(__this, /*hidden argument*/NULL);
		__this->set_checkPlacementCoroutine_16(L_35);
		// hasAudioSource = audioSource != null;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_36 = __this->get_audioSource_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		__this->set_hasAudioSource_17(L_37);
		// hasToolTip = toolTipSpawner != null;
		ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * L_38 = __this->get_toolTipSpawner_10();
		bool L_39;
		L_39 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		__this->set_hasToolTip_18(L_39);
		// if (shouldCheckPlacement) StartCoroutine(checkPlacementCoroutine);
		bool L_40 = __this->get_shouldCheckPlacement_8();
		if (!L_40)
		{
			goto IL_010e;
		}
	}
	{
		// if (shouldCheckPlacement) StartCoroutine(checkPlacementCoroutine);
		RuntimeObject* L_41 = __this->get_checkPlacementCoroutine_16();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_42;
		L_42 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_41, /*hidden argument*/NULL);
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B3_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->get_isPunEnabled_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnSetPlacement?.Invoke();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = __this->get_OnSetPlacement_22();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9(G_B3_0, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// Set();
		PartAssemblyController_Set_m77CC9BC1F649F4F08C89FD060E2C74C4F45C91FD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Set_m77CC9BC1F649F4F08C89FD060E2C74C4F45C91FD (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// isPlaced = true;
		__this->set_isPlaced_19((bool)1);
		// if (hasAudioSource) audioSource.Play();
		bool L_0 = __this->get_hasAudioSource_17();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (hasAudioSource) audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_9();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// foreach (var col in colliders) col.enabled = false;
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_2 = __this->get_colliders_11();
		NullCheck(L_2);
		Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  L_3;
		L_3 = List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57(L_2, /*hidden argument*/List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0028:
		{
			// foreach (var col in colliders) col.enabled = false;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4;
			L_4 = Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
			// foreach (var col in colliders) col.enabled = false;
			NullCheck(L_4);
			Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_4, (bool)0, /*hidden argument*/NULL);
		}

IL_0035:
		{
			// foreach (var col in colliders) col.enabled = false;
			bool L_5;
			L_5 = Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0028;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// if (hasToolTip) toolTipSpawner.enabled = false;
		bool L_6 = __this->get_hasToolTip_18();
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// if (hasToolTip) toolTipSpawner.enabled = false;
		ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * L_7 = __this->get_toolTipSpawner_10();
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// var trans = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		// trans.SetParent(locationToPlace.parent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_locationToPlace_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_9, L_11, /*hidden argument*/NULL);
		// trans.position = locationToPlace.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_locationToPlace_4();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// trans.rotation = locationToPlace.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_locationToPlace_4();
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::ResetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_ResetPlacement_m7FA91500780C316EBF560CECD7078E559460ACD0 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B5_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B4_0 = NULL;
	{
		// foreach (var controller in partAssemblyControllers)
		List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * L_0 = __this->get_partAssemblyControllers_12();
		NullCheck(L_0);
		Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  L_1;
		L_1 = List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339(L_0, /*hidden argument*/List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_000e:
		{
			// foreach (var controller in partAssemblyControllers)
			PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_2;
			L_2 = Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_inline((Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *)(&V_0), /*hidden argument*/Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_RuntimeMethod_var);
			V_1 = L_2;
			// if (isPunEnabled)
			bool L_3 = __this->get_isPunEnabled_7();
			if (!L_3)
			{
				goto IL_0031;
			}
		}

IL_001e:
		{
			// controller.OnResetPlacement?.Invoke();
			PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_4 = V_1;
			NullCheck(L_4);
			PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_5 = L_4->get_OnResetPlacement_21();
			PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_002a;
			}
		}

IL_0027:
		{
			goto IL_0037;
		}

IL_002a:
		{
			NullCheck(G_B5_0);
			PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9(G_B5_0, /*hidden argument*/NULL);
			goto IL_0037;
		}

IL_0031:
		{
			// controller.Reset();
			PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_7 = V_1;
			NullCheck(L_7);
			PartAssemblyController_Reset_m129940529723E9498D4E5035FB917610DA5C8981(L_7, /*hidden argument*/NULL);
		}

IL_0037:
		{
			// foreach (var controller in partAssemblyControllers)
			bool L_8;
			L_8 = Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39((Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000e;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537((Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Reset_m129940529723E9498D4E5035FB917610DA5C8981 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// isPlaced = false;
		__this->set_isPlaced_19((bool)0);
		// foreach (var col in colliders) col.enabled = true;
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_0 = __this->get_colliders_11();
		NullCheck(L_0);
		Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  L_1;
		L_1 = List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57(L_0, /*hidden argument*/List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0015:
		{
			// foreach (var col in colliders) col.enabled = true;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2;
			L_2 = Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
			// foreach (var col in colliders) col.enabled = true;
			NullCheck(L_2);
			Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_2, (bool)1, /*hidden argument*/NULL);
		}

IL_0022:
		{
			// foreach (var col in colliders) col.enabled = true;
			bool L_3;
			L_3 = Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0015;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// if (hasToolTip) toolTipSpawner.enabled = true;
		bool L_4 = __this->get_hasToolTip_18();
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		// if (hasToolTip) toolTipSpawner.enabled = true;
		ToolTipSpawner_t111971627D09640C0A7719FC648A53AB937061C3 * L_5 = __this->get_toolTipSpawner_10();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// var trans = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		// trans.SetParent(originalParent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_originalParent_13();
		NullCheck(L_7);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_7, L_8, /*hidden argument*/NULL);
		// trans.localPosition = originalPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_originalPosition_14();
		NullCheck(L_9);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_10, /*hidden argument*/NULL);
		// trans.localRotation = originalRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = __this->get_originalRotation_15();
		NullCheck(L_9);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::CheckPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyController_CheckPlacement_m058EC3FBCB6313D9C85FF551A4831601805F5A4D (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * L_0 = (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 *)il2cpp_codegen_object_new(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_il2cpp_TypeInfo_var);
		U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35(L_0, 0, /*hidden argument*/NULL);
		U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::add_OnResetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_add_OnResetPlacement_m1B5F77146056299BFF14210549A8A71139406319 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnResetPlacement_21();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnResetPlacement_21();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::remove_OnResetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_remove_OnResetPlacement_mDDD37DC93CE99FCE605DFCB9CBC37413364E0D03 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnResetPlacement_21();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnResetPlacement_21();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::add_OnSetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_add_OnSetPlacement_m5B9ED392DAD16C5B23E31DDEF213CFC470C8D1B6 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnSetPlacement_22();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnSetPlacement_22();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::remove_OnSetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_remove_OnSetPlacement_mA87246A60289C2E7B03E07D5248B7FFE9E533E3B (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnSetPlacement_22();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnSetPlacement_22();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController__ctor_m43D020771B20D09433D17616C90F0D19569F9D9E (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_set_IsPunEnabled_m3F5768D83A150962864A1DF4E4A041A75E006B00 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->set_isPunEnabled_6(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Start_mA284074B6E1D6E5C2EFEE25ED73B92718FD44DA5 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_placementHints_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		bool L_5 = __this->get_activeAtStart_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::TogglePlacementHints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_TogglePlacementHints_mC6E69154176B5D87ECC700CC21DDF3AE3B79F0A9 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * G_B3_0 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->get_isPunEnabled_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnTogglePlacementHints?.Invoke();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_1 = __this->get_OnTogglePlacementHints_7();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA(G_B3_0, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// Toggle();
		PlacementHintsController_Toggle_mED247D0E903D8499BE48BC9C0DF2EC3B94F3494B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Toggle_mED247D0E903D8499BE48BC9C0DF2EC3B94F3494B (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_placementHints_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000b:
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::add_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_add_OnTogglePlacementHints_m74DE84CC6DD60CCD720BFB6797EFA9C145A040D8 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_0 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_1 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_2 = NULL;
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_0 = __this->get_OnTogglePlacementHints_7();
		V_0 = L_0;
	}

IL_0007:
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_1 = V_0;
		V_1 = L_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_2 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)CastclassSealed((RuntimeObject*)L_4, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var));
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 ** L_5 = __this->get_address_of_OnTogglePlacementHints_7();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_6 = V_2;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_7 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *>((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 **)L_5, L_6, L_7);
		V_0 = L_8;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_9 = V_0;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_9) == ((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::remove_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_remove_OnTogglePlacementHints_m4DD9666380C389D70F6B9B9DA474147403E890E9 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_0 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_1 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_2 = NULL;
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_0 = __this->get_OnTogglePlacementHints_7();
		V_0 = L_0;
	}

IL_0007:
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_1 = V_0;
		V_1 = L_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_2 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)CastclassSealed((RuntimeObject*)L_4, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var));
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 ** L_5 = __this->get_address_of_OnTogglePlacementHints_7();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_6 = V_2;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_7 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *>((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 **)L_5, L_6, L_7);
		V_0 = L_8;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_9 = V_0;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_9) == ((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController__ctor_m63F5AE600226FB6BEACE406120A542B3EB796634 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private bool activeAtStart = true;
		__this->set_activeAtStart_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Timeline.ClipCaps Playable4DS::get_clipCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Playable4DS_get_clipCaps_mE0423B1A30E851F9444E020E129EE276654F8663 (Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * __this, const RuntimeMethod* method)
{
	{
		// public ClipCaps clipCaps => ClipCaps.None;
		return (int32_t)(0);
	}
}
// UnityEngine.Playables.Playable Playable4DS::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  Playable4DS_CreatePlayable_mD9793329D33388460E88A55F7C54A8BAE0CF410D (Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___owner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_m6BA574906966075ABCA04D2F8C81C42E725AA096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_mC02498CE6F903C36F89E29626A529E3B1BCA1152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ScriptPlayable<TimelineBehaviour4DS>.Create(graph, sequence4DS);
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * L_1 = __this->get_sequence4DS_6();
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t5EA16587A469706DBF3FDB7164D79B6F37A486CC  L_2;
		L_2 = ScriptPlayable_1_Create_m6BA574906966075ABCA04D2F8C81C42E725AA096(L_0, L_1, 0, /*hidden argument*/ScriptPlayable_1_Create_m6BA574906966075ABCA04D2F8C81C42E725AA096_RuntimeMethod_var);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_3;
		L_3 = ScriptPlayable_1_op_Implicit_mC02498CE6F903C36F89E29626A529E3B1BCA1152(L_2, /*hidden argument*/ScriptPlayable_1_op_Implicit_mC02498CE6F903C36F89E29626A529E3B1BCA1152_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Playable4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable4DS__ctor_m776FF32A2F59EEB3FF031AF76FFCF53832EB29D8 (Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TimelineBehaviour4DS sequence4DS = new TimelineBehaviour4DS();
		TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * L_0 = (TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 *)il2cpp_codegen_object_new(TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304_il2cpp_TypeInfo_var);
		TimelineBehaviour4DS__ctor_mA2C4A96AB7986E7BCE5F3654788687C1991A80FD(L_0, /*hidden argument*/NULL);
		__this->set_sequence4DS_6(L_0);
		PlayableAsset__ctor_mAE1FA54D280C75ADC9486656C5C36AC1917D5FE4(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 unity4dv.Plugin4DS::get_CurrentFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrentFrame { get { return GetCurrentFrame(); } set { GotoFrame((int)value); } }
		int32_t L_0;
		L_0 = Plugin4DS_GetCurrentFrame_m5A34EDE7986865A6487A84705A5D1CB5F06E7C25(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_CurrentFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_CurrentFrame_mBCDD2C43EF7A105EF50B4129D4CAA85230DFD7EC (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CurrentFrame { get { return GetCurrentFrame(); } set { GotoFrame((int)value); } }
		int32_t L_0 = ___value0;
		Plugin4DS_GotoFrame_m95529234FD0D4D7CCD5851739A2255BFEA634F78(__this, L_0, /*hidden argument*/NULL);
		// public int CurrentFrame { get { return GetCurrentFrame(); } set { GotoFrame((int)value); } }
		return;
	}
}
// System.Single unity4dv.Plugin4DS::get_Framerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plugin4DS_get_Framerate_m626A2A7D34675532D6DD9E50D1A90D23197DF0AE (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public float Framerate { get { return GetFrameRate(); } }
		float L_0;
		L_0 = Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_SequenceNbOfFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_SequenceNbOfFrames_m8803DFD2044F28C9B4EAF7178AEFFE93E0C480C0 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int SequenceNbOfFrames { get { return GetSequenceNbFrames(); } }
		int32_t L_0;
		L_0 = Plugin4DS_GetSequenceNbFrames_m43E23F3C2B1D3496FE32C75D8220299E223A7CA3(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_ActiveNbOfFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_ActiveNbOfFrames_m16721140C3D81FFDB14C783385DD57ED07A95775 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int ActiveNbOfFrames { get { return GetActiveNbFrames(); } }
		int32_t L_0;
		L_0 = Plugin4DS_GetActiveNbFrames_mDA3F5FB7FD8C48E86DB7730772A5E8E0505261BF(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_FirstActiveFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_FirstActiveFrame_mADE4163DE2A26A0F6C32C61588955C16D2E8746F (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int FirstActiveFrame { get { return (int)_activeRangeMin; } set { _activeRangeMin = (float)value; } }
		float L_0 = __this->get__activeRangeMin_20();
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_0);
	}
}
// System.Void unity4dv.Plugin4DS::set_FirstActiveFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_FirstActiveFrame_mB20C35D9188BA3DA1B6928955E600EEE71416E3C (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int FirstActiveFrame { get { return (int)_activeRangeMin; } set { _activeRangeMin = (float)value; } }
		int32_t L_0 = ___value0;
		__this->set__activeRangeMin_20(((float)((float)L_0)));
		// public int FirstActiveFrame { get { return (int)_activeRangeMin; } set { _activeRangeMin = (float)value; } }
		return;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_LastActiveFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_LastActiveFrame_m547BDCE7A899D914045BF03B1F9D7059608F7CD1 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int LastActiveFrame { get { return (int)_activeRangeMax==-1? (int)(SequenceNbOfFrames -1): (int)(_activeRangeMax); } set { _activeRangeMax = (float)value; } }
		float L_0 = __this->get__activeRangeMax_21();
		if ((((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_0)) == ((int32_t)(-1))))
		{
			goto IL_0012;
		}
	}
	{
		float L_1 = __this->get__activeRangeMax_21();
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
	}

IL_0012:
	{
		int32_t L_2;
		L_2 = Plugin4DS_get_SequenceNbOfFrames_m8803DFD2044F28C9B4EAF7178AEFFE93E0C480C0(__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}
}
// System.Void unity4dv.Plugin4DS::set_LastActiveFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_LastActiveFrame_m0DEF58496D46803422F926F00CA77FD1CF85DD1B (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastActiveFrame { get { return (int)_activeRangeMax==-1? (int)(SequenceNbOfFrames -1): (int)(_activeRangeMax); } set { _activeRangeMax = (float)value; } }
		int32_t L_0 = ___value0;
		__this->set__activeRangeMax_21(((float)((float)L_0)));
		// public int LastActiveFrame { get { return (int)_activeRangeMax==-1? (int)(SequenceNbOfFrames -1): (int)(_activeRangeMax); } set { _activeRangeMax = (float)value; } }
		return;
	}
}
// UnityEngine.TextureFormat unity4dv.Plugin4DS::get_TextureEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_TextureEncoding_m23DA83E33CFAD9A8B53D643ED9F943B90061E0FB (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public TextureFormat TextureEncoding { get { return GetTextureFormat(); } }
		int32_t L_0;
		L_0 = Plugin4DS_GetTextureFormat_m419E846918F764C95F8BC2A487C775ED3D162365(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_TextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_TextureSize_m984F81A812D2296DE040F0ED23C474B7A004DBB8 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int TextureSize { get { return Bridge4DS.GetTextureSize(_dataSource.FDVUUID); } }
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_FDVUUID_0();
		int32_t L_2;
		L_2 = Bridge4DS_GetTextureSize_m73C03581060CF9D4E31C87B7E4D16ED3334E3471(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_NbVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_NbVertices_m5FFCBA23B57B19EFB9AF6DBEBFBD5E9E3D501E56 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int NbVertices { get { return _nbVertices; } }
		int32_t L_0 = __this->get__nbVertices_66();
		return L_0;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_NbTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_NbTriangles_m3F4A12377D7F52B733426B52818FECFF8EAF940A (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int NbTriangles { get { return _nbTriangles; } }
		int32_t L_0 = __this->get__nbTriangles_67();
		return L_0;
	}
}
// System.Boolean unity4dv.Plugin4DS::get_AutoPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plugin4DS_get_AutoPlay_m40537661C6BA6EA3D83DC394AD916215B7BC1B9E (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool AutoPlay { get { return _autoPlay; } set { _autoPlay = value; } }
		bool L_0 = __this->get__autoPlay_16();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_AutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_AutoPlay_m26C680B9825F4E3026B63A6B4D59024AE13932E0 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AutoPlay { get { return _autoPlay; } set { _autoPlay = value; } }
		bool L_0 = ___value0;
		__this->set__autoPlay_16(L_0);
		// public bool AutoPlay { get { return _autoPlay; } set { _autoPlay = value; } }
		return;
	}
}
// System.Boolean unity4dv.Plugin4DS::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plugin4DS_get_IsPlaying_mADFE4E9812EF471BF3FA15D000F5B5353A4A97C4 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPlaying { get { return _isPlaying; } set { _isPlaying = value; } }
		bool L_0 = __this->get__isPlaying_61();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_IsPlaying(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_IsPlaying_m9854596A593E44CD347FF941D8D5DD87DAF35E13 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPlaying { get { return _isPlaying; } set { _isPlaying = value; } }
		bool L_0 = ___value0;
		__this->set__isPlaying_61(L_0);
		// public bool IsPlaying { get { return _isPlaying; } set { _isPlaying = value; } }
		return;
	}
}
// System.Boolean unity4dv.Plugin4DS::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plugin4DS_get_IsInitialized_mA3F2BD4EC69F1A90F091305468CC13B6FE6F9A72 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInitialized { get { return _isInitialized; } }
		bool L_0 = __this->get__isInitialized_60();
		return L_0;
	}
}
// System.String unity4dv.Plugin4DS::get_SequenceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plugin4DS_get_SequenceName_m374F88CAA523BD794ED65DC4AA79328B1831835A (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public string SequenceName { get { return _sequenceName; } set { _sequenceName = value; } }
		String_t* L_0 = __this->get__sequenceName_7();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_SequenceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_SequenceName_m0EE22135A01A130EBB8E05AEEAE6E3AF0FA7CE52 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SequenceName { get { return _sequenceName; } set { _sequenceName = value; } }
		String_t* L_0 = ___value0;
		__this->set__sequenceName_7(L_0);
		// public string SequenceName { get { return _sequenceName; } set { _sequenceName = value; } }
		return;
	}
}
// System.String unity4dv.Plugin4DS::get_SequenceDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plugin4DS_get_SequenceDataPath_m5A01F2C1C93F8FF2804B2BFF09DDDD9859A8AAF8 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public string SequenceDataPath { get { return _mainDataPath; } set { _mainDataPath = value; } }
		String_t* L_0 = __this->get__mainDataPath_9();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_SequenceDataPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_SequenceDataPath_m21E49C483C3FC43A9AAEC2F29F52E9C3B812559F (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SequenceDataPath { get { return _mainDataPath; } set { _mainDataPath = value; } }
		String_t* L_0 = ___value0;
		__this->set__mainDataPath_9(L_0);
		// public string SequenceDataPath { get { return _mainDataPath; } set { _mainDataPath = value; } }
		return;
	}
}
// unity4dv.SOURCE_TYPE unity4dv.Plugin4DS::get_SourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_SourceType_mB4316825B82BD44050F81A22F91ECEE41D2D8E00 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public SOURCE_TYPE SourceType { get { return _sourceType; } set { _sourceType = value; } }
		int32_t L_0 = __this->get__sourceType_8();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_SourceType(unity4dv.SOURCE_TYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_SourceType_mE8B12BB4194C52AC01A2318A050FC4DCBD9B45E2 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SOURCE_TYPE SourceType { get { return _sourceType; } set { _sourceType = value; } }
		int32_t L_0 = ___value0;
		__this->set__sourceType_8(L_0);
		// public SOURCE_TYPE SourceType { get { return _sourceType; } set { _sourceType = value; } }
		return;
	}
}
// System.Boolean unity4dv.Plugin4DS::get_Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plugin4DS_get_Loop_m3758046827F97E7F97F9E06614483115240C9C84 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool Loop { get { return _loop; } set { _loop = value; } }
		bool L_0 = __this->get__loop_18();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_Loop_mA341CB42A2930EF2EF6DF072C20F63EA31CE7F9D (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Loop { get { return _loop; } set { _loop = value; } }
		bool L_0 = ___value0;
		__this->set__loop_18(L_0);
		// public bool Loop { get { return _loop; } set { _loop = value; } }
		return;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_PreviewFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_PreviewFrame_m2F9847C2E6F7A7EBD7AD971EBE35C6D2E5C1AB5E (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int PreviewFrame { get { return _previewFrame; } set { _previewFrame = value; } }
		int32_t L_0 = __this->get__previewFrame_62();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_PreviewFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_PreviewFrame_m9CB3DD87EF029BA44F53D4006AC70B9CC2F674F3 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PreviewFrame { get { return _previewFrame; } set { _previewFrame = value; } }
		int32_t L_0 = ___value0;
		__this->set__previewFrame_62(L_0);
		// public int PreviewFrame { get { return _previewFrame; } set { _previewFrame = value; } }
		return;
	}
}
// System.Single unity4dv.Plugin4DS::get_SpeedRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plugin4DS_get_SpeedRatio_m326A202890648318DB678CF24D2F55B0752BB96D (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public float SpeedRatio {  get { return _speedRatio; } set { _speedRatio = value; } }
		float L_0 = __this->get__speedRatio_65();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_SpeedRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_SpeedRatio_mC146D986D73A86FE4BD3B5BB31BD8624EA1F0DE0 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SpeedRatio {  get { return _speedRatio; } set { _speedRatio = value; } }
		float L_0 = ___value0;
		__this->set__speedRatio_65(L_0);
		// public float SpeedRatio {  get { return _speedRatio; } set { _speedRatio = value; } }
		return;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_MeshBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_MeshBufferSize_m2455EC3AE05BF8D3634EC522FB7DEDC7C826E4EC (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int MeshBufferSize {   get { return Bridge4DS.GetMeshBufferSize(_dataSource.FDVUUID); } }
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_FDVUUID_0();
		int32_t L_2;
		L_2 = Bridge4DS_GetMeshBufferSize_mBA741CD40DF9A93E72CC6CF4ECA0513AAB8E1AE1(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_ChunkBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_ChunkBufferSize_m2158FCD26E9C8D1B8DB2A2EC2E270897AB5EE234 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int ChunkBufferSize {  get { return Bridge4DS.GetChunkBufferSize(_dataSource.FDVUUID); } }
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_FDVUUID_0();
		int32_t L_2;
		L_2 = Bridge4DS_GetChunkBufferSize_m1EBB1C3B21A10D88088D51289F1BCBB3737BEF11(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_MeshBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_MeshBufferMaxSize_m1A1E52694DF6AFC5E3D9149EAAACC274D2CEFA38 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int MeshBufferMaxSize { get { return _meshBufferMaxSize; } set { _meshBufferMaxSize = value; } }
		int32_t L_0 = __this->get__meshBufferMaxSize_11();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_MeshBufferMaxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_MeshBufferMaxSize_m117B7CF6CBBC1CA06CFC37722D8EF0EED6357737 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MeshBufferMaxSize { get { return _meshBufferMaxSize; } set { _meshBufferMaxSize = value; } }
		int32_t L_0 = ___value0;
		__this->set__meshBufferMaxSize_11(L_0);
		// public int MeshBufferMaxSize { get { return _meshBufferMaxSize; } set { _meshBufferMaxSize = value; } }
		return;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_ChunkBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_ChunkBufferMaxSize_m2F212D936644D29D2627012ECB64960CA856D544 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int ChunkBufferMaxSize { get { return _chunkBufferMaxSize; } set { _chunkBufferMaxSize = value; } }
		int32_t L_0 = __this->get__chunkBufferMaxSize_12();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_ChunkBufferMaxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_ChunkBufferMaxSize_m49CD2080768DD51E53B9BD844DC77C175C8F5C03 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ChunkBufferMaxSize { get { return _chunkBufferMaxSize; } set { _chunkBufferMaxSize = value; } }
		int32_t L_0 = ___value0;
		__this->set__chunkBufferMaxSize_12(L_0);
		// public int ChunkBufferMaxSize { get { return _chunkBufferMaxSize; } set { _chunkBufferMaxSize = value; } }
		return;
	}
}
// System.Int32 unity4dv.Plugin4DS::get_HTTPDownloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_get_HTTPDownloadSize_mC30927BF66D9E4F53B123131CF32FEBFE680321A (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public int HTTPDownloadSize { get { return _HTTPDownloadSize; } set { _HTTPDownloadSize = value; } }
		int32_t L_0 = __this->get__HTTPDownloadSize_13();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_HTTPDownloadSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_HTTPDownloadSize_m12CC09ECD8D60F678E1F3CE0B9160B238700C12D (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HTTPDownloadSize { get { return _HTTPDownloadSize; } set { _HTTPDownloadSize = value; } }
		int32_t L_0 = ___value0;
		__this->set__HTTPDownloadSize_13(L_0);
		// public int HTTPDownloadSize { get { return _HTTPDownloadSize; } set { _HTTPDownloadSize = value; } }
		return;
	}
}
// System.Boolean unity4dv.Plugin4DS::get_HTTPKeepInCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plugin4DS_get_HTTPKeepInCache_mC1DC67B32074C672CE71864B1AEBADDC83CE9881 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool HTTPKeepInCache { get { return _HTTPKeepInCache; }  set { _HTTPKeepInCache = value; } }
		bool L_0 = __this->get__HTTPKeepInCache_14();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_HTTPKeepInCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_HTTPKeepInCache_m1F8AB4C68116BD72955E54DE55AE06F46D743393 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HTTPKeepInCache { get { return _HTTPKeepInCache; }  set { _HTTPKeepInCache = value; } }
		bool L_0 = ___value0;
		__this->set__HTTPKeepInCache_14(L_0);
		// public bool HTTPKeepInCache { get { return _HTTPKeepInCache; }  set { _HTTPKeepInCache = value; } }
		return;
	}
}
// System.Int64 unity4dv.Plugin4DS::get_HTTPCacheSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Plugin4DS_get_HTTPCacheSize_mE95A6349E731CE8F19E61F804CC920E8DAFEDB26 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public long HTTPCacheSize { get { return _HTTPCacheSize; } set { _HTTPCacheSize = value; } }
		IL2CPP_RUNTIME_CLASS_INIT(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_StaticFields*)il2cpp_codegen_static_fields_for(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var))->get__HTTPCacheSize_15();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS::set_HTTPCacheSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_set_HTTPCacheSize_m08DC375392E5B33050599DBCD2940FD1C5A5435D (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public long HTTPCacheSize { get { return _HTTPCacheSize; } set { _HTTPCacheSize = value; } }
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		((Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_StaticFields*)il2cpp_codegen_static_fields_for(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var))->set__HTTPCacheSize_15(L_0);
		// public long HTTPCacheSize { get { return _HTTPCacheSize; } set { _HTTPCacheSize = value; } }
		return;
	}
}
// System.Boolean unity4dv.Plugin4DS::get_HasVertexColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plugin4DS_get_HasVertexColor_mB3603476FCC76D7AC4F065CF85837C574674FDA6 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasVertexColor { get { return _dataSource.ColorPerVertex; } }
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		NullCheck(L_0);
		bool L_1 = L_0->get_ColorPerVertex_3();
		return L_1;
	}
}
// System.Void unity4dv.Plugin4DS::add_OnNewModel(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_add_OnNewModel_mE476D076AAB4F5D67AC97B2BDDE1A0F2C643C757 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_1 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_2 = NULL;
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_0 = __this->get_OnNewModel_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = V_0;
		V_1 = L_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_2 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)CastclassSealed((RuntimeObject*)L_4, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var));
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** L_5 = __this->get_address_of_OnNewModel_4();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_6 = V_2;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_7 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *>((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_9 = V_0;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_9) == ((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void unity4dv.Plugin4DS::remove_OnNewModel(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_remove_OnNewModel_mA8769D6AFF9D16E705A35CD0615D8240D8AF8A46 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_1 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_2 = NULL;
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_0 = __this->get_OnNewModel_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = V_0;
		V_1 = L_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_2 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)CastclassSealed((RuntimeObject*)L_4, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var));
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** L_5 = __this->get_address_of_OnNewModel_4();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_6 = V_2;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_7 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *>((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_9 = V_0;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_9) == ((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void unity4dv.Plugin4DS::add_OnModelNotFound(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_add_OnModelNotFound_mDC39C0D5D1C52AE7265E3423CFE51BB1A33F3432 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_1 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_2 = NULL;
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_0 = __this->get_OnModelNotFound_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = V_0;
		V_1 = L_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_2 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)CastclassSealed((RuntimeObject*)L_4, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var));
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** L_5 = __this->get_address_of_OnModelNotFound_5();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_6 = V_2;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_7 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *>((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_9 = V_0;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_9) == ((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void unity4dv.Plugin4DS::remove_OnModelNotFound(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_remove_OnModelNotFound_m9CF35FE60DA70015CFF0F1B6075596EB8EF9BBE4 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_1 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_2 = NULL;
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_0 = __this->get_OnModelNotFound_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = V_0;
		V_1 = L_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_2 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)CastclassSealed((RuntimeObject*)L_4, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var));
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** L_5 = __this->get_address_of_OnModelNotFound_5();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_6 = V_2;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_7 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *>((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_9 = V_0;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_9) == ((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void unity4dv.Plugin4DS::add_OnLastFrame(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_add_OnLastFrame_mF00CC7AE423AB365C103CE84D976027E483D1920 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_1 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_2 = NULL;
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_0 = __this->get_OnLastFrame_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = V_0;
		V_1 = L_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_2 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)CastclassSealed((RuntimeObject*)L_4, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var));
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** L_5 = __this->get_address_of_OnLastFrame_6();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_6 = V_2;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_7 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *>((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_9 = V_0;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_9) == ((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void unity4dv.Plugin4DS::remove_OnLastFrame(unity4dv.Plugin4DS/EventFDV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_remove_OnLastFrame_m940950B8340BEA910B0FCAFFFA9F41034A426FCB (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_1 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * V_2 = NULL;
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_0 = __this->get_OnLastFrame_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = V_0;
		V_1 = L_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_2 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)CastclassSealed((RuntimeObject*)L_4, EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var));
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C ** L_5 = __this->get_address_of_OnLastFrame_6();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_6 = V_2;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_7 = V_1;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *>((EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_9 = V_0;
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_9) == ((RuntimeObject*)(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Initialize_mD794AB33AEAEA1F48F13FC5C4E1BBF458AA42408 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___resetRange0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E729DC7601785912B62D7424D20C9F9DD7B3466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B9B9CB5482EE91FFA10FF0D7020F6BDE7E99FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_3 = NULL;
	int32_t V_4 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_5 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_8 = NULL;
	int32_t V_9 = 0;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * G_B12_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * G_B11_0 = NULL;
	{
		// if (_isInitialized == true)
		bool L_0 = __this->get__isInitialized_60();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_dataSource == null)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_1 = __this->get__dataSource_32();
		if (L_1)
		{
			goto IL_00c0;
		}
	}
	{
		// int key = 0;
		V_0 = 0;
		// if (_sourceType == SOURCE_TYPE.Network && !(_sequenceName.Substring(0,4) == "http" || _sequenceName.Substring(0, 7) == "holosys"))
		int32_t L_2 = __this->get__sourceType_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = __this->get__sequenceName_7();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_3, 0, 4, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_6 = __this->get__sequenceName_7();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_6, 0, 7, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		// UnityEngine.Debug.LogError("Plugin 4DS: When using Network Source Type, URL should start with http://, or holosys:// for live");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral7E729DC7601785912B62D7424D20C9F9DD7B3466, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_005c:
	{
		// if (resetRange) {
		bool L_9 = ___resetRange0;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// _activeRangeMax = -1;
		__this->set__activeRangeMax_21((-1.0f));
		// _activeRangeMin = 0;
		__this->set__activeRangeMin_20((0.0f));
	}

IL_0075:
	{
		// _dataSource = DataSource4DS.CreateDataSource(key, _sequenceName, _dataInStreamingAssets, _mainDataPath, (int)_activeRangeMin, (int)_activeRangeMax, _outRangeMode);
		int32_t L_10 = V_0;
		String_t* L_11 = __this->get__sequenceName_7();
		bool L_12 = __this->get__dataInStreamingAssets_10();
		String_t* L_13 = __this->get__mainDataPath_9();
		float L_14 = __this->get__activeRangeMin_20();
		float L_15 = __this->get__activeRangeMax_21();
		int32_t L_16 = __this->get__outRangeMode_17();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_17;
		L_17 = DataSource4DS_CreateDataSource_m96C41FEB4FB7BBFCAED9FE4A04D6F27CDB416723(L_10, L_11, L_12, L_13, il2cpp_codegen_cast_double_to_int<int32_t>(L_14), il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_16, /*hidden argument*/NULL);
		__this->set__dataSource_32(L_17);
		// if (_dataSource == null)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_18 = __this->get__dataSource_32();
		if (L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// OnModelNotFound?.Invoke();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_19 = __this->get_OnModelNotFound_5();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_20 = L_19;
		G_B11_0 = L_20;
		if (L_20)
		{
			G_B12_0 = L_20;
			goto IL_00ba;
		}
	}
	{
		return;
	}

IL_00ba:
	{
		NullCheck(G_B12_0);
		EventFDV_Invoke_m445ECBC5C869D774DFEC66C1C070719CCEDE4208(G_B12_0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00c0:
	{
		// _lastModelId = -1;
		__this->set__lastModelId_33((-1));
		// _meshComponent = GetComponent<MeshFilter>();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_21;
		L_21 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		__this->set__meshComponent_36(L_21);
		// _rendererComponent = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22;
		L_22 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set__rendererComponent_37(L_22);
		// _meshCollider = GetComponent<MeshCollider>();
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_23;
		L_23 = Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F(__this, /*hidden argument*/Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var);
		__this->set__meshCollider_59(L_23);
		// _nbFrames = Bridge4DS.GetSequenceNbFrames(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_24 = __this->get__dataSource_32();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_FDVUUID_0();
		int32_t L_26;
		L_26 = Bridge4DS_GetSequenceNbFrames_mC240F0FD20CF75717E91E8743CE54C080848F7CA(L_25, /*hidden argument*/NULL);
		__this->set__nbFrames_64(L_26);
		// unityTimeScale = Time.timeScale;
		float L_27;
		L_27 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		__this->set_unityTimeScale_70(L_27);
		// Bridge4DS.SetSpeed(_dataSource.FDVUUID, _speedRatio * unityTimeScale);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_28 = __this->get__dataSource_32();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_FDVUUID_0();
		float L_30 = __this->get__speedRatio_65();
		float L_31 = __this->get_unityTimeScale_70();
		Bridge4DS_SetSpeed_m4FE1B4DC6786AEFC6DBB0AA6117A636F2173D90B(L_29, ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), /*hidden argument*/NULL);
		// if (_sourceType == SOURCE_TYPE.Network)
		int32_t L_32 = __this->get__sourceType_8();
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_0173;
		}
	}
	{
		// Bridge4DS.SetHTTPDownloadSize(_dataSource.FDVUUID, _HTTPDownloadSize);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_33 = __this->get__dataSource_32();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_FDVUUID_0();
		int32_t L_35 = __this->get__HTTPDownloadSize_13();
		Bridge4DS_SetHTTPDownloadSize_mDCEEEED367B9B81995CB7BED99731A84F8843332(L_34, L_35, /*hidden argument*/NULL);
		// Bridge4DS.SetHTTPKeepInCache(_dataSource.FDVUUID, _HTTPKeepInCache);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_36 = __this->get__dataSource_32();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_FDVUUID_0();
		bool L_38 = __this->get__HTTPKeepInCache_14();
		Bridge4DS_SetHTTPKeepInCache_m6E9E0C3FCE3CE9AD5E99EDBC64FD320423BF742A(L_37, L_38, /*hidden argument*/NULL);
		// Bridge4DS.SetHTTPCacheSize(_dataSource.FDVUUID, _HTTPCacheSize);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_39 = __this->get__dataSource_32();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_FDVUUID_0();
		IL2CPP_RUNTIME_CLASS_INIT(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		int64_t L_41 = ((Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_StaticFields*)il2cpp_codegen_static_fields_for(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var))->get__HTTPCacheSize_15();
		Bridge4DS_SetHTTPCacheSize_m4BD4CD13E4FDD29CD3C68627AA82A1358475B305(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0173:
	{
		// Bridge4DS.SetChunkBufferMaxSize(_dataSource.FDVUUID, _chunkBufferMaxSize);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_42 = __this->get__dataSource_32();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_FDVUUID_0();
		int32_t L_44 = __this->get__chunkBufferMaxSize_12();
		Bridge4DS_SetChunkBufferMaxSize_m0A28953FEE72C88412369D5C4E9DF0D577D7CC35(L_43, L_44, /*hidden argument*/NULL);
		// Bridge4DS.SetMeshBufferMaxSize(_dataSource.FDVUUID, _meshBufferMaxSize);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_45 = __this->get__dataSource_32();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_FDVUUID_0();
		int32_t L_47 = __this->get__meshBufferMaxSize_11();
		Bridge4DS_SetMeshBufferMaxSize_m89DD946D32AF43AE92CE1B76D0E93EE7ED99EC16(L_46, L_47, /*hidden argument*/NULL);
		// AllocateGeometryBuffers(ref _newVertices, ref _newUVs, ref _newNormals, ref _newTriangles, ref _newColors, _dataSource.MaxVertices, _dataSource.MaxTriangles);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_48 = __this->get_address_of__newVertices_38();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_49 = __this->get_address_of__newUVs_39();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_50 = __this->get_address_of__newNormals_42();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_51 = __this->get_address_of__newTriangles_40();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** L_52 = __this->get_address_of__newColors_43();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_53 = __this->get__dataSource_32();
		NullCheck(L_53);
		int32_t L_54 = L_53->get_MaxVertices_4();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_55 = __this->get__dataSource_32();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_MaxTriangles_5();
		Plugin4DS_AllocateGeometryBuffers_m68DA7AF6DD94D8CDB06D88ECD17182F794836529(__this, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_48, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_49, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_50, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_51, (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2**)L_52, L_54, L_56, /*hidden argument*/NULL);
		// if (!_dataSource.ColorPerVertex) {
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_57 = __this->get__dataSource_32();
		NullCheck(L_57);
		bool L_58 = L_57->get_ColorPerVertex_3();
		if (L_58)
		{
			goto IL_028a;
		}
	}
	{
		// int pixelBufferSize = _dataSource.TextureSize * _dataSource.TextureSize / 2;    //default is 4 bpp
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_59 = __this->get__dataSource_32();
		NullCheck(L_59);
		int32_t L_60 = L_59->get_TextureSize_2();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_61 = __this->get__dataSource_32();
		NullCheck(L_61);
		int32_t L_62 = L_61->get_TextureSize_2();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_60, (int32_t)L_62))/(int32_t)2));
		// if (_dataSource.TextureFormat == TextureFormat.PVRTC_RGB2)  //pvrtc2 is 2bpp
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_63 = __this->get__dataSource_32();
		NullCheck(L_63);
		int32_t L_64 = L_63->get_TextureFormat_1();
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0218;
		}
	}
	{
		// pixelBufferSize /= 2;
		int32_t L_65 = V_1;
		V_1 = ((int32_t)((int32_t)L_65/(int32_t)2));
		goto IL_026a;
	}

IL_0218:
	{
		// else if (_dataSource.TextureFormat == TextureFormat.ASTC_8x8)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_66 = __this->get__dataSource_32();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_TextureFormat_1();
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)51)))))
		{
			goto IL_0242;
		}
	}
	{
		// int blockSize = 8;
		V_2 = 8;
		// int xblocks = (_dataSource.TextureSize + blockSize - 1) / blockSize;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_68 = __this->get__dataSource_32();
		NullCheck(L_68);
		int32_t L_69 = L_68->get_TextureSize_2();
		int32_t L_70 = V_2;
		int32_t L_71 = V_2;
		// pixelBufferSize = xblocks * xblocks * 16;
		int32_t L_72 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70)), (int32_t)1))/(int32_t)L_71));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)L_72)), (int32_t)((int32_t)16)));
		// }
		goto IL_026a;
	}

IL_0242:
	{
		// else if (_dataSource.TextureFormat == TextureFormat.RGBA32)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_73 = __this->get__dataSource_32();
		NullCheck(L_73);
		int32_t L_74 = L_73->get_TextureFormat_1();
		if ((!(((uint32_t)L_74) == ((uint32_t)4))))
		{
			goto IL_026a;
		}
	}
	{
		// pixelBufferSize = _dataSource.TextureSize * _dataSource.TextureSize * 4;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_75 = __this->get__dataSource_32();
		NullCheck(L_75);
		int32_t L_76 = L_75->get_TextureSize_2();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_77 = __this->get__dataSource_32();
		NullCheck(L_77);
		int32_t L_78 = L_77->get_TextureSize_2();
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_76, (int32_t)L_78)), (int32_t)4));
	}

IL_026a:
	{
		// _newTextureData = new byte[pixelBufferSize];
		int32_t L_79 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_79);
		__this->set__newTextureData_41(L_80);
		// _newTextureDataHandle = GCHandle.Alloc(_newTextureData, GCHandleType.Pinned);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = __this->get__newTextureData_41();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_82;
		L_82 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_81, 3, /*hidden argument*/NULL);
		__this->set__newTextureDataHandle_47(L_82);
		// }else
		goto IL_02e8;
	}

IL_028a:
	{
		// if (!(_rendererComponent.sharedMaterial.shader.name == "Particles/Standard Surface" || _rendererComponent.sharedMaterial.shader.name == "Particles/Standard Unlit"))
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_83 = __this->get__rendererComponent_37();
		NullCheck(L_83);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84;
		L_84 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_85;
		L_85 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		String_t* L_86;
		L_86 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_85, /*hidden argument*/NULL);
		bool L_87;
		L_87 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_86, _stringLiteralE3B9B9CB5482EE91FFA10FF0D7020F6BDE7E99FD, /*hidden argument*/NULL);
		if (L_87)
		{
			goto IL_02e8;
		}
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_88 = __this->get__rendererComponent_37();
		NullCheck(L_88);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_89;
		L_89 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_90;
		L_90 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		String_t* L_91;
		L_91 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_90, /*hidden argument*/NULL);
		bool L_92;
		L_92 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_91, _stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_02e8;
		}
	}
	{
		// Shader particle = Shader.Find("Particles/Standard Surface");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_93;
		L_93 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteralE3B9B9CB5482EE91FFA10FF0D7020F6BDE7E99FD, /*hidden argument*/NULL);
		V_3 = L_93;
		// _rendererComponent.sharedMaterial.shader = particle;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_94 = __this->get__rendererComponent_37();
		NullCheck(L_94);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95;
		L_95 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_94, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_96 = V_3;
		NullCheck(L_95);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_95, L_96, /*hidden argument*/NULL);
	}

IL_02e8:
	{
		// _newVerticesHandle = GCHandle.Alloc(_newVertices, GCHandleType.Pinned);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_97 = __this->get__newVertices_38();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_98;
		L_98 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_97, 3, /*hidden argument*/NULL);
		__this->set__newVerticesHandle_44(L_98);
		// _newTrianglesHandle = GCHandle.Alloc(_newTriangles, GCHandleType.Pinned);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_99 = __this->get__newTriangles_40();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_100;
		L_100 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_99, 3, /*hidden argument*/NULL);
		__this->set__newTrianglesHandle_46(L_100);
		// if (_dataSource.ColorPerVertex) {
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_101 = __this->get__dataSource_32();
		NullCheck(L_101);
		bool L_102 = L_101->get_ColorPerVertex_3();
		if (!L_102)
		{
			goto IL_032d;
		}
	}
	{
		// _newColorsHandle = GCHandle.Alloc(_newColors, GCHandleType.Pinned);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_103 = __this->get__newColors_43();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_104;
		L_104 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_103, 3, /*hidden argument*/NULL);
		__this->set__newColorsHandle_49(L_104);
		// }
		goto IL_0351;
	}

IL_032d:
	{
		// _newUVsHandle = GCHandle.Alloc(_newUVs, GCHandleType.Pinned);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_105 = __this->get__newUVs_39();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_106;
		L_106 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_105, 3, /*hidden argument*/NULL);
		__this->set__newUVsHandle_45(L_106);
		// _newNormalsHandle = GCHandle.Alloc(_newNormals, GCHandleType.Pinned);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_107 = __this->get__newNormals_42();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_108;
		L_108 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_107, 3, /*hidden argument*/NULL);
		__this->set__newNormalsHandle_48(L_108);
	}

IL_0351:
	{
		// _meshes = new Mesh[_nbGeometryBuffers];
		int32_t L_109 = __this->get__nbGeometryBuffers_52();
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_110 = (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)SZArrayNew(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var, (uint32_t)L_109);
		__this->set__meshes_34(L_110);
		// if (!_dataSource.ColorPerVertex)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_111 = __this->get__dataSource_32();
		NullCheck(L_111);
		bool L_112 = L_111->get_ColorPerVertex_3();
		if (L_112)
		{
			goto IL_0380;
		}
	}
	{
		// _textures = new Texture2D[_nbTextureBuffers];
		int32_t L_113 = __this->get__nbTextureBuffers_54();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_114 = (Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316*)(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316*)SZArrayNew(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316_il2cpp_TypeInfo_var, (uint32_t)L_113);
		__this->set__textures_35(L_114);
	}

IL_0380:
	{
		// for (int i = 0; i < _nbGeometryBuffers; i++)
		V_4 = 0;
		goto IL_0447;
	}

IL_0388:
	{
		// Mesh mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_115 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_115, /*hidden argument*/NULL);
		V_5 = L_115;
		// if (_dataSource.MaxVertices > MAX_SHORT)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_116 = __this->get__dataSource_32();
		NullCheck(L_116);
		int32_t L_117 = L_116->get_MaxVertices_4();
		if ((((int32_t)L_117) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_03a9;
		}
	}
	{
		// mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_118 = V_5;
		NullCheck(L_118);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_118, 1, /*hidden argument*/NULL);
	}

IL_03a9:
	{
		// mesh.MarkDynamic(); //Optimize mesh for frequent updates. Call this before assigning vertices.
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_119 = V_5;
		NullCheck(L_119);
		Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(L_119, /*hidden argument*/NULL);
		// mesh.vertices = _newVertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_120 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_121 = __this->get__newVertices_38();
		NullCheck(L_120);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_120, L_121, /*hidden argument*/NULL);
		// mesh.triangles = _newTriangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_122 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_123 = __this->get__newTriangles_40();
		NullCheck(L_122);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_122, L_123, /*hidden argument*/NULL);
		// if (_newUVs != null) mesh.uv = _newUVs;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_124 = __this->get__newUVs_39();
		if (!L_124)
		{
			goto IL_03df;
		}
	}
	{
		// if (_newUVs != null) mesh.uv = _newUVs;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_125 = V_5;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_126 = __this->get__newUVs_39();
		NullCheck(L_125);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_125, L_126, /*hidden argument*/NULL);
	}

IL_03df:
	{
		// if (_newNormals != null) mesh.normals = _newNormals;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_127 = __this->get__newNormals_42();
		if (!L_127)
		{
			goto IL_03f4;
		}
	}
	{
		// if (_newNormals != null) mesh.normals = _newNormals;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_128 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_129 = __this->get__newNormals_42();
		NullCheck(L_128);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_128, L_129, /*hidden argument*/NULL);
	}

IL_03f4:
	{
		// if (_newColors != null) mesh.colors32 = _newColors;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_130 = __this->get__newColors_43();
		if (!L_130)
		{
			goto IL_0409;
		}
	}
	{
		// if (_newColors != null) mesh.colors32 = _newColors;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_131 = V_5;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_132 = __this->get__newColors_43();
		NullCheck(L_131);
		Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91(L_131, L_132, /*hidden argument*/NULL);
	}

IL_0409:
	{
		// Bounds newBounds = mesh.bounds;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_133 = V_5;
		NullCheck(L_133);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_134;
		L_134 = Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF(L_133, /*hidden argument*/NULL);
		V_6 = L_134;
		// newBounds.extents = new Vector3(4, 4, 4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_135), (4.0f), (4.0f), (4.0f), /*hidden argument*/NULL);
		Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_6), L_135, /*hidden argument*/NULL);
		// mesh.bounds = newBounds;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_136 = V_5;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_137 = V_6;
		NullCheck(L_136);
		Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A(L_136, L_137, /*hidden argument*/NULL);
		// _meshes[i] = mesh;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_138 = __this->get__meshes_34();
		int32_t L_139 = V_4;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_140 = V_5;
		NullCheck(L_138);
		ArrayElementTypeCheck (L_138, L_140);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_140);
		// for (int i = 0; i < _nbGeometryBuffers; i++)
		int32_t L_141 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1));
	}

IL_0447:
	{
		// for (int i = 0; i < _nbGeometryBuffers; i++)
		int32_t L_142 = V_4;
		int32_t L_143 = __this->get__nbGeometryBuffers_52();
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_0388;
		}
	}
	{
		// if (!_dataSource.ColorPerVertex)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_144 = __this->get__dataSource_32();
		NullCheck(L_144);
		bool L_145 = L_144->get_ColorPerVertex_3();
		if (L_145)
		{
			goto IL_04db;
		}
	}
	{
		// for (int i = 0; i < _nbTextureBuffers; i++)
		V_7 = 0;
		goto IL_04d1;
	}

IL_0466:
	{
		// if (_dataSource.TextureFormat == TextureFormat.ASTC_8x8)   //since unity 2019 ASTC RGBA is no more supported
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_146 = __this->get__dataSource_32();
		NullCheck(L_146);
		int32_t L_147 = L_146->get_TextureFormat_1();
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)51)))))
		{
			goto IL_0482;
		}
	}
	{
		// _dataSource.TextureFormat = TextureFormat.ASTC_8x8;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_148 = __this->get__dataSource_32();
		NullCheck(L_148);
		L_148->set_TextureFormat_1(((int32_t)51));
	}

IL_0482:
	{
		// Texture2D texture = new Texture2D(_dataSource.TextureSize, _dataSource.TextureSize, _dataSource.TextureFormat, false)
		// {
		//     wrapMode = TextureWrapMode.Clamp,
		//     filterMode = FilterMode.Bilinear
		// };
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_149 = __this->get__dataSource_32();
		NullCheck(L_149);
		int32_t L_150 = L_149->get_TextureSize_2();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_151 = __this->get__dataSource_32();
		NullCheck(L_151);
		int32_t L_152 = L_151->get_TextureSize_2();
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_153 = __this->get__dataSource_32();
		NullCheck(L_153);
		int32_t L_154 = L_153->get_TextureFormat_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_155 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_155, L_150, L_152, L_154, (bool)0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_156 = L_155;
		NullCheck(L_156);
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_156, 1, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_157 = L_156;
		NullCheck(L_157);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_157, 1, /*hidden argument*/NULL);
		V_8 = L_157;
		// texture.Apply(); //upload to GPU
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_158 = V_8;
		NullCheck(L_158);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_158, /*hidden argument*/NULL);
		// _textures[i] = texture;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_159 = __this->get__textures_35();
		int32_t L_160 = V_7;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_161 = V_8;
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_161);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)L_161);
		// for (int i = 0; i < _nbTextureBuffers; i++)
		int32_t L_162 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
	}

IL_04d1:
	{
		// for (int i = 0; i < _nbTextureBuffers; i++)
		int32_t L_163 = V_7;
		int32_t L_164 = __this->get__nbTextureBuffers_54();
		if ((((int32_t)L_163) < ((int32_t)L_164)))
		{
			goto IL_0466;
		}
	}

IL_04db:
	{
		// _currentGeometryBuffer = _currentTextureBuffer = 0;
		int32_t L_165 = 0;
		V_9 = L_165;
		__this->set__currentTextureBuffer_55(L_165);
		int32_t L_166 = V_9;
		__this->set__currentGeometryBuffer_53(L_166);
		// _nbFrames = Bridge4DS.GetSequenceNbFrames(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_167 = __this->get__dataSource_32();
		NullCheck(L_167);
		int32_t L_168 = L_167->get_FDVUUID_0();
		int32_t L_169;
		L_169 = Bridge4DS_GetSequenceNbFrames_mC240F0FD20CF75717E91E8743CE54C080848F7CA(L_168, /*hidden argument*/NULL);
		__this->set__nbFrames_64(L_169);
		// if (playAudio)
		bool L_170 = __this->get_playAudio_19();
		if (!L_170)
		{
			goto IL_0511;
		}
	}
	{
		// InitAudio();
		Plugin4DS_InitAudio_mD793F92F8E78176DCF537136601EE4316AD0934C(__this, /*hidden argument*/NULL);
	}

IL_0511:
	{
		// _isInitialized = true;
		__this->set__isInitialized_60((bool)1);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::InitAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_InitAudio_mD793F92F8E78176DCF537136601EE4316AD0934C (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5607F23A0F05E34965EEA1AE18EC6FFAFE3722FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1354D6D4069B0A43AC316DD56CE5B70FD5AE1DF);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_0 = NULL;
	Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int audioSize = Bridge4DS.GetAudioBufferSize(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_FDVUUID_0();
		int32_t L_2;
		L_2 = Bridge4DS_GetAudioBufferSize_m9864A1B56678E2B0E40C9D6CAFB37D5A6A7204A1(L_1, /*hidden argument*/NULL);
		// if (audioSize > 0)
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_013d;
		}
	}
	{
		// Sync4DS sync = GetComponent<Sync4DS>();
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_3;
		L_3 = Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3(__this, /*hidden argument*/Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3_RuntimeMethod_var);
		V_1 = L_3;
		// if (sync._audioSources.Length > 0 && sync._audioSources[0].audioSource)
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_4 = V_1;
		NullCheck(L_4);
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_5 = L_4->get__audioSources_7();
		NullCheck(L_5);
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_005d;
		}
	}
	{
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_6 = V_1;
		NullCheck(L_6);
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_7 = L_6->get__audioSources_7();
		NullCheck(L_7);
		int32_t L_8 = 0;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_9->get_audioSource_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		// audioSource = sync._audioSources[0].audioSource;
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_12 = V_1;
		NullCheck(L_12);
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_13 = L_12->get__audioSources_7();
		NullCheck(L_13);
		int32_t L_14 = 0;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = L_15->get_audioSource_0();
		V_0 = L_16;
		// audioNode = sync._audioSources[0].audioSource.gameObject;
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_17 = V_1;
		NullCheck(L_17);
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_18 = L_17->get__audioSources_7();
		NullCheck(L_18);
		int32_t L_19 = 0;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_21 = L_20->get_audioSource_0();
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		// }
		goto IL_0083;
	}

IL_005d:
	{
		// audioNode = new GameObject("Audio4DS");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_23, _stringLiteral5607F23A0F05E34965EEA1AE18EC6FFAFE3722FF, /*hidden argument*/NULL);
		// audioNode.transform.parent = this.transform.parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_25, L_27, /*hidden argument*/NULL);
		// audioSource = audioNode.AddComponent<AudioSource>();
		NullCheck(L_24);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_28;
		L_28 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_24, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		V_0 = L_28;
	}

IL_0083:
	{
		// int nbSamples = Bridge4DS.GetAudioNbSamples(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_29 = __this->get__dataSource_32();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_FDVUUID_0();
		int32_t L_31;
		L_31 = Bridge4DS_GetAudioNbSamples_mAF1A95FA57C8D3C25835415D9766ABF49A5737F0(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		// samples = new float[nbSamples * Bridge4DS.GetAudioNbChannels(_dataSource.FDVUUID)];
		int32_t L_32 = V_2;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_33 = __this->get__dataSource_32();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_FDVUUID_0();
		int32_t L_35;
		L_35 = Bridge4DS_GetAudioNbChannels_m3A0021D950C912C16DF071347574293D8120322A(L_34, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)L_35)));
		__this->set_samples_50(L_36);
		// audioBufferHandle = GCHandle.Alloc(samples, GCHandleType.Pinned);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = __this->get_samples_50();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_38;
		L_38 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_37, 3, /*hidden argument*/NULL);
		__this->set_audioBufferHandle_51(L_38);
		// Bridge4DS.GetAudioBuffer(_dataSource.FDVUUID, audioBufferHandle.AddrOfPinnedObject());
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_39 = __this->get__dataSource_32();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_FDVUUID_0();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_41 = __this->get_address_of_audioBufferHandle_51();
		intptr_t L_42;
		L_42 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_41, /*hidden argument*/NULL);
		Bridge4DS_GetAudioBuffer_mE0353B98BB14C85DC2BBFB72749C340234B63AE0(L_40, (intptr_t)L_42, /*hidden argument*/NULL);
		// audioSource.clip = AudioClip.Create("audioInside4ds", nbSamples, Bridge4DS.GetAudioNbChannels(_dataSource.FDVUUID), Bridge4DS.GetAudioSampleRate(_dataSource.FDVUUID), false);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_43 = V_0;
		int32_t L_44 = V_2;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_45 = __this->get__dataSource_32();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_FDVUUID_0();
		int32_t L_47;
		L_47 = Bridge4DS_GetAudioNbChannels_m3A0021D950C912C16DF071347574293D8120322A(L_46, /*hidden argument*/NULL);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_48 = __this->get__dataSource_32();
		NullCheck(L_48);
		int32_t L_49 = L_48->get_FDVUUID_0();
		int32_t L_50;
		L_50 = Bridge4DS_GetAudioSampleRate_m81AE0358B85D77BA02EC36D3AB10475CCB1F604B(L_49, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_51;
		L_51 = AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137(_stringLiteralE1354D6D4069B0A43AC316DD56CE5B70FD5AE1DF, L_44, L_47, L_50, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_43);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_43, L_51, /*hidden argument*/NULL);
		// audioSource.clip.SetData(samples, 0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_52 = V_0;
		NullCheck(L_52);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_53;
		L_53 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_52, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_54 = __this->get_samples_50();
		NullCheck(L_53);
		bool L_55;
		L_55 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_53, L_54, 0, /*hidden argument*/NULL);
		// Sync4DS synchro = GetComponent<Sync4DS>();
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_56;
		L_56 = Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3(__this, /*hidden argument*/Component_GetComponent_TisSync4DS_t3EB8246C875130A66A1395AD60784A4217953E15_m545100DA083FB5C0B8094230F8B487374CFF2BD3_RuntimeMethod_var);
		// synchro._audioSources[0].audioSource = audioSource;
		Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * L_57 = L_56;
		NullCheck(L_57);
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_58 = L_57->get__audioSources_7();
		NullCheck(L_58);
		int32_t L_59 = 0;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_61 = V_0;
		NullCheck(L_60);
		L_60->set_audioSource_0(L_61);
		// synchro.enabled = true;
		NullCheck(L_57);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_57, (bool)1, /*hidden argument*/NULL);
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Uninitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Uninitialize_m0DC93872C3BDE5942E6A795FD8FD7D032F506D02 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!_isInitialized)
		bool L_0 = __this->get__isInitialized_60();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_dataSource != null) Bridge4DS.DestroySequence(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_1 = __this->get__dataSource_32();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if (_dataSource != null) Bridge4DS.DestroySequence(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_2 = __this->get__dataSource_32();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_FDVUUID_0();
		Bridge4DS_DestroySequence_mF22FE9B1F3072614C655466A8B6D0DF84A9251D4(L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (_newVerticesHandle.IsAllocated) _newVerticesHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = __this->get_address_of__newVerticesHandle_44();
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// if (_newVerticesHandle.IsAllocated) _newVerticesHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_6 = __this->get_address_of__newVerticesHandle_44();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (_newUVsHandle.IsAllocated) _newUVsHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = __this->get_address_of__newUVsHandle_45();
		bool L_8;
		L_8 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// if (_newUVsHandle.IsAllocated) _newUVsHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_9 = __this->get_address_of__newUVsHandle_45();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_9, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// if (_newTrianglesHandle.IsAllocated) _newTrianglesHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_10 = __this->get_address_of__newTrianglesHandle_46();
		bool L_11;
		L_11 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		// if (_newTrianglesHandle.IsAllocated) _newTrianglesHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_12 = __this->get_address_of__newTrianglesHandle_46();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_12, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// if (_newTextureDataHandle.IsAllocated) _newTextureDataHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_13 = __this->get_address_of__newTextureDataHandle_47();
		bool L_14;
		L_14 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		// if (_newTextureDataHandle.IsAllocated) _newTextureDataHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_15 = __this->get_address_of__newTextureDataHandle_47();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_15, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// if (_newNormalsHandle.IsAllocated) _newNormalsHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_16 = __this->get_address_of__newNormalsHandle_48();
		bool L_17;
		L_17 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0099;
		}
	}
	{
		// if (_newNormalsHandle.IsAllocated) _newNormalsHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_18 = __this->get_address_of__newNormalsHandle_48();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_18, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// if (_newColorsHandle.IsAllocated) _newColorsHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_19 = __this->get_address_of__newColorsHandle_49();
		bool L_20;
		L_20 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		// if (_newColorsHandle.IsAllocated) _newColorsHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_21 = __this->get_address_of__newColorsHandle_49();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_21, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// if (audioBufferHandle.IsAllocated) audioBufferHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_22 = __this->get_address_of_audioBufferHandle_51();
		bool L_23;
		L_23 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c9;
		}
	}
	{
		// if (audioBufferHandle.IsAllocated) audioBufferHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_24 = __this->get_address_of_audioBufferHandle_51();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_24, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// samples = null;
		__this->set_samples_50((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
		// if (_meshes != null) {
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_25 = __this->get__meshes_34();
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		// for (int i = 0; i < _meshes.Length; i++)
		V_0 = 0;
		goto IL_00ed;
	}

IL_00dc:
	{
		// DestroyImmediate(_meshes[i]);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_26 = __this->get__meshes_34();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_29, /*hidden argument*/NULL);
		// for (int i = 0; i < _meshes.Length; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00ed:
	{
		// for (int i = 0; i < _meshes.Length; i++)
		int32_t L_31 = V_0;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_32 = __this->get__meshes_34();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_00dc;
		}
	}
	{
		// _meshes = null;
		__this->set__meshes_34((MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)NULL);
	}

IL_00ff:
	{
		// if (_textures != null) {
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_33 = __this->get__textures_35();
		if (!L_33)
		{
			goto IL_012e;
		}
	}
	{
		// for (int i = 0; i < _textures.Length; i++)
		V_1 = 0;
		goto IL_011c;
	}

IL_010b:
	{
		// DestroyImmediate(_textures[i]);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_34 = __this->get__textures_35();
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_37, /*hidden argument*/NULL);
		// for (int i = 0; i < _textures.Length; i++)
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_011c:
	{
		// for (int i = 0; i < _textures.Length; i++)
		int32_t L_39 = V_1;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_40 = __this->get__textures_35();
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_010b;
		}
	}
	{
		// _textures = null;
		__this->set__textures_35((Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316*)NULL);
	}

IL_012e:
	{
		// _dataSource = null;
		__this->set__dataSource_32((DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 *)NULL);
		// _newVertices = null;
		__this->set__newVertices_38((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		// _newUVs = null;
		__this->set__newUVs_39((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)NULL);
		// _newTriangles = null;
		__this->set__newTriangles_40((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		// _newNormals = null;
		__this->set__newNormals_42((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		// _newColors = null;
		__this->set__newColors_43((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)NULL);
		// _newTextureData = null;
		__this->set__newTextureData_41((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		// _isSequenceTriggerON = false;
		__this->set__isSequenceTriggerON_57((bool)0);
		// _isInitialized = false;
		__this->set__isInitialized_60((bool)0);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_OnDestroy_mE02DB88315B0F1447C3F696A59C1FEFAC13D0A24 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// Close();
		Plugin4DS_Close_mCA6AEC7DB99F0AF3E701687BB4740DBFA93FC26D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Awake_m526EAA00C8CF7A2EC099E5D8501B0C8D53131507 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialized)
		bool L_0 = __this->get__isInitialized_60();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Uninitialize();
		Plugin4DS_Uninitialize_m0DC93872C3BDE5942E6A795FD8FD7D032F506D02(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (_sequenceName != "")
		String_t* L_1 = __this->get__sequenceName_7();
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Initialize();
		Plugin4DS_Initialize_mD794AB33AEAEA1F48F13FC5C4E1BBF458AA42408(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (_meshComponent != null)
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_3 = __this->get__meshComponent_36();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// _meshComponent.mesh = null;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_5 = __this->get__meshComponent_36();
		NullCheck(L_5);
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_5, (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Start_mE2E4797ECAC2ED82F1D65B9E5B7C2E66FD10E2B2 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized &&   _sequenceName != "")
		bool L_0 = __this->get__isInitialized_60();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = __this->get__sequenceName_7();
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Initialize();
		Plugin4DS_Initialize_mD794AB33AEAEA1F48F13FC5C4E1BBF458AA42408(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (_dataSource == null)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_3 = __this->get__dataSource_32();
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// if (_autoPlay){
		bool L_4 = __this->get__autoPlay_16();
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// Play(true);
		Plugin4DS_Play_m93EFD8F08EC97137F4B432EB6B79CAAD3A4BB3A8(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Update_m1704279B2DF7562F155491B36A02E899A85639B9 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25361BD92DB4AED4236551E394743922FA19154);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE314552DBBF009D5DA203F1E242A60342D869FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD70C3E82D8893B724D90F24668BFCFDC8721849);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	double V_2 = 0.0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_4;
	memset((&V_4), 0, sizeof(V_4));
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * G_B26_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * G_B25_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * G_B32_0 = NULL;
	EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * G_B31_0 = NULL;
	{
		// if (!_isInitialized && _sequenceName != "")
		bool L_0 = __this->get__isInitialized_60();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = __this->get__sequenceName_7();
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Initialize();
		Plugin4DS_Initialize_mD794AB33AEAEA1F48F13FC5C4E1BBF458AA42408(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (_dataSource == null)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_3 = __this->get__dataSource_32();
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// UnityEngine.Debug.LogError("No data source");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralCD70C3E82D8893B724D90F24668BFCFDC8721849, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0034:
	{
		// if (Time.timeScale != unityTimeScale)
		float L_4;
		L_4 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		float L_5 = __this->get_unityTimeScale_70();
		if ((((float)L_4) == ((float)L_5)))
		{
			goto IL_0069;
		}
	}
	{
		// unityTimeScale = Time.timeScale;
		float L_6;
		L_6 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		__this->set_unityTimeScale_70(L_6);
		// Bridge4DS.SetSpeed(_dataSource.FDVUUID, _speedRatio * unityTimeScale);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_7 = __this->get__dataSource_32();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_FDVUUID_0();
		float L_9 = __this->get__speedRatio_65();
		float L_10 = __this->get_unityTimeScale_70();
		Bridge4DS_SetSpeed_m4FE1B4DC6786AEFC6DBB0AA6117A636F2173D90B(L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
	}

IL_0069:
	{
		// if (_newMeshAvailable)
		bool L_11 = __this->get__newMeshAvailable_56();
		if (!L_11)
		{
			goto IL_02f4;
		}
	}
	{
		// Mesh mesh = _meshes[_currentGeometryBuffer];
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_12 = __this->get__meshes_34();
		int32_t L_13 = __this->get__currentGeometryBuffer_53();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		// mesh.MarkDynamic();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_16 = V_0;
		NullCheck(L_16);
		Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(L_16, /*hidden argument*/NULL);
		// mesh.vertices = _newVertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_17 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = __this->get__newVertices_38();
		NullCheck(L_17);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_17, L_18, /*hidden argument*/NULL);
		// if (_nbTriangles == 0)  //case empty mesh
		int32_t L_19 = __this->get__nbTriangles_67();
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		// mesh.triangles = null;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_20 = V_0;
		NullCheck(L_20);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_20, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_00a5:
	{
		// mesh.triangles = _newTriangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_21 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = __this->get__newTriangles_40();
		NullCheck(L_21);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// if (_newUVs != null) mesh.uv = _newUVs;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = __this->get__newUVs_39();
		if (!L_23)
		{
			goto IL_00c5;
		}
	}
	{
		// if (_newUVs != null) mesh.uv = _newUVs;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_24 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25 = __this->get__newUVs_39();
		NullCheck(L_24);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// if (_newNormals != null) mesh.normals = _newNormals;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = __this->get__newNormals_42();
		if (!L_26)
		{
			goto IL_00d9;
		}
	}
	{
		// if (_newNormals != null) mesh.normals = _newNormals;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_27 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = __this->get__newNormals_42();
		NullCheck(L_27);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// if (_textures != null)
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_29 = __this->get__textures_35();
		if (!L_29)
		{
			goto IL_01a4;
		}
	}
	{
		// Texture2D texture = _textures[_currentTextureBuffer];
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_30 = __this->get__textures_35();
		int32_t L_31 = __this->get__currentTextureBuffer_55();
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_1 = L_33;
		// texture.LoadRawTextureData(_newTextureData);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get__newTextureData_41();
		NullCheck(L_34);
		Texture2D_LoadRawTextureData_m93A620CC97332F351305E3A93AD11CB2E0EFDAF4(L_34, L_35, /*hidden argument*/NULL);
		// texture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_1;
		NullCheck(L_36);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_36, /*hidden argument*/NULL);
		// if (_rendererComponent.sharedMaterial.HasProperty("_BaseMap"))
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_37 = __this->get__rendererComponent_37();
		NullCheck(L_37);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38;
		L_38 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		bool L_39;
		L_39 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_38, _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0133;
		}
	}
	{
		// _rendererComponent.sharedMaterial.SetTexture("_BaseMap", texture);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_40 = __this->get__rendererComponent_37();
		NullCheck(L_40);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41;
		L_41 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_40, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_42 = V_1;
		NullCheck(L_41);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_41, _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, L_42, /*hidden argument*/NULL);
		goto IL_01b0;
	}

IL_0133:
	{
		// else if (_rendererComponent.sharedMaterial.HasProperty("_BaseColorMap"))
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_43 = __this->get__rendererComponent_37();
		NullCheck(L_43);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44;
		L_44 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45;
		L_45 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_44, _stringLiteralBE314552DBBF009D5DA203F1E242A60342D869FB, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0162;
		}
	}
	{
		// _rendererComponent.sharedMaterial.SetTexture("_BaseColorMap", texture);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_46 = __this->get__rendererComponent_37();
		NullCheck(L_46);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47;
		L_47 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_46, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_48 = V_1;
		NullCheck(L_47);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_47, _stringLiteralBE314552DBBF009D5DA203F1E242A60342D869FB, L_48, /*hidden argument*/NULL);
		goto IL_01b0;
	}

IL_0162:
	{
		// else if (_rendererComponent.sharedMaterial.HasProperty("_UnlitColorMap"))
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49 = __this->get__rendererComponent_37();
		NullCheck(L_49);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50;
		L_50 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		bool L_51;
		L_51 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_50, _stringLiteralB25361BD92DB4AED4236551E394743922FA19154, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0191;
		}
	}
	{
		// _rendererComponent.sharedMaterial.SetTexture("_UnlitColorMap", texture);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_52 = __this->get__rendererComponent_37();
		NullCheck(L_52);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53;
		L_53 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_52, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_54 = V_1;
		NullCheck(L_53);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_53, _stringLiteralB25361BD92DB4AED4236551E394743922FA19154, L_54, /*hidden argument*/NULL);
		goto IL_01b0;
	}

IL_0191:
	{
		// _rendererComponent.material.mainTexture = texture;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_55 = __this->get__rendererComponent_37();
		NullCheck(L_55);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56;
		L_56 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_55, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_57 = V_1;
		NullCheck(L_56);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_56, L_57, /*hidden argument*/NULL);
		// }
		goto IL_01b0;
	}

IL_01a4:
	{
		// mesh.colors32 = _newColors;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_58 = V_0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_59 = __this->get__newColors_43();
		NullCheck(L_58);
		Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91(L_58, L_59, /*hidden argument*/NULL);
	}

IL_01b0:
	{
		// mesh.UploadMeshData(false); //Good optimization ! nbGeometryBuffers must be = 1
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_60 = V_0;
		NullCheck(L_60);
		Mesh_UploadMeshData_m3745185BFF4D9B970DEB23EEB6FD93DCAFFA8C07(L_60, (bool)0, /*hidden argument*/NULL);
		// _meshComponent.sharedMesh = mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_61 = __this->get__meshComponent_36();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_62 = V_0;
		NullCheck(L_61);
		MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958(L_61, L_62, /*hidden argument*/NULL);
		// _currentGeometryBuffer = (_currentGeometryBuffer + 1) % _nbGeometryBuffers;
		int32_t L_63 = __this->get__currentGeometryBuffer_53();
		int32_t L_64 = __this->get__nbGeometryBuffers_52();
		__this->set__currentGeometryBuffer_53(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1))%(int32_t)L_64)));
		// _currentTextureBuffer = (_currentTextureBuffer + 1) % _nbTextureBuffers;
		int32_t L_65 = __this->get__currentTextureBuffer_55();
		int32_t L_66 = __this->get__nbTextureBuffers_54();
		__this->set__currentTextureBuffer_55(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1))%(int32_t)L_66)));
		// OnNewModel?.Invoke();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_67 = __this->get_OnNewModel_4();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_68 = L_67;
		G_B25_0 = L_68;
		if (L_68)
		{
			G_B26_0 = L_68;
			goto IL_01f9;
		}
	}
	{
		goto IL_01fe;
	}

IL_01f9:
	{
		NullCheck(G_B26_0);
		EventFDV_Invoke_m445ECBC5C869D774DFEC66C1C070719CCEDE4208(G_B26_0, /*hidden argument*/NULL);
	}

IL_01fe:
	{
		// if (IsPlaying && (CurrentFrame == LastActiveFrame || CurrentFrame < prevFrame)) {
		bool L_69;
		L_69 = Plugin4DS_get_IsPlaying_mADFE4E9812EF471BF3FA15D000F5B5353A4A97C4_inline(__this, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0241;
		}
	}
	{
		int32_t L_70;
		L_70 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(__this, /*hidden argument*/NULL);
		int32_t L_71;
		L_71 = Plugin4DS_get_LastActiveFrame_m547BDCE7A899D914045BF03B1F9D7059608F7CD1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_70) == ((int32_t)L_71)))
		{
			goto IL_0222;
		}
	}
	{
		int32_t L_72;
		L_72 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(__this, /*hidden argument*/NULL);
		int32_t L_73 = __this->get_prevFrame_31();
		if ((((int32_t)L_72) >= ((int32_t)L_73)))
		{
			goto IL_0241;
		}
	}

IL_0222:
	{
		// OnLastFrame?.Invoke();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_74 = __this->get_OnLastFrame_6();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_75 = L_74;
		G_B31_0 = L_75;
		if (L_75)
		{
			G_B32_0 = L_75;
			goto IL_022e;
		}
	}
	{
		goto IL_0233;
	}

IL_022e:
	{
		NullCheck(G_B32_0);
		EventFDV_Invoke_m445ECBC5C869D774DFEC66C1C070719CCEDE4208(G_B32_0, /*hidden argument*/NULL);
	}

IL_0233:
	{
		// if (!_loop)
		bool L_76 = __this->get__loop_18();
		if (L_76)
		{
			goto IL_0241;
		}
	}
	{
		// Stop();
		Plugin4DS_Stop_mD70181CC57BE66C89002A7BFEA67B8E6EF73644F(__this, /*hidden argument*/NULL);
	}

IL_0241:
	{
		// prevFrame = CurrentFrame;
		int32_t L_77;
		L_77 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(__this, /*hidden argument*/NULL);
		__this->set_prevFrame_31(L_77);
		// _newMeshAvailable = false;
		__this->set__newMeshAvailable_56((bool)0);
		// if (_meshCollider && _meshCollider.enabled)
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_78 = __this->get__meshCollider_59();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_027a;
		}
	}
	{
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_80 = __this->get__meshCollider_59();
		NullCheck(L_80);
		bool L_81;
		L_81 = Collider_get_enabled_m03B73B5C97033F939387D1785BDF2619CADAEEB0(L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_027a;
		}
	}
	{
		// _meshCollider.sharedMesh = mesh;
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_82 = __this->get__meshCollider_59();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_83 = V_0;
		NullCheck(L_82);
		MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406(L_82, L_83, /*hidden argument*/NULL);
	}

IL_027a:
	{
		// _totalFramesPlayed++;
		int32_t L_84 = __this->get__totalFramesPlayed_29();
		__this->set__totalFramesPlayed_29(((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1)));
		// if (_debugInfo)
		bool L_85 = __this->get__debugInfo_22();
		if (!L_85)
		{
			goto IL_02f4;
		}
	}
	{
		// double timeInMSeconds = System.DateTime.Now.Subtract(_lastUpdatingTime).TotalMilliseconds;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_86;
		L_86 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_3 = L_86;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_87 = __this->get__lastUpdatingTime_28();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_88;
		L_88 = DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_3), L_87, /*hidden argument*/NULL);
		V_4 = L_88;
		double L_89;
		L_89 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_4), /*hidden argument*/NULL);
		V_2 = L_89;
		// _lastUpdatingId++;
		int32_t L_90 = __this->get__lastUpdatingId_27();
		__this->set__lastUpdatingId_27(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
		// if (timeInMSeconds > 500f)
		double L_91 = V_2;
		if ((!(((double)L_91) > ((double)(500.0)))))
		{
			goto IL_02f4;
		}
	}
	{
		// _updatingFPS = (float)((float)(_lastUpdatingId) / timeInMSeconds * 1000f);
		int32_t L_92 = __this->get__lastUpdatingId_27();
		double L_93 = V_2;
		__this->set__updatingFPS_26(((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)((double)((double)((float)((float)L_92))))/(double)L_93)), (double)(1000.0))))));
		// _lastUpdatingTime = System.DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_94;
		L_94 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		__this->set__lastUpdatingTime_28(L_94);
		// _lastUpdatingId = 0;
		__this->set__lastUpdatingId_27(0);
	}

IL_02f4:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_UpdateMesh_mA7FDB953AA7CEF26EA04856E88C72D833E85AAAD (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	int32_t G_B5_1 = 0;
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	int32_t G_B4_1 = 0;
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	int32_t G_B6_2 = 0;
	intptr_t G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	intptr_t G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	intptr_t G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	int32_t G_B8_3 = 0;
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	intptr_t G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	intptr_t G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	int32_t G_B7_3 = 0;
	intptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	intptr_t G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	intptr_t G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	intptr_t G_B9_3;
	memset((&G_B9_3), 0, sizeof(G_B9_3));
	int32_t G_B9_4 = 0;
	intptr_t G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	intptr_t G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	intptr_t G_B11_2;
	memset((&G_B11_2), 0, sizeof(G_B11_2));
	intptr_t G_B11_3;
	memset((&G_B11_3), 0, sizeof(G_B11_3));
	int32_t G_B11_4 = 0;
	intptr_t G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	intptr_t G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	intptr_t G_B10_2;
	memset((&G_B10_2), 0, sizeof(G_B10_2));
	intptr_t G_B10_3;
	memset((&G_B10_3), 0, sizeof(G_B10_3));
	int32_t G_B10_4 = 0;
	intptr_t G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	intptr_t G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	intptr_t G_B12_2;
	memset((&G_B12_2), 0, sizeof(G_B12_2));
	intptr_t G_B12_3;
	memset((&G_B12_3), 0, sizeof(G_B12_3));
	intptr_t G_B12_4;
	memset((&G_B12_4), 0, sizeof(G_B12_4));
	int32_t G_B12_5 = 0;
	intptr_t G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	intptr_t G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	intptr_t G_B14_2;
	memset((&G_B14_2), 0, sizeof(G_B14_2));
	intptr_t G_B14_3;
	memset((&G_B14_3), 0, sizeof(G_B14_3));
	intptr_t G_B14_4;
	memset((&G_B14_4), 0, sizeof(G_B14_4));
	int32_t G_B14_5 = 0;
	intptr_t G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	intptr_t G_B13_1;
	memset((&G_B13_1), 0, sizeof(G_B13_1));
	intptr_t G_B13_2;
	memset((&G_B13_2), 0, sizeof(G_B13_2));
	intptr_t G_B13_3;
	memset((&G_B13_3), 0, sizeof(G_B13_3));
	intptr_t G_B13_4;
	memset((&G_B13_4), 0, sizeof(G_B13_4));
	int32_t G_B13_5 = 0;
	intptr_t G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	intptr_t G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	intptr_t G_B15_2;
	memset((&G_B15_2), 0, sizeof(G_B15_2));
	intptr_t G_B15_3;
	memset((&G_B15_3), 0, sizeof(G_B15_3));
	intptr_t G_B15_4;
	memset((&G_B15_4), 0, sizeof(G_B15_4));
	intptr_t G_B15_5;
	memset((&G_B15_5), 0, sizeof(G_B15_5));
	int32_t G_B15_6 = 0;
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * G_B18_0 = NULL;
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * G_B19_1 = NULL;
	{
		// if (_dataSource == null || !_isInitialized)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get__isInitialized_60();
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// int modelId = Bridge4DS.UpdateModel(_dataSource.FDVUUID,
		//                                           _newVerticesHandle.AddrOfPinnedObject(),
		//                                           _newUVsHandle.IsAllocated?_newUVsHandle.AddrOfPinnedObject():System.IntPtr.Zero,
		//                                           _newTrianglesHandle.AddrOfPinnedObject(),
		//                                           _newTextureDataHandle.IsAllocated? _newTextureDataHandle.AddrOfPinnedObject(): System.IntPtr.Zero,
		//                                           _newNormalsHandle.IsAllocated?_newNormalsHandle.AddrOfPinnedObject(): System.IntPtr.Zero,
		//                                           _newColorsHandle.IsAllocated?_newColorsHandle.AddrOfPinnedObject(): System.IntPtr.Zero,
		//                                           _lastModelId,
		//                                           ref _nbVertices,
		//                                           ref _nbTriangles);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_2 = __this->get__dataSource_32();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_FDVUUID_0();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = __this->get_address_of__newVerticesHandle_44();
		intptr_t L_5;
		L_5 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_6 = __this->get_address_of__newUVsHandle_45();
		bool L_7;
		L_7 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_6, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		G_B4_1 = L_3;
		if (L_7)
		{
			G_B5_0 = L_5;
			G_B5_1 = L_3;
			goto IL_003b;
		}
	}
	{
		G_B6_0 = (0);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0046;
	}

IL_003b:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_8 = __this->get_address_of__newUVsHandle_45();
		intptr_t L_9;
		L_9 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_8, /*hidden argument*/NULL);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0046:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_10 = __this->get_address_of__newTrianglesHandle_46();
		intptr_t L_11;
		L_11 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_10, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_12 = __this->get_address_of__newTextureDataHandle_47();
		bool L_13;
		L_13 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_12, /*hidden argument*/NULL);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_13)
		{
			G_B8_0 = L_11;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0065;
		}
	}
	{
		G_B9_0 = (0);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_0070;
	}

IL_0065:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_14 = __this->get_address_of__newTextureDataHandle_47();
		intptr_t L_15;
		L_15 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_14, /*hidden argument*/NULL);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_0070:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_16 = __this->get_address_of__newNormalsHandle_48();
		bool L_17;
		L_17 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_16, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		if (L_17)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			G_B11_4 = G_B9_4;
			goto IL_0084;
		}
	}
	{
		G_B12_0 = (0);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_008f;
	}

IL_0084:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_18 = __this->get_address_of__newNormalsHandle_48();
		intptr_t L_19;
		L_19 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_18, /*hidden argument*/NULL);
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_008f:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_20 = __this->get_address_of__newColorsHandle_49();
		bool L_21;
		L_21 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_20, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
		G_B13_4 = G_B12_4;
		G_B13_5 = G_B12_5;
		if (L_21)
		{
			G_B14_0 = G_B12_0;
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			G_B14_3 = G_B12_3;
			G_B14_4 = G_B12_4;
			G_B14_5 = G_B12_5;
			goto IL_00a3;
		}
	}
	{
		G_B15_0 = (0);
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		G_B15_4 = G_B13_3;
		G_B15_5 = G_B13_4;
		G_B15_6 = G_B13_5;
		goto IL_00ae;
	}

IL_00a3:
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_22 = __this->get_address_of__newColorsHandle_49();
		intptr_t L_23;
		L_23 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_22, /*hidden argument*/NULL);
		G_B15_0 = L_23;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
		G_B15_5 = G_B14_4;
		G_B15_6 = G_B14_5;
	}

IL_00ae:
	{
		int32_t L_24 = __this->get__lastModelId_33();
		int32_t* L_25 = __this->get_address_of__nbVertices_66();
		int32_t* L_26 = __this->get_address_of__nbTriangles_67();
		int32_t L_27;
		L_27 = Bridge4DS_UpdateModel_m53B448AB746D781B1EADA62DE13B76A8C9DD8FD1(G_B15_6, (intptr_t)G_B15_5, (intptr_t)G_B15_4, (intptr_t)G_B15_3, (intptr_t)G_B15_2, (intptr_t)G_B15_1, (intptr_t)G_B15_0, L_24, (int32_t*)L_25, (int32_t*)L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// if (!_newMeshAvailable)
		bool L_28 = __this->get__newMeshAvailable_56();
		if (L_28)
		{
			goto IL_00e7;
		}
	}
	{
		// _newMeshAvailable = (modelId != -1 && modelId != _lastModelId);
		int32_t L_29 = V_0;
		G_B17_0 = __this;
		if ((((int32_t)L_29) == ((int32_t)(-1))))
		{
			G_B18_0 = __this;
			goto IL_00e1;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get__lastModelId_33();
		G_B19_0 = ((((int32_t)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00e2:
	{
		NullCheck(G_B19_1);
		G_B19_1->set__newMeshAvailable_56((bool)G_B19_0);
	}

IL_00e7:
	{
		// if (modelId == -1) modelId = _lastModelId;
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (modelId == -1) modelId = _lastModelId;
		int32_t L_33 = __this->get__lastModelId_33();
		V_0 = L_33;
		goto IL_00fb;
	}

IL_00f4:
	{
		// else _lastModelId = modelId;
		int32_t L_34 = V_0;
		__this->set__lastModelId_33(L_34);
	}

IL_00fb:
	{
		// if (_debugInfo)
		bool L_35 = __this->get__debugInfo_22();
		if (!L_35)
		{
			goto IL_0163;
		}
	}
	{
		// double timeInMSeconds = System.DateTime.Now.Subtract(_lastDecodingTime).TotalMilliseconds;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_36;
		L_36 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_2 = L_36;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_37 = __this->get__lastDecodingTime_25();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_38;
		L_38 = DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		double L_39;
		L_39 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_3), /*hidden argument*/NULL);
		V_1 = L_39;
		// if (_lastDecodingId == 0 || timeInMSeconds > 500f)
		int32_t L_40 = __this->get__lastDecodingId_24();
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		double L_41 = V_1;
		if ((!(((double)L_41) > ((double)(500.0)))))
		{
			goto IL_0163;
		}
	}

IL_0133:
	{
		// _decodingFPS = (float)((double)(Mathf.Abs((float)(modelId - _lastDecodingId))) / timeInMSeconds) * 1000f;
		int32_t L_42 = V_0;
		int32_t L_43 = __this->get__lastDecodingId_24();
		float L_44;
		L_44 = fabsf(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)))));
		double L_45 = V_1;
		__this->set__decodingFPS_23(((float)il2cpp_codegen_multiply((float)((float)((float)((double)((double)((double)((double)L_44))/(double)L_45)))), (float)(1000.0f))));
		// _lastDecodingTime = System.DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_46;
		L_46 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		__this->set__lastDecodingTime_25(L_46);
		// _lastDecodingId = modelId;
		int32_t L_47 = V_0;
		__this->set__lastDecodingId_24(L_47);
	}

IL_0163:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator unity4dv.Plugin4DS::SequenceTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Plugin4DS_SequenceTrigger_m002510EE0172A863D1D8031D4CC0E38CCC9F3DBF (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * L_0 = (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 *)il2cpp_codegen_object_new(U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693_il2cpp_TypeInfo_var);
		U3CSequenceTriggerU3Ed__152__ctor_mB37B17259FFD74094FF850B352377FCF2FCF3026(L_0, 0, /*hidden argument*/NULL);
		U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void unity4dv.Plugin4DS::Play(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Play_m93EFD8F08EC97137F4B432EB6B79CAAD3A4BB3A8 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, bool ___on0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA34FB1B89EF98C26306C2451EFC2609E558B7B31);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (on)
		bool L_0 = ___on0;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// if (_isSequenceTriggerON == false)
		bool L_1 = __this->get__isSequenceTriggerON_57();
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		// Bridge4DS.Play(_dataSource.FDVUUID, on);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_2 = __this->get__dataSource_32();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_FDVUUID_0();
		bool L_4 = ___on0;
		Bridge4DS_Play_mC5D702708221D1A96ED06367F488673EA7240564(L_3, L_4, /*hidden argument*/NULL);
		// StartCoroutine("SequenceTrigger");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralA34FB1B89EF98C26306C2451EFC2609E558B7B31, /*hidden argument*/NULL);
		// _isSequenceTriggerON = true;
		__this->set__isSequenceTriggerON_57((bool)1);
		// _totalFramesPlayed = 0;
		__this->set__totalFramesPlayed_29(0);
		// _playDate = System.DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6;
		L_6 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		__this->set__playDate_30(L_6);
		// }
		goto IL_006e;
	}

IL_0043:
	{
		// if (_isSequenceTriggerON == true)
		bool L_7 = __this->get__isSequenceTriggerON_57();
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// Bridge4DS.Play(_dataSource.FDVUUID, on);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_8 = __this->get__dataSource_32();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_FDVUUID_0();
		bool L_10 = ___on0;
		Bridge4DS_Play_mC5D702708221D1A96ED06367F488673EA7240564(L_9, L_10, /*hidden argument*/NULL);
		// StopCoroutine("SequenceTrigger");
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(__this, _stringLiteralA34FB1B89EF98C26306C2451EFC2609E558B7B31, /*hidden argument*/NULL);
		// _isSequenceTriggerON = false;
		__this->set__isSequenceTriggerON_57((bool)0);
	}

IL_006e:
	{
		// _isPlaying = on;
		bool L_11 = ___on0;
		__this->set__isPlaying_61(L_11);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Stop_mD70181CC57BE66C89002A7BFEA67B8E6EF73644F (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA34FB1B89EF98C26306C2451EFC2609E558B7B31);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isSequenceTriggerON == true)
		bool L_0 = __this->get__isSequenceTriggerON_57();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// Bridge4DS.Stop(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_1 = __this->get__dataSource_32();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_FDVUUID_0();
		Bridge4DS_Stop_m8C4E02C699AD4CACDAFB3E6B89D16BBFFF965698(L_2, /*hidden argument*/NULL);
		// StopCoroutine("SequenceTrigger");
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(__this, _stringLiteralA34FB1B89EF98C26306C2451EFC2609E558B7B31, /*hidden argument*/NULL);
		// _isSequenceTriggerON = false;
		__this->set__isSequenceTriggerON_57((bool)0);
	}

IL_002a:
	{
		// _isPlaying = false;
		__this->set__isPlaying_61((bool)0);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Close_mCA6AEC7DB99F0AF3E701687BB4740DBFA93FC26D (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// Stop();
		Plugin4DS_Stop_mD70181CC57BE66C89002A7BFEA67B8E6EF73644F(__this, /*hidden argument*/NULL);
		// Uninitialize();
		Plugin4DS_Uninitialize_m0DC93872C3BDE5942E6A795FD8FD7D032F506D02(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::GotoFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_GotoFrame_m95529234FD0D4D7CCD5851739A2255BFEA634F78 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool wasPlaying = _isPlaying;
		bool L_0 = __this->get__isPlaying_61();
		V_0 = L_0;
		// Play(false);
		Plugin4DS_Play_m93EFD8F08EC97137F4B432EB6B79CAAD3A4BB3A8(__this, (bool)0, /*hidden argument*/NULL);
		// Bridge4DS.GotoFrame(_dataSource.FDVUUID, frame);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_1 = __this->get__dataSource_32();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_FDVUUID_0();
		int32_t L_3 = ___frame0;
		Bridge4DS_GotoFrame_m808A2D57B7689E4D808B2C1C46E78CA64740DA4D(L_2, L_3, /*hidden argument*/NULL);
		// prevFrame = CurrentFrame;
		int32_t L_4;
		L_4 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(__this, /*hidden argument*/NULL);
		__this->set_prevFrame_31(L_4);
		// Play(wasPlaying);
		bool L_5 = V_0;
		Plugin4DS_Play_m93EFD8F08EC97137F4B432EB6B79CAAD3A4BB3A8(__this, L_5, /*hidden argument*/NULL);
		// UpdateMesh();
		Plugin4DS_UpdateMesh_mA7FDB953AA7CEF26EA04856E88C72D833E85AAAD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 unity4dv.Plugin4DS::GetSequenceNbFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetSequenceNbFrames_m43E23F3C2B1D3496FE32C75D8220299E223A7CA3 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// if (_dataSource != null)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// return Bridge4DS.GetSequenceNbFrames(_dataSource.FDVUUID);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_1 = __this->get__dataSource_32();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_FDVUUID_0();
		int32_t L_3;
		L_3 = Bridge4DS_GetSequenceNbFrames_mC240F0FD20CF75717E91E8743CE54C080848F7CA(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		// return _nbFrames;
		int32_t L_4 = __this->get__nbFrames_64();
		return L_4;
	}
}
// System.Int32 unity4dv.Plugin4DS::GetActiveNbFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetActiveNbFrames_mDA3F5FB7FD8C48E86DB7730772A5E8E0505261BF (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// return (int)_activeRangeMax - (int)_activeRangeMin + 1;
		float L_0 = __this->get__activeRangeMax_21();
		float L_1 = __this->get__activeRangeMin_20();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_0), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1))), (int32_t)1));
	}
}
// System.Int32 unity4dv.Plugin4DS::GetCurrentFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetCurrentFrame_m5A34EDE7986865A6487A84705A5D1CB5F06E7C25 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// if (_lastModelId < 0)
		int32_t L_0 = __this->get__lastModelId_33();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000b:
	{
		// return _lastModelId;
		int32_t L_1 = __this->get__lastModelId_33();
		return L_1;
	}
}
// System.Single unity4dv.Plugin4DS::GetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// return (_dataSource == null) ? 0.0f : _dataSource.FrameRate;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_1 = __this->get__dataSource_32();
		NullCheck(L_1);
		float L_2 = L_1->get_FrameRate_6();
		return L_2;
	}

IL_0014:
	{
		return (0.0f);
	}
}
// UnityEngine.TextureFormat unity4dv.Plugin4DS::GetTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plugin4DS_GetTextureFormat_m419E846918F764C95F8BC2A487C775ED3D162365 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// return _dataSource.TextureFormat;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_0 = __this->get__dataSource_32();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_TextureFormat_1();
		return L_1;
	}
}
// System.Void unity4dv.Plugin4DS::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_OnGUI_mBE86A821031388DFC24F58B28EE778A1E982787B (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9DE700AC72C42570263404DA1C9811E7D0F20C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29332365B016B9EC195CA3B90B107C7233547C17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA680579CB96360FE2CD31719EE05F72B8BE402);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62E186050A20122B0BDDC175BA7E70AA574B38EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6397B9AB1173E22C838830BBE223E86651EC5616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7110DB47A1B8F2BCDC5A2A121D11083782ADAE31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71486B8738C402F6EADDA5BA47D381489B63C81B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84471E812A71C30A81C76E9585E8269F64FEDBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral934188BF126473DDD6D9A3F6E7B36F732E9A8219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C5F3F2AFA586BF46BCFBD93D476C32B66FDC4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC3067A6F0287D9FBBEE667CDEA23B178FBFC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD0580DC73BFDBBAEE6668BE8346D69284D28877);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9015830A09FDC0FED051C05289570B7261AD45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC80D8F4A883B5DB12E0934A8966167559250CF61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBD7CB81923B58CE4862730D2B0EF3BE29F8FEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD394C8F6058A87B659625448936ECFAB02018739);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF54B0C5F27D7BCFA2EFA843E6130C369D84B2AB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA12CE392F603CC2A9888D612CB7FBD8F73492B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB8180CF7924EE3D457D6D858A3EEBD0270EC6F);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_4 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_5;
	memset((&V_5), 0, sizeof(V_5));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	{
		// if (_debugInfo)
		bool L_0 = __this->get__debugInfo_22();
		if (!L_0)
		{
			goto IL_04fc;
		}
	}
	{
		// double delay = System.DateTime.Now.Subtract(_playDate).TotalMilliseconds - ((float)(_totalFramesPlayed) * 1000 / GetFrameRate());
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_5 = L_1;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2 = __this->get__playDate_30();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3;
		L_3 = DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_5), L_2, /*hidden argument*/NULL);
		V_6 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_6), /*hidden argument*/NULL);
		int32_t L_5 = __this->get__totalFramesPlayed_29();
		float L_6;
		L_6 = Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19(__this, /*hidden argument*/NULL);
		V_0 = ((double)il2cpp_codegen_subtract((double)L_4, (double)((double)((double)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_5)), (float)(1000.0f)))/(float)L_6))))));
		// string decoding = _decodingFPS.ToString("00.00") + " fps";
		float* L_7 = __this->get_address_of__decodingFPS_23();
		String_t* L_8;
		L_8 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_7, _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, _stringLiteral29332365B016B9EC195CA3B90B107C7233547C17, /*hidden argument*/NULL);
		V_1 = L_9;
		// string updating = _updatingFPS.ToString("00.00") + " fps";
		float* L_10 = __this->get_address_of__updatingFPS_26();
		String_t* L_11;
		L_11 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_10, _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_11, _stringLiteral29332365B016B9EC195CA3B90B107C7233547C17, /*hidden argument*/NULL);
		V_2 = L_12;
		// delay /= 1000;
		double L_13 = V_0;
		V_0 = ((double)((double)L_13/(double)(1000.0)));
		// if (!_isPlaying)
		bool L_14 = __this->get__isPlaying_61();
		if (L_14)
		{
			goto IL_009f;
		}
	}
	{
		// delay = 0f;
		V_0 = (0.0);
		// decoding = "paused";
		V_1 = _stringLiteralFA12CE392F603CC2A9888D612CB7FBD8F73492B2;
		// updating = "paused";
		V_2 = _stringLiteralFA12CE392F603CC2A9888D612CB7FBD8F73492B2;
	}

IL_009f:
	{
		// int top = 20;
		V_3 = ((int32_t)20);
		// GUIStyle title = new GUIStyle();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_15 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_15, /*hidden argument*/NULL);
		V_4 = L_15;
		// title.normal.textColor = Color.white;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16 = V_4;
		NullCheck(L_16);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_17;
		L_17 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_16, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_17);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_17, L_18, /*hidden argument*/NULL);
		// title.fontStyle = FontStyle.Bold;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = V_4;
		NullCheck(L_19);
		GUIStyle_set_fontStyle_mE158697020EE5D1044460A605FC8243AA8640F39(L_19, 1, /*hidden argument*/NULL);
		// GUI.Button(new Rect(Screen.width - 210, top - 10, 200, 330), "");
		int32_t L_20;
		L_20 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_21 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_22), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)210))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)10))))), (200.0f), (330.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top, 190, 20), "Sequence ", title);
		int32_t L_24;
		L_24 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_25 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_26), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)200))))), ((float)((float)L_25)), (190.0f), (20.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_27 = V_4;
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_26, _stringLiteral84471E812A71C30A81C76E9585E8269F64FEDBB0, L_27, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Length: " + ((float)GetSequenceNbFrames() / GetFrameRate()).ToString("00.00") + " sec");
		int32_t L_28;
		L_28 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_29 = V_3;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)15)));
		V_3 = L_30;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_31), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)((int32_t)200))))), ((float)((float)L_30)), (190.0f), (20.0f), /*hidden argument*/NULL);
		int32_t L_32;
		L_32 = Plugin4DS_GetSequenceNbFrames_m43E23F3C2B1D3496FE32C75D8220299E223A7CA3(__this, /*hidden argument*/NULL);
		float L_33;
		L_33 = Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19(__this, /*hidden argument*/NULL);
		V_7 = ((float)((float)((float)((float)L_32))/(float)L_33));
		String_t* L_34;
		L_34 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_7), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		String_t* L_35;
		L_35 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6397B9AB1173E22C838830BBE223E86651EC5616, L_34, _stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_31, L_35, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Nb Frames: " + GetSequenceNbFrames() + " frames");
		int32_t L_36;
		L_36 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)15)));
		V_3 = L_38;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_39), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)200))))), ((float)((float)L_38)), (190.0f), (20.0f), /*hidden argument*/NULL);
		int32_t L_40;
		L_40 = Plugin4DS_GetSequenceNbFrames_m43E23F3C2B1D3496FE32C75D8220299E223A7CA3(__this, /*hidden argument*/NULL);
		V_8 = L_40;
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_8), /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA9C5F3F2AFA586BF46BCFBD93D476C32B66FDC4C, L_41, _stringLiteralF54B0C5F27D7BCFA2EFA843E6130C369D84B2AB4, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_39, L_42, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Frame rate: " + GetFrameRate().ToString("00.00") + " fps");
		int32_t L_43;
		L_43 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_44 = V_3;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)((int32_t)15)));
		V_3 = L_45;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_46), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)200))))), ((float)((float)L_45)), (190.0f), (20.0f), /*hidden argument*/NULL);
		float L_47;
		L_47 = Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19(__this, /*hidden argument*/NULL);
		V_7 = L_47;
		String_t* L_48;
		L_48 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_7), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral934188BF126473DDD6D9A3F6E7B36F732E9A8219, L_48, _stringLiteral29332365B016B9EC195CA3B90B107C7233547C17, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_46, L_49, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Max vertices: " + _dataSource.MaxVertices);
		int32_t L_50;
		L_50 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_51 = V_3;
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)((int32_t)15)));
		V_3 = L_52;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_53), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)200))))), ((float)((float)L_52)), (190.0f), (20.0f), /*hidden argument*/NULL);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_54 = __this->get__dataSource_32();
		NullCheck(L_54);
		int32_t* L_55 = L_54->get_address_of_MaxVertices_4();
		String_t* L_56;
		L_56 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_55, /*hidden argument*/NULL);
		String_t* L_57;
		L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC80D8F4A883B5DB12E0934A8966167559250CF61, L_56, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_53, L_57, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Max triangles: " + _dataSource.MaxTriangles);
		int32_t L_58;
		L_58 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_59 = V_3;
		int32_t L_60 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)((int32_t)15)));
		V_3 = L_60;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_61), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)200))))), ((float)((float)L_60)), (190.0f), (20.0f), /*hidden argument*/NULL);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_62 = __this->get__dataSource_32();
		NullCheck(L_62);
		int32_t* L_63 = L_62->get_address_of_MaxTriangles_5();
		String_t* L_64;
		L_64 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_63, /*hidden argument*/NULL);
		String_t* L_65;
		L_65 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5DA680579CB96360FE2CD31719EE05F72B8BE402, L_64, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_61, L_65, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Texture format: " + _dataSource.TextureFormat);
		int32_t L_66;
		L_66 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_67 = V_3;
		int32_t L_68 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)((int32_t)15)));
		V_3 = L_68;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_69), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)((int32_t)200))))), ((float)((float)L_68)), (190.0f), (20.0f), /*hidden argument*/NULL);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_70 = __this->get__dataSource_32();
		NullCheck(L_70);
		int32_t* L_71 = L_70->get_address_of_TextureFormat_1();
		RuntimeObject * L_72 = Box(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var, L_71);
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
		*L_71 = *(int32_t*)UnBox(L_72);
		String_t* L_74;
		L_74 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBA9015830A09FDC0FED051C05289570B7261AD45, L_73, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_69, L_74, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Texture size: " + _dataSource.TextureSize + "x" + _dataSource.TextureSize + "px");
		int32_t L_75;
		L_75 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_76 = V_3;
		int32_t L_77 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)((int32_t)15)));
		V_3 = L_77;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_78), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)((int32_t)200))))), ((float)((float)L_77)), (190.0f), (20.0f), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral1D9DE700AC72C42570263404DA1C9811E7D0F20C);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1D9DE700AC72C42570263404DA1C9811E7D0F20C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_82 = __this->get__dataSource_32();
		NullCheck(L_82);
		int32_t* L_83 = L_82->get_address_of_TextureSize_2();
		String_t* L_84;
		L_84 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_83, /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_84);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_85 = L_81;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = L_85;
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_87 = __this->get__dataSource_32();
		NullCheck(L_87);
		int32_t* L_88 = L_87->get_address_of_TextureSize_2();
		String_t* L_89;
		L_89 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_88, /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_89);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_89);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_86;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteral7110DB47A1B8F2BCDC5A2A121D11083782ADAE31);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7110DB47A1B8F2BCDC5A2A121D11083782ADAE31);
		String_t* L_91;
		L_91 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_90, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_78, L_91, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 25, 190, 20), "Current Mesh", title);
		int32_t L_92;
		L_92 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_93 = V_3;
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)((int32_t)25)));
		V_3 = L_94;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_95;
		memset((&L_95), 0, sizeof(L_95));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_95), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)((int32_t)200))))), ((float)((float)L_94)), (190.0f), (20.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_96 = V_4;
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_95, _stringLiteralAC3067A6F0287D9FBBEE667CDEA23B178FBFC7CE, L_96, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Nb vertices: " + _nbVertices);
		int32_t L_97;
		L_97 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_98 = V_3;
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)((int32_t)15)));
		V_3 = L_99;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_100), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_97, (int32_t)((int32_t)200))))), ((float)((float)L_99)), (190.0f), (20.0f), /*hidden argument*/NULL);
		int32_t* L_101 = __this->get_address_of__nbVertices_66();
		String_t* L_102;
		L_102 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_101, /*hidden argument*/NULL);
		String_t* L_103;
		L_103 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCFBD7CB81923B58CE4862730D2B0EF3BE29F8FEE, L_102, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_100, L_103, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Nb triangles: " + _nbTriangles);
		int32_t L_104;
		L_104 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_105 = V_3;
		int32_t L_106 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)((int32_t)15)));
		V_3 = L_106;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_107), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)((int32_t)200))))), ((float)((float)L_106)), (190.0f), (20.0f), /*hidden argument*/NULL);
		int32_t* L_108 = __this->get_address_of__nbTriangles_67();
		String_t* L_109;
		L_109 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_108, /*hidden argument*/NULL);
		String_t* L_110;
		L_110 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral71486B8738C402F6EADDA5BA47D381489B63C81B, L_109, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_107, L_110, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 25, 190, 20), "Playback", title);
		int32_t L_111;
		L_111 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_112 = V_3;
		int32_t L_113 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)((int32_t)25)));
		V_3 = L_113;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_114;
		memset((&L_114), 0, sizeof(L_114));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_114), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)((int32_t)200))))), ((float)((float)L_113)), (190.0f), (20.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_115 = V_4;
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_114, _stringLiteral62E186050A20122B0BDDC175BA7E70AA574B38EC, L_115, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Time: " + ((float)(CurrentFrame) / GetFrameRate()).ToString("00.00") + " sec");
		int32_t L_116;
		L_116 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_117 = V_3;
		int32_t L_118 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)((int32_t)15)));
		V_3 = L_118;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_119), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)((int32_t)200))))), ((float)((float)L_118)), (190.0f), (20.0f), /*hidden argument*/NULL);
		int32_t L_120;
		L_120 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(__this, /*hidden argument*/NULL);
		float L_121;
		L_121 = Plugin4DS_GetFrameRate_m6C00D07D0D0F7917B926AE2D62878B54302C5F19(__this, /*hidden argument*/NULL);
		V_7 = ((float)((float)((float)((float)L_120))/(float)L_121));
		String_t* L_122;
		L_122 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_7), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		String_t* L_123;
		L_123 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_122, _stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_119, L_123, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Decoding rate: " + decoding);
		int32_t L_124;
		L_124 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_125 = V_3;
		int32_t L_126 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)((int32_t)15)));
		V_3 = L_126;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_127;
		memset((&L_127), 0, sizeof(L_127));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_127), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)((int32_t)200))))), ((float)((float)L_126)), (190.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_128 = V_1;
		String_t* L_129;
		L_129 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD394C8F6058A87B659625448936ECFAB02018739, L_128, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_127, L_129, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Decoding delay: " + delay.ToString("00.00") + " sec");
		int32_t L_130;
		L_130 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_131 = V_3;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)((int32_t)15)));
		V_3 = L_132;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_133;
		memset((&L_133), 0, sizeof(L_133));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_133), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_130, (int32_t)((int32_t)200))))), ((float)((float)L_132)), (190.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_134;
		L_134 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)(&V_0), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		String_t* L_135;
		L_135 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralAD0580DC73BFDBBAEE6668BE8346D69284D28877, L_134, _stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_133, L_135, /*hidden argument*/NULL);
		// GUI.Label(new Rect(Screen.width - 200, top += 15, 190, 20), "Updating rate: " + updating);
		int32_t L_136;
		L_136 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_137 = V_3;
		int32_t L_138 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)((int32_t)15)));
		V_3 = L_138;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_139), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)((int32_t)200))))), ((float)((float)L_138)), (190.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_140 = V_2;
		String_t* L_141;
		L_141 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFBB8180CF7924EE3D457D6D858A3EEBD0270EC6F, L_140, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_139, L_141, /*hidden argument*/NULL);
	}

IL_04fc:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::Preview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_Preview_mC69EFE970FE965608CB131B14AD31AB6CB3223A5 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F81C8BBDEFDF90EA5980E3A76F541B76B1A0471);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B9B9CB5482EE91FFA10FF0D7020F6BDE7E99FD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_4 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_5 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_6 = NULL;
	{
		// if (_sourceType == SOURCE_TYPE.Network && _sequenceName.Length > 7 && _sequenceName.Substring(0, 7) == "holosys")
		int32_t L_0 = __this->get__sourceType_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_1 = __this->get__sequenceName_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)7)))
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_3 = __this->get__sequenceName_7();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_3, 0, 7, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0077;
		}
	}
	{
		// Texture2D live = Resources.Load<Texture2D>("4DViews/LogoLive");
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6;
		L_6 = Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539(_stringLiteral7F81C8BBDEFDF90EA5980E3A76F541B76B1A0471, /*hidden argument*/Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		V_3 = L_6;
		// Shader particle = Shader.Find("Particles/Standard Surface");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteralE3B9B9CB5482EE91FFA10FF0D7020F6BDE7E99FD, /*hidden argument*/NULL);
		V_4 = L_7;
		// var tempMaterial = new Material(GetComponent<Renderer>().sharedMaterial)
		// {
		//     mainTexture = live
		// };
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8;
		L_8 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_8);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_8, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_10, L_9, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = L_10;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = V_3;
		NullCheck(L_11);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_11;
		// tempMaterial.shader = particle;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = V_5;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_14 = V_4;
		NullCheck(L_13);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_13, L_14, /*hidden argument*/NULL);
		// GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_15;
		L_15 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = V_5;
		NullCheck(L_15);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_15, L_16, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0077:
	{
		// int nbGeometryTMP = _nbGeometryBuffers;
		int32_t L_17 = __this->get__nbGeometryBuffers_52();
		V_0 = L_17;
		// int nbTextureTMP = _nbTextureBuffers;
		int32_t L_18 = __this->get__nbTextureBuffers_54();
		V_1 = L_18;
		// bool debugInfoTMP = _debugInfo;
		bool L_19 = __this->get__debugInfo_22();
		V_2 = L_19;
		// _nbGeometryBuffers = 1;
		__this->set__nbGeometryBuffers_52(1);
		// _nbTextureBuffers = 1;
		__this->set__nbTextureBuffers_54(1);
		// _debugInfo = false;
		__this->set__debugInfo_22((bool)0);
		// if (_isInitialized && _dataSource == null)
		bool L_20 = __this->get__isInitialized_60();
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_21 = __this->get__dataSource_32();
		if (L_21)
		{
			goto IL_00b8;
		}
	}
	{
		// _isInitialized = false;
		__this->set__isInitialized_60((bool)0);
	}

IL_00b8:
	{
		// Initialize();
		Plugin4DS_Initialize_mD794AB33AEAEA1F48F13FC5C4E1BBF458AA42408(__this, (bool)0, /*hidden argument*/NULL);
		// if (_isInitialized)
		bool L_22 = __this->get__isInitialized_60();
		if (!L_22)
		{
			goto IL_010e;
		}
	}
	{
		// GotoFrame(_previewFrame);
		int32_t L_23 = __this->get__previewFrame_62();
		Plugin4DS_GotoFrame_m95529234FD0D4D7CCD5851739A2255BFEA634F78(__this, L_23, /*hidden argument*/NULL);
		// Update();
		Plugin4DS_Update_m1704279B2DF7562F155491B36A02E899A85639B9(__this, /*hidden argument*/NULL);
		// var tempMaterial = new Material(_rendererComponent.sharedMaterial)
		// {
		//     mainTexture = _rendererComponent.sharedMaterial.mainTexture
		// };
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_24 = __this->get__rendererComponent_37();
		NullCheck(L_24);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25;
		L_25 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_24, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_26, L_25, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = L_26;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_28 = __this->get__rendererComponent_37();
		NullCheck(L_28);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_30;
		L_30 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_27, L_30, /*hidden argument*/NULL);
		V_6 = L_27;
		// _rendererComponent.sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_31 = __this->get__rendererComponent_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = V_6;
		NullCheck(L_31);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_31, L_32, /*hidden argument*/NULL);
	}

IL_010e:
	{
		// _nbGeometryBuffers = nbGeometryTMP;
		int32_t L_33 = V_0;
		__this->set__nbGeometryBuffers_52(L_33);
		// _nbTextureBuffers = nbTextureTMP;
		int32_t L_34 = V_1;
		__this->set__nbTextureBuffers_54(L_34);
		// _debugInfo = debugInfoTMP;
		bool L_35 = V_2;
		__this->set__debugInfo_22(L_35);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::ConvertPreviewTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_ConvertPreviewTexture_m54310F03126B1FB14E439C32596B3E761608CF23 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* V_3 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_4 = NULL;
	{
		// if (_sourceType == SOURCE_TYPE.Network && _sequenceName.Length > 7 && _sequenceName.Substring(0, 7) == "holosys")
		int32_t L_0 = __this->get__sourceType_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = __this->get__sequenceName_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)7)))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_3 = __this->get__sequenceName_7();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_3, 0, 7, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral1453C8D44C1D7847C4560EAC697E9E5CD4675B08, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// System.DateTime current_time = System.DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6;
		L_6 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_6;
		// if (_rendererComponent != null && _rendererComponent.sharedMaterial.mainTexture != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_7 = __this->get__rendererComponent_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0121;
		}
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9 = __this->get__rendererComponent_37();
		NullCheck(L_9);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11;
		L_11 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0121;
		}
	}
	{
		// if (((System.TimeSpan)(current_time - last_preview_time)).TotalMilliseconds < 1000
		//     || ((Texture2D)_rendererComponent.sharedMaterial.mainTexture).format == TextureFormat.DXT1)
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_13 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_14 = __this->get_last_preview_time_63();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_15;
		L_15 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		double L_16;
		L_16 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		if ((((double)L_16) < ((double)(1000.0))))
		{
			goto IL_00a0;
		}
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_17 = __this->get__rendererComponent_37();
		NullCheck(L_17);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18;
		L_18 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_19;
		L_19 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_18, /*hidden argument*/NULL);
		NullCheck(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_19, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_19, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00a1;
		}
	}

IL_00a0:
	{
		// return;
		return;
	}

IL_00a1:
	{
		// last_preview_time = current_time;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_21 = V_0;
		__this->set_last_preview_time_63(L_21);
		// if (_rendererComponent != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22 = __this->get__rendererComponent_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0121;
		}
	}
	{
		// Texture2D tex = (Texture2D)_rendererComponent.sharedMaterial.mainTexture;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_24 = __this->get__rendererComponent_37();
		NullCheck(L_24);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25;
		L_25 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_26;
		L_26 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_25, /*hidden argument*/NULL);
		V_2 = ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_26, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var));
		// if (tex && tex.format != TextureFormat.RGBA32)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0121;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)4)))
		{
			goto IL_0121;
		}
	}
	{
		// Color32[] pix = tex.GetPixels32();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = V_2;
		NullCheck(L_31);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_32;
		L_32 = Texture2D_GetPixels32_m419F7BF2D2D374C08247BE66838148DA485A6ECA(L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// Texture2D textureRGBA = new Texture2D(tex.width, tex.height, TextureFormat.RGBA32, false)
		// {
		//     wrapMode = TextureWrapMode.Clamp
		// };
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_33);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_35);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_37, L_34, L_36, 4, (bool)0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = L_37;
		NullCheck(L_38);
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_38, 1, /*hidden argument*/NULL);
		V_4 = L_38;
		// textureRGBA.SetPixels32(pix);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_4;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_40 = V_3;
		NullCheck(L_39);
		Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB(L_39, L_40, /*hidden argument*/NULL);
		// textureRGBA.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = V_4;
		NullCheck(L_41);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_41, /*hidden argument*/NULL);
		// _rendererComponent.sharedMaterial.mainTexture = textureRGBA;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_42 = __this->get__rendererComponent_37();
		NullCheck(L_42);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43;
		L_43 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_42, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_44 = V_4;
		NullCheck(L_43);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_43, L_44, /*hidden argument*/NULL);
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::AllocateGeometryBuffers(UnityEngine.Vector3[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,System.Int32[]&,UnityEngine.Color32[]&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS_AllocateGeometryBuffers_m68DA7AF6DD94D8CDB06D88ECD17182F794836529 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___verts0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___uvs1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___norms2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___tris3, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** ___colors4, int32_t ___nbMaxVerts5, int32_t ___nbMaxTris6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// verts = new Vector3[nbMaxVerts];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_0 = ___verts0;
		int32_t L_1 = ___nbMaxVerts5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_1);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		// tris = new int[nbMaxTris * 3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_3 = ___tris3;
		int32_t L_4 = ___nbMaxTris6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3)));
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		// if (_dataSource.ColorPerVertex)
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_6 = __this->get__dataSource_32();
		NullCheck(L_6);
		bool L_7 = L_6->get_ColorPerVertex_3();
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// colors = new Color32[nbMaxVerts];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** L_8 = ___colors4;
		int32_t L_9 = ___nbMaxVerts5;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_10 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, (uint32_t)L_9);
		*((RuntimeObject **)L_8) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)(RuntimeObject *)L_10);
		return;
	}

IL_002d:
	{
		// uvs = new Vector2[nbMaxVerts];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_11 = ___uvs1;
		int32_t L_12 = ___nbMaxVerts5;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_12);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_13);
		// norms = new Vector3[nbMaxVerts];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_14 = ___norms2;
		int32_t L_15 = ___nbMaxVerts5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_15);
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_16);
		// }
		return;
	}
}
// System.Void unity4dv.Plugin4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS__ctor_m68E88F99AD6EACE1F85C91857A0F9C53BD4FC464 (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _meshBufferMaxSize = 10;
		__this->set__meshBufferMaxSize_11(((int32_t)10));
		// private int _chunkBufferMaxSize = 180;
		__this->set__chunkBufferMaxSize_12(((int32_t)180));
		// private int _HTTPDownloadSize = 10000000;
		__this->set__HTTPDownloadSize_13(((int32_t)10000000));
		// private bool _autoPlay = true;
		__this->set__autoPlay_16((bool)1);
		// private bool _loop = true;
		__this->set__loop_18((bool)1);
		// public bool playAudio = true;
		__this->set_playAudio_19((bool)1);
		// private float _activeRangeMax = -1;
		__this->set__activeRangeMax_21((-1.0f));
		// private int prevFrame = -1;
		__this->set_prevFrame_31((-1));
		// private int _lastModelId = -1;
		__this->set__lastModelId_33((-1));
		// private int _nbGeometryBuffers = 2;
		__this->set__nbGeometryBuffers_52(2);
		// private int _nbTextureBuffers = 2;
		__this->set__nbTextureBuffers_54(2);
		// private float _triggerRate = 0.3f;
		__this->set__triggerRate_58((0.300000012f));
		// public System.DateTime last_preview_time = System.DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		__this->set_last_preview_time_63(L_0);
		// private float _speedRatio = 1.0f;
		__this->set__speedRatio_65((1.0f));
		// private float unityTimeScale = 1;
		__this->set_unityTimeScale_70((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void unity4dv.Plugin4DS::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin4DS__cctor_m7C0150737AD66E2BF90E0A09189BBDFD3DCC52B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static long _HTTPCacheSize = 1000000000;
		((Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_StaticFields*)il2cpp_codegen_static_fields_for(Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var))->set__HTTPCacheSize_15(((int64_t)((int64_t)((int32_t)1000000000))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unity4dv.Sync4DS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_Awake_mF75BF96221ECB0F75535D608E43B2E742D60C8C9 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m08B162396589928174E0F3A5281525AB8AB8E80A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _sequence = transform.GetComponent<Plugin4DS>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_1;
		L_1 = Component_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m08B162396589928174E0F3A5281525AB8AB8E80A(L_0, /*hidden argument*/Component_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m08B162396589928174E0F3A5281525AB8AB8E80A_RuntimeMethod_var);
		__this->set__sequence_4(L_1);
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_Start_m798C0751DF12546816CF58D8859A83659BE19030 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sync4DS_SyncAnimationSources_m4652C74B101123ABE31ADA22DAD3812F92429B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * V_2 = NULL;
	{
		// _audioSynchroPrecision = (float)_audioPrecisionInMsec / 1000f;
		int32_t L_0 = __this->get__audioPrecisionInMsec_5();
		__this->set__audioSynchroPrecision_6(((float)((float)((float)((float)L_0))/(float)(1000.0f))));
		// foreach (AnimationSource4DS animation in _animationSources)
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_1 = __this->get__animationSources_8();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0044;
	}

IL_001e:
	{
		// foreach (AnimationSource4DS animation in _animationSources)
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (animation.animationSource != null)
		AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * L_6 = V_2;
		NullCheck(L_6);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = L_6->get_animationSource_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// animation.animationSource.speed = 0;
		AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * L_9 = V_2;
		NullCheck(L_9);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = L_9->get_animationSource_0();
		NullCheck(L_10);
		Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041(L_10, (0.0f), /*hidden argument*/NULL);
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0044:
	{
		// foreach (AnimationSource4DS animation in _animationSources)
		int32_t L_12 = V_1;
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// _animationNormalizer = Mathf.Max(1, _sequence.SequenceNbOfFrames - 1);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_14 = __this->get__sequence_4();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Plugin4DS_get_SequenceNbOfFrames_m8803DFD2044F28C9B4EAF7178AEFFE93E0C480C0(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		__this->set__animationNormalizer_9(((float)((float)L_16)));
		// _sequence.OnNewModel += SyncAnimationSources;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_17 = __this->get__sequence_4();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_18 = (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)il2cpp_codegen_object_new(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		EventFDV__ctor_mF9F82F036F7D3B0CEC4B895D4D00FEF945234363(L_18, __this, (intptr_t)((intptr_t)Sync4DS_SyncAnimationSources_m4652C74B101123ABE31ADA22DAD3812F92429B4C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		Plugin4DS_add_OnNewModel_mE476D076AAB4F5D67AC97B2BDDE1A0F2C643C757(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_OnDestroy_m9B6F001BF628C0C65504A9CE46C8FE2A46CD630D (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sync4DS_SyncAnimationSources_m4652C74B101123ABE31ADA22DAD3812F92429B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _sequence.OnNewModel -= SyncAnimationSources;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_0 = __this->get__sequence_4();
		EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * L_1 = (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C *)il2cpp_codegen_object_new(EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C_il2cpp_TypeInfo_var);
		EventFDV__ctor_mF9F82F036F7D3B0CEC4B895D4D00FEF945234363(L_1, __this, (intptr_t)((intptr_t)Sync4DS_SyncAnimationSources_m4652C74B101123ABE31ADA22DAD3812F92429B4C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Plugin4DS_remove_OnNewModel_mA8769D6AFF9D16E705A35CD0615D8240D8AF8A46(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_Update_m23A114ACDD2FDD5C14417977CFBFAAD1755CD166 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	{
		// SyncAudioSources();
		Sync4DS_SyncAudioSources_m717134D6D3162AD72FA8E9FAA1AC5406BBF3E967(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::SyncAudioSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_SyncAudioSources_m717134D6D3162AD72FA8E9FAA1AC5406BBF3E967 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* V_1 = NULL;
	int32_t V_2 = 0;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int currentFrame = _sequence.CurrentFrame;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_0 = __this->get__sequence_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// foreach (AudioSource4DS audio in _audioSources)
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_2 = __this->get__audioSources_7();
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c1;
	}

IL_001a:
	{
		// foreach (AudioSource4DS audio in _audioSources)
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// AudioSource source = audio.audioSource;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_7 = L_6;
		NullCheck(L_7);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = L_7->get_audioSource_0();
		V_3 = L_8;
		// int startOnFrame = audio.startOnFrame;
		NullCheck(L_7);
		int32_t L_9 = L_7->get_startOnFrame_1();
		V_4 = L_9;
		// if (source == null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00bd;
		}
	}
	{
		// if (!_sequence.IsPlaying)
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_12 = __this->get__sequence_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = Plugin4DS_get_IsPlaying_mADFE4E9812EF471BF3FA15D000F5B5353A4A97C4_inline(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_004c;
		}
	}
	{
		// source.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = V_3;
		NullCheck(L_14);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_14, /*hidden argument*/NULL);
		// continue;
		goto IL_00bd;
	}

IL_004c:
	{
		// int sample = SeqToClipSample(source, currentFrame - startOnFrame);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = V_3;
		int32_t L_16 = V_0;
		int32_t L_17 = V_4;
		int32_t L_18;
		L_18 = Sync4DS_SeqToClipSample_mE11E1846E87239A11898030C0F1486F1EAFD22D6(__this, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		V_5 = L_18;
		// if (sample < 0 || (sample >= source.clip.length * source.clip.frequency))
		int32_t L_19 = V_5;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_20 = V_5;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_21 = V_3;
		NullCheck(L_21);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22;
		L_22 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_22, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_24 = V_3;
		NullCheck(L_24);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_25;
		L_25 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_25, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_20))) >= ((float)((float)il2cpp_codegen_multiply((float)L_23, (float)((float)((float)L_26))))))))
		{
			goto IL_0083;
		}
	}

IL_007b:
	{
		// source.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_27 = V_3;
		NullCheck(L_27);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_27, /*hidden argument*/NULL);
		// continue;
		goto IL_00bd;
	}

IL_0083:
	{
		// float timeDiff = (float)(Mathf.Abs(sample - source.timeSamples)) / (float)source.clip.frequency;
		int32_t L_28 = V_5;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE(L_29, /*hidden argument*/NULL);
		int32_t L_31;
		L_31 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_30)), /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_32 = V_3;
		NullCheck(L_32);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_33;
		L_33 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_33, /*hidden argument*/NULL);
		// if (timeDiff > _audioSynchroPrecision)
		float L_35 = __this->get__audioSynchroPrecision_6();
		if ((!(((float)((float)((float)((float)((float)L_31))/(float)((float)((float)L_34))))) > ((float)L_35))))
		{
			goto IL_00af;
		}
	}
	{
		// source.timeSamples = sample;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_36 = V_3;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00af:
	{
		// if (!source.isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_38 = V_3;
		NullCheck(L_38);
		bool L_39;
		L_39 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_38, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00bd;
		}
	}
	{
		// source.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_40 = V_3;
		NullCheck(L_40);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_40, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00c1:
	{
		// foreach (AudioSource4DS audio in _audioSources)
		int32_t L_42 = V_2;
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_43 = V_1;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 unity4dv.Sync4DS::SeqToClipSample(UnityEngine.AudioSource,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sync4DS_SeqToClipSample_mE11E1846E87239A11898030C0F1486F1EAFD22D6 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, int32_t ___frame1, const RuntimeMethod* method)
{
	{
		// return (int)(source.clip.frequency * frame / _sequence.Framerate);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ___source0;
		NullCheck(L_0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1;
		L_1 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___frame1;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_4 = __this->get__sequence_4();
		NullCheck(L_4);
		float L_5;
		L_5 = Plugin4DS_get_Framerate_m626A2A7D34675532D6DD9E50D1A90D23197DF0AE(L_4, /*hidden argument*/NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))/(float)L_5)));
	}
}
// System.Void unity4dv.Sync4DS::SyncAnimationSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_SyncAnimationSources_m4652C74B101123ABE31ADA22DAD3812F92429B4C (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* V_0 = NULL;
	int32_t V_1 = 0;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * V_2 = NULL;
	{
		// foreach (AnimationSource4DS animation in _animationSources)
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_0 = __this->get__animationSources_8();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0041;
	}

IL_000b:
	{
		// foreach (AnimationSource4DS animation in _animationSources)
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationSource4DS_t269764296EB10E91619FF5D4EE3F05DD7CC7A7C7 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// Animator source = animation.animationSource;
		NullCheck(L_4);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = L_4->get_animationSource_0();
		V_2 = L_5;
		// if (source != null)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// source.Play("", -1, (float)(_sequence.CurrentFrame / _animationNormalizer));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = V_2;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_9 = __this->get__sequence_4();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get__animationNormalizer_9();
		NullCheck(L_8);
		Animator_Play_m1438EDACA2804B50ED0D00D9986E30BCF903418B(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (-1), ((float)((float)((float)((float)((float)((float)L_10))/(float)L_11)))), /*hidden argument*/NULL);
	}

IL_003d:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0041:
	{
		// foreach (AnimationSource4DS animation in _animationSources)
		int32_t L_13 = V_1;
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_OnValidate_mFF800C6A112B045097F7BE1914409CC37468901A (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* V_0 = NULL;
	int32_t V_1 = 0;
	AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * V_2 = NULL;
	{
		// foreach (AudioSource4DS audio in _audioSources)
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_0 = __this->get__audioSources_7();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0039;
	}

IL_000b:
	{
		// foreach (AudioSource4DS audio in _audioSources)
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (audio.audioSource != null)
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_5 = V_2;
		NullCheck(L_5);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_audioSource_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// audio.audioSource.playOnAwake = false;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_8 = V_2;
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_audioSource_0();
		NullCheck(L_9);
		AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5(L_9, (bool)0, /*hidden argument*/NULL);
		// audio.audioSource.loop = false;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_10 = V_2;
		NullCheck(L_10);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = L_10->get_audioSource_0();
		NullCheck(L_11);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		// foreach (AudioSource4DS audio in _audioSources)
		int32_t L_13 = V_1;
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS_OnGUI_m11A2FB5BDD13C65A3A0EBA7C257021AD4B5120BC (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral853B6B17B50EB86BA0D2FC61CDA572B1784EC1EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD02BBEC9DB388993BDEAD3C32F4FE10AF4AAB4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* V_1 = NULL;
	int32_t V_2 = 0;
	AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * V_3 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	{
		// if (_debugInfo)
		bool L_0 = __this->get__debugInfo_10();
		if (!L_0)
		{
			goto IL_00eb;
		}
	}
	{
		// int audioId = 0;
		V_0 = 0;
		// foreach (AudioSource4DS audio in _audioSources)
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_1 = __this->get__audioSources_7();
		V_1 = L_1;
		V_2 = 0;
		goto IL_00e2;
	}

IL_001b:
	{
		// foreach (AudioSource4DS audio in _audioSources)
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// audioId++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// AudioSource source = audio.audioSource;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_7 = V_3;
		NullCheck(L_7);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = L_7->get_audioSource_0();
		V_4 = L_8;
		// if (source != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00de;
		}
	}
	{
		// int startOnFrame = audio.startOnFrame;
		AudioSource4DS_t40AB7CC9F741E651E33E1D06D7FBDBC15C896454 * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_startOnFrame_1();
		V_5 = L_12;
		// float seqTime = (_sequence.CurrentFrame - startOnFrame) / _sequence.Framerate;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_13 = __this->get__sequence_4();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Plugin4DS_get_CurrentFrame_mDCF1EE89A3A8F12985B9633D3B84172B1C050631(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_5;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_16 = __this->get__sequence_4();
		NullCheck(L_16);
		float L_17;
		L_17 = Plugin4DS_get_Framerate_m626A2A7D34675532D6DD9E50D1A90D23197DF0AE(L_16, /*hidden argument*/NULL);
		// float sampleTime = (float)source.timeSamples / (float)source.clip.frequency;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE(L_18, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_20 = V_4;
		NullCheck(L_20);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21;
		L_21 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_21, /*hidden argument*/NULL);
		V_6 = ((float)((float)((float)((float)L_19))/(float)((float)((float)L_22))));
		// float diff = seqTime - sampleTime;
		float L_23 = V_6;
		V_7 = ((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15))))/(float)L_17)), (float)L_23));
		// string message = "Audio Sync " + audioId.ToString("00") + ": " + diff.ToString("00.00") + "sec\n";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral853B6B17B50EB86BA0D2FC61CDA572B1784EC1EA);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral853B6B17B50EB86BA0D2FC61CDA572B1784EC1EA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		String_t* L_27;
		L_27 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_26;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		String_t* L_30;
		L_30 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_7), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_29;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralAD02BBEC9DB388993BDEAD3C32F4FE10AF4AAB4D);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD02BBEC9DB388993BDEAD3C32F4FE10AF4AAB4D);
		String_t* L_32;
		L_32 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_31, /*hidden argument*/NULL);
		V_8 = L_32;
		// GUI.Label(new Rect(10, 20 + audioId * 18, 200, 20), message);
		int32_t L_33 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_34), (10.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)20), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)((int32_t)18))))))), (200.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_35 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_34, L_35, /*hidden argument*/NULL);
	}

IL_00de:
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e2:
	{
		// foreach (AudioSource4DS audio in _audioSources)
		int32_t L_37 = V_2;
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_001b;
		}
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void unity4dv.Sync4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sync4DS__ctor_mCCC8A34D83C8A0EA9E257BC4C2020FB2F3C4F3F6 (Sync4DS_t3EB8246C875130A66A1395AD60784A4217953E15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int _audioPrecisionInMsec = 100;
		__this->set__audioPrecisionInMsec_5(((int32_t)100));
		// public AudioSource4DS[] _audioSources = new AudioSource4DS[1];
		AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157* L_0 = (AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157*)(AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157*)SZArrayNew(AudioSource4DSU5BU5D_tB427316F93CC9123C8A432E8114B9E123900C157_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set__audioSources_7(L_0);
		// public AnimationSource4DS[] _animationSources = new AnimationSource4DS[1];
		AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7* L_1 = (AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7*)(AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7*)SZArrayNew(AnimationSource4DSU5BU5D_tF72173AA6EB86F5DE81DED884920284D978495E7_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set__animationSources_8(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimelineBehaviour4DS::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineBehaviour4DS_ProcessFrame_mB4E0799268A44631D57DDD87497682A25F18DE6E (TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// Plugin = playerData as Plugin4DS;
		RuntimeObject * L_0 = ___playerData2;
		__this->set_Plugin_3(((Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 *)IsInstClass((RuntimeObject*)L_0, Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_il2cpp_TypeInfo_var)));
		// if (onstart)
		bool L_1 = __this->get_onstart_2();
		if (!L_1)
		{
			goto IL_00bc;
		}
	}
	{
		// if (Plugin == null) return;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_2 = __this->get_Plugin_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// if (Plugin == null) return;
		return;
	}

IL_0026:
	{
		// pdt = 1.0f / Plugin.Framerate;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_4 = __this->get_Plugin_3();
		NullCheck(L_4);
		float L_5;
		L_5 = Plugin4DS_get_Framerate_m626A2A7D34675532D6DD9E50D1A90D23197DF0AE(L_4, /*hidden argument*/NULL);
		__this->set_pdt_5(((float)((float)(1.0f)/(float)L_5)));
		// double duration = playable.GetDuration() * Plugin.Framerate;
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_6 = ___playable0;
		double L_7;
		L_7 = PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E(L_6, /*hidden argument*/PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E_RuntimeMethod_var);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_8 = __this->get_Plugin_3();
		NullCheck(L_8);
		float L_9;
		L_9 = Plugin4DS_get_Framerate_m626A2A7D34675532D6DD9E50D1A90D23197DF0AE(L_8, /*hidden argument*/NULL);
		V_0 = ((double)il2cpp_codegen_multiply((double)L_7, (double)((double)((double)L_9))));
		// double newSpeed=1;
		V_1 = (1.0);
		// if (firstFrame < lastFrame && firstFrame >= 0) {
		int32_t L_10 = __this->get_firstFrame_0();
		int32_t L_11 = __this->get_lastFrame_1();
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_12 = __this->get_firstFrame_0();
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		// newSpeed = (lastFrame - firstFrame) / duration;
		int32_t L_13 = __this->get_lastFrame_1();
		int32_t L_14 = __this->get_firstFrame_0();
		double L_15 = V_0;
		V_1 = ((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14))))/(double)L_15));
		// }
		goto IL_009b;
	}

IL_0085:
	{
		// newSpeed = (Plugin.SequenceNbOfFrames - firstFrame) / duration;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_16 = __this->get_Plugin_3();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Plugin4DS_get_SequenceNbOfFrames_m8803DFD2044F28C9B4EAF7178AEFFE93E0C480C0(L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_firstFrame_0();
		double L_19 = V_0;
		V_1 = ((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))))/(double)L_19));
	}

IL_009b:
	{
		// Plugin.SpeedRatio = (float)newSpeed;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_20 = __this->get_Plugin_3();
		double L_21 = V_1;
		NullCheck(L_20);
		Plugin4DS_set_SpeedRatio_mC146D986D73A86FE4BD3B5BB31BD8624EA1F0DE0_inline(L_20, ((float)((float)L_21)), /*hidden argument*/NULL);
		// frame = firstFrame;
		int32_t L_22 = __this->get_firstFrame_0();
		__this->set_frame_4(((float)((float)L_22)));
		// onstart = false;
		__this->set_onstart_2((bool)0);
	}

IL_00bc:
	{
		// dt += info.deltaTime;
		float L_23 = __this->get_dt_6();
		float L_24;
		L_24 = FrameData_get_deltaTime_m3A7174B358C0A82BD5344F7F0C11BAE2E9F76C7C((FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B *)(&___info1), /*hidden argument*/NULL);
		__this->set_dt_6(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		// if (dt >= pdt) {
		float L_25 = __this->get_dt_6();
		float L_26 = __this->get_pdt_5();
		if ((!(((float)L_25) >= ((float)L_26))))
		{
			goto IL_011b;
		}
	}
	{
		// Plugin.GotoFrame( (int)frame);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_27 = __this->get_Plugin_3();
		float L_28 = __this->get_frame_4();
		NullCheck(L_27);
		Plugin4DS_GotoFrame_m95529234FD0D4D7CCD5851739A2255BFEA634F78(L_27, il2cpp_codegen_cast_double_to_int<int32_t>(L_28), /*hidden argument*/NULL);
		// frame += Plugin.SpeedRatio ;
		float L_29 = __this->get_frame_4();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_30 = __this->get_Plugin_3();
		NullCheck(L_30);
		float L_31;
		L_31 = Plugin4DS_get_SpeedRatio_m326A202890648318DB678CF24D2F55B0752BB96D_inline(L_30, /*hidden argument*/NULL);
		__this->set_frame_4(((float)il2cpp_codegen_add((float)L_29, (float)L_31)));
		// dt -= pdt;
		float L_32 = __this->get_dt_6();
		float L_33 = __this->get_pdt_5();
		__this->set_dt_6(((float)il2cpp_codegen_subtract((float)L_32, (float)L_33)));
	}

IL_011b:
	{
		// base.ProcessFrame(playable, info, playerData);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_34 = ___playable0;
		FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  L_35 = ___info1;
		RuntimeObject * L_36 = ___playerData2;
		PlayableBehaviour_ProcessFrame_m5EB22A817FFF0662E0E3AFAB34C41D7B09D4326F(__this, L_34, L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimelineBehaviour4DS::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineBehaviour4DS_OnBehaviourPlay_m1B2072D554F13C29E7DC7D78ACD03FC8780A29F6 (TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  ___info1, const RuntimeMethod* method)
{
	{
		// onstart = true;
		__this->set_onstart_2((bool)1);
		// base.OnBehaviourPlay(playable, info);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_0 = ___playable0;
		FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  L_1 = ___info1;
		PlayableBehaviour_OnBehaviourPlay_m71A792D97CD840F5D6C73889D00C2887F41A0F41(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimelineBehaviour4DS::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineBehaviour4DS_OnBehaviourPause_mF01AA1DB036E1322E43429A7E3A15F354D509352 (TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, FrameData_tE12630B2C0918A5945E834E53F1E0028BBD8898B  ___info1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TimelineBehaviour4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineBehaviour4DS__ctor_mA2C4A96AB7986E7BCE5F3654788687C1991A80FD (TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * __this, const RuntimeMethod* method)
{
	{
		// public int lastFrame = -1;
		__this->set_lastFrame_1((-1));
		PlayableBehaviour__ctor_m1EA2FC6B8DE3503745344E7BBAA0B40FDCD50FC8(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable Track4DS::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  Track4DS_CreateTrackMixer_mD7CFECFC315D88FD876BDF5EBDF9579B4A67EB27 (Track4DS_t06C2BB912C38F443ECC4AFF9D08014951442F9BB * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m52936C90DCE33761796E2A6E4D9A837E079E1626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2B9913D3A516FD389D1F8DD573D215DE3F85783C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDB38FB6AB422E000350B5DBF1B2E91D22AF69F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * V_2 = NULL;
	Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Plugin4DS plugin = go.GetComponent<Plugin4DS>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go1;
		NullCheck(L_0);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_1;
		L_1 = GameObject_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m52936C90DCE33761796E2A6E4D9A837E079E1626(L_0, /*hidden argument*/GameObject_GetComponent_TisPlugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209_m52936C90DCE33761796E2A6E4D9A837E079E1626_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (var clip in GetClips())
		RuntimeObject* L_2;
		L_2 = TrackAsset_GetClips_m31018DAFC45C73E0F9BB6CC60C734016ED1D28CE(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>::GetEnumerator() */, IEnumerable_1_t2B9913D3A516FD389D1F8DD573D215DE3F85783C_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0078;
		}

IL_0015:
		{
			// foreach (var clip in GetClips())
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_5;
			L_5 = InterfaceFuncInvoker0< TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TimelineClip>::get_Current() */, IEnumerator_1_tDB38FB6AB422E000350B5DBF1B2E91D22AF69F39_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// Playable4DS myAsset = clip.asset as Playable4DS;
			TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_6 = V_2;
			NullCheck(L_6);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7;
			L_7 = TimelineClip_get_asset_m147143A7209205C975960CA4E67BE2B6E408DBDA_inline(L_6, /*hidden argument*/NULL);
			V_3 = ((Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 *)IsInstClass((RuntimeObject*)L_7, Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9_il2cpp_TypeInfo_var));
			// if (myAsset)
			Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * L_8 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0078;
			}
		}

IL_0030:
		{
			// myAsset.clipstarttime = clip.start;
			Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * L_10 = V_3;
			TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_11 = V_2;
			NullCheck(L_11);
			double L_12;
			L_12 = TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			L_10->set_clipstarttime_4(L_12);
			// myAsset.clipendtime = clip.end;
			Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * L_13 = V_3;
			TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_14 = V_2;
			NullCheck(L_14);
			double L_15;
			L_15 = TimelineClip_get_end_m00D8AEC52D2496C97CE07A266570AB94306ABC22(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			L_13->set_clipendtime_5(L_15);
			// if (myAsset.sequence4DS.lastFrame == -1)
			Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * L_16 = V_3;
			NullCheck(L_16);
			TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * L_17 = L_16->get_sequence4DS_6();
			NullCheck(L_17);
			int32_t L_18 = L_17->get_lastFrame_1();
			if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
			{
				goto IL_0078;
			}
		}

IL_0056:
		{
			// myAsset.sequence4DS.firstFrame = plugin.FirstActiveFrame;
			Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * L_19 = V_3;
			NullCheck(L_19);
			TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * L_20 = L_19->get_sequence4DS_6();
			Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22;
			L_22 = Plugin4DS_get_FirstActiveFrame_mADE4163DE2A26A0F6C32C61588955C16D2E8746F(L_21, /*hidden argument*/NULL);
			NullCheck(L_20);
			L_20->set_firstFrame_0(L_22);
			// myAsset.sequence4DS.lastFrame = plugin.LastActiveFrame;
			Playable4DS_t160F576C0903491CFE2AC2900C03917114533FD9 * L_23 = V_3;
			NullCheck(L_23);
			TimelineBehaviour4DS_t62C6105A38946B60D9A47912F91BCE7BBEDAC304 * L_24 = L_23->get_sequence4DS_6();
			Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_25 = V_0;
			NullCheck(L_25);
			int32_t L_26;
			L_26 = Plugin4DS_get_LastActiveFrame_m547BDCE7A899D914045BF03B1F9D7059608F7CD1(L_25, /*hidden argument*/NULL);
			NullCheck(L_24);
			L_24->set_lastFrame_1(L_26);
		}

IL_0078:
		{
			// foreach (var clip in GetClips())
			RuntimeObject* L_27 = V_1;
			NullCheck(L_27);
			bool L_28;
			L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0015;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_29 = V_1;
			if (!L_29)
			{
				goto IL_008b;
			}
		}

IL_0085:
		{
			RuntimeObject* L_30 = V_1;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_30);
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// return base.CreateTrackMixer(graph, go, inputCount);
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_31 = ___graph0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = ___go1;
		int32_t L_33 = ___inputCount2;
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_34;
		L_34 = TrackAsset_CreateTrackMixer_m4EAF8A5C574780BF154F503B8AE0B606E84629BA(__this, L_31, L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// System.Void Track4DS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Track4DS__ctor_mB2AF935F6923AC93AC4466E6A553885802AF0A80 (Track4DS_t06C2BB912C38F443ECC4AFF9D08014951442F9BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var);
		TrackAsset__ctor_m7C48D12914098F6029C001D474737762AF76A78F(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void remove::RemoveAllChildren(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void remove_RemoveAllChildren_mBB404043E461834EB37C859DB4B2371E3DEF3207 (remove_t93C5EDD0AB94A1406BA457CA22ACC32732B8966B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___allobject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// childCount = allobject.transform.childCount;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___allobject0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		__this->set_childCount_5(L_2);
		// for (int i = 0; i < childCount; i++)
		V_0 = 0;
		goto IL_002f;
	}

IL_0015:
	{
		// transform = allobject.transform.GetChild(i);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___allobject0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, L_5, /*hidden argument*/NULL);
		// GameObject.Destroy(transform.gameObject);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_childCount_5();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void remove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void remove__ctor_m4DF0DF9D5FCF861D8A5F0B15B4692D7090BE20D1 (remove_t93C5EDD0AB94A1406BA457CA22ACC32732B8966B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate__ctor_m6DFCEE099C96781241186B1537B313641CC3A8AB (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExplodeViewControllerDelegate_BeginInvoke_m458C786F225088793798F9A79882A606822BD0B9 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_EndInvoke_m1190D2F43012408A716B9FC790DEB913A85D9476 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_IDisposable_Dispose_m5F0CAD7B8EEB902CEC60BA6283E5D2176899ECD0 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckPlacementU3Ed__25_MoveNext_mDF7F144AFC4007613EFED9BAC836382AE491AD0A (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!isPlaced)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isPlaced_19();
		if (L_6)
		{
			goto IL_0092;
		}
	}
	{
		// if (Vector3.Distance(transform.position, locationToPlace.position) > MinDistance &&
		//     Vector3.Distance(transform.position, locationToPlace.position) < MaxDistance)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_locationToPlace_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_12, /*hidden argument*/NULL);
		if ((!(((float)L_13) > ((float)(0.00100000005f)))))
		{
			goto IL_001e;
		}
	}
	{
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17->get_locationToPlace_4();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)(0.100000001f)))))
		{
			goto IL_001e;
		}
	}
	{
		// SetPlacement();
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_21 = V_1;
		NullCheck(L_21);
		PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851(L_21, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_0092:
	{
		// else if (isPlaced)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_22 = V_1;
		NullCheck(L_22);
		bool L_23 = L_22->get_isPlaced_19();
		if (!L_23)
		{
			goto IL_00eb;
		}
	}
	{
		// if (!(Vector3.Distance(transform.position, locationToPlace.position) > MinDistance)) continue;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27->get_locationToPlace_4();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_26, L_29, /*hidden argument*/NULL);
		if ((!(((float)L_30) > ((float)(0.00100000005f)))))
		{
			goto IL_001e;
		}
	}
	{
		// var trans = transform;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_31 = V_1;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		// trans.position = locationToPlace.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = L_32;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_34 = V_1;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = L_34->get_locationToPlace_4();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_36, /*hidden argument*/NULL);
		// trans.rotation = locationToPlace.rotation;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_37 = V_1;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = L_37->get_locationToPlace_4();
		NullCheck(L_38);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_33, L_39, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_00eb:
	{
		// }
		return (bool)0;
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckPlacementU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2770AE4D2AC80980A1982783D11A2A481D1F5AD (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237_RuntimeMethod_var)));
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_get_Current_mF23A2B08C5CAD169D0663319DCDF005B7BF30371 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate__ctor_m1B455F877BBF4D8B34BAA0778ABFA1B0C8FB3C87 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyControllerDelegate_BeginInvoke_mE2B0F86102E0D5E6BCD5ADDF6FE25CC9FC8A06D2 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_EndInvoke_m3BC4B8B7B165CE27C98FCB26D91E4E7004F5DA92 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate__ctor_mC6033B0A83C28817C35AC67DB8440C7B75CA605B (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlacementHintsControllerDelegate_BeginInvoke_m729BAD5B777CAC07017B397546C8485D026C1672 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_EndInvoke_m5245DC13168B9F203E7495622C99EA9C6EC60327 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unity4dv.Plugin4DS/<SequenceTrigger>d__152::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceTriggerU3Ed__152__ctor_mB37B17259FFD74094FF850B352377FCF2FCF3026 (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void unity4dv.Plugin4DS/<SequenceTrigger>d__152::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceTriggerU3Ed__152_System_IDisposable_Dispose_mF7F30616074B70A84161A3CA4AC2CC276D4A15C1 (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean unity4dv.Plugin4DS/<SequenceTrigger>d__152::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSequenceTriggerU3Ed__152_MoveNext_mBC26B9C565760CA776E11228BB86F5B5EDA302AA (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float duration = (_triggerRate / _dataSource.FrameRate);
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get__triggerRate_58();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_6 = V_1;
		NullCheck(L_6);
		DataSource4DS_tB8B2DE646533C54B3E3AC50B82BB286CDD625D42 * L_7 = L_6->get__dataSource_32();
		NullCheck(L_7);
		float L_8 = L_7->get_FrameRate_6();
		__this->set_U3CdurationU3E5__2_3(((float)((float)L_5/(float)L_8)));
	}

IL_0036:
	{
		// UpdateMesh();
		Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * L_9 = V_1;
		NullCheck(L_9);
		Plugin4DS_UpdateMesh_mA7FDB953AA7CEF26EA04856E88C72D833E85AAAD(L_9, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(duration);
		float L_10 = __this->get_U3CdurationU3E5__2_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, L_10, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0036;
	}
}
// System.Object unity4dv.Plugin4DS/<SequenceTrigger>d__152::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSequenceTriggerU3Ed__152_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m27EE90B195E1E7FB6CDDEF34186E81C5034D92DC (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void unity4dv.Plugin4DS/<SequenceTrigger>d__152::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceTriggerU3Ed__152_System_Collections_IEnumerator_Reset_m7068260C32F6C54ADAB059F3FDBC9BB5C70A0CB4 (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSequenceTriggerU3Ed__152_System_Collections_IEnumerator_Reset_m7068260C32F6C54ADAB059F3FDBC9BB5C70A0CB4_RuntimeMethod_var)));
	}
}
// System.Object unity4dv.Plugin4DS/<SequenceTrigger>d__152::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSequenceTriggerU3Ed__152_System_Collections_IEnumerator_get_Current_m2A49DC238726A921F13505AADA8F6225888058B5 (U3CSequenceTriggerU3Ed__152_tB22E6CEB1006458CB29E1C569DEB1993A485D693 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void unity4dv.Plugin4DS/EventFDV::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFDV__ctor_mF9F82F036F7D3B0CEC4B895D4D00FEF945234363 (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void unity4dv.Plugin4DS/EventFDV::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFDV_Invoke_m445ECBC5C869D774DFEC66C1C070719CCEDE4208 (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult unity4dv.Plugin4DS/EventFDV::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventFDV_BeginInvoke_m72192C574BDEEF8DE1DC077C4F4FC093A1A997A2 (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void unity4dv.Plugin4DS/EventFDV::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFDV_EndInvoke_m81FCC76908F91EC976CBDC2D4A7D49F5E2FA7CF8 (EventFDV_tEC87B7F1C2B4837F6AA44B98952C49DAA2922A5C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plugin4DS_get_IsPlaying_mADFE4E9812EF471BF3FA15D000F5B5353A4A97C4_inline (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPlaying { get { return _isPlaying; } set { _isPlaying = value; } }
		bool L_0 = __this->get__isPlaying_61();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plugin4DS_set_SpeedRatio_mC146D986D73A86FE4BD3B5BB31BD8624EA1F0DE0_inline (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SpeedRatio {  get { return _speedRatio; } set { _speedRatio = value; } }
		float L_0 = ___value0;
		__this->set__speedRatio_65(L_0);
		// public float SpeedRatio {  get { return _speedRatio; } set { _speedRatio = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plugin4DS_get_SpeedRatio_m326A202890648318DB678CF24D2F55B0752BB96D_inline (Plugin4DS_tC72B6F8905FD7FF3F9DF08114ED9F46388BD4209 * __this, const RuntimeMethod* method)
{
	{
		// public float SpeedRatio {  get { return _speedRatio; } set { _speedRatio = value; } }
		float L_0 = __this->get__speedRatio_65();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * TimelineClip_get_asset_m147143A7209205C975960CA4E67BE2B6E408DBDA_inline (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Asset; }
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_m_Asset_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Start; }
		double L_0 = __this->get_m_Start_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
