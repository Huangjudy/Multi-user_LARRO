#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Data.DataColumn>
struct Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79;
// System.Collections.Generic.Dictionary`2<System.String,Object_transform>
struct Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Object_transform>
struct KeyCollection_t95368837BDA41F973BE837A82384BD7236F25701;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.Unity.ConfigurableIceServer>
struct List_1_tDDC2CD0A181785480786A613C68676B1E4F4AA08;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.Unity.MediaLine>
struct List_1_t9BCB1A4671CBC7923BF7F9D0B198F9217D973F8F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Volumetric_object>
struct List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<Volumetric_object>
struct Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Object_transform>
struct ValueCollection_tDF36E798D8F1359ABCAFC89D991A5AD9AF3BCE00;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Object_transform>[]
struct EntryU5BU5D_t481CB8B8BAE4F810272200CDF41E6C02BA1D516E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C;
// System.Data.DataRow[]
struct DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Volumetric_object[]
struct Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Data.AutoIncrementValue
struct AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC;
// Caculate_Reprojection_2D
struct Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Data.ConstraintCollection
struct ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1;
// Control_user_position
struct Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Microsoft.MixedReality.WebRTC.DataChannel
struct DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247;
// System.Data.DataColumn
struct DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4;
// System.Data.DataColumnCollection
struct DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820;
// System.Data.DataError
struct DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0;
// System.Data.DataExpression
struct DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9;
// System.Data.DataRelationCollection
struct DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714;
// System.Data.DataRow
struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE;
// System.Data.DataRowBuilder
struct DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B;
// System.Data.DataRowCollection
struct DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310;
// System.Data.DataSet
struct DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B;
// System.Data.Common.DataStorage
struct DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138;
// System.Data.DataTable
struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B;
// System.Data.DataView
struct DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.Data.Index
struct Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Object_transform
struct Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373;
// Microsoft.MixedReality.WebRTC.PeerConnection
struct PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15;
// Microsoft.MixedReality.WebRTC.Unity.PeerConnection
struct PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Data.PropertyCollection
struct PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F;
// Receive_interact
struct Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517;
// System.Data.RecordManager
struct RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Send_control_information
struct Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D;
// System.Data.SimpleType
struct SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Data.UniqueConstraint
struct UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Updata_position
struct Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Volumetric_object
struct Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792;
// Microsoft.MixedReality.WebRTC.Unity.WebRTCErrorEvent
struct WebRTCErrorEvent_tB03FFFB1B12040593B5F4800B0FA8644FC7CD227;
// caculate_position_error_ours
struct caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB;
// lookuserposition
struct lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// System.Data.DataRowCollection/DataRowTree
struct DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1F784EA7A398F82200A008D1241049A19F68ED5D;
IL2CPP_EXTERN_C String_t* _stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C;
IL2CPP_EXTERN_C String_t* _stringLiteral3469D9196A73F4143DDD1E8E763AA5DF028E2125;
IL2CPP_EXTERN_C String_t* _stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral48D3EC939E60F781DDE92FFA9FA24DAC205586BB;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090;
IL2CPP_EXTERN_C String_t* _stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E;
IL2CPP_EXTERN_C String_t* _stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608;
IL2CPP_EXTERN_C String_t* _stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9;
IL2CPP_EXTERN_C String_t* _stringLiteral89ABF38F9EF8A00ED88D64B94641FD1FAA2EC55A;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA003D62EF417557C5B848188B5B3947ED732A503;
IL2CPP_EXTERN_C String_t* _stringLiteralAE0BB33EFC17DBCD9DF4331EC1FB172CB51C9432;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C22FBAF8673C8DA433C752B502EEC370874630;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC565636BA2DF517026F84CD675A165364C2B335D;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
IL2CPP_EXTERN_C String_t* _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC;
IL2CPP_EXTERN_C String_t* _stringLiteralD216325705EBE62D30897545478B5DDE78C0B0CA;
IL2CPP_EXTERN_C String_t* _stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA;
IL2CPP_EXTERN_C String_t* _stringLiteralD56C2448C5B4CF39E41F99FAECC447374320B748;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940;
IL2CPP_EXTERN_C String_t* _stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mDA63BDB72056D2A828F83D4F98FF2F9ECC846CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2882814E94A5E32C6AEC26331BAF33015E0A6FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m59F35418B024FF809AB0E0731792BEC0B32CDBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m975888EC95CC488962A9F28E78FB17D48D589463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5554E23F34E0C8DDAFB1F78D4AD835C537B41570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD718856467A3848B2AF2E47EEB17D5A660D83434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5808604EBB622B936E065AD64C34988846756B46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSend_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D_mF9A6A8FE3ED1BE3A414F8A9891448FBA02F50891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisCaculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061_m4EF4C546C0A5237875DD2D2A214FCF842CAA52E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_mBAB5424B34D172D89803049E1C29AC503296D41A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m5CE4FD47C88EAC3F33EF925FFE5D61C56027E407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m68FCBA604FF26C3EF86C7F6D2919FA289566CE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6E398228291158C5C1CA0C7FFD30ECAB332B580A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m8C8B8186A0FCC466CF25A64E3A6081DE58B495ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D5A466F361D09DD3D5A1176B452A53DAD5900A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mE0B0EB76D78E6A25A2D69D263713A426F397E599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m3E4670FA3C661CF2D1D7A4F451B83D5B468C47C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Updata_position_U3CUpdateU3Eb__5_0_mA597C865BBE80DC2E6C8CF6897C5CD68E00B1B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

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


// System.Collections.Generic.Dictionary`2<System.String,Object_transform>
struct Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t481CB8B8BAE4F810272200CDF41E6C02BA1D516E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t95368837BDA41F973BE837A82384BD7236F25701 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDF36E798D8F1359ABCAFC89D991A5AD9AF3BCE00 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___entries_1)); }
	inline EntryU5BU5D_t481CB8B8BAE4F810272200CDF41E6C02BA1D516E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t481CB8B8BAE4F810272200CDF41E6C02BA1D516E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t481CB8B8BAE4F810272200CDF41E6C02BA1D516E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___keys_7)); }
	inline KeyCollection_t95368837BDA41F973BE837A82384BD7236F25701 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95368837BDA41F973BE837A82384BD7236F25701 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95368837BDA41F973BE837A82384BD7236F25701 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ___values_8)); }
	inline ValueCollection_tDF36E798D8F1359ABCAFC89D991A5AD9AF3BCE00 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDF36E798D8F1359ABCAFC89D991A5AD9AF3BCE00 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDF36E798D8F1359ABCAFC89D991A5AD9AF3BCE00 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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


// System.Collections.Generic.List`1<Volumetric_object>
struct List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88, ____items_1)); }
	inline Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6* get__items_1() const { return ____items_1; }
	inline Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88_StaticFields, ____emptyArray_5)); }
	inline Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Volumetric_objectU5BU5D_t207B91F16BFF93FDD2EA72B23BB921BBA0B211C6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Caculate_Reprojection_2D
struct Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061  : public RuntimeObject
{
public:
	// System.Single Caculate_Reprojection_2D::<Object_Screen_norm_x>k__BackingField
	float ___U3CObject_Screen_norm_xU3Ek__BackingField_0;
	// System.Single Caculate_Reprojection_2D::<Object_Screen_norm_y>k__BackingField
	float ___U3CObject_Screen_norm_yU3Ek__BackingField_1;
	// System.Single Caculate_Reprojection_2D::<Object_ScreenPosition_z>k__BackingField
	float ___U3CObject_ScreenPosition_zU3Ek__BackingField_2;
	// System.Single Caculate_Reprojection_2D::<Object_OriginalPosition_x>k__BackingField
	float ___U3CObject_OriginalPosition_xU3Ek__BackingField_3;
	// System.Single Caculate_Reprojection_2D::<Object_OriginalPosition_y>k__BackingField
	float ___U3CObject_OriginalPosition_yU3Ek__BackingField_4;
	// System.Single Caculate_Reprojection_2D::<Object_OriginalPosition_z>k__BackingField
	float ___U3CObject_OriginalPosition_zU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CObject_Screen_norm_xU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061, ___U3CObject_Screen_norm_xU3Ek__BackingField_0)); }
	inline float get_U3CObject_Screen_norm_xU3Ek__BackingField_0() const { return ___U3CObject_Screen_norm_xU3Ek__BackingField_0; }
	inline float* get_address_of_U3CObject_Screen_norm_xU3Ek__BackingField_0() { return &___U3CObject_Screen_norm_xU3Ek__BackingField_0; }
	inline void set_U3CObject_Screen_norm_xU3Ek__BackingField_0(float value)
	{
		___U3CObject_Screen_norm_xU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CObject_Screen_norm_yU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061, ___U3CObject_Screen_norm_yU3Ek__BackingField_1)); }
	inline float get_U3CObject_Screen_norm_yU3Ek__BackingField_1() const { return ___U3CObject_Screen_norm_yU3Ek__BackingField_1; }
	inline float* get_address_of_U3CObject_Screen_norm_yU3Ek__BackingField_1() { return &___U3CObject_Screen_norm_yU3Ek__BackingField_1; }
	inline void set_U3CObject_Screen_norm_yU3Ek__BackingField_1(float value)
	{
		___U3CObject_Screen_norm_yU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CObject_ScreenPosition_zU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061, ___U3CObject_ScreenPosition_zU3Ek__BackingField_2)); }
	inline float get_U3CObject_ScreenPosition_zU3Ek__BackingField_2() const { return ___U3CObject_ScreenPosition_zU3Ek__BackingField_2; }
	inline float* get_address_of_U3CObject_ScreenPosition_zU3Ek__BackingField_2() { return &___U3CObject_ScreenPosition_zU3Ek__BackingField_2; }
	inline void set_U3CObject_ScreenPosition_zU3Ek__BackingField_2(float value)
	{
		___U3CObject_ScreenPosition_zU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObject_OriginalPosition_xU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061, ___U3CObject_OriginalPosition_xU3Ek__BackingField_3)); }
	inline float get_U3CObject_OriginalPosition_xU3Ek__BackingField_3() const { return ___U3CObject_OriginalPosition_xU3Ek__BackingField_3; }
	inline float* get_address_of_U3CObject_OriginalPosition_xU3Ek__BackingField_3() { return &___U3CObject_OriginalPosition_xU3Ek__BackingField_3; }
	inline void set_U3CObject_OriginalPosition_xU3Ek__BackingField_3(float value)
	{
		___U3CObject_OriginalPosition_xU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CObject_OriginalPosition_yU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061, ___U3CObject_OriginalPosition_yU3Ek__BackingField_4)); }
	inline float get_U3CObject_OriginalPosition_yU3Ek__BackingField_4() const { return ___U3CObject_OriginalPosition_yU3Ek__BackingField_4; }
	inline float* get_address_of_U3CObject_OriginalPosition_yU3Ek__BackingField_4() { return &___U3CObject_OriginalPosition_yU3Ek__BackingField_4; }
	inline void set_U3CObject_OriginalPosition_yU3Ek__BackingField_4(float value)
	{
		___U3CObject_OriginalPosition_yU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CObject_OriginalPosition_zU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061, ___U3CObject_OriginalPosition_zU3Ek__BackingField_5)); }
	inline float get_U3CObject_OriginalPosition_zU3Ek__BackingField_5() const { return ___U3CObject_OriginalPosition_zU3Ek__BackingField_5; }
	inline float* get_address_of_U3CObject_OriginalPosition_zU3Ek__BackingField_5() { return &___U3CObject_OriginalPosition_zU3Ek__BackingField_5; }
	inline void set_U3CObject_OriginalPosition_zU3Ek__BackingField_5(float value)
	{
		___U3CObject_OriginalPosition_zU3Ek__BackingField_5 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Data.InternalDataCollectionBase
struct InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9  : public RuntimeObject
{
public:

public:
};

struct InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9_StaticFields
{
public:
	// System.ComponentModel.CollectionChangeEventArgs System.Data.InternalDataCollectionBase::s_refreshEventArgs
	CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B * ___s_refreshEventArgs_0;

public:
	inline static int32_t get_offset_of_s_refreshEventArgs_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9_StaticFields, ___s_refreshEventArgs_0)); }
	inline CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B * get_s_refreshEventArgs_0() const { return ___s_refreshEventArgs_0; }
	inline CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B ** get_address_of_s_refreshEventArgs_0() { return &___s_refreshEventArgs_0; }
	inline void set_s_refreshEventArgs_0(CollectionChangeEventArgs_t7AAC8CD3B11DA4689B157DCC84CC3867282B0D2B * value)
	{
		___s_refreshEventArgs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_refreshEventArgs_0), (void*)value);
	}
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

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_1), (void*)value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___events_2)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_2), (void*)value);
	}
};

struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_0), (void*)value);
	}
};


// Object_transform
struct Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373  : public RuntimeObject
{
public:
	// System.Single Object_transform::<PosX>k__BackingField
	float ___U3CPosXU3Ek__BackingField_0;
	// System.Single Object_transform::<PosY>k__BackingField
	float ___U3CPosYU3Ek__BackingField_1;
	// System.Single Object_transform::<PosZ>k__BackingField
	float ___U3CPosZU3Ek__BackingField_2;
	// System.Single Object_transform::<RotX>k__BackingField
	float ___U3CRotXU3Ek__BackingField_3;
	// System.Single Object_transform::<RotY>k__BackingField
	float ___U3CRotYU3Ek__BackingField_4;
	// System.Single Object_transform::<RotZ>k__BackingField
	float ___U3CRotZU3Ek__BackingField_5;
	// System.Single Object_transform::<RotW>k__BackingField
	float ___U3CRotWU3Ek__BackingField_6;
	// System.Single Object_transform::<ScaleX>k__BackingField
	float ___U3CScaleXU3Ek__BackingField_7;
	// System.Single Object_transform::<ScaleY>k__BackingField
	float ___U3CScaleYU3Ek__BackingField_8;
	// System.Single Object_transform::<ScaleZ>k__BackingField
	float ___U3CScaleZU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CPosXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CPosXU3Ek__BackingField_0)); }
	inline float get_U3CPosXU3Ek__BackingField_0() const { return ___U3CPosXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CPosXU3Ek__BackingField_0() { return &___U3CPosXU3Ek__BackingField_0; }
	inline void set_U3CPosXU3Ek__BackingField_0(float value)
	{
		___U3CPosXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPosYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CPosYU3Ek__BackingField_1)); }
	inline float get_U3CPosYU3Ek__BackingField_1() const { return ___U3CPosYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CPosYU3Ek__BackingField_1() { return &___U3CPosYU3Ek__BackingField_1; }
	inline void set_U3CPosYU3Ek__BackingField_1(float value)
	{
		___U3CPosYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPosZU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CPosZU3Ek__BackingField_2)); }
	inline float get_U3CPosZU3Ek__BackingField_2() const { return ___U3CPosZU3Ek__BackingField_2; }
	inline float* get_address_of_U3CPosZU3Ek__BackingField_2() { return &___U3CPosZU3Ek__BackingField_2; }
	inline void set_U3CPosZU3Ek__BackingField_2(float value)
	{
		___U3CPosZU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRotXU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CRotXU3Ek__BackingField_3)); }
	inline float get_U3CRotXU3Ek__BackingField_3() const { return ___U3CRotXU3Ek__BackingField_3; }
	inline float* get_address_of_U3CRotXU3Ek__BackingField_3() { return &___U3CRotXU3Ek__BackingField_3; }
	inline void set_U3CRotXU3Ek__BackingField_3(float value)
	{
		___U3CRotXU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRotYU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CRotYU3Ek__BackingField_4)); }
	inline float get_U3CRotYU3Ek__BackingField_4() const { return ___U3CRotYU3Ek__BackingField_4; }
	inline float* get_address_of_U3CRotYU3Ek__BackingField_4() { return &___U3CRotYU3Ek__BackingField_4; }
	inline void set_U3CRotYU3Ek__BackingField_4(float value)
	{
		___U3CRotYU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRotZU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CRotZU3Ek__BackingField_5)); }
	inline float get_U3CRotZU3Ek__BackingField_5() const { return ___U3CRotZU3Ek__BackingField_5; }
	inline float* get_address_of_U3CRotZU3Ek__BackingField_5() { return &___U3CRotZU3Ek__BackingField_5; }
	inline void set_U3CRotZU3Ek__BackingField_5(float value)
	{
		___U3CRotZU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRotWU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CRotWU3Ek__BackingField_6)); }
	inline float get_U3CRotWU3Ek__BackingField_6() const { return ___U3CRotWU3Ek__BackingField_6; }
	inline float* get_address_of_U3CRotWU3Ek__BackingField_6() { return &___U3CRotWU3Ek__BackingField_6; }
	inline void set_U3CRotWU3Ek__BackingField_6(float value)
	{
		___U3CRotWU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CScaleXU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CScaleXU3Ek__BackingField_7)); }
	inline float get_U3CScaleXU3Ek__BackingField_7() const { return ___U3CScaleXU3Ek__BackingField_7; }
	inline float* get_address_of_U3CScaleXU3Ek__BackingField_7() { return &___U3CScaleXU3Ek__BackingField_7; }
	inline void set_U3CScaleXU3Ek__BackingField_7(float value)
	{
		___U3CScaleXU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CScaleYU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CScaleYU3Ek__BackingField_8)); }
	inline float get_U3CScaleYU3Ek__BackingField_8() const { return ___U3CScaleYU3Ek__BackingField_8; }
	inline float* get_address_of_U3CScaleYU3Ek__BackingField_8() { return &___U3CScaleYU3Ek__BackingField_8; }
	inline void set_U3CScaleYU3Ek__BackingField_8(float value)
	{
		___U3CScaleYU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CScaleZU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373, ___U3CScaleZU3Ek__BackingField_9)); }
	inline float get_U3CScaleZU3Ek__BackingField_9() const { return ___U3CScaleZU3Ek__BackingField_9; }
	inline float* get_address_of_U3CScaleZU3Ek__BackingField_9() { return &___U3CScaleZU3Ek__BackingField_9; }
	inline void set_U3CScaleZU3Ek__BackingField_9(float value)
	{
		___U3CScaleZU3Ek__BackingField_9 = value;
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Object_transform>
struct KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196, ___value_1)); }
	inline Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * get_value_1() const { return ___value_1; }
	inline Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Data.DataColumnCollection
struct DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820  : public InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9
{
public:
	// System.Data.DataTable System.Data.DataColumnCollection::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_1;
	// System.Collections.ArrayList System.Data.DataColumnCollection::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_2;
	// System.Int32 System.Data.DataColumnCollection::_defaultNameIndex
	int32_t ____defaultNameIndex_3;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_delayedAddRangeColumns
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____delayedAddRangeColumns_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Data.DataColumn> System.Data.DataColumnCollection::_columnFromName
	Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 * ____columnFromName_5;
	// System.Boolean System.Data.DataColumnCollection::_fInClear
	bool ____fInClear_6;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_columnsImplementingIChangeTracking
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____columnsImplementingIChangeTracking_7;
	// System.Int32 System.Data.DataColumnCollection::_nColumnsImplementingIChangeTracking
	int32_t ____nColumnsImplementingIChangeTracking_8;
	// System.Int32 System.Data.DataColumnCollection::_nColumnsImplementingIRevertibleChangeTracking
	int32_t ____nColumnsImplementingIRevertibleChangeTracking_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___CollectionChanged_10;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanging
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___CollectionChanging_11;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::ColumnPropertyChanged
	CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * ___ColumnPropertyChanged_12;

public:
	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____table_1)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_1() const { return ____table_1; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_1), (void*)value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____list_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_2() const { return ____list_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_2), (void*)value);
	}

	inline static int32_t get_offset_of__defaultNameIndex_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____defaultNameIndex_3)); }
	inline int32_t get__defaultNameIndex_3() const { return ____defaultNameIndex_3; }
	inline int32_t* get_address_of__defaultNameIndex_3() { return &____defaultNameIndex_3; }
	inline void set__defaultNameIndex_3(int32_t value)
	{
		____defaultNameIndex_3 = value;
	}

	inline static int32_t get_offset_of__delayedAddRangeColumns_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____delayedAddRangeColumns_4)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__delayedAddRangeColumns_4() const { return ____delayedAddRangeColumns_4; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__delayedAddRangeColumns_4() { return &____delayedAddRangeColumns_4; }
	inline void set__delayedAddRangeColumns_4(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____delayedAddRangeColumns_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedAddRangeColumns_4), (void*)value);
	}

	inline static int32_t get_offset_of__columnFromName_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____columnFromName_5)); }
	inline Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 * get__columnFromName_5() const { return ____columnFromName_5; }
	inline Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 ** get_address_of__columnFromName_5() { return &____columnFromName_5; }
	inline void set__columnFromName_5(Dictionary_2_t12A9AA41354E11B42EE09BEF63546DACC9744D79 * value)
	{
		____columnFromName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnFromName_5), (void*)value);
	}

	inline static int32_t get_offset_of__fInClear_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____fInClear_6)); }
	inline bool get__fInClear_6() const { return ____fInClear_6; }
	inline bool* get_address_of__fInClear_6() { return &____fInClear_6; }
	inline void set__fInClear_6(bool value)
	{
		____fInClear_6 = value;
	}

	inline static int32_t get_offset_of__columnsImplementingIChangeTracking_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____columnsImplementingIChangeTracking_7)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__columnsImplementingIChangeTracking_7() const { return ____columnsImplementingIChangeTracking_7; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__columnsImplementingIChangeTracking_7() { return &____columnsImplementingIChangeTracking_7; }
	inline void set__columnsImplementingIChangeTracking_7(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____columnsImplementingIChangeTracking_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnsImplementingIChangeTracking_7), (void*)value);
	}

	inline static int32_t get_offset_of__nColumnsImplementingIChangeTracking_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____nColumnsImplementingIChangeTracking_8)); }
	inline int32_t get__nColumnsImplementingIChangeTracking_8() const { return ____nColumnsImplementingIChangeTracking_8; }
	inline int32_t* get_address_of__nColumnsImplementingIChangeTracking_8() { return &____nColumnsImplementingIChangeTracking_8; }
	inline void set__nColumnsImplementingIChangeTracking_8(int32_t value)
	{
		____nColumnsImplementingIChangeTracking_8 = value;
	}

	inline static int32_t get_offset_of__nColumnsImplementingIRevertibleChangeTracking_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ____nColumnsImplementingIRevertibleChangeTracking_9)); }
	inline int32_t get__nColumnsImplementingIRevertibleChangeTracking_9() const { return ____nColumnsImplementingIRevertibleChangeTracking_9; }
	inline int32_t* get_address_of__nColumnsImplementingIRevertibleChangeTracking_9() { return &____nColumnsImplementingIRevertibleChangeTracking_9; }
	inline void set__nColumnsImplementingIRevertibleChangeTracking_9(int32_t value)
	{
		____nColumnsImplementingIRevertibleChangeTracking_9 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ___CollectionChanged_10)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_CollectionChanged_10() const { return ___CollectionChanged_10; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_CollectionChanged_10() { return &___CollectionChanged_10; }
	inline void set_CollectionChanged_10(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___CollectionChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_CollectionChanging_11() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ___CollectionChanging_11)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_CollectionChanging_11() const { return ___CollectionChanging_11; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_CollectionChanging_11() { return &___CollectionChanging_11; }
	inline void set_CollectionChanging_11(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___CollectionChanging_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionChanging_11), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnPropertyChanged_12() { return static_cast<int32_t>(offsetof(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820, ___ColumnPropertyChanged_12)); }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * get_ColumnPropertyChanged_12() const { return ___ColumnPropertyChanged_12; }
	inline CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 ** get_address_of_ColumnPropertyChanged_12() { return &___ColumnPropertyChanged_12; }
	inline void set_ColumnPropertyChanged_12(CollectionChangeEventHandler_t935F19010617051C6E5CA8F91D1724F0A0D61F77 * value)
	{
		___ColumnPropertyChanged_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnPropertyChanged_12), (void*)value);
	}
};


// System.Data.DataRowCollection
struct DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310  : public InternalDataCollectionBase_t56E2D60DAF057848CB6C862C9E9FEB3D1FE1B5C9
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_1;
	// System.Data.DataRowCollection/DataRowTree System.Data.DataRowCollection::_list
	DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 * ____list_2;
	// System.Int32 System.Data.DataRowCollection::_nullInList
	int32_t ____nullInList_3;

public:
	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310, ____table_1)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_1() const { return ____table_1; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_1), (void*)value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310, ____list_2)); }
	inline DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 * get__list_2() const { return ____list_2; }
	inline DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(DataRowTree_t919D7F356802E01FEAFB0C112C7993717AE0FA63 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_2), (void*)value);
	}

	inline static int32_t get_offset_of__nullInList_3() { return static_cast<int32_t>(offsetof(DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310, ____nullInList_3)); }
	inline int32_t get__nullInList_3() const { return ____nullInList_3; }
	inline int32_t* get_address_of__nullInList_3() { return &____nullInList_3; }
	inline void set__nullInList_3(int32_t value)
	{
		____nullInList_3 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Object_transform>
struct Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F, ___dictionary_0)); }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F, ___current_3)); }
	inline KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Globalization.CompareOptions
struct CompareOptions_tD3D7F165240DC4D784A11B1E2F21DC0D6D18E725 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_tD3D7F165240DC4D784A11B1E2F21DC0D6D18E725, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataRowAction
struct DataRowAction_t57597E0A01CA9E666DFC8BFEE012007ADD0960CD 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowAction_t57597E0A01CA9E666DFC8BFEE012007ADD0960CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataSetDateTime
struct DataSetDateTime_t787581C2820BA6C704C9E63C58D8CDE8B3C3719C 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataSetDateTime_t787581C2820BA6C704C9E63C58D8CDE8B3C3719C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.MappingType
struct MappingType_tAA0DE2A64E2B04E270F71EB3FBF2CF52BD272636 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MappingType_tAA0DE2A64E2B04E270F71EB3FBF2CF52BD272636, ___value___2)); }
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

// System.Data.SerializationFormat
struct SerializationFormat_t31A4CB3E88553E85268A0DCE05E9D9FC28245730 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationFormat_t31A4CB3E88553E85268A0DCE05E9D9FC28245730, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Common.StorageType
struct StorageType_tE4E29216CBA812D4241BD7D6EBCE84D06B8E8D36 
{
public:
	// System.Int32 System.Data.Common.StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_tE4E29216CBA812D4241BD7D6EBCE84D06B8E8D36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// Volumetric_object
struct Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Volumetric_object::OBJ_Pos
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___OBJ_Pos_0;
	// UnityEngine.GameObject Volumetric_object::Box_of_OBJ
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Box_of_OBJ_1;
	// UnityEngine.GameObject Volumetric_object::Video_of_OBJ
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Video_of_OBJ_2;
	// System.String Volumetric_object::name
	String_t* ___name_3;
	// System.Int32 Volumetric_object::_time
	int32_t ____time_4;
	// UnityEngine.Vector3 Volumetric_object::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	// UnityEngine.Vector3 Volumetric_object::new_localscale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_localscale_6;
	// UnityEngine.Vector3 Volumetric_object::old_localscale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___old_localscale_7;

public:
	inline static int32_t get_offset_of_OBJ_Pos_0() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___OBJ_Pos_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_OBJ_Pos_0() const { return ___OBJ_Pos_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_OBJ_Pos_0() { return &___OBJ_Pos_0; }
	inline void set_OBJ_Pos_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___OBJ_Pos_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OBJ_Pos_0), (void*)value);
	}

	inline static int32_t get_offset_of_Box_of_OBJ_1() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___Box_of_OBJ_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Box_of_OBJ_1() const { return ___Box_of_OBJ_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Box_of_OBJ_1() { return &___Box_of_OBJ_1; }
	inline void set_Box_of_OBJ_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Box_of_OBJ_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Box_of_OBJ_1), (void*)value);
	}

	inline static int32_t get_offset_of_Video_of_OBJ_2() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___Video_of_OBJ_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Video_of_OBJ_2() const { return ___Video_of_OBJ_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Video_of_OBJ_2() { return &___Video_of_OBJ_2; }
	inline void set_Video_of_OBJ_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Video_of_OBJ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Video_of_OBJ_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of__time_4() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ____time_4)); }
	inline int32_t get__time_4() const { return ____time_4; }
	inline int32_t* get_address_of__time_4() { return &____time_4; }
	inline void set__time_4(int32_t value)
	{
		____time_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___position_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_5() const { return ___position_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_new_localscale_6() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___new_localscale_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_localscale_6() const { return ___new_localscale_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_localscale_6() { return &___new_localscale_6; }
	inline void set_new_localscale_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_localscale_6 = value;
	}

	inline static int32_t get_offset_of_old_localscale_7() { return static_cast<int32_t>(offsetof(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792, ___old_localscale_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_old_localscale_7() const { return ___old_localscale_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_old_localscale_7() { return &___old_localscale_7; }
	inline void set_old_localscale_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___old_localscale_7 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Data.DataColumn
struct DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638  : public MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D
{
public:
	// System.Boolean System.Data.DataColumn::_allowNull
	bool ____allowNull_3;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_4;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_5;
	// System.Type System.Data.DataColumn::_dataType
	Type_t * ____dataType_6;
	// System.Data.Common.StorageType System.Data.DataColumn::_storageType
	int32_t ____storageType_7;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject * ____defaultValue_8;
	// System.Data.DataSetDateTime System.Data.DataColumn::_dateTimeMode
	int32_t ____dateTimeMode_9;
	// System.Data.DataExpression System.Data.DataColumn::_expression
	DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * ____expression_10;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_11;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_12;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_13;
	// System.Data.Index System.Data.DataColumn::_sortIndex
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____sortIndex_14;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_15;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_16;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_17;
	// System.Int32 System.Data.DataColumn::_hashCode
	int32_t ____hashCode_18;
	// System.Int32 System.Data.DataColumn::_errors
	int32_t ____errors_19;
	// System.Boolean System.Data.DataColumn::_isSqlType
	bool ____isSqlType_20;
	// System.Boolean System.Data.DataColumn::_implementsINullable
	bool ____implementsINullable_21;
	// System.Boolean System.Data.DataColumn::_implementsIChangeTracking
	bool ____implementsIChangeTracking_22;
	// System.Boolean System.Data.DataColumn::_implementsIRevertibleChangeTracking
	bool ____implementsIRevertibleChangeTracking_23;
	// System.Boolean System.Data.DataColumn::_implementsIXMLSerializable
	bool ____implementsIXMLSerializable_24;
	// System.Boolean System.Data.DataColumn::_defaultValueIsNull
	bool ____defaultValueIsNull_25;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataColumn::_dependentColumns
	List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * ____dependentColumns_26;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_27;
	// System.Data.Common.DataStorage System.Data.DataColumn::_storage
	DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 * ____storage_28;
	// System.Data.AutoIncrementValue System.Data.DataColumn::_autoInc
	AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC * ____autoInc_29;
	// System.String System.Data.DataColumn::_columnUri
	String_t* ____columnUri_30;
	// System.String System.Data.DataColumn::_columnPrefix
	String_t* ____columnPrefix_31;
	// System.String System.Data.DataColumn::_encodedColumnName
	String_t* ____encodedColumnName_32;
	// System.Data.SimpleType System.Data.DataColumn::_simpleType
	SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 * ____simpleType_33;
	// System.Int32 System.Data.DataColumn::_objectID
	int32_t ____objectID_35;
	// System.String System.Data.DataColumn::<XmlDataType>k__BackingField
	String_t* ___U3CXmlDataTypeU3Ek__BackingField_36;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataColumn::PropertyChanging
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanging_37;

public:
	inline static int32_t get_offset_of__allowNull_3() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____allowNull_3)); }
	inline bool get__allowNull_3() const { return ____allowNull_3; }
	inline bool* get_address_of__allowNull_3() { return &____allowNull_3; }
	inline void set__allowNull_3(bool value)
	{
		____allowNull_3 = value;
	}

	inline static int32_t get_offset_of__caption_4() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____caption_4)); }
	inline String_t* get__caption_4() const { return ____caption_4; }
	inline String_t** get_address_of__caption_4() { return &____caption_4; }
	inline void set__caption_4(String_t* value)
	{
		____caption_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caption_4), (void*)value);
	}

	inline static int32_t get_offset_of__columnName_5() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnName_5)); }
	inline String_t* get__columnName_5() const { return ____columnName_5; }
	inline String_t** get_address_of__columnName_5() { return &____columnName_5; }
	inline void set__columnName_5(String_t* value)
	{
		____columnName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnName_5), (void*)value);
	}

	inline static int32_t get_offset_of__dataType_6() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____dataType_6)); }
	inline Type_t * get__dataType_6() const { return ____dataType_6; }
	inline Type_t ** get_address_of__dataType_6() { return &____dataType_6; }
	inline void set__dataType_6(Type_t * value)
	{
		____dataType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataType_6), (void*)value);
	}

	inline static int32_t get_offset_of__storageType_7() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____storageType_7)); }
	inline int32_t get__storageType_7() const { return ____storageType_7; }
	inline int32_t* get_address_of__storageType_7() { return &____storageType_7; }
	inline void set__storageType_7(int32_t value)
	{
		____storageType_7 = value;
	}

	inline static int32_t get_offset_of__defaultValue_8() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____defaultValue_8)); }
	inline RuntimeObject * get__defaultValue_8() const { return ____defaultValue_8; }
	inline RuntimeObject ** get_address_of__defaultValue_8() { return &____defaultValue_8; }
	inline void set__defaultValue_8(RuntimeObject * value)
	{
		____defaultValue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_8), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeMode_9() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____dateTimeMode_9)); }
	inline int32_t get__dateTimeMode_9() const { return ____dateTimeMode_9; }
	inline int32_t* get_address_of__dateTimeMode_9() { return &____dateTimeMode_9; }
	inline void set__dateTimeMode_9(int32_t value)
	{
		____dateTimeMode_9 = value;
	}

	inline static int32_t get_offset_of__expression_10() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____expression_10)); }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * get__expression_10() const { return ____expression_10; }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 ** get_address_of__expression_10() { return &____expression_10; }
	inline void set__expression_10(DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * value)
	{
		____expression_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expression_10), (void*)value);
	}

	inline static int32_t get_offset_of__maxLength_11() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____maxLength_11)); }
	inline int32_t get__maxLength_11() const { return ____maxLength_11; }
	inline int32_t* get_address_of__maxLength_11() { return &____maxLength_11; }
	inline void set__maxLength_11(int32_t value)
	{
		____maxLength_11 = value;
	}

	inline static int32_t get_offset_of__ordinal_12() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____ordinal_12)); }
	inline int32_t get__ordinal_12() const { return ____ordinal_12; }
	inline int32_t* get_address_of__ordinal_12() { return &____ordinal_12; }
	inline void set__ordinal_12(int32_t value)
	{
		____ordinal_12 = value;
	}

	inline static int32_t get_offset_of__readOnly_13() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____readOnly_13)); }
	inline bool get__readOnly_13() const { return ____readOnly_13; }
	inline bool* get_address_of__readOnly_13() { return &____readOnly_13; }
	inline void set__readOnly_13(bool value)
	{
		____readOnly_13 = value;
	}

	inline static int32_t get_offset_of__sortIndex_14() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____sortIndex_14)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__sortIndex_14() const { return ____sortIndex_14; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__sortIndex_14() { return &____sortIndex_14; }
	inline void set__sortIndex_14(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____sortIndex_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortIndex_14), (void*)value);
	}

	inline static int32_t get_offset_of__table_15() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____table_15)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_15() const { return ____table_15; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_15() { return &____table_15; }
	inline void set__table_15(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_15), (void*)value);
	}

	inline static int32_t get_offset_of__unique_16() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____unique_16)); }
	inline bool get__unique_16() const { return ____unique_16; }
	inline bool* get_address_of__unique_16() { return &____unique_16; }
	inline void set__unique_16(bool value)
	{
		____unique_16 = value;
	}

	inline static int32_t get_offset_of__columnMapping_17() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnMapping_17)); }
	inline int32_t get__columnMapping_17() const { return ____columnMapping_17; }
	inline int32_t* get_address_of__columnMapping_17() { return &____columnMapping_17; }
	inline void set__columnMapping_17(int32_t value)
	{
		____columnMapping_17 = value;
	}

	inline static int32_t get_offset_of__hashCode_18() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____hashCode_18)); }
	inline int32_t get__hashCode_18() const { return ____hashCode_18; }
	inline int32_t* get_address_of__hashCode_18() { return &____hashCode_18; }
	inline void set__hashCode_18(int32_t value)
	{
		____hashCode_18 = value;
	}

	inline static int32_t get_offset_of__errors_19() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____errors_19)); }
	inline int32_t get__errors_19() const { return ____errors_19; }
	inline int32_t* get_address_of__errors_19() { return &____errors_19; }
	inline void set__errors_19(int32_t value)
	{
		____errors_19 = value;
	}

	inline static int32_t get_offset_of__isSqlType_20() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____isSqlType_20)); }
	inline bool get__isSqlType_20() const { return ____isSqlType_20; }
	inline bool* get_address_of__isSqlType_20() { return &____isSqlType_20; }
	inline void set__isSqlType_20(bool value)
	{
		____isSqlType_20 = value;
	}

	inline static int32_t get_offset_of__implementsINullable_21() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsINullable_21)); }
	inline bool get__implementsINullable_21() const { return ____implementsINullable_21; }
	inline bool* get_address_of__implementsINullable_21() { return &____implementsINullable_21; }
	inline void set__implementsINullable_21(bool value)
	{
		____implementsINullable_21 = value;
	}

	inline static int32_t get_offset_of__implementsIChangeTracking_22() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsIChangeTracking_22)); }
	inline bool get__implementsIChangeTracking_22() const { return ____implementsIChangeTracking_22; }
	inline bool* get_address_of__implementsIChangeTracking_22() { return &____implementsIChangeTracking_22; }
	inline void set__implementsIChangeTracking_22(bool value)
	{
		____implementsIChangeTracking_22 = value;
	}

	inline static int32_t get_offset_of__implementsIRevertibleChangeTracking_23() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsIRevertibleChangeTracking_23)); }
	inline bool get__implementsIRevertibleChangeTracking_23() const { return ____implementsIRevertibleChangeTracking_23; }
	inline bool* get_address_of__implementsIRevertibleChangeTracking_23() { return &____implementsIRevertibleChangeTracking_23; }
	inline void set__implementsIRevertibleChangeTracking_23(bool value)
	{
		____implementsIRevertibleChangeTracking_23 = value;
	}

	inline static int32_t get_offset_of__implementsIXMLSerializable_24() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____implementsIXMLSerializable_24)); }
	inline bool get__implementsIXMLSerializable_24() const { return ____implementsIXMLSerializable_24; }
	inline bool* get_address_of__implementsIXMLSerializable_24() { return &____implementsIXMLSerializable_24; }
	inline void set__implementsIXMLSerializable_24(bool value)
	{
		____implementsIXMLSerializable_24 = value;
	}

	inline static int32_t get_offset_of__defaultValueIsNull_25() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____defaultValueIsNull_25)); }
	inline bool get__defaultValueIsNull_25() const { return ____defaultValueIsNull_25; }
	inline bool* get_address_of__defaultValueIsNull_25() { return &____defaultValueIsNull_25; }
	inline void set__defaultValueIsNull_25(bool value)
	{
		____defaultValueIsNull_25 = value;
	}

	inline static int32_t get_offset_of__dependentColumns_26() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____dependentColumns_26)); }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * get__dependentColumns_26() const { return ____dependentColumns_26; }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 ** get_address_of__dependentColumns_26() { return &____dependentColumns_26; }
	inline void set__dependentColumns_26(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * value)
	{
		____dependentColumns_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dependentColumns_26), (void*)value);
	}

	inline static int32_t get_offset_of__extendedProperties_27() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____extendedProperties_27)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_27() const { return ____extendedProperties_27; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_27() { return &____extendedProperties_27; }
	inline void set__extendedProperties_27(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_27), (void*)value);
	}

	inline static int32_t get_offset_of__storage_28() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____storage_28)); }
	inline DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 * get__storage_28() const { return ____storage_28; }
	inline DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 ** get_address_of__storage_28() { return &____storage_28; }
	inline void set__storage_28(DataStorage_tD0EA36115182A6288321E6EF7C8B16C5E19D0138 * value)
	{
		____storage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storage_28), (void*)value);
	}

	inline static int32_t get_offset_of__autoInc_29() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____autoInc_29)); }
	inline AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC * get__autoInc_29() const { return ____autoInc_29; }
	inline AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC ** get_address_of__autoInc_29() { return &____autoInc_29; }
	inline void set__autoInc_29(AutoIncrementValue_t4267E1ADD464F0AAD2395E50A13224C7052A52DC * value)
	{
		____autoInc_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____autoInc_29), (void*)value);
	}

	inline static int32_t get_offset_of__columnUri_30() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnUri_30)); }
	inline String_t* get__columnUri_30() const { return ____columnUri_30; }
	inline String_t** get_address_of__columnUri_30() { return &____columnUri_30; }
	inline void set__columnUri_30(String_t* value)
	{
		____columnUri_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnUri_30), (void*)value);
	}

	inline static int32_t get_offset_of__columnPrefix_31() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____columnPrefix_31)); }
	inline String_t* get__columnPrefix_31() const { return ____columnPrefix_31; }
	inline String_t** get_address_of__columnPrefix_31() { return &____columnPrefix_31; }
	inline void set__columnPrefix_31(String_t* value)
	{
		____columnPrefix_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnPrefix_31), (void*)value);
	}

	inline static int32_t get_offset_of__encodedColumnName_32() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____encodedColumnName_32)); }
	inline String_t* get__encodedColumnName_32() const { return ____encodedColumnName_32; }
	inline String_t** get_address_of__encodedColumnName_32() { return &____encodedColumnName_32; }
	inline void set__encodedColumnName_32(String_t* value)
	{
		____encodedColumnName_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encodedColumnName_32), (void*)value);
	}

	inline static int32_t get_offset_of__simpleType_33() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____simpleType_33)); }
	inline SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 * get__simpleType_33() const { return ____simpleType_33; }
	inline SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 ** get_address_of__simpleType_33() { return &____simpleType_33; }
	inline void set__simpleType_33(SimpleType_t49470C34D88B5C339CCA842F9F167CB7A537D0F5 * value)
	{
		____simpleType_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____simpleType_33), (void*)value);
	}

	inline static int32_t get_offset_of__objectID_35() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ____objectID_35)); }
	inline int32_t get__objectID_35() const { return ____objectID_35; }
	inline int32_t* get_address_of__objectID_35() { return &____objectID_35; }
	inline void set__objectID_35(int32_t value)
	{
		____objectID_35 = value;
	}

	inline static int32_t get_offset_of_U3CXmlDataTypeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ___U3CXmlDataTypeU3Ek__BackingField_36)); }
	inline String_t* get_U3CXmlDataTypeU3Ek__BackingField_36() const { return ___U3CXmlDataTypeU3Ek__BackingField_36; }
	inline String_t** get_address_of_U3CXmlDataTypeU3Ek__BackingField_36() { return &___U3CXmlDataTypeU3Ek__BackingField_36; }
	inline void set_U3CXmlDataTypeU3Ek__BackingField_36(String_t* value)
	{
		___U3CXmlDataTypeU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CXmlDataTypeU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_37() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638, ___PropertyChanging_37)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanging_37() const { return ___PropertyChanging_37; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanging_37() { return &___PropertyChanging_37; }
	inline void set_PropertyChanging_37(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanging_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_37), (void*)value);
	}
};

struct DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638_StaticFields
{
public:
	// System.Int32 System.Data.DataColumn::s_objectTypeCount
	int32_t ___s_objectTypeCount_34;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_34() { return static_cast<int32_t>(offsetof(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638_StaticFields, ___s_objectTypeCount_34)); }
	inline int32_t get_s_objectTypeCount_34() const { return ___s_objectTypeCount_34; }
	inline int32_t* get_address_of_s_objectTypeCount_34() { return &___s_objectTypeCount_34; }
	inline void set_s_objectTypeCount_34(int32_t value)
	{
		___s_objectTypeCount_34 = value;
	}
};


// System.Data.DataRow
struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ____table_0;
	// System.Data.DataColumnCollection System.Data.DataRow::_columns
	DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * ____columns_1;
	// System.Int32 System.Data.DataRow::_oldRecord
	int32_t ____oldRecord_2;
	// System.Int32 System.Data.DataRow::_newRecord
	int32_t ____newRecord_3;
	// System.Int32 System.Data.DataRow::_tempRecord
	int32_t ____tempRecord_4;
	// System.Int64 System.Data.DataRow::_rowID
	int64_t ____rowID_5;
	// System.Data.DataRowAction System.Data.DataRow::_action
	int32_t ____action_6;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_7;
	// System.Boolean System.Data.DataRow::_inDeletingEvent
	bool ____inDeletingEvent_8;
	// System.Boolean System.Data.DataRow::_inCascade
	bool ____inCascade_9;
	// System.Data.DataColumn System.Data.DataRow::_lastChangedColumn
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____lastChangedColumn_10;
	// System.Int32 System.Data.DataRow::_countColumnChange
	int32_t ____countColumnChange_11;
	// System.Data.DataError System.Data.DataRow::_error
	DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 * ____error_12;
	// System.Object System.Data.DataRow::_element
	RuntimeObject * ____element_13;
	// System.Int32 System.Data.DataRow::_rbTreeNodeId
	int32_t ____rbTreeNodeId_14;
	// System.Int32 System.Data.DataRow::_objectID
	int32_t ____objectID_16;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____table_0)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get__table_0() const { return ____table_0; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_0), (void*)value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____columns_1)); }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * get__columns_1() const { return ____columns_1; }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 ** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columns_1), (void*)value);
	}

	inline static int32_t get_offset_of__oldRecord_2() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____oldRecord_2)); }
	inline int32_t get__oldRecord_2() const { return ____oldRecord_2; }
	inline int32_t* get_address_of__oldRecord_2() { return &____oldRecord_2; }
	inline void set__oldRecord_2(int32_t value)
	{
		____oldRecord_2 = value;
	}

	inline static int32_t get_offset_of__newRecord_3() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____newRecord_3)); }
	inline int32_t get__newRecord_3() const { return ____newRecord_3; }
	inline int32_t* get_address_of__newRecord_3() { return &____newRecord_3; }
	inline void set__newRecord_3(int32_t value)
	{
		____newRecord_3 = value;
	}

	inline static int32_t get_offset_of__tempRecord_4() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____tempRecord_4)); }
	inline int32_t get__tempRecord_4() const { return ____tempRecord_4; }
	inline int32_t* get_address_of__tempRecord_4() { return &____tempRecord_4; }
	inline void set__tempRecord_4(int32_t value)
	{
		____tempRecord_4 = value;
	}

	inline static int32_t get_offset_of__rowID_5() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____rowID_5)); }
	inline int64_t get__rowID_5() const { return ____rowID_5; }
	inline int64_t* get_address_of__rowID_5() { return &____rowID_5; }
	inline void set__rowID_5(int64_t value)
	{
		____rowID_5 = value;
	}

	inline static int32_t get_offset_of__action_6() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____action_6)); }
	inline int32_t get__action_6() const { return ____action_6; }
	inline int32_t* get_address_of__action_6() { return &____action_6; }
	inline void set__action_6(int32_t value)
	{
		____action_6 = value;
	}

	inline static int32_t get_offset_of__inChangingEvent_7() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____inChangingEvent_7)); }
	inline bool get__inChangingEvent_7() const { return ____inChangingEvent_7; }
	inline bool* get_address_of__inChangingEvent_7() { return &____inChangingEvent_7; }
	inline void set__inChangingEvent_7(bool value)
	{
		____inChangingEvent_7 = value;
	}

	inline static int32_t get_offset_of__inDeletingEvent_8() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____inDeletingEvent_8)); }
	inline bool get__inDeletingEvent_8() const { return ____inDeletingEvent_8; }
	inline bool* get_address_of__inDeletingEvent_8() { return &____inDeletingEvent_8; }
	inline void set__inDeletingEvent_8(bool value)
	{
		____inDeletingEvent_8 = value;
	}

	inline static int32_t get_offset_of__inCascade_9() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____inCascade_9)); }
	inline bool get__inCascade_9() const { return ____inCascade_9; }
	inline bool* get_address_of__inCascade_9() { return &____inCascade_9; }
	inline void set__inCascade_9(bool value)
	{
		____inCascade_9 = value;
	}

	inline static int32_t get_offset_of__lastChangedColumn_10() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____lastChangedColumn_10)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__lastChangedColumn_10() const { return ____lastChangedColumn_10; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__lastChangedColumn_10() { return &____lastChangedColumn_10; }
	inline void set__lastChangedColumn_10(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____lastChangedColumn_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastChangedColumn_10), (void*)value);
	}

	inline static int32_t get_offset_of__countColumnChange_11() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____countColumnChange_11)); }
	inline int32_t get__countColumnChange_11() const { return ____countColumnChange_11; }
	inline int32_t* get_address_of__countColumnChange_11() { return &____countColumnChange_11; }
	inline void set__countColumnChange_11(int32_t value)
	{
		____countColumnChange_11 = value;
	}

	inline static int32_t get_offset_of__error_12() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____error_12)); }
	inline DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 * get__error_12() const { return ____error_12; }
	inline DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 ** get_address_of__error_12() { return &____error_12; }
	inline void set__error_12(DataError_t1D58E151B9E79E500B6279B5D77137381D31DBC0 * value)
	{
		____error_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_12), (void*)value);
	}

	inline static int32_t get_offset_of__element_13() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____element_13)); }
	inline RuntimeObject * get__element_13() const { return ____element_13; }
	inline RuntimeObject ** get_address_of__element_13() { return &____element_13; }
	inline void set__element_13(RuntimeObject * value)
	{
		____element_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____element_13), (void*)value);
	}

	inline static int32_t get_offset_of__rbTreeNodeId_14() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____rbTreeNodeId_14)); }
	inline int32_t get__rbTreeNodeId_14() const { return ____rbTreeNodeId_14; }
	inline int32_t* get_address_of__rbTreeNodeId_14() { return &____rbTreeNodeId_14; }
	inline void set__rbTreeNodeId_14(int32_t value)
	{
		____rbTreeNodeId_14 = value;
	}

	inline static int32_t get_offset_of__objectID_16() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE, ____objectID_16)); }
	inline int32_t get__objectID_16() const { return ____objectID_16; }
	inline int32_t* get_address_of__objectID_16() { return &____objectID_16; }
	inline void set__objectID_16(int32_t value)
	{
		____objectID_16 = value;
	}
};

struct DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE_StaticFields
{
public:
	// System.Int32 System.Data.DataRow::s_objectTypeCount
	int32_t ___s_objectTypeCount_15;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_15() { return static_cast<int32_t>(offsetof(DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE_StaticFields, ___s_objectTypeCount_15)); }
	inline int32_t get_s_objectTypeCount_15() const { return ___s_objectTypeCount_15; }
	inline int32_t* get_address_of_s_objectTypeCount_15() { return &___s_objectTypeCount_15; }
	inline void set_s_objectTypeCount_15(int32_t value)
	{
		___s_objectTypeCount_15 = value;
	}
};


// System.Data.DataTable
struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827  : public MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D
{
public:
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 * ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * ____colUnique_32;
	// System.Boolean System.Data.DataTable::_textOnly
	bool ____textOnly_33;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ____minOccurs_34;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ____maxOccurs_35;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_36;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject * ____typeName_37;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * ____primaryKey_38;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* ____primaryIndex_39;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* ____delayedSetPrimaryKey_40;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____loadIndex_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____loadIndexwithOriginalAdded_42;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * ____loadIndexwithCurrentDeleted_43;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_44;
	// System.Boolean System.Data.DataTable::_savedEnforceConstraints
	bool ____savedEnforceConstraints_45;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_46;
	// System.Boolean System.Data.DataTable::_initialLoad
	bool ____initialLoad_47;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_48;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_49;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_50;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_51;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_52;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_53;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_54;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD* ____emptyDataRowArray_55;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ____propertyDescriptorCollectionCache_56;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* ____nestedParentRelations_57;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * ____dependentColumns_58;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowChangedDelegate_60;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowChangingDelegate_61;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowDeletingDelegate_62;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * ____onRowDeletedDelegate_63;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * ____onColumnChangedDelegate_64;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * ____onColumnChangingDelegate_65;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * ____onTableClearingDelegate_66;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * ____onTableClearedDelegate_67;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B * ____onTableNewRowDelegate_68;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ____onPropertyChangingDelegate_69;
	// System.EventHandler System.Data.DataTable::_onInitialized
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ____onInitialized_70;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 * ____rowBuilder_71;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 * ____delayedViews_75;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 * ____dataViewListeners_76;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____rowDiffId_77;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * ____indexesLock_78;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_79;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_80;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_82;

public:
	inline static int32_t get_offset_of__dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____dataSet_3)); }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * get__dataSet_3() const { return ____dataSet_3; }
	inline DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B ** get_address_of__dataSet_3() { return &____dataSet_3; }
	inline void set__dataSet_3(DataSet_t72D1077FF27561D819DB6F19AB7DBD00BB06CA3B * value)
	{
		____dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_3), (void*)value);
	}

	inline static int32_t get_offset_of__defaultView_4() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____defaultView_4)); }
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * get__defaultView_4() const { return ____defaultView_4; }
	inline DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF ** get_address_of__defaultView_4() { return &____defaultView_4; }
	inline void set__defaultView_4(DataView_t2E5A84859C321ACA156C56B6F1E03BED53E963CF * value)
	{
		____defaultView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultView_4), (void*)value);
	}

	inline static int32_t get_offset_of__nextRowID_5() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____nextRowID_5)); }
	inline int64_t get__nextRowID_5() const { return ____nextRowID_5; }
	inline int64_t* get_address_of__nextRowID_5() { return &____nextRowID_5; }
	inline void set__nextRowID_5(int64_t value)
	{
		____nextRowID_5 = value;
	}

	inline static int32_t get_offset_of__rowCollection_6() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____rowCollection_6)); }
	inline DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * get__rowCollection_6() const { return ____rowCollection_6; }
	inline DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 ** get_address_of__rowCollection_6() { return &____rowCollection_6; }
	inline void set__rowCollection_6(DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * value)
	{
		____rowCollection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowCollection_6), (void*)value);
	}

	inline static int32_t get_offset_of__columnCollection_7() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____columnCollection_7)); }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * get__columnCollection_7() const { return ____columnCollection_7; }
	inline DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 ** get_address_of__columnCollection_7() { return &____columnCollection_7; }
	inline void set__columnCollection_7(DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * value)
	{
		____columnCollection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnCollection_7), (void*)value);
	}

	inline static int32_t get_offset_of__constraintCollection_8() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____constraintCollection_8)); }
	inline ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * get__constraintCollection_8() const { return ____constraintCollection_8; }
	inline ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 ** get_address_of__constraintCollection_8() { return &____constraintCollection_8; }
	inline void set__constraintCollection_8(ConstraintCollection_t6C68257CA7B227D224B6A08CE6C421F66DAEEEC1 * value)
	{
		____constraintCollection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintCollection_8), (void*)value);
	}

	inline static int32_t get_offset_of__elementColumnCount_9() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____elementColumnCount_9)); }
	inline int32_t get__elementColumnCount_9() const { return ____elementColumnCount_9; }
	inline int32_t* get_address_of__elementColumnCount_9() { return &____elementColumnCount_9; }
	inline void set__elementColumnCount_9(int32_t value)
	{
		____elementColumnCount_9 = value;
	}

	inline static int32_t get_offset_of__parentRelationsCollection_10() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____parentRelationsCollection_10)); }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * get__parentRelationsCollection_10() const { return ____parentRelationsCollection_10; }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 ** get_address_of__parentRelationsCollection_10() { return &____parentRelationsCollection_10; }
	inline void set__parentRelationsCollection_10(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * value)
	{
		____parentRelationsCollection_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentRelationsCollection_10), (void*)value);
	}

	inline static int32_t get_offset_of__childRelationsCollection_11() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____childRelationsCollection_11)); }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * get__childRelationsCollection_11() const { return ____childRelationsCollection_11; }
	inline DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 ** get_address_of__childRelationsCollection_11() { return &____childRelationsCollection_11; }
	inline void set__childRelationsCollection_11(DataRelationCollection_tD29A1A2763A196A96964137CB72520CB43082714 * value)
	{
		____childRelationsCollection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childRelationsCollection_11), (void*)value);
	}

	inline static int32_t get_offset_of__recordManager_12() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____recordManager_12)); }
	inline RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 * get__recordManager_12() const { return ____recordManager_12; }
	inline RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 ** get_address_of__recordManager_12() { return &____recordManager_12; }
	inline void set__recordManager_12(RecordManager_t88D8410999842025EC74A65B2CD9BA479C5EDC53 * value)
	{
		____recordManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordManager_12), (void*)value);
	}

	inline static int32_t get_offset_of__indexes_13() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____indexes_13)); }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * get__indexes_13() const { return ____indexes_13; }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D ** get_address_of__indexes_13() { return &____indexes_13; }
	inline void set__indexes_13(List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * value)
	{
		____indexes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexes_13), (void*)value);
	}

	inline static int32_t get_offset_of__shadowIndexes_14() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____shadowIndexes_14)); }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * get__shadowIndexes_14() const { return ____shadowIndexes_14; }
	inline List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D ** get_address_of__shadowIndexes_14() { return &____shadowIndexes_14; }
	inline void set__shadowIndexes_14(List_1_tD5795870026BEF286BB7B0CEC48058281AD2DA0D * value)
	{
		____shadowIndexes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowIndexes_14), (void*)value);
	}

	inline static int32_t get_offset_of__shadowCount_15() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____shadowCount_15)); }
	inline int32_t get__shadowCount_15() const { return ____shadowCount_15; }
	inline int32_t* get_address_of__shadowCount_15() { return &____shadowCount_15; }
	inline void set__shadowCount_15(int32_t value)
	{
		____shadowCount_15 = value;
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____extendedProperties_16)); }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_tB3B42BDE84A831DD057EAB1C19F69AB0625F5012 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_16), (void*)value);
	}

	inline static int32_t get_offset_of__tableName_17() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____tableName_17)); }
	inline String_t* get__tableName_17() const { return ____tableName_17; }
	inline String_t** get_address_of__tableName_17() { return &____tableName_17; }
	inline void set__tableName_17(String_t* value)
	{
		____tableName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableName_17), (void*)value);
	}

	inline static int32_t get_offset_of__tableNamespace_18() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____tableNamespace_18)); }
	inline String_t* get__tableNamespace_18() const { return ____tableNamespace_18; }
	inline String_t** get_address_of__tableNamespace_18() { return &____tableNamespace_18; }
	inline void set__tableNamespace_18(String_t* value)
	{
		____tableNamespace_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableNamespace_18), (void*)value);
	}

	inline static int32_t get_offset_of__tablePrefix_19() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____tablePrefix_19)); }
	inline String_t* get__tablePrefix_19() const { return ____tablePrefix_19; }
	inline String_t** get_address_of__tablePrefix_19() { return &____tablePrefix_19; }
	inline void set__tablePrefix_19(String_t* value)
	{
		____tablePrefix_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tablePrefix_19), (void*)value);
	}

	inline static int32_t get_offset_of__displayExpression_20() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____displayExpression_20)); }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * get__displayExpression_20() const { return ____displayExpression_20; }
	inline DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 ** get_address_of__displayExpression_20() { return &____displayExpression_20; }
	inline void set__displayExpression_20(DataExpression_t02B5A14205433D16401B28DB7B2DD5508E71F2E9 * value)
	{
		____displayExpression_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayExpression_20), (void*)value);
	}

	inline static int32_t get_offset_of__fNestedInDataset_21() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____fNestedInDataset_21)); }
	inline bool get__fNestedInDataset_21() const { return ____fNestedInDataset_21; }
	inline bool* get_address_of__fNestedInDataset_21() { return &____fNestedInDataset_21; }
	inline void set__fNestedInDataset_21(bool value)
	{
		____fNestedInDataset_21 = value;
	}

	inline static int32_t get_offset_of__culture_22() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____culture_22)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_22() const { return ____culture_22; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_22() { return &____culture_22; }
	inline void set__culture_22(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_22), (void*)value);
	}

	inline static int32_t get_offset_of__cultureUserSet_23() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____cultureUserSet_23)); }
	inline bool get__cultureUserSet_23() const { return ____cultureUserSet_23; }
	inline bool* get_address_of__cultureUserSet_23() { return &____cultureUserSet_23; }
	inline void set__cultureUserSet_23(bool value)
	{
		____cultureUserSet_23 = value;
	}

	inline static int32_t get_offset_of__compareInfo_24() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____compareInfo_24)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get__compareInfo_24() const { return ____compareInfo_24; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of__compareInfo_24() { return &____compareInfo_24; }
	inline void set__compareInfo_24(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		____compareInfo_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____compareInfo_24), (void*)value);
	}

	inline static int32_t get_offset_of__compareFlags_25() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____compareFlags_25)); }
	inline int32_t get__compareFlags_25() const { return ____compareFlags_25; }
	inline int32_t* get_address_of__compareFlags_25() { return &____compareFlags_25; }
	inline void set__compareFlags_25(int32_t value)
	{
		____compareFlags_25 = value;
	}

	inline static int32_t get_offset_of__formatProvider_26() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____formatProvider_26)); }
	inline RuntimeObject* get__formatProvider_26() const { return ____formatProvider_26; }
	inline RuntimeObject** get_address_of__formatProvider_26() { return &____formatProvider_26; }
	inline void set__formatProvider_26(RuntimeObject* value)
	{
		____formatProvider_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formatProvider_26), (void*)value);
	}

	inline static int32_t get_offset_of__hashCodeProvider_27() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____hashCodeProvider_27)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__hashCodeProvider_27() const { return ____hashCodeProvider_27; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__hashCodeProvider_27() { return &____hashCodeProvider_27; }
	inline void set__hashCodeProvider_27(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____hashCodeProvider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashCodeProvider_27), (void*)value);
	}

	inline static int32_t get_offset_of__caseSensitive_28() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____caseSensitive_28)); }
	inline bool get__caseSensitive_28() const { return ____caseSensitive_28; }
	inline bool* get_address_of__caseSensitive_28() { return &____caseSensitive_28; }
	inline void set__caseSensitive_28(bool value)
	{
		____caseSensitive_28 = value;
	}

	inline static int32_t get_offset_of__caseSensitiveUserSet_29() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____caseSensitiveUserSet_29)); }
	inline bool get__caseSensitiveUserSet_29() const { return ____caseSensitiveUserSet_29; }
	inline bool* get_address_of__caseSensitiveUserSet_29() { return &____caseSensitiveUserSet_29; }
	inline void set__caseSensitiveUserSet_29(bool value)
	{
		____caseSensitiveUserSet_29 = value;
	}

	inline static int32_t get_offset_of__encodedTableName_30() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____encodedTableName_30)); }
	inline String_t* get__encodedTableName_30() const { return ____encodedTableName_30; }
	inline String_t** get_address_of__encodedTableName_30() { return &____encodedTableName_30; }
	inline void set__encodedTableName_30(String_t* value)
	{
		____encodedTableName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encodedTableName_30), (void*)value);
	}

	inline static int32_t get_offset_of__xmlText_31() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____xmlText_31)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__xmlText_31() const { return ____xmlText_31; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__xmlText_31() { return &____xmlText_31; }
	inline void set__xmlText_31(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____xmlText_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xmlText_31), (void*)value);
	}

	inline static int32_t get_offset_of__colUnique_32() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____colUnique_32)); }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * get__colUnique_32() const { return ____colUnique_32; }
	inline DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 ** get_address_of__colUnique_32() { return &____colUnique_32; }
	inline void set__colUnique_32(DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * value)
	{
		____colUnique_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colUnique_32), (void*)value);
	}

	inline static int32_t get_offset_of__textOnly_33() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____textOnly_33)); }
	inline bool get__textOnly_33() const { return ____textOnly_33; }
	inline bool* get_address_of__textOnly_33() { return &____textOnly_33; }
	inline void set__textOnly_33(bool value)
	{
		____textOnly_33 = value;
	}

	inline static int32_t get_offset_of__minOccurs_34() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____minOccurs_34)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get__minOccurs_34() const { return ____minOccurs_34; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of__minOccurs_34() { return &____minOccurs_34; }
	inline void set__minOccurs_34(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		____minOccurs_34 = value;
	}

	inline static int32_t get_offset_of__maxOccurs_35() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____maxOccurs_35)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get__maxOccurs_35() const { return ____maxOccurs_35; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of__maxOccurs_35() { return &____maxOccurs_35; }
	inline void set__maxOccurs_35(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		____maxOccurs_35 = value;
	}

	inline static int32_t get_offset_of__repeatableElement_36() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____repeatableElement_36)); }
	inline bool get__repeatableElement_36() const { return ____repeatableElement_36; }
	inline bool* get_address_of__repeatableElement_36() { return &____repeatableElement_36; }
	inline void set__repeatableElement_36(bool value)
	{
		____repeatableElement_36 = value;
	}

	inline static int32_t get_offset_of__typeName_37() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____typeName_37)); }
	inline RuntimeObject * get__typeName_37() const { return ____typeName_37; }
	inline RuntimeObject ** get_address_of__typeName_37() { return &____typeName_37; }
	inline void set__typeName_37(RuntimeObject * value)
	{
		____typeName_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeName_37), (void*)value);
	}

	inline static int32_t get_offset_of__primaryKey_38() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____primaryKey_38)); }
	inline UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * get__primaryKey_38() const { return ____primaryKey_38; }
	inline UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 ** get_address_of__primaryKey_38() { return &____primaryKey_38; }
	inline void set__primaryKey_38(UniqueConstraint_tC3E69EAF18F66B2517B72B7417D5028CBACD1B39 * value)
	{
		____primaryKey_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryKey_38), (void*)value);
	}

	inline static int32_t get_offset_of__primaryIndex_39() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____primaryIndex_39)); }
	inline IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* get__primaryIndex_39() const { return ____primaryIndex_39; }
	inline IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A** get_address_of__primaryIndex_39() { return &____primaryIndex_39; }
	inline void set__primaryIndex_39(IndexFieldU5BU5D_t5ACA22730370B8DD7B0EF591FD0A08918625568A* value)
	{
		____primaryIndex_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryIndex_39), (void*)value);
	}

	inline static int32_t get_offset_of__delayedSetPrimaryKey_40() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____delayedSetPrimaryKey_40)); }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* get__delayedSetPrimaryKey_40() const { return ____delayedSetPrimaryKey_40; }
	inline DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C** get_address_of__delayedSetPrimaryKey_40() { return &____delayedSetPrimaryKey_40; }
	inline void set__delayedSetPrimaryKey_40(DataColumnU5BU5D_t707F732693E261B8D499AF62145420BF689DAA9C* value)
	{
		____delayedSetPrimaryKey_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedSetPrimaryKey_40), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndex_41() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____loadIndex_41)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__loadIndex_41() const { return ____loadIndex_41; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__loadIndex_41() { return &____loadIndex_41; }
	inline void set__loadIndex_41(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____loadIndex_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndex_41), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndexwithOriginalAdded_42() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____loadIndexwithOriginalAdded_42)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__loadIndexwithOriginalAdded_42() const { return ____loadIndexwithOriginalAdded_42; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__loadIndexwithOriginalAdded_42() { return &____loadIndexwithOriginalAdded_42; }
	inline void set__loadIndexwithOriginalAdded_42(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____loadIndexwithOriginalAdded_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndexwithOriginalAdded_42), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndexwithCurrentDeleted_43() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____loadIndexwithCurrentDeleted_43)); }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * get__loadIndexwithCurrentDeleted_43() const { return ____loadIndexwithCurrentDeleted_43; }
	inline Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 ** get_address_of__loadIndexwithCurrentDeleted_43() { return &____loadIndexwithCurrentDeleted_43; }
	inline void set__loadIndexwithCurrentDeleted_43(Index_tBA5996BF61AC61F6DE0C3EED5475B25D2892F663 * value)
	{
		____loadIndexwithCurrentDeleted_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndexwithCurrentDeleted_43), (void*)value);
	}

	inline static int32_t get_offset_of__suspendIndexEvents_44() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____suspendIndexEvents_44)); }
	inline int32_t get__suspendIndexEvents_44() const { return ____suspendIndexEvents_44; }
	inline int32_t* get_address_of__suspendIndexEvents_44() { return &____suspendIndexEvents_44; }
	inline void set__suspendIndexEvents_44(int32_t value)
	{
		____suspendIndexEvents_44 = value;
	}

	inline static int32_t get_offset_of__savedEnforceConstraints_45() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____savedEnforceConstraints_45)); }
	inline bool get__savedEnforceConstraints_45() const { return ____savedEnforceConstraints_45; }
	inline bool* get_address_of__savedEnforceConstraints_45() { return &____savedEnforceConstraints_45; }
	inline void set__savedEnforceConstraints_45(bool value)
	{
		____savedEnforceConstraints_45 = value;
	}

	inline static int32_t get_offset_of__inDataLoad_46() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____inDataLoad_46)); }
	inline bool get__inDataLoad_46() const { return ____inDataLoad_46; }
	inline bool* get_address_of__inDataLoad_46() { return &____inDataLoad_46; }
	inline void set__inDataLoad_46(bool value)
	{
		____inDataLoad_46 = value;
	}

	inline static int32_t get_offset_of__initialLoad_47() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____initialLoad_47)); }
	inline bool get__initialLoad_47() const { return ____initialLoad_47; }
	inline bool* get_address_of__initialLoad_47() { return &____initialLoad_47; }
	inline void set__initialLoad_47(bool value)
	{
		____initialLoad_47 = value;
	}

	inline static int32_t get_offset_of__schemaLoading_48() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____schemaLoading_48)); }
	inline bool get__schemaLoading_48() const { return ____schemaLoading_48; }
	inline bool* get_address_of__schemaLoading_48() { return &____schemaLoading_48; }
	inline void set__schemaLoading_48(bool value)
	{
		____schemaLoading_48 = value;
	}

	inline static int32_t get_offset_of__enforceConstraints_49() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____enforceConstraints_49)); }
	inline bool get__enforceConstraints_49() const { return ____enforceConstraints_49; }
	inline bool* get_address_of__enforceConstraints_49() { return &____enforceConstraints_49; }
	inline void set__enforceConstraints_49(bool value)
	{
		____enforceConstraints_49 = value;
	}

	inline static int32_t get_offset_of__suspendEnforceConstraints_50() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____suspendEnforceConstraints_50)); }
	inline bool get__suspendEnforceConstraints_50() const { return ____suspendEnforceConstraints_50; }
	inline bool* get_address_of__suspendEnforceConstraints_50() { return &____suspendEnforceConstraints_50; }
	inline void set__suspendEnforceConstraints_50(bool value)
	{
		____suspendEnforceConstraints_50 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_51() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ___fInitInProgress_51)); }
	inline bool get_fInitInProgress_51() const { return ___fInitInProgress_51; }
	inline bool* get_address_of_fInitInProgress_51() { return &___fInitInProgress_51; }
	inline void set_fInitInProgress_51(bool value)
	{
		___fInitInProgress_51 = value;
	}

	inline static int32_t get_offset_of__inLoad_52() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____inLoad_52)); }
	inline bool get__inLoad_52() const { return ____inLoad_52; }
	inline bool* get_address_of__inLoad_52() { return &____inLoad_52; }
	inline void set__inLoad_52(bool value)
	{
		____inLoad_52 = value;
	}

	inline static int32_t get_offset_of__fInLoadDiffgram_53() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____fInLoadDiffgram_53)); }
	inline bool get__fInLoadDiffgram_53() const { return ____fInLoadDiffgram_53; }
	inline bool* get_address_of__fInLoadDiffgram_53() { return &____fInLoadDiffgram_53; }
	inline void set__fInLoadDiffgram_53(bool value)
	{
		____fInLoadDiffgram_53 = value;
	}

	inline static int32_t get_offset_of__isTypedDataTable_54() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____isTypedDataTable_54)); }
	inline uint8_t get__isTypedDataTable_54() const { return ____isTypedDataTable_54; }
	inline uint8_t* get_address_of__isTypedDataTable_54() { return &____isTypedDataTable_54; }
	inline void set__isTypedDataTable_54(uint8_t value)
	{
		____isTypedDataTable_54 = value;
	}

	inline static int32_t get_offset_of__emptyDataRowArray_55() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____emptyDataRowArray_55)); }
	inline DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD* get__emptyDataRowArray_55() const { return ____emptyDataRowArray_55; }
	inline DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD** get_address_of__emptyDataRowArray_55() { return &____emptyDataRowArray_55; }
	inline void set__emptyDataRowArray_55(DataRowU5BU5D_t039B78152F7ED6AC096A8A0A91289870EA3A97BD* value)
	{
		____emptyDataRowArray_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDataRowArray_55), (void*)value);
	}

	inline static int32_t get_offset_of__propertyDescriptorCollectionCache_56() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____propertyDescriptorCollectionCache_56)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get__propertyDescriptorCollectionCache_56() const { return ____propertyDescriptorCollectionCache_56; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of__propertyDescriptorCollectionCache_56() { return &____propertyDescriptorCollectionCache_56; }
	inline void set__propertyDescriptorCollectionCache_56(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		____propertyDescriptorCollectionCache_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyDescriptorCollectionCache_56), (void*)value);
	}

	inline static int32_t get_offset_of__nestedParentRelations_57() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____nestedParentRelations_57)); }
	inline DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* get__nestedParentRelations_57() const { return ____nestedParentRelations_57; }
	inline DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C** get_address_of__nestedParentRelations_57() { return &____nestedParentRelations_57; }
	inline void set__nestedParentRelations_57(DataRelationU5BU5D_tD72718271EA486F2C00EA68F2D1DB7DEB338F96C* value)
	{
		____nestedParentRelations_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nestedParentRelations_57), (void*)value);
	}

	inline static int32_t get_offset_of__dependentColumns_58() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____dependentColumns_58)); }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * get__dependentColumns_58() const { return ____dependentColumns_58; }
	inline List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 ** get_address_of__dependentColumns_58() { return &____dependentColumns_58; }
	inline void set__dependentColumns_58(List_1_t29671090F2E06651D66007921E9865EDBDE7CFC4 * value)
	{
		____dependentColumns_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dependentColumns_58), (void*)value);
	}

	inline static int32_t get_offset_of__mergingData_59() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____mergingData_59)); }
	inline bool get__mergingData_59() const { return ____mergingData_59; }
	inline bool* get_address_of__mergingData_59() { return &____mergingData_59; }
	inline void set__mergingData_59(bool value)
	{
		____mergingData_59 = value;
	}

	inline static int32_t get_offset_of__onRowChangedDelegate_60() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowChangedDelegate_60)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowChangedDelegate_60() const { return ____onRowChangedDelegate_60; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowChangedDelegate_60() { return &____onRowChangedDelegate_60; }
	inline void set__onRowChangedDelegate_60(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowChangedDelegate_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowChangedDelegate_60), (void*)value);
	}

	inline static int32_t get_offset_of__onRowChangingDelegate_61() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowChangingDelegate_61)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowChangingDelegate_61() const { return ____onRowChangingDelegate_61; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowChangingDelegate_61() { return &____onRowChangingDelegate_61; }
	inline void set__onRowChangingDelegate_61(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowChangingDelegate_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowChangingDelegate_61), (void*)value);
	}

	inline static int32_t get_offset_of__onRowDeletingDelegate_62() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowDeletingDelegate_62)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowDeletingDelegate_62() const { return ____onRowDeletingDelegate_62; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowDeletingDelegate_62() { return &____onRowDeletingDelegate_62; }
	inline void set__onRowDeletingDelegate_62(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowDeletingDelegate_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowDeletingDelegate_62), (void*)value);
	}

	inline static int32_t get_offset_of__onRowDeletedDelegate_63() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onRowDeletedDelegate_63)); }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * get__onRowDeletedDelegate_63() const { return ____onRowDeletedDelegate_63; }
	inline DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B ** get_address_of__onRowDeletedDelegate_63() { return &____onRowDeletedDelegate_63; }
	inline void set__onRowDeletedDelegate_63(DataRowChangeEventHandler_t1CA1E6A9B920F2EFD9E6A2F51F0938EB682D901B * value)
	{
		____onRowDeletedDelegate_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowDeletedDelegate_63), (void*)value);
	}

	inline static int32_t get_offset_of__onColumnChangedDelegate_64() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onColumnChangedDelegate_64)); }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * get__onColumnChangedDelegate_64() const { return ____onColumnChangedDelegate_64; }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 ** get_address_of__onColumnChangedDelegate_64() { return &____onColumnChangedDelegate_64; }
	inline void set__onColumnChangedDelegate_64(DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * value)
	{
		____onColumnChangedDelegate_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onColumnChangedDelegate_64), (void*)value);
	}

	inline static int32_t get_offset_of__onColumnChangingDelegate_65() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onColumnChangingDelegate_65)); }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * get__onColumnChangingDelegate_65() const { return ____onColumnChangingDelegate_65; }
	inline DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 ** get_address_of__onColumnChangingDelegate_65() { return &____onColumnChangingDelegate_65; }
	inline void set__onColumnChangingDelegate_65(DataColumnChangeEventHandler_t70A1ADAB356DD79C67541D04B50A91DF60F3D2A4 * value)
	{
		____onColumnChangingDelegate_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onColumnChangingDelegate_65), (void*)value);
	}

	inline static int32_t get_offset_of__onTableClearingDelegate_66() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onTableClearingDelegate_66)); }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * get__onTableClearingDelegate_66() const { return ____onTableClearingDelegate_66; }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 ** get_address_of__onTableClearingDelegate_66() { return &____onTableClearingDelegate_66; }
	inline void set__onTableClearingDelegate_66(DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * value)
	{
		____onTableClearingDelegate_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableClearingDelegate_66), (void*)value);
	}

	inline static int32_t get_offset_of__onTableClearedDelegate_67() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onTableClearedDelegate_67)); }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * get__onTableClearedDelegate_67() const { return ____onTableClearedDelegate_67; }
	inline DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 ** get_address_of__onTableClearedDelegate_67() { return &____onTableClearedDelegate_67; }
	inline void set__onTableClearedDelegate_67(DataTableClearEventHandler_t0F631F97E38033D095CDF80C665BF15B8BE38B35 * value)
	{
		____onTableClearedDelegate_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableClearedDelegate_67), (void*)value);
	}

	inline static int32_t get_offset_of__onTableNewRowDelegate_68() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onTableNewRowDelegate_68)); }
	inline DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B * get__onTableNewRowDelegate_68() const { return ____onTableNewRowDelegate_68; }
	inline DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B ** get_address_of__onTableNewRowDelegate_68() { return &____onTableNewRowDelegate_68; }
	inline void set__onTableNewRowDelegate_68(DataTableNewRowEventHandler_tD0FA1AC652286E800E155E5AE14EA075DC10897B * value)
	{
		____onTableNewRowDelegate_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableNewRowDelegate_68), (void*)value);
	}

	inline static int32_t get_offset_of__onPropertyChangingDelegate_69() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onPropertyChangingDelegate_69)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get__onPropertyChangingDelegate_69() const { return ____onPropertyChangingDelegate_69; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of__onPropertyChangingDelegate_69() { return &____onPropertyChangingDelegate_69; }
	inline void set__onPropertyChangingDelegate_69(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		____onPropertyChangingDelegate_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPropertyChangingDelegate_69), (void*)value);
	}

	inline static int32_t get_offset_of__onInitialized_70() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____onInitialized_70)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get__onInitialized_70() const { return ____onInitialized_70; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of__onInitialized_70() { return &____onInitialized_70; }
	inline void set__onInitialized_70(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		____onInitialized_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onInitialized_70), (void*)value);
	}

	inline static int32_t get_offset_of__rowBuilder_71() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____rowBuilder_71)); }
	inline DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 * get__rowBuilder_71() const { return ____rowBuilder_71; }
	inline DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 ** get_address_of__rowBuilder_71() { return &____rowBuilder_71; }
	inline void set__rowBuilder_71(DataRowBuilder_t2C7D6576B4CB4899B7E72BC381206146A33BEFA7 * value)
	{
		____rowBuilder_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowBuilder_71), (void*)value);
	}

	inline static int32_t get_offset_of__delayedViews_75() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____delayedViews_75)); }
	inline List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 * get__delayedViews_75() const { return ____delayedViews_75; }
	inline List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 ** get_address_of__delayedViews_75() { return &____delayedViews_75; }
	inline void set__delayedViews_75(List_1_tB89245644B346101AE9E11C1D00E21FC07C571F6 * value)
	{
		____delayedViews_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedViews_75), (void*)value);
	}

	inline static int32_t get_offset_of__dataViewListeners_76() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____dataViewListeners_76)); }
	inline List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 * get__dataViewListeners_76() const { return ____dataViewListeners_76; }
	inline List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 ** get_address_of__dataViewListeners_76() { return &____dataViewListeners_76; }
	inline void set__dataViewListeners_76(List_1_tA51850D121A8B0010EBA8C983E6A9624C5E7A4F8 * value)
	{
		____dataViewListeners_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataViewListeners_76), (void*)value);
	}

	inline static int32_t get_offset_of__rowDiffId_77() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____rowDiffId_77)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__rowDiffId_77() const { return ____rowDiffId_77; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__rowDiffId_77() { return &____rowDiffId_77; }
	inline void set__rowDiffId_77(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____rowDiffId_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowDiffId_77), (void*)value);
	}

	inline static int32_t get_offset_of__indexesLock_78() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____indexesLock_78)); }
	inline ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * get__indexesLock_78() const { return ____indexesLock_78; }
	inline ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F ** get_address_of__indexesLock_78() { return &____indexesLock_78; }
	inline void set__indexesLock_78(ReaderWriterLockSlim_tABE1342190B3292CBA83424BDE0B46B40965BD7F * value)
	{
		____indexesLock_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexesLock_78), (void*)value);
	}

	inline static int32_t get_offset_of__ukColumnPositionForInference_79() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____ukColumnPositionForInference_79)); }
	inline int32_t get__ukColumnPositionForInference_79() const { return ____ukColumnPositionForInference_79; }
	inline int32_t* get_address_of__ukColumnPositionForInference_79() { return &____ukColumnPositionForInference_79; }
	inline void set__ukColumnPositionForInference_79(int32_t value)
	{
		____ukColumnPositionForInference_79 = value;
	}

	inline static int32_t get_offset_of__remotingFormat_80() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____remotingFormat_80)); }
	inline int32_t get__remotingFormat_80() const { return ____remotingFormat_80; }
	inline int32_t* get_address_of__remotingFormat_80() { return &____remotingFormat_80; }
	inline void set__remotingFormat_80(int32_t value)
	{
		____remotingFormat_80 = value;
	}

	inline static int32_t get_offset_of__objectID_82() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827, ____objectID_82)); }
	inline int32_t get__objectID_82() const { return ____objectID_82; }
	inline int32_t* get_address_of__objectID_82() { return &____objectID_82; }
	inline void set__objectID_82(int32_t value)
	{
		____objectID_82 = value;
	}
};

struct DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_StaticFields
{
public:
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_81;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_81() { return static_cast<int32_t>(offsetof(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_StaticFields, ___s_objectTypeCount_81)); }
	inline int32_t get_s_objectTypeCount_81() const { return ___s_objectTypeCount_81; }
	inline int32_t* get_address_of_s_objectTypeCount_81() { return &___s_objectTypeCount_81; }
	inline void set_s_objectTypeCount_81(int32_t value)
	{
		___s_objectTypeCount_81 = value;
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


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// System.Predicate`1<Volumetric_object>
struct Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D  : public MulticastDelegate_t
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Control_user_position
struct Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WebRTC.Unity.PeerConnection Control_user_position::PeerConnection
	PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * ___PeerConnection_4;
	// System.String Control_user_position::camera_info
	String_t* ___camera_info_5;
	// System.Data.DataTable Control_user_position::trace_raw_data
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___trace_raw_data_6;

public:
	inline static int32_t get_offset_of_PeerConnection_4() { return static_cast<int32_t>(offsetof(Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907, ___PeerConnection_4)); }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * get_PeerConnection_4() const { return ___PeerConnection_4; }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 ** get_address_of_PeerConnection_4() { return &___PeerConnection_4; }
	inline void set_PeerConnection_4(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * value)
	{
		___PeerConnection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PeerConnection_4), (void*)value);
	}

	inline static int32_t get_offset_of_camera_info_5() { return static_cast<int32_t>(offsetof(Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907, ___camera_info_5)); }
	inline String_t* get_camera_info_5() const { return ___camera_info_5; }
	inline String_t** get_address_of_camera_info_5() { return &___camera_info_5; }
	inline void set_camera_info_5(String_t* value)
	{
		___camera_info_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_info_5), (void*)value);
	}

	inline static int32_t get_offset_of_trace_raw_data_6() { return static_cast<int32_t>(offsetof(Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907, ___trace_raw_data_6)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get_trace_raw_data_6() const { return ___trace_raw_data_6; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of_trace_raw_data_6() { return &___trace_raw_data_6; }
	inline void set_trace_raw_data_6(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		___trace_raw_data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trace_raw_data_6), (void*)value);
	}
};


// Receive_interact
struct Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WebRTC.Unity.PeerConnection Receive_interact::peerconnection
	PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * ___peerconnection_4;
	// System.String Receive_interact::object_json
	String_t* ___object_json_7;

public:
	inline static int32_t get_offset_of_peerconnection_4() { return static_cast<int32_t>(offsetof(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517, ___peerconnection_4)); }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * get_peerconnection_4() const { return ___peerconnection_4; }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 ** get_address_of_peerconnection_4() { return &___peerconnection_4; }
	inline void set_peerconnection_4(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * value)
	{
		___peerconnection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerconnection_4), (void*)value);
	}

	inline static int32_t get_offset_of_object_json_7() { return static_cast<int32_t>(offsetof(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517, ___object_json_7)); }
	inline String_t* get_object_json_7() const { return ___object_json_7; }
	inline String_t** get_address_of_object_json_7() { return &___object_json_7; }
	inline void set_object_json_7(String_t* value)
	{
		___object_json_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_json_7), (void*)value);
	}
};

struct Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Object_transform> Receive_interact::Object_control_center
	Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___Object_control_center_5;
	// System.String Receive_interact::Received_object_json
	String_t* ___Received_object_json_6;

public:
	inline static int32_t get_offset_of_Object_control_center_5() { return static_cast<int32_t>(offsetof(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields, ___Object_control_center_5)); }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * get_Object_control_center_5() const { return ___Object_control_center_5; }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 ** get_address_of_Object_control_center_5() { return &___Object_control_center_5; }
	inline void set_Object_control_center_5(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * value)
	{
		___Object_control_center_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Object_control_center_5), (void*)value);
	}

	inline static int32_t get_offset_of_Received_object_json_6() { return static_cast<int32_t>(offsetof(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields, ___Received_object_json_6)); }
	inline String_t* get_Received_object_json_6() const { return ___Received_object_json_6; }
	inline String_t** get_address_of_Received_object_json_6() { return &___Received_object_json_6; }
	inline void set_Received_object_json_6(String_t* value)
	{
		___Received_object_json_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Received_object_json_6), (void*)value);
	}
};


// Send_control_information
struct Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WebRTC.Unity.PeerConnection Send_control_information::PeerConnection
	PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * ___PeerConnection_4;
	// System.String Send_control_information::json_object_control
	String_t* ___json_object_control_5;
	// System.Int32 Send_control_information::childCount
	int32_t ___childCount_6;
	// System.Collections.Generic.Dictionary`2<System.String,Object_transform> Send_control_information::object_control
	Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___object_control_7;
	// System.Collections.Generic.Dictionary`2<System.String,Object_transform> Send_control_information::send_control
	Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___send_control_8;

public:
	inline static int32_t get_offset_of_PeerConnection_4() { return static_cast<int32_t>(offsetof(Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D, ___PeerConnection_4)); }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * get_PeerConnection_4() const { return ___PeerConnection_4; }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 ** get_address_of_PeerConnection_4() { return &___PeerConnection_4; }
	inline void set_PeerConnection_4(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * value)
	{
		___PeerConnection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PeerConnection_4), (void*)value);
	}

	inline static int32_t get_offset_of_json_object_control_5() { return static_cast<int32_t>(offsetof(Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D, ___json_object_control_5)); }
	inline String_t* get_json_object_control_5() const { return ___json_object_control_5; }
	inline String_t** get_address_of_json_object_control_5() { return &___json_object_control_5; }
	inline void set_json_object_control_5(String_t* value)
	{
		___json_object_control_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_object_control_5), (void*)value);
	}

	inline static int32_t get_offset_of_childCount_6() { return static_cast<int32_t>(offsetof(Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D, ___childCount_6)); }
	inline int32_t get_childCount_6() const { return ___childCount_6; }
	inline int32_t* get_address_of_childCount_6() { return &___childCount_6; }
	inline void set_childCount_6(int32_t value)
	{
		___childCount_6 = value;
	}

	inline static int32_t get_offset_of_object_control_7() { return static_cast<int32_t>(offsetof(Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D, ___object_control_7)); }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * get_object_control_7() const { return ___object_control_7; }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 ** get_address_of_object_control_7() { return &___object_control_7; }
	inline void set_object_control_7(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * value)
	{
		___object_control_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_control_7), (void*)value);
	}

	inline static int32_t get_offset_of_send_control_8() { return static_cast<int32_t>(offsetof(Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D, ___send_control_8)); }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * get_send_control_8() const { return ___send_control_8; }
	inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 ** get_address_of_send_control_8() { return &___send_control_8; }
	inline void set_send_control_8(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * value)
	{
		___send_control_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___send_control_8), (void*)value);
	}
};


// Updata_position
struct Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Updata_position::childCount
	int32_t ___childCount_4;
	// System.Collections.Generic.List`1<Volumetric_object> Updata_position::List_volumetric
	List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * ___List_volumetric_5;
	// System.String Updata_position::_controlobject
	String_t* ____controlobject_6;
	// Object_transform Updata_position::_controlobjectvalue
	Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ____controlobjectvalue_7;

public:
	inline static int32_t get_offset_of_childCount_4() { return static_cast<int32_t>(offsetof(Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1, ___childCount_4)); }
	inline int32_t get_childCount_4() const { return ___childCount_4; }
	inline int32_t* get_address_of_childCount_4() { return &___childCount_4; }
	inline void set_childCount_4(int32_t value)
	{
		___childCount_4 = value;
	}

	inline static int32_t get_offset_of_List_volumetric_5() { return static_cast<int32_t>(offsetof(Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1, ___List_volumetric_5)); }
	inline List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * get_List_volumetric_5() const { return ___List_volumetric_5; }
	inline List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 ** get_address_of_List_volumetric_5() { return &___List_volumetric_5; }
	inline void set_List_volumetric_5(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * value)
	{
		___List_volumetric_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___List_volumetric_5), (void*)value);
	}

	inline static int32_t get_offset_of__controlobject_6() { return static_cast<int32_t>(offsetof(Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1, ____controlobject_6)); }
	inline String_t* get__controlobject_6() const { return ____controlobject_6; }
	inline String_t** get_address_of__controlobject_6() { return &____controlobject_6; }
	inline void set__controlobject_6(String_t* value)
	{
		____controlobject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____controlobject_6), (void*)value);
	}

	inline static int32_t get_offset_of__controlobjectvalue_7() { return static_cast<int32_t>(offsetof(Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1, ____controlobjectvalue_7)); }
	inline Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * get__controlobjectvalue_7() const { return ____controlobjectvalue_7; }
	inline Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 ** get_address_of__controlobjectvalue_7() { return &____controlobjectvalue_7; }
	inline void set__controlobjectvalue_7(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * value)
	{
		____controlobjectvalue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____controlobjectvalue_7), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.Unity.WorkQueue
struct WorkQueue_t76BB7D922250C65FCE0115D8B94510746BA73E9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Microsoft.MixedReality.WebRTC.Unity.WorkQueue::_mainThreadWorkQueue
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ____mainThreadWorkQueue_4;
	// System.Threading.Thread Microsoft.MixedReality.WebRTC.Unity.WorkQueue::_mainAppThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____mainAppThread_5;

public:
	inline static int32_t get_offset_of__mainThreadWorkQueue_4() { return static_cast<int32_t>(offsetof(WorkQueue_t76BB7D922250C65FCE0115D8B94510746BA73E9E, ____mainThreadWorkQueue_4)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get__mainThreadWorkQueue_4() const { return ____mainThreadWorkQueue_4; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of__mainThreadWorkQueue_4() { return &____mainThreadWorkQueue_4; }
	inline void set__mainThreadWorkQueue_4(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		____mainThreadWorkQueue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainThreadWorkQueue_4), (void*)value);
	}

	inline static int32_t get_offset_of__mainAppThread_5() { return static_cast<int32_t>(offsetof(WorkQueue_t76BB7D922250C65FCE0115D8B94510746BA73E9E, ____mainAppThread_5)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__mainAppThread_5() const { return ____mainAppThread_5; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__mainAppThread_5() { return &____mainAppThread_5; }
	inline void set__mainAppThread_5(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____mainAppThread_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainAppThread_5), (void*)value);
	}
};


// caculate_position_error_ours
struct caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WebRTC.Unity.PeerConnection caculate_position_error_ours::Getdata
	PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * ___Getdata_4;
	// UnityEngine.Camera caculate_position_error_ours::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_5;
	// Control_user_position caculate_position_error_ours::control_User_Position
	Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * ___control_User_Position_6;
	// UnityEngine.GameObject caculate_position_error_ours::gameobject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameobject_7;
	// System.Single caculate_position_error_ours::reprojection_error_3D
	float ___reprojection_error_3D_8;
	// System.Single caculate_position_error_ours::reprojection_error_2D
	float ___reprojection_error_2D_9;
	// System.Data.DataTable caculate_position_error_ours::reprojectionerrortocsv
	DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___reprojectionerrortocsv_10;

public:
	inline static int32_t get_offset_of_Getdata_4() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___Getdata_4)); }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * get_Getdata_4() const { return ___Getdata_4; }
	inline PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 ** get_address_of_Getdata_4() { return &___Getdata_4; }
	inline void set_Getdata_4(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * value)
	{
		___Getdata_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getdata_4), (void*)value);
	}

	inline static int32_t get_offset_of_cam_5() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___cam_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_5() const { return ___cam_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_5() { return &___cam_5; }
	inline void set_cam_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_5), (void*)value);
	}

	inline static int32_t get_offset_of_control_User_Position_6() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___control_User_Position_6)); }
	inline Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * get_control_User_Position_6() const { return ___control_User_Position_6; }
	inline Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 ** get_address_of_control_User_Position_6() { return &___control_User_Position_6; }
	inline void set_control_User_Position_6(Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * value)
	{
		___control_User_Position_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___control_User_Position_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameobject_7() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___gameobject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameobject_7() const { return ___gameobject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameobject_7() { return &___gameobject_7; }
	inline void set_gameobject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameobject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameobject_7), (void*)value);
	}

	inline static int32_t get_offset_of_reprojection_error_3D_8() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___reprojection_error_3D_8)); }
	inline float get_reprojection_error_3D_8() const { return ___reprojection_error_3D_8; }
	inline float* get_address_of_reprojection_error_3D_8() { return &___reprojection_error_3D_8; }
	inline void set_reprojection_error_3D_8(float value)
	{
		___reprojection_error_3D_8 = value;
	}

	inline static int32_t get_offset_of_reprojection_error_2D_9() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___reprojection_error_2D_9)); }
	inline float get_reprojection_error_2D_9() const { return ___reprojection_error_2D_9; }
	inline float* get_address_of_reprojection_error_2D_9() { return &___reprojection_error_2D_9; }
	inline void set_reprojection_error_2D_9(float value)
	{
		___reprojection_error_2D_9 = value;
	}

	inline static int32_t get_offset_of_reprojectionerrortocsv_10() { return static_cast<int32_t>(offsetof(caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB, ___reprojectionerrortocsv_10)); }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * get_reprojectionerrortocsv_10() const { return ___reprojectionerrortocsv_10; }
	inline DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 ** get_address_of_reprojectionerrortocsv_10() { return &___reprojectionerrortocsv_10; }
	inline void set_reprojectionerrortocsv_10(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * value)
	{
		___reprojectionerrortocsv_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionerrortocsv_10), (void*)value);
	}
};


// lookuserposition
struct lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform lookuserposition::lookat_camera
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookat_camera_4;
	// UnityEngine.Transform lookuserposition::follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___follow_5;
	// UnityEngine.Vector3 lookuserposition::old_localscale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___old_localscale_6;
	// UnityEngine.Vector3 lookuserposition::new_localscale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_localscale_7;

public:
	inline static int32_t get_offset_of_lookat_camera_4() { return static_cast<int32_t>(offsetof(lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40, ___lookat_camera_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_lookat_camera_4() const { return ___lookat_camera_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_lookat_camera_4() { return &___lookat_camera_4; }
	inline void set_lookat_camera_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___lookat_camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookat_camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_follow_5() { return static_cast<int32_t>(offsetof(lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40, ___follow_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_follow_5() const { return ___follow_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_follow_5() { return &___follow_5; }
	inline void set_follow_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___follow_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___follow_5), (void*)value);
	}

	inline static int32_t get_offset_of_old_localscale_6() { return static_cast<int32_t>(offsetof(lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40, ___old_localscale_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_old_localscale_6() const { return ___old_localscale_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_old_localscale_6() { return &___old_localscale_6; }
	inline void set_old_localscale_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___old_localscale_6 = value;
	}

	inline static int32_t get_offset_of_new_localscale_7() { return static_cast<int32_t>(offsetof(lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40, ___new_localscale_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_localscale_7() const { return ___new_localscale_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_localscale_7() { return &___new_localscale_7; }
	inline void set_new_localscale_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_localscale_7 = value;
	}
};


// Microsoft.MixedReality.WebRTC.Unity.PeerConnection
struct PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3  : public WorkQueue_t76BB7D922250C65FCE0115D8B94510746BA73E9E
{
public:
	// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.Unity.PeerConnection::<Peer>k__BackingField
	PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 * ___U3CPeerU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.WebRTC.Unity.PeerConnection::AutoCreateOfferOnRenegotiationNeeded
	bool ___AutoCreateOfferOnRenegotiationNeeded_7;
	// System.Boolean Microsoft.MixedReality.WebRTC.Unity.PeerConnection::AutoLogErrorsToUnityConsole
	bool ___AutoLogErrorsToUnityConsole_8;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.Unity.ConfigurableIceServer> Microsoft.MixedReality.WebRTC.Unity.PeerConnection::IceServers
	List_1_tDDC2CD0A181785480786A613C68676B1E4F4AA08 * ___IceServers_9;
	// System.String Microsoft.MixedReality.WebRTC.Unity.PeerConnection::IceUsername
	String_t* ___IceUsername_10;
	// System.String Microsoft.MixedReality.WebRTC.Unity.PeerConnection::IceCredential
	String_t* ___IceCredential_11;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.WebRTC.Unity.PeerConnection::OnInitialized
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnInitialized_12;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.WebRTC.Unity.PeerConnection::OnShutdown
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnShutdown_13;
	// Microsoft.MixedReality.WebRTC.Unity.WebRTCErrorEvent Microsoft.MixedReality.WebRTC.Unity.PeerConnection::OnError
	WebRTCErrorEvent_tB03FFFB1B12040593B5F4800B0FA8644FC7CD227 * ___OnError_14;
	// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_nativePeer
	PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 * ____nativePeer_15;
	// Microsoft.MixedReality.WebRTC.DataChannel Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_CameraChannel
	DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * ____CameraChannel_16;
	// Microsoft.MixedReality.WebRTC.DataChannel Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_LatencyChannel
	DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * ____LatencyChannel_17;
	// Microsoft.MixedReality.WebRTC.DataChannel Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_InteractChannel
	DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * ____InteractChannel_18;
	// Microsoft.MixedReality.WebRTC.DataChannel Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_SendtoClientChannel
	DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * ____SendtoClientChannel_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.Unity.MediaLine> Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_mediaLines
	List_1_t9BCB1A4671CBC7923BF7F9D0B198F9217D973F8F * ____mediaLines_24;
	// System.Boolean Microsoft.MixedReality.WebRTC.Unity.PeerConnection::<IsAwake>k__BackingField
	bool ___U3CIsAwakeU3Ek__BackingField_25;
	// System.String Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_Receivedfromserver
	String_t* ____Receivedfromserver_26;
	// System.String Microsoft.MixedReality.WebRTC.Unity.PeerConnection::_Interact_data_json
	String_t* ____Interact_data_json_27;

public:
	inline static int32_t get_offset_of_U3CPeerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___U3CPeerU3Ek__BackingField_6)); }
	inline PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 * get_U3CPeerU3Ek__BackingField_6() const { return ___U3CPeerU3Ek__BackingField_6; }
	inline PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 ** get_address_of_U3CPeerU3Ek__BackingField_6() { return &___U3CPeerU3Ek__BackingField_6; }
	inline void set_U3CPeerU3Ek__BackingField_6(PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 * value)
	{
		___U3CPeerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPeerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_AutoCreateOfferOnRenegotiationNeeded_7() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___AutoCreateOfferOnRenegotiationNeeded_7)); }
	inline bool get_AutoCreateOfferOnRenegotiationNeeded_7() const { return ___AutoCreateOfferOnRenegotiationNeeded_7; }
	inline bool* get_address_of_AutoCreateOfferOnRenegotiationNeeded_7() { return &___AutoCreateOfferOnRenegotiationNeeded_7; }
	inline void set_AutoCreateOfferOnRenegotiationNeeded_7(bool value)
	{
		___AutoCreateOfferOnRenegotiationNeeded_7 = value;
	}

	inline static int32_t get_offset_of_AutoLogErrorsToUnityConsole_8() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___AutoLogErrorsToUnityConsole_8)); }
	inline bool get_AutoLogErrorsToUnityConsole_8() const { return ___AutoLogErrorsToUnityConsole_8; }
	inline bool* get_address_of_AutoLogErrorsToUnityConsole_8() { return &___AutoLogErrorsToUnityConsole_8; }
	inline void set_AutoLogErrorsToUnityConsole_8(bool value)
	{
		___AutoLogErrorsToUnityConsole_8 = value;
	}

	inline static int32_t get_offset_of_IceServers_9() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___IceServers_9)); }
	inline List_1_tDDC2CD0A181785480786A613C68676B1E4F4AA08 * get_IceServers_9() const { return ___IceServers_9; }
	inline List_1_tDDC2CD0A181785480786A613C68676B1E4F4AA08 ** get_address_of_IceServers_9() { return &___IceServers_9; }
	inline void set_IceServers_9(List_1_tDDC2CD0A181785480786A613C68676B1E4F4AA08 * value)
	{
		___IceServers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceServers_9), (void*)value);
	}

	inline static int32_t get_offset_of_IceUsername_10() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___IceUsername_10)); }
	inline String_t* get_IceUsername_10() const { return ___IceUsername_10; }
	inline String_t** get_address_of_IceUsername_10() { return &___IceUsername_10; }
	inline void set_IceUsername_10(String_t* value)
	{
		___IceUsername_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceUsername_10), (void*)value);
	}

	inline static int32_t get_offset_of_IceCredential_11() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___IceCredential_11)); }
	inline String_t* get_IceCredential_11() const { return ___IceCredential_11; }
	inline String_t** get_address_of_IceCredential_11() { return &___IceCredential_11; }
	inline void set_IceCredential_11(String_t* value)
	{
		___IceCredential_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceCredential_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnInitialized_12() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___OnInitialized_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnInitialized_12() const { return ___OnInitialized_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnInitialized_12() { return &___OnInitialized_12; }
	inline void set_OnInitialized_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnInitialized_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInitialized_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnShutdown_13() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___OnShutdown_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnShutdown_13() const { return ___OnShutdown_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnShutdown_13() { return &___OnShutdown_13; }
	inline void set_OnShutdown_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnShutdown_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnShutdown_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_14() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___OnError_14)); }
	inline WebRTCErrorEvent_tB03FFFB1B12040593B5F4800B0FA8644FC7CD227 * get_OnError_14() const { return ___OnError_14; }
	inline WebRTCErrorEvent_tB03FFFB1B12040593B5F4800B0FA8644FC7CD227 ** get_address_of_OnError_14() { return &___OnError_14; }
	inline void set_OnError_14(WebRTCErrorEvent_tB03FFFB1B12040593B5F4800B0FA8644FC7CD227 * value)
	{
		___OnError_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_14), (void*)value);
	}

	inline static int32_t get_offset_of__nativePeer_15() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____nativePeer_15)); }
	inline PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 * get__nativePeer_15() const { return ____nativePeer_15; }
	inline PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 ** get_address_of__nativePeer_15() { return &____nativePeer_15; }
	inline void set__nativePeer_15(PeerConnection_t3846CA7876B67695B5FFA306394A449639FBDA15 * value)
	{
		____nativePeer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePeer_15), (void*)value);
	}

	inline static int32_t get_offset_of__CameraChannel_16() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____CameraChannel_16)); }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * get__CameraChannel_16() const { return ____CameraChannel_16; }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 ** get_address_of__CameraChannel_16() { return &____CameraChannel_16; }
	inline void set__CameraChannel_16(DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * value)
	{
		____CameraChannel_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CameraChannel_16), (void*)value);
	}

	inline static int32_t get_offset_of__LatencyChannel_17() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____LatencyChannel_17)); }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * get__LatencyChannel_17() const { return ____LatencyChannel_17; }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 ** get_address_of__LatencyChannel_17() { return &____LatencyChannel_17; }
	inline void set__LatencyChannel_17(DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * value)
	{
		____LatencyChannel_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____LatencyChannel_17), (void*)value);
	}

	inline static int32_t get_offset_of__InteractChannel_18() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____InteractChannel_18)); }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * get__InteractChannel_18() const { return ____InteractChannel_18; }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 ** get_address_of__InteractChannel_18() { return &____InteractChannel_18; }
	inline void set__InteractChannel_18(DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * value)
	{
		____InteractChannel_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____InteractChannel_18), (void*)value);
	}

	inline static int32_t get_offset_of__SendtoClientChannel_19() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____SendtoClientChannel_19)); }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * get__SendtoClientChannel_19() const { return ____SendtoClientChannel_19; }
	inline DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 ** get_address_of__SendtoClientChannel_19() { return &____SendtoClientChannel_19; }
	inline void set__SendtoClientChannel_19(DataChannel_tD540C9DFB4BBDC4E7B880DDD481772388CF45247 * value)
	{
		____SendtoClientChannel_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SendtoClientChannel_19), (void*)value);
	}

	inline static int32_t get_offset_of__mediaLines_24() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____mediaLines_24)); }
	inline List_1_t9BCB1A4671CBC7923BF7F9D0B198F9217D973F8F * get__mediaLines_24() const { return ____mediaLines_24; }
	inline List_1_t9BCB1A4671CBC7923BF7F9D0B198F9217D973F8F ** get_address_of__mediaLines_24() { return &____mediaLines_24; }
	inline void set__mediaLines_24(List_1_t9BCB1A4671CBC7923BF7F9D0B198F9217D973F8F * value)
	{
		____mediaLines_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mediaLines_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsAwakeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ___U3CIsAwakeU3Ek__BackingField_25)); }
	inline bool get_U3CIsAwakeU3Ek__BackingField_25() const { return ___U3CIsAwakeU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsAwakeU3Ek__BackingField_25() { return &___U3CIsAwakeU3Ek__BackingField_25; }
	inline void set_U3CIsAwakeU3Ek__BackingField_25(bool value)
	{
		___U3CIsAwakeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of__Receivedfromserver_26() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____Receivedfromserver_26)); }
	inline String_t* get__Receivedfromserver_26() const { return ____Receivedfromserver_26; }
	inline String_t** get_address_of__Receivedfromserver_26() { return &____Receivedfromserver_26; }
	inline void set__Receivedfromserver_26(String_t* value)
	{
		____Receivedfromserver_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Receivedfromserver_26), (void*)value);
	}

	inline static int32_t get_offset_of__Interact_data_json_27() { return static_cast<int32_t>(offsetof(PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3, ____Interact_data_json_27)); }
	inline String_t* get__Interact_data_json_27() const { return ____Interact_data_json_27; }
	inline String_t** get_address_of__Interact_data_json_27() { return &____Interact_data_json_27; }
	inline void set__Interact_data_json_27(String_t* value)
	{
		____Interact_data_json_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Interact_data_json_27), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConvert_DeserializeObject_TisRuntimeObject_mD6F4D2B905804616953925270D669F48DAA5A117_gshared (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m846FA8C3A5081E78512F996C9CE199DC996A7393_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void caculate_position_error_ours::AddDatatoDataTable<System.Single>(System.Data.DataRow,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_gshared (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___dr0, String_t* ___columname1, float ___value2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String Control_user_position::GetCameraInfo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Control_user_position_GetCameraInfo_m8FE9B562621C65345A6FC94E11F26F4550D9F353 (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___maincam0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Unity.PeerConnection::UseDataChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerConnection_UseDataChannel_m984DD2059CE4BB992979F50C66411EB4418F9DE9 (PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * __this, String_t* ___channelname0, String_t* ___data1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Data.DataTable::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable__ctor_mA9DC1C498DE1B6A830D34C08EE8B1F630289670B (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, String_t* ___tableName0, const RuntimeMethod* method);
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Data.DataColumn System.Data.DataColumnCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D (DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * __this, String_t* ___columnName0, const RuntimeMethod* method);
// System.Data.DataRow System.Data.DataTable::NewRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * DataTable_NewRow_mC5690D212555D907561E160361A152A23C9F171C (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40 (DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * __this, String_t* ___columnName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowCollection_Add_mE3C33DB6DE9FAC64958701E01B6CFCE3E8AE6615 (DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___row0, const RuntimeMethod* method);
// System.Data.DataTable Control_user_position::CreatCSVTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * Control_user_position_CreatCSVTable_m0C6DFB6E760087C3A387A705A54E47BF5C9B5714 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.WebRTC.Unity.PeerConnection::GetInteractivedata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerConnection_GetInteractivedata_m841C63F3A2C2DA09BCAB58F561F6C2E83A3C1FB2_inline (PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,Object_transform>>(System.String)
inline Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * JsonConvert_DeserializeObject_TisDictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_mBAB5424B34D172D89803049E1C29AC503296D41A (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mD6F4D2B905804616953925270D669F48DAA5A117_gshared)(___value0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Object_transform>::.ctor()
inline void Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Send_control_information::UpdateObjectDatatoDict(System.Collections.Generic.Dictionary`2<System.String,Object_transform>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_UpdateObjectDatatoDict_m2C2DE95D496BE504128BF8C4446E3E6914DC9F11 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___dict0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Object1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Object_transform>::get_Count()
inline int32_t Dictionary_2_get_Count_m59F35418B024FF809AB0E0731792BEC0B32CDBCE (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mC43A157B7844D47D9F648D980434BB128D6EE5B9 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Object_transform>::Clear()
inline void Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Object_transform>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2882814E94A5E32C6AEC26331BAF33015E0A6FB9 (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, String_t* ___key0, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, String_t*, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// Object_transform Send_control_information::GetObjectData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * Send_control_information_GetObjectData_m5BBD73A570C95AFC3EFB4658BD117E1824052AD5 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Object0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,Object_transform>::get_Item(!0)
inline Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3 (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean Send_control_information::Comparenotsame(Object_transform,Object_transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Send_control_information_Comparenotsame_mAE66C6FB2668FFB142A0D1B2D84BF2B93C84CE62 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___objectone0, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___objecttwo1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Object_transform>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m975888EC95CC488962A9F28E78FB17D48D589463 (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, String_t* ___key0, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, String_t*, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Send_control_information::AddObjectDatatoSend(System.Collections.Generic.Dictionary`2<System.String,Object_transform>,System.String,Object_transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_AddObjectDatatoSend_m2B61C4C858D70E36A1E032959896D4491FDDE7DA (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___Send_control00, String_t* ___key1, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___value2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Object_transform>::Add(!0,!1)
inline void Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, String_t* ___key0, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, String_t*, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Single Object_transform::get_PosX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_PosX_m0300722B7AAE342FE4C9F221E7DD1041248089BA_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Single Object_transform::get_RotX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_RotX_m6048AC62F2B9C6BD83E4E428311167C9C7208F0C_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Single Object_transform::get_ScaleX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Object_transform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform__ctor_m13B583939226B440130CB48127FF9D2B2ADAFDB4 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Void Object_transform::set_PosX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_PosX_m2DDE0FA8343FF1D191E4193F4491DD04D75229E5_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_PosY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_PosY_mF53EC8EE645EC8386648A03E1EBD06F2927E1AFA_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_PosZ(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_PosZ_mF9E19DC4B62E2A3BEA5866213110AE4D5DF855FB_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_RotX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotX_m83B3CA2DB9EDD17D031C19CD723C5A3516F67B9D_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_RotY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotY_mA75BC4286017E7CE2CF5EF81297FC4D14F7706AC_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_RotZ(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotZ_m85019EEDBFCE7A2C6F9AFD522C6687C78B2558FE_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_RotW(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotW_m53E1CA91AF9271D694A2AEBC999C15118BF364F1_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_ScaleX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_ScaleX_mE50C7E009017AF0DCCDFF776917B7F43179C6E86_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_ScaleY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_ScaleY_m8C5876EEB40FE029041E7C767FF27F2D8C4C71D8_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Object_transform::set_ScaleZ(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_ScaleZ_m0F4299BD7711044C647B883CA36D2CDA0E03CD44_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void Volumetric_object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volumetric_object__ctor_mB733AC6CF46860B97C6519D1B436428B9EECF516 (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Volumetric_object>::Add(!0)
inline void List_1_Add_m6E398228291158C5C1CA0C7FFD30ECAB332B580A (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * __this, Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 *, Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Volumetric_object>::get_Item(System.Int32)
inline Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_inline (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * (*) (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Volumetric_object::object_init(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volumetric_object_object_init_mF144FCDABBC0EAB52C20867B87645854CFEF7EAD (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Object_transform>::GetEnumerator()
inline Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F  Dictionary_2_GetEnumerator_mDA63BDB72056D2A828F83D4F98FF2F9ECC846CA7 (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F  (*) (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Object_transform>::get_Current()
inline KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  Enumerator_get_Current_m5808604EBB622B936E065AD64C34988846756B46_inline (Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  (*) (Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Object_transform>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m5CE4FD47C88EAC3F33EF925FFE5D61C56027E407_inline (KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Object_transform>::get_Value()
inline Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * KeyValuePair_2_get_Value_m68FCBA604FF26C3EF86C7F6D2919FA289566CE51_inline (KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 * __this, const RuntimeMethod* method)
{
	return ((  Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * (*) (KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Predicate`1<Volumetric_object>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m3E4670FA3C661CF2D1D7A4F451B83D5B468C47C8 (Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Volumetric_object>::FindIndex(System.Predicate`1<!0>)
inline int32_t List_1_FindIndex_m8C8B8186A0FCC466CF25A64E3A6081DE58B495ED (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * __this, Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D * ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 *, Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D *, const RuntimeMethod*))List_1_FindIndex_m846FA8C3A5081E78512F996C9CE199DC996A7393_gshared)(__this, ___match0, method);
}
// System.Void Volumetric_object::Object_update(Object_transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volumetric_object_Object_update_m33E2F2122426B2F53BB3A28ED5381926A5100770 (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * __this, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___new_object_value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Volumetric_object>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mE0B0EB76D78E6A25A2D69D263713A426F397E599 (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * __this, int32_t ___index0, Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 *, int32_t, Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Object_transform>::MoveNext()
inline bool Enumerator_MoveNext_mD718856467A3848B2AF2E47EEB17D5A660D83434 (Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Object_transform>::Dispose()
inline void Enumerator_Dispose_m5554E23F34E0C8DDAFB1F78D4AD835C537B41570 (Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Send_control_information>()
inline Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * GameObject_GetComponent_TisSend_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D_mF9A6A8FE3ED1BE3A414F8A9891448FBA02F50891 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Send_control_information::server_change()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_server_change_mBF16DFD3B3361BCC1E3B96E033A0CE4078B5FACC (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Volumetric_object>::.ctor()
inline void List_1__ctor_m1D5A466F361D09DD3D5A1176B452A53DAD5900A0 (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Single Object_transform::get_PosY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_PosY_m13C076F2E7DE7E68AE5A8BBA2C8868829284F2D9_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Single Object_transform::get_PosZ()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_PosZ_m4A5E3DFFF2A9D7F34E17141EB6B603FE184187D5_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single Object_transform::get_ScaleY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_ScaleY_m0361F1DE06E2956C4B1125A413DE1F1E952F6D8B_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Single Object_transform::get_ScaleZ()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_ScaleZ_mF4DC034D699E3629277BC173C92F7B99820B74E2_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.WebRTC.Unity.PeerConnection::GetReceivedDataFromServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerConnection_GetReceivedDataFromServer_m9F65E72D2689C4D457B38ADA216B83008F18E99E_inline (PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<Caculate_Reprojection_2D>(System.String)
inline Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * JsonConvert_DeserializeObject_TisCaculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061_m4EF4C546C0A5237875DD2D2A214FCF842CAA52E4 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mD6F4D2B905804616953925270D669F48DAA5A117_gshared)(___value0, method);
}
// System.Single Caculate_Reprojection_2D::get_Object_OriginalPosition_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_x_mE68FD20A0898A56B8C905E771328D20DD986FC25_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method);
// System.Single Caculate_Reprojection_2D::get_Object_OriginalPosition_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_y_m5CB0CE272CC06939244BE253C9041956B18C5F95_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method);
// System.Single Caculate_Reprojection_2D::get_Object_OriginalPosition_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_z_mABF404F3028F5FCFCEF08C8B03DD258ED29E5431_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method);
// System.Void caculate_position_error_ours::AddDatatoDataTable<System.Single>(System.Data.DataRow,System.String,T)
inline void caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3 (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___dr0, String_t* ___columname1, float ___value2, const RuntimeMethod* method)
{
	((  void (*) (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB *, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE *, String_t*, float, const RuntimeMethod*))caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_gshared)(__this, ___dr0, ___columname1, ___value2, method);
}
// System.Single Caculate_Reprojection_2D::get_Object_Screen_norm_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_Screen_norm_x_m06A7AA56F20687DBB405F3B0E7B7A784938E5240_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method);
// System.Single Caculate_Reprojection_2D::get_Object_Screen_norm_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_Screen_norm_y_m1E1CA261734E8AC1498C7B99CB6BD6B38CD20812_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void caculate_position_error_ours::SaveReprojectionerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveReprojectionerror_mB413FD3AC05A838A6BFB9AE0354ECA4D1572F093 (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * DataRowCollection_get_Item_mB38105BECDC3F388EB5E1A1D8DB50D45D667BDAD (DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Object System.Data.DataRow::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataRow_get_Item_m8BB8DE62C55315271187FB7D5262A93C0676A1E6 (DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * __this, int32_t ___columnIndex0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m4D0D93D2ED2D49AFB992D38F2102D5A72DD94D2E (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Data.DataTable Control_user_position::GetRawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * Control_user_position_GetRawData_m909A53DFD71BC3501246447956788AEF5DA3AB50_inline (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, const RuntimeMethod* method);
// System.Void caculate_position_error_ours::SaveCSV(System.String,System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveCSV_m9DAF964A564F9854627B6F946921A2F0BE765758 (String_t* ___CSVPath0, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___mSheet1, const RuntimeMethod* method);
// System.Void caculate_position_error_ours::SaveCSV1(System.String,System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveCSV1_m5E85FAC1CF0194529B26E049F1C6A54933B7C4DB (String_t* ___CSVPath0, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___mSheet1, const RuntimeMethod* method);
// System.Data.DataTable caculate_position_error_ours::CreatCSVTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * caculate_position_error_ours_CreatCSVTable_mAEDB57634F3EE756FBAEAFB62563D5FFA548464F (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Single Caculate_Reprojection_2D::get_Object_Screen_norm_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_Screen_norm_x_m06A7AA56F20687DBB405F3B0E7B7A784938E5240 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_Screen_norm_x { get; set; }
		float L_0 = __this->get_U3CObject_Screen_norm_xU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Caculate_Reprojection_2D::set_Object_Screen_norm_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D_set_Object_Screen_norm_x_m6DA12FA0B9BA07615060EFFE211A6690462C47D7 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Object_Screen_norm_x { get; set; }
		float L_0 = ___value0;
		__this->set_U3CObject_Screen_norm_xU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Caculate_Reprojection_2D::get_Object_Screen_norm_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_Screen_norm_y_m1E1CA261734E8AC1498C7B99CB6BD6B38CD20812 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_Screen_norm_y { get; set; }
		float L_0 = __this->get_U3CObject_Screen_norm_yU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Caculate_Reprojection_2D::set_Object_Screen_norm_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D_set_Object_Screen_norm_y_mFF39B0B34D06183F315520943EF00F755543863C (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Object_Screen_norm_y { get; set; }
		float L_0 = ___value0;
		__this->set_U3CObject_Screen_norm_yU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Caculate_Reprojection_2D::get_Object_ScreenPosition_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_ScreenPosition_z_m89EE92E5E4B1F4225C6081D09117E0CF437FF376 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_ScreenPosition_z { get; set; }
		float L_0 = __this->get_U3CObject_ScreenPosition_zU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Caculate_Reprojection_2D::set_Object_ScreenPosition_z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D_set_Object_ScreenPosition_z_m6754F0544B0D711A994D2848F6A591FC7A2F89F2 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Object_ScreenPosition_z { get; set; }
		float L_0 = ___value0;
		__this->set_U3CObject_ScreenPosition_zU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single Caculate_Reprojection_2D::get_Object_OriginalPosition_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_x_mE68FD20A0898A56B8C905E771328D20DD986FC25 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_x { get; set; }
		float L_0 = __this->get_U3CObject_OriginalPosition_xU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Caculate_Reprojection_2D::set_Object_OriginalPosition_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D_set_Object_OriginalPosition_x_m8D9D6925F8C1568E14C6F952E790AAD76BF9D8B1 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_x { get; set; }
		float L_0 = ___value0;
		__this->set_U3CObject_OriginalPosition_xU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Single Caculate_Reprojection_2D::get_Object_OriginalPosition_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_y_m5CB0CE272CC06939244BE253C9041956B18C5F95 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_y { get; set; }
		float L_0 = __this->get_U3CObject_OriginalPosition_yU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Caculate_Reprojection_2D::set_Object_OriginalPosition_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D_set_Object_OriginalPosition_y_m9DA42B06B99763E4E2C413DC146259045AA8E2EC (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_y { get; set; }
		float L_0 = ___value0;
		__this->set_U3CObject_OriginalPosition_yU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Single Caculate_Reprojection_2D::get_Object_OriginalPosition_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_z_mABF404F3028F5FCFCEF08C8B03DD258ED29E5431 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_z { get; set; }
		float L_0 = __this->get_U3CObject_OriginalPosition_zU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Caculate_Reprojection_2D::set_Object_OriginalPosition_z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D_set_Object_OriginalPosition_z_mDF2772A3090141E93896861F322D6E66F8C4D388 (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_z { get; set; }
		float L_0 = ___value0;
		__this->set_U3CObject_OriginalPosition_zU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Caculate_Reprojection_2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caculate_Reprojection_2D__ctor_mB33C40AC6C763838BD232A6256F89C9FC1B849AA (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
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
// System.Void Control_user_position::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_user_position_Update_m81D470FD4DC89AFE1635D1EC72B9C0E4A8FB52FC (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090);
		s_Il2CppMethodInitialized = true;
	}
	{
		// camera_info = GetCameraInfo(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Control_user_position_GetCameraInfo_m8FE9B562621C65345A6FC94E11F26F4550D9F353(__this, L_0, /*hidden argument*/NULL);
		__this->set_camera_info_5(L_1);
		// PeerConnection.UseDataChannel("Camera", camera_info);
		PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * L_2 = __this->get_PeerConnection_4();
		String_t* L_3 = __this->get_camera_info_5();
		NullCheck(L_2);
		PeerConnection_UseDataChannel_m984DD2059CE4BB992979F50C66411EB4418F9DE9(L_2, _stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Control_user_position::GetCameraInfo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Control_user_position_GetCameraInfo_m8FE9B562621C65345A6FC94E11F26F4550D9F353 (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___maincam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// string position_x = maincam.position.x.ToString("f3");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___maincam0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_6 = L_1;
		float* L_2 = (&V_6)->get_address_of_x_2();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_2, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		V_0 = L_3;
		// string position_y = maincam.position.y.ToString("f3");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___maincam0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_6 = L_5;
		float* L_6 = (&V_6)->get_address_of_y_3();
		String_t* L_7;
		L_7 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_6, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		V_1 = L_7;
		// string position_z = maincam.position.z.ToString("f3");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___maincam0;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		V_6 = L_9;
		float* L_10 = (&V_6)->get_address_of_z_4();
		String_t* L_11;
		L_11 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_10, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		V_2 = L_11;
		// string rotation_yoll = maincam.eulerAngles.x.ToString("f3");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___maincam0;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		float* L_14 = (&V_6)->get_address_of_x_2();
		String_t* L_15;
		L_15 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_14, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		V_3 = L_15;
		// string rotation_pitch = maincam.eulerAngles.y.ToString("f3");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = ___maincam0;
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		float* L_18 = (&V_6)->get_address_of_y_3();
		String_t* L_19;
		L_19 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_18, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		V_4 = L_19;
		// string rotation_raw = maincam.eulerAngles.z.ToString("f3");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = ___maincam0;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		float* L_22 = (&V_6)->get_address_of_z_4();
		String_t* L_23;
		L_23 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_22, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		V_5 = L_23;
		// string track_data = position_x + ',' + position_y + ',' + position_z + ',' + rotation_yoll + ',' + rotation_pitch + ',' + rotation_raw;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_25;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		String_t* L_29 = V_1;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_28;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_31;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		String_t* L_35 = V_3;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_35);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_34;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		String_t* L_38 = V_4;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_37;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		String_t* L_41 = V_5;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_41);
		String_t* L_42;
		L_42 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_40, /*hidden argument*/NULL);
		// return track_data;
		return L_42;
	}
}
// System.Data.DataTable Control_user_position::CreatCSVTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * Control_user_position_CreatCSVTable_m0C6DFB6E760087C3A387A705A54E47BF5C9B5714 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE0BB33EFC17DBCD9DF4331EC1FB172CB51C9432);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC565636BA2DF517026F84CD675A165364C2B335D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA);
		s_Il2CppMethodInitialized = true;
	}
	DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * V_0 = NULL;
	{
		// DataTable dt = new DataTable("move_trace_raw_data");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)il2cpp_codegen_object_new(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_il2cpp_TypeInfo_var);
		DataTable__ctor_mA9DC1C498DE1B6A830D34C08EE8B1F630289670B(L_0, _stringLiteralAE0BB33EFC17DBCD9DF4331EC1FB172CB51C9432, /*hidden argument*/NULL);
		// dt.Columns.Add("timestamp");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_1 = L_0;
		NullCheck(L_1);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_2;
		L_2 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_3;
		L_3 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_2, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, /*hidden argument*/NULL);
		// dt.Columns.Add("x");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_4 = L_1;
		NullCheck(L_4);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_5;
		L_5 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_6;
		L_6 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_5, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		// dt.Columns.Add("y");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_7 = L_4;
		NullCheck(L_7);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_8;
		L_8 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_9;
		L_9 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		// dt.Columns.Add("z");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_10 = L_7;
		NullCheck(L_10);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_11;
		L_11 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_12;
		L_12 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_11, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		// dt.Columns.Add("qx");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_13 = L_10;
		NullCheck(L_13);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_14;
		L_14 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_15;
		L_15 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_14, _stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C, /*hidden argument*/NULL);
		// dt.Columns.Add("qy");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_16 = L_13;
		NullCheck(L_16);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_17;
		L_17 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_18;
		L_18 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_17, _stringLiteralC565636BA2DF517026F84CD675A165364C2B335D, /*hidden argument*/NULL);
		// dt.Columns.Add("qz");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_19 = L_16;
		NullCheck(L_19);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_20;
		L_20 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_21;
		L_21 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_20, _stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E, /*hidden argument*/NULL);
		// dt.Columns.Add("qw");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_22 = L_19;
		NullCheck(L_22);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_23;
		L_23 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_24;
		L_24 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_23, _stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA, /*hidden argument*/NULL);
		// DataRow dr = dt.NewRow();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_25 = L_22;
		NullCheck(L_25);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_26;
		L_26 = DataTable_NewRow_mC5690D212555D907561E160361A152A23C9F171C(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// dr["timestamp"] = "timestamp";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_27 = V_0;
		NullCheck(L_27);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_27, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, /*hidden argument*/NULL);
		// dr["x"] = "x";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_28 = V_0;
		NullCheck(L_28);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_28, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		// dr["y"] = "y";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_29 = V_0;
		NullCheck(L_29);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_29, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		// dr["z"] = "z";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_30 = V_0;
		NullCheck(L_30);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		// dr["qx"] = "qx";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_31 = V_0;
		NullCheck(L_31);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_31, _stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C, _stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C, /*hidden argument*/NULL);
		// dr["qy"] = "qy";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_32 = V_0;
		NullCheck(L_32);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_32, _stringLiteralC565636BA2DF517026F84CD675A165364C2B335D, _stringLiteralC565636BA2DF517026F84CD675A165364C2B335D, /*hidden argument*/NULL);
		// dr["qz"] = "qz";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_33 = V_0;
		NullCheck(L_33);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_33, _stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E, _stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E, /*hidden argument*/NULL);
		// dr["qw"] = "qw";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_34 = V_0;
		NullCheck(L_34);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_34, _stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA, _stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA, /*hidden argument*/NULL);
		// dt.Rows.Add(dr);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_35 = L_25;
		NullCheck(L_35);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_36;
		L_36 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_35, /*hidden argument*/NULL);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_37 = V_0;
		NullCheck(L_36);
		DataRowCollection_Add_mE3C33DB6DE9FAC64958701E01B6CFCE3E8AE6615(L_36, L_37, /*hidden argument*/NULL);
		// return dt;
		return L_35;
	}
}
// System.Void Control_user_position::AddDatatoDataTable(System.Data.DataTable,System.Int64,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_user_position_AddDatatoDataTable_m290B85A64CD50F3875456A43B1FDA0D4B780CA06 (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___dt0, int64_t ___timestamp1, float ___x2, float ___y3, float ___z4, float ___qx5, float ___qy6, float ___qz7, float ___qw8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC565636BA2DF517026F84CD675A165364C2B335D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA);
		s_Il2CppMethodInitialized = true;
	}
	DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * V_0 = NULL;
	{
		// DataRow dr = dt.NewRow();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = ___dt0;
		NullCheck(L_0);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_1;
		L_1 = DataTable_NewRow_mC5690D212555D907561E160361A152A23C9F171C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// dr["timestamp"] = timestamp;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_2 = V_0;
		int64_t L_3 = ___timestamp1;
		int64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_2, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294, L_5, /*hidden argument*/NULL);
		// dr["x"] = x;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_6 = V_0;
		float L_7 = ___x2;
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_6, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_9, /*hidden argument*/NULL);
		// dr["y"] = y;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_10 = V_0;
		float L_11 = ___y3;
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_10, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_13, /*hidden argument*/NULL);
		// dr["z"] = z;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_14 = V_0;
		float L_15 = ___z4;
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_14, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_17, /*hidden argument*/NULL);
		// dr["qx"] = qx;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_18 = V_0;
		float L_19 = ___qx5;
		float L_20 = L_19;
		RuntimeObject * L_21 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_18, _stringLiteral34062223A8CDF24BA7B83343FD8ABC0298D7416C, L_21, /*hidden argument*/NULL);
		// dr["qy"] = qy;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_22 = V_0;
		float L_23 = ___qy6;
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_22, _stringLiteralC565636BA2DF517026F84CD675A165364C2B335D, L_25, /*hidden argument*/NULL);
		// dr["qz"] = qz;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_26 = V_0;
		float L_27 = ___qz7;
		float L_28 = L_27;
		RuntimeObject * L_29 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_26, _stringLiteral5F75048DA5CA7A86EB68D0ED3D9AA2C4C25B551E, L_29, /*hidden argument*/NULL);
		// dr["qw"] = qw;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_30 = V_0;
		float L_31 = ___qw8;
		float L_32 = L_31;
		RuntimeObject * L_33 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_30, _stringLiteralD376622B1800DF11206C75DFEEF820F6DCF865BA, L_33, /*hidden argument*/NULL);
		// dt.Rows.Add(dr);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_34 = ___dt0;
		NullCheck(L_34);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_35;
		L_35 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_34, /*hidden argument*/NULL);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_36 = V_0;
		NullCheck(L_35);
		DataRowCollection_Add_mE3C33DB6DE9FAC64958701E01B6CFCE3E8AE6615(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Data.DataTable Control_user_position::GetRawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * Control_user_position_GetRawData_m909A53DFD71BC3501246447956788AEF5DA3AB50 (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, const RuntimeMethod* method)
{
	{
		// return trace_raw_data;
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = __this->get_trace_raw_data_6();
		return L_0;
	}
}
// System.Void Control_user_position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_user_position__ctor_mA9C1B1848E8321B6366C8E33DB155E15A53EE8DF (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, const RuntimeMethod* method)
{
	{
		// DataTable trace_raw_data = CreatCSVTable();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0;
		L_0 = Control_user_position_CreatCSVTable_m0C6DFB6E760087C3A387A705A54E47BF5C9B5714(/*hidden argument*/NULL);
		__this->set_trace_raw_data_6(L_0);
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
// System.Single Object_transform::get_PosX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_PosX_m0300722B7AAE342FE4C9F221E7DD1041248089BA (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float PosX { get; set; }
		float L_0 = __this->get_U3CPosXU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Object_transform::set_PosX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_PosX_m2DDE0FA8343FF1D191E4193F4491DD04D75229E5 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PosX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CPosXU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Object_transform::get_PosY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_PosY_m13C076F2E7DE7E68AE5A8BBA2C8868829284F2D9 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float PosY { get; set; }
		float L_0 = __this->get_U3CPosYU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Object_transform::set_PosY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_PosY_mF53EC8EE645EC8386648A03E1EBD06F2927E1AFA (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PosY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CPosYU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Object_transform::get_PosZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_PosZ_m4A5E3DFFF2A9D7F34E17141EB6B603FE184187D5 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float PosZ { get; set; }
		float L_0 = __this->get_U3CPosZU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Object_transform::set_PosZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_PosZ_mF9E19DC4B62E2A3BEA5866213110AE4D5DF855FB (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PosZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CPosZU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single Object_transform::get_RotX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_RotX_m6048AC62F2B9C6BD83E4E428311167C9C7208F0C (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float RotX { get; set; }
		float L_0 = __this->get_U3CRotXU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Object_transform::set_RotX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_RotX_m83B3CA2DB9EDD17D031C19CD723C5A3516F67B9D (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotXU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Single Object_transform::get_RotY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_RotY_mD7A759310B4897F0DDD3A28B2F8895716D2AF1B8 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float RotY { get; set; }
		float L_0 = __this->get_U3CRotYU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Object_transform::set_RotY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_RotY_mA75BC4286017E7CE2CF5EF81297FC4D14F7706AC (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotYU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Single Object_transform::get_RotZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_RotZ_m86369977E14C42BD2C5A9E3839FC2D4A569C3908 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float RotZ { get; set; }
		float L_0 = __this->get_U3CRotZU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Object_transform::set_RotZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_RotZ_m85019EEDBFCE7A2C6F9AFD522C6687C78B2558FE (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotZU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Single Object_transform::get_RotW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_RotW_m944BD7E2FF37DA9243A67BB7553F5D25994401F1 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float RotW { get; set; }
		float L_0 = __this->get_U3CRotWU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Object_transform::set_RotW(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_RotW_m53E1CA91AF9271D694A2AEBC999C15118BF364F1 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotW { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotWU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Single Object_transform::get_ScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float ScaleX { get; set; }
		float L_0 = __this->get_U3CScaleXU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Object_transform::set_ScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_ScaleX_mE50C7E009017AF0DCCDFF776917B7F43179C6E86 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ScaleX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CScaleXU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Single Object_transform::get_ScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_ScaleY_m0361F1DE06E2956C4B1125A413DE1F1E952F6D8B (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float ScaleY { get; set; }
		float L_0 = __this->get_U3CScaleYU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Object_transform::set_ScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_ScaleY_m8C5876EEB40FE029041E7C767FF27F2D8C4C71D8 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ScaleY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CScaleYU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Single Object_transform::get_ScaleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Object_transform_get_ScaleZ_mF4DC034D699E3629277BC173C92F7B99820B74E2 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float ScaleZ { get; set; }
		float L_0 = __this->get_U3CScaleZU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Object_transform::set_ScaleZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform_set_ScaleZ_m0F4299BD7711044C647B883CA36D2CDA0E03CD44 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ScaleZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CScaleZU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Object_transform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_transform__ctor_m13B583939226B440130CB48127FF9D2B2ADAFDB4 (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
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
// System.Void Receive_interact::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receive_interact_Update_m4C347959C2178CFE31714BDB7A16734E4AD56513 (Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_mBAB5424B34D172D89803049E1C29AC503296D41A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Received_object_json = peerconnection.GetInteractivedata();
		PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * L_0 = __this->get_peerconnection_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PeerConnection_GetInteractivedata_m841C63F3A2C2DA09BCAB58F561F6C2E83A3C1FB2_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->set_Received_object_json_6(L_1);
		// if (Received_object_json == object_json)
		String_t* L_2 = ((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->get_Received_object_json_6();
		String_t* L_3 = __this->get_object_json_7();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// Received_object_json = "";
		IL2CPP_RUNTIME_CLASS_INIT(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->set_Received_object_json_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}

IL_002d:
	{
		// object_json = Received_object_json;
		IL2CPP_RUNTIME_CLASS_INIT(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->get_Received_object_json_6();
		__this->set_object_json_7(L_5);
		// Object_control_center = JsonConvert.DeserializeObject<Dictionary<string, Object_transform>>(Received_object_json);
		String_t* L_6 = ((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->get_Received_object_json_6();
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_7;
		L_7 = JsonConvert_DeserializeObject_TisDictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_mBAB5424B34D172D89803049E1C29AC503296D41A(L_6, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_mBAB5424B34D172D89803049E1C29AC503296D41A_RuntimeMethod_var);
		((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->set_Object_control_center_5(L_7);
		// Debug.Log(Received_object_json);
		String_t* L_8 = ((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->get_Received_object_json_6();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Receive_interact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receive_interact__ctor_m3C896B8098CF4902A9F3A7CCDE3AB43448D06DFB (Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Receive_interact::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receive_interact__cctor_mF6AFABC338BC1570B085E4ED7B131D5F8F7744F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<string, Object_transform> Object_control_center = new Dictionary<string, Object_transform>();
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_0 = (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *)il2cpp_codegen_object_new(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D(L_0, /*hidden argument*/Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D_RuntimeMethod_var);
		((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->set_Object_control_center_5(L_0);
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
// System.Void Send_control_information::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_Update_mF094AB4D397E8B87E0D269C416438CCE7BFACF5F (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m59F35418B024FF809AB0E0731792BEC0B32CDBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA003D62EF417557C5B848188B5B3947ED732A503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// childCount = transform.childCount;//�l���󦳦h�֭�
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		__this->set_childCount_6(L_1);
		// json_object_control = "";
		__this->set_json_object_control_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// for (int i = 0; i < childCount; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0020:
	{
		// GameObject Getobject = transform.GetChild(i).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// UpdateObjectDatatoDict(object_control, Getobject);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_6 = __this->get_object_control_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
		Send_control_information_UpdateObjectDatatoDict_m2C2DE95D496BE504128BF8C4446E3E6914DC9F11(__this, L_6, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_childCount_6();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0020;
		}
	}
	{
		// if (send_control.Count != 0)
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_11 = __this->get_send_control_8();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_m59F35418B024FF809AB0E0731792BEC0B32CDBCE(L_11, /*hidden argument*/Dictionary_2_get_Count_m59F35418B024FF809AB0E0731792BEC0B32CDBCE_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		// json_object_control = JsonConvert.SerializeObject(send_control);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_13 = __this->get_send_control_8();
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = JsonConvert_SerializeObject_mC43A157B7844D47D9F648D980434BB128D6EE5B9(L_13, /*hidden argument*/NULL);
		__this->set_json_object_control_5(L_14);
		// send_control.Clear();
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_15 = __this->get_send_control_8();
		NullCheck(L_15);
		Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C(L_15, /*hidden argument*/Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C_RuntimeMethod_var);
		// PeerConnection.UseDataChannel("interact", json_object_control);
		PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * L_16 = __this->get_PeerConnection_4();
		String_t* L_17 = __this->get_json_object_control_5();
		NullCheck(L_16);
		PeerConnection_UseDataChannel_m984DD2059CE4BB992979F50C66411EB4418F9DE9(L_16, _stringLiteralA003D62EF417557C5B848188B5B3947ED732A503, L_17, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Send_control_information::UpdateObjectDatatoDict(System.Collections.Generic.Dictionary`2<System.String,Object_transform>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_UpdateObjectDatatoDict_m2C2DE95D496BE504128BF8C4446E3E6914DC9F11 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___dict0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Object1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2882814E94A5E32C6AEC26331BAF33015E0A6FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m975888EC95CC488962A9F28E78FB17D48D589463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * V_1 = NULL;
	Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * V_2 = NULL;
	{
		// string key = Object.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___Object1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (dict.TryGetValue(key, out _))
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_2 = ___dict0;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m2882814E94A5E32C6AEC26331BAF33015E0A6FB9(L_2, L_3, (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m2882814E94A5E32C6AEC26331BAF33015E0A6FB9_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// Object_transform newdata = GetObjectData(Object.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___Object1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_7;
		L_7 = Send_control_information_GetObjectData_m5BBD73A570C95AFC3EFB4658BD117E1824052AD5(__this, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// bool is_same = Comparenotsame(dict[key], newdata);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_8 = ___dict0;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_10;
		L_10 = Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3_RuntimeMethod_var);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_11 = V_2;
		bool L_12;
		L_12 = Send_control_information_Comparenotsame_mAE66C6FB2668FFB142A0D1B2D84BF2B93C84CE62(__this, L_10, L_11, /*hidden argument*/NULL);
		// if (is_same)
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		// dict[key] = GetObjectData(Object.transform);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_13 = ___dict0;
		String_t* L_14 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___Object1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_17;
		L_17 = Send_control_information_GetObjectData_m5BBD73A570C95AFC3EFB4658BD117E1824052AD5(__this, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m975888EC95CC488962A9F28E78FB17D48D589463(L_13, L_14, L_17, /*hidden argument*/Dictionary_2_set_Item_m975888EC95CC488962A9F28E78FB17D48D589463_RuntimeMethod_var);
		// AddObjectDatatoSend(send_control, key, dict[key]);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_18 = __this->get_send_control_8();
		String_t* L_19 = V_0;
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_20 = ___dict0;
		String_t* L_21 = V_0;
		NullCheck(L_20);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_22;
		L_22 = Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3_RuntimeMethod_var);
		Send_control_information_AddObjectDatatoSend_m2B61C4C858D70E36A1E032959896D4491FDDE7DA(__this, L_18, L_19, L_22, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0057:
	{
		// dict.Add(key, GetObjectData(Object.transform));
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_23 = ___dict0;
		String_t* L_24 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = ___Object1;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_27;
		L_27 = Send_control_information_GetObjectData_m5BBD73A570C95AFC3EFB4658BD117E1824052AD5(__this, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF(L_23, L_24, L_27, /*hidden argument*/Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF_RuntimeMethod_var);
		// AddObjectDatatoSend(send_control, key, dict[key]);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_28 = __this->get_send_control_8();
		String_t* L_29 = V_0;
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_30 = ___dict0;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_32;
		L_32 = Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3(L_30, L_31, /*hidden argument*/Dictionary_2_get_Item_m9EA339A34B0A2B8B672BB667CDF1640BFF392EE3_RuntimeMethod_var);
		Send_control_information_AddObjectDatatoSend_m2B61C4C858D70E36A1E032959896D4491FDDE7DA(__this, L_28, L_29, L_32, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Boolean Send_control_information::Comparenotsame(Object_transform,Object_transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Send_control_information_Comparenotsame_mAE66C6FB2668FFB142A0D1B2D84BF2B93C84CE62 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___objectone0, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___objecttwo1, const RuntimeMethod* method)
{
	{
		// if (objectone.PosX != objecttwo.PosX)
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_0 = ___objectone0;
		NullCheck(L_0);
		float L_1;
		L_1 = Object_transform_get_PosX_m0300722B7AAE342FE4C9F221E7DD1041248089BA_inline(L_0, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_2 = ___objecttwo1;
		NullCheck(L_2);
		float L_3;
		L_3 = Object_transform_get_PosX_m0300722B7AAE342FE4C9F221E7DD1041248089BA_inline(L_2, /*hidden argument*/NULL);
		if ((((float)L_1) == ((float)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// else if (objectone.RotX != objecttwo.RotX)
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_4 = ___objectone0;
		NullCheck(L_4);
		float L_5;
		L_5 = Object_transform_get_RotX_m6048AC62F2B9C6BD83E4E428311167C9C7208F0C_inline(L_4, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_6 = ___objecttwo1;
		NullCheck(L_6);
		float L_7;
		L_7 = Object_transform_get_RotX_m6048AC62F2B9C6BD83E4E428311167C9C7208F0C_inline(L_6, /*hidden argument*/NULL);
		if ((((float)L_5) == ((float)L_7)))
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0020:
	{
		// else if (objectone.ScaleX != objecttwo.ScaleX)
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_8 = ___objectone0;
		NullCheck(L_8);
		float L_9;
		L_9 = Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62_inline(L_8, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_10 = ___objecttwo1;
		NullCheck(L_10);
		float L_11;
		L_11 = Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62_inline(L_10, /*hidden argument*/NULL);
		if ((((float)L_9) == ((float)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0030:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Send_control_information::AddObjectDatatoSend(System.Collections.Generic.Dictionary`2<System.String,Object_transform>,System.String,Object_transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_AddObjectDatatoSend_m2B61C4C858D70E36A1E032959896D4491FDDE7DA (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * ___Send_control00, String_t* ___key1, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Send_control0.Add(key, value);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_0 = ___Send_control00;
		String_t* L_1 = ___key1;
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_2 = ___value2;
		NullCheck(L_0);
		Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_mF490BFD9BE94A9145BF72DC11AD0E89B6212FFCF_RuntimeMethod_var);
		// }
		return;
	}
}
// Object_transform Send_control_information::GetObjectData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * Send_control_information_GetObjectData_m5BBD73A570C95AFC3EFB4658BD117E1824052AD5 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Object0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 position = Object.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___Object0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Quaternion rotation = Object.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___Object0;
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Vector3 Scale = Object.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___Object0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// Object_transform lst_object_transform = new Object_transform()
		// {
		//     PosX = position.x,
		//     PosY = position.y,
		//     PosZ = position.z,
		//     RotX = rotation.x,
		//     RotY = rotation.y,
		//     RotZ = rotation.z,
		//     RotW = rotation.w,
		//     ScaleX = Scale.x,
		//     ScaleY = Scale.y,
		//     ScaleZ = Scale.z
		// };
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_6 = (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 *)il2cpp_codegen_object_new(Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373_il2cpp_TypeInfo_var);
		Object_transform__ctor_m13B583939226B440130CB48127FF9D2B2ADAFDB4(L_6, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_7 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_x_2();
		NullCheck(L_7);
		Object_transform_set_PosX_m2DDE0FA8343FF1D191E4193F4491DD04D75229E5_inline(L_7, L_9, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_10 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		NullCheck(L_10);
		Object_transform_set_PosY_mF53EC8EE645EC8386648A03E1EBD06F2927E1AFA_inline(L_10, L_12, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_13 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_z_4();
		NullCheck(L_13);
		Object_transform_set_PosZ_mF9E19DC4B62E2A3BEA5866213110AE4D5DF855FB_inline(L_13, L_15, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_16 = L_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = V_1;
		float L_18 = L_17.get_x_0();
		NullCheck(L_16);
		Object_transform_set_RotX_m83B3CA2DB9EDD17D031C19CD723C5A3516F67B9D_inline(L_16, L_18, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_19 = L_16;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = V_1;
		float L_21 = L_20.get_y_1();
		NullCheck(L_19);
		Object_transform_set_RotY_mA75BC4286017E7CE2CF5EF81297FC4D14F7706AC_inline(L_19, L_21, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_22 = L_19;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_1;
		float L_24 = L_23.get_z_2();
		NullCheck(L_22);
		Object_transform_set_RotZ_m85019EEDBFCE7A2C6F9AFD522C6687C78B2558FE_inline(L_22, L_24, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_25 = L_22;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = V_1;
		float L_27 = L_26.get_w_3();
		NullCheck(L_25);
		Object_transform_set_RotW_m53E1CA91AF9271D694A2AEBC999C15118BF364F1_inline(L_25, L_27, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_28 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		float L_30 = L_29.get_x_2();
		NullCheck(L_28);
		Object_transform_set_ScaleX_mE50C7E009017AF0DCCDFF776917B7F43179C6E86_inline(L_28, L_30, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_31 = L_28;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_2;
		float L_33 = L_32.get_y_3();
		NullCheck(L_31);
		Object_transform_set_ScaleY_m8C5876EEB40FE029041E7C767FF27F2D8C4C71D8_inline(L_31, L_33, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_34 = L_31;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_2;
		float L_36 = L_35.get_z_4();
		NullCheck(L_34);
		Object_transform_set_ScaleZ_m0F4299BD7711044C647B883CA36D2CDA0E03CD44_inline(L_34, L_36, /*hidden argument*/NULL);
		// return lst_object_transform;
		return L_34;
	}
}
// System.Void Send_control_information::server_change()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information_server_change_mBF16DFD3B3361BCC1E3B96E033A0CE4078B5FACC (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// childCount = transform.childCount;//�l���󦳦h�֭�
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		__this->set_childCount_6(L_1);
		// for (int i = 0; i < childCount; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_0015:
	{
		// GameObject Getobject = transform.GetChild(i).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// UpdateObjectDatatoDict(object_control, Getobject);//
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_6 = __this->get_object_control_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
		Send_control_information_UpdateObjectDatatoDict_m2C2DE95D496BE504128BF8C4446E3E6914DC9F11(__this, L_6, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_childCount_6();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0015;
		}
	}
	{
		// send_control.Clear();
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_11 = __this->get_send_control_8();
		NullCheck(L_11);
		Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C(L_11, /*hidden argument*/Dictionary_2_Clear_mC27409E4ADA951957F086E38768B28C7CF26486C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Send_control_information::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Send_control_information__ctor_m135158A6E2F7940E8CBDD033CDA057ABCA80CED2 (Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, Object_transform> object_control = new Dictionary<string, Object_transform>();
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_0 = (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *)il2cpp_codegen_object_new(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D(L_0, /*hidden argument*/Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D_RuntimeMethod_var);
		__this->set_object_control_7(L_0);
		// private Dictionary<string, Object_transform> send_control = new Dictionary<string, Object_transform>();
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_1 = (Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 *)il2cpp_codegen_object_new(Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D(L_1, /*hidden argument*/Dictionary_2__ctor_m4E3B46D4A784FF20DBF7E09212D95D825345638D_RuntimeMethod_var);
		__this->set_send_control_8(L_1);
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
// System.Void Updata_position::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Updata_position_Start_mD3AF3516AE14AC29189273FDFECE98DA41B89785 (Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E398228291158C5C1CA0C7FFD30ECAB332B580A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F784EA7A398F82200A008D1241049A19F68ED5D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// childCount = GameObject.Find("Object_control_center").transform.childCount; // ��X���h�֪���A���إߩҦ����󪺪���
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1F784EA7A398F82200A008D1241049A19F68ED5D, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		__this->set_childCount_4(L_2);
		// for (int i = 0; i < childCount; i++)
		V_0 = 0;
		goto IL_005f;
	}

IL_001e:
	{
		// GameObject Getobject = GameObject.Find("Object_control_center").transform.GetChild(i).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1F784EA7A398F82200A008D1241049A19F68ED5D, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// List_volumetric.Add(new Volumetric_object());
		List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * L_8 = __this->get_List_volumetric_5();
		Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * L_9 = (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 *)il2cpp_codegen_object_new(Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792_il2cpp_TypeInfo_var);
		Volumetric_object__ctor_mB733AC6CF46860B97C6519D1B436428B9EECF516(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m6E398228291158C5C1CA0C7FFD30ECAB332B580A(L_8, L_9, /*hidden argument*/List_1_Add_m6E398228291158C5C1CA0C7FFD30ECAB332B580A_RuntimeMethod_var);
		// List_volumetric[i].object_init(Getobject);
		List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * L_10 = __this->get_List_volumetric_5();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * L_12;
		L_12 = List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		NullCheck(L_12);
		Volumetric_object_object_init_mF144FCDABBC0EAB52C20867B87645854CFEF7EAD(L_12, L_13, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005f:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get_childCount_4();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Updata_position::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Updata_position_Update_m4FB724A51DF3DAE354057BBA9D5087A64463D34E (Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mDA63BDB72056D2A828F83D4F98FF2F9ECC846CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5554E23F34E0C8DDAFB1F78D4AD835C537B41570_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD718856467A3848B2AF2E47EEB17D5A660D83434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5808604EBB622B936E065AD64C34988846756B46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSend_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D_mF9A6A8FE3ED1BE3A414F8A9891448FBA02F50891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m5CE4FD47C88EAC3F33EF925FFE5D61C56027E407_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m68FCBA604FF26C3EF86C7F6D2919FA289566CE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m8C8B8186A0FCC466CF25A64E3A6081DE58B495ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mE0B0EB76D78E6A25A2D69D263713A426F397E599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m3E4670FA3C661CF2D1D7A4F451B83D5B468C47C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Updata_position_U3CUpdateU3Eb__5_0_mA597C865BBE80DC2E6C8CF6897C5CD68E00B1B75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F784EA7A398F82200A008D1241049A19F68ED5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89ABF38F9EF8A00ED88D64B94641FD1FAA2EC55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (Receive_interact.Received_object_json != "")
		IL2CPP_RUNTIME_CLASS_INIT(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->get_Received_object_json_6();
		bool L_1;
		L_1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b8;
		}
	}
	{
		// foreach (KeyValuePair<string, Object_transform> objectname in Receive_interact.Object_control_center)
		IL2CPP_RUNTIME_CLASS_INIT(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var);
		Dictionary_2_tFEDA4848D6EF386379A3E026ACDA17CFDC4F2CC6 * L_2 = ((Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_StaticFields*)il2cpp_codegen_static_fields_for(Receive_interact_tC91EC32009747CD74CE58458EB234702E6CE6517_il2cpp_TypeInfo_var))->get_Object_control_center_5();
		NullCheck(L_2);
		Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F  L_3;
		L_3 = Dictionary_2_GetEnumerator_mDA63BDB72056D2A828F83D4F98FF2F9ECC846CA7(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_mDA63BDB72056D2A828F83D4F98FF2F9ECC846CA7_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_0021:
		{
			// foreach (KeyValuePair<string, Object_transform> objectname in Receive_interact.Object_control_center)
			KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196  L_4;
			L_4 = Enumerator_get_Current_m5808604EBB622B936E065AD64C34988846756B46_inline((Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5808604EBB622B936E065AD64C34988846756B46_RuntimeMethod_var);
			V_1 = L_4;
			// _controlobject = objectname.Key;
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_m5CE4FD47C88EAC3F33EF925FFE5D61C56027E407_inline((KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m5CE4FD47C88EAC3F33EF925FFE5D61C56027E407_RuntimeMethod_var);
			__this->set__controlobject_6(L_5);
			// _controlobjectvalue = objectname.Value;
			Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_6;
			L_6 = KeyValuePair_2_get_Value_m68FCBA604FF26C3EF86C7F6D2919FA289566CE51_inline((KeyValuePair_2_tBE60D2169318F5664B7CA19C16D5BAB89F03C196 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m68FCBA604FF26C3EF86C7F6D2919FA289566CE51_RuntimeMethod_var);
			__this->set__controlobjectvalue_7(L_6);
			// int index = List_volumetric.FindIndex(x => x.name.Equals(_controlobject));
			List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * L_7 = __this->get_List_volumetric_5();
			Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D * L_8 = (Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D *)il2cpp_codegen_object_new(Predicate_1_tB82D2ACAC0DB820E5ECCBE57DF9B1A739A97674D_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m3E4670FA3C661CF2D1D7A4F451B83D5B468C47C8(L_8, __this, (intptr_t)((intptr_t)Updata_position_U3CUpdateU3Eb__5_0_mA597C865BBE80DC2E6C8CF6897C5CD68E00B1B75_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m3E4670FA3C661CF2D1D7A4F451B83D5B468C47C8_RuntimeMethod_var);
			NullCheck(L_7);
			int32_t L_9;
			L_9 = List_1_FindIndex_m8C8B8186A0FCC466CF25A64E3A6081DE58B495ED(L_7, L_8, /*hidden argument*/List_1_FindIndex_m8C8B8186A0FCC466CF25A64E3A6081DE58B495ED_RuntimeMethod_var);
			V_2 = L_9;
			// Volumetric_object volumetric = List_volumetric[index]; // �qList ����X�ŦX�W�٪�����
			List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * L_10 = __this->get_List_volumetric_5();
			int32_t L_11 = V_2;
			NullCheck(L_10);
			Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * L_12;
			L_12 = List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mD8A615A884863470F8F2495FF07E1BD2152DBBA6_RuntimeMethod_var);
			V_3 = L_12;
			// volumetric.Object_update(_controlobjectvalue);
			Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * L_13 = V_3;
			Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_14 = __this->get__controlobjectvalue_7();
			NullCheck(L_13);
			Volumetric_object_Object_update_m33E2F2122426B2F53BB3A28ED5381926A5100770(L_13, L_14, /*hidden argument*/NULL);
			// List_volumetric[index] = volumetric;
			List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * L_15 = __this->get_List_volumetric_5();
			int32_t L_16 = V_2;
			Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * L_17 = V_3;
			NullCheck(L_15);
			List_1_set_Item_mE0B0EB76D78E6A25A2D69D263713A426F397E599(L_15, L_16, L_17, /*hidden argument*/List_1_set_Item_mE0B0EB76D78E6A25A2D69D263713A426F397E599_RuntimeMethod_var);
			// Debug.Log("1231321321321321231321321321321213");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral89ABF38F9EF8A00ED88D64B94641FD1FAA2EC55A, /*hidden argument*/NULL);
		}

IL_008b:
		{
			// foreach (KeyValuePair<string, Object_transform> objectname in Receive_interact.Object_control_center)
			bool L_18;
			L_18 = Enumerator_MoveNext_mD718856467A3848B2AF2E47EEB17D5A660D83434((Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD718856467A3848B2AF2E47EEB17D5A660D83434_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0021;
			}
		}

IL_0094:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5554E23F34E0C8DDAFB1F78D4AD835C537B41570((Enumerator_t986A337A9CCCC7FD7026AC90A7DE610E39F88C8F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5554E23F34E0C8DDAFB1F78D4AD835C537B41570_RuntimeMethod_var);
		IL2CPP_END_FINALLY(150)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
	}

IL_00a4:
	{
		// GameObject.Find("Object_control_center").GetComponent<Send_control_information>().server_change();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1F784EA7A398F82200A008D1241049A19F68ED5D, /*hidden argument*/NULL);
		NullCheck(L_19);
		Send_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D * L_20;
		L_20 = GameObject_GetComponent_TisSend_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D_mF9A6A8FE3ED1BE3A414F8A9891448FBA02F50891(L_19, /*hidden argument*/GameObject_GetComponent_TisSend_control_information_t20B8F8F70FD83F33B114C5E1E2185E3056BADD9D_mF9A6A8FE3ED1BE3A414F8A9891448FBA02F50891_RuntimeMethod_var);
		NullCheck(L_20);
		Send_control_information_server_change_mBF16DFD3B3361BCC1E3B96E033A0CE4078B5FACC(L_20, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Updata_position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Updata_position__ctor_mA2A22EFE143F2D9A1501E77084EA34D3C952183E (Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1D5A466F361D09DD3D5A1176B452A53DAD5900A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Volumetric_object> List_volumetric = new List<Volumetric_object>();
		List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 * L_0 = (List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88 *)il2cpp_codegen_object_new(List_1_tE9D5653999B330F0480A4EDD1F7F2FE6A460DA88_il2cpp_TypeInfo_var);
		List_1__ctor_m1D5A466F361D09DD3D5A1176B452A53DAD5900A0(L_0, /*hidden argument*/List_1__ctor_m1D5A466F361D09DD3D5A1176B452A53DAD5900A0_RuntimeMethod_var);
		__this->set_List_volumetric_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Updata_position::<Update>b__5_0(Volumetric_object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Updata_position_U3CUpdateU3Eb__5_0_mA597C865BBE80DC2E6C8CF6897C5CD68E00B1B75 (Updata_position_t9EE345BC958DFA301A4D7EB5EC86303DCF7722E1 * __this, Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * ___x0, const RuntimeMethod* method)
{
	{
		// int index = List_volumetric.FindIndex(x => x.name.Equals(_controlobject));
		Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_3();
		String_t* L_2 = __this->get__controlobject_6();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Volumetric_object::object_init(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volumetric_object_object_init_mF144FCDABBC0EAB52C20867B87645854CFEF7EAD (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method)
{
	{
		// OBJ_Pos = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameObject0;
		__this->set_OBJ_Pos_0(L_0);
		// name = gameObject.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___gameObject0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		__this->set_name_3(L_2);
		// position = gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___gameObject0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_position_5(L_5);
		// }
		return;
	}
}
// System.Void Volumetric_object::Object_update(Object_transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volumetric_object_Object_update_m33E2F2122426B2F53BB3A28ED5381926A5100770 (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * __this, Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * ___new_object_value0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 Obj_position = new Vector3(new_object_value.PosX, new_object_value.PosY, new_object_value.PosZ); // ��������m
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_0 = ___new_object_value0;
		NullCheck(L_0);
		float L_1;
		L_1 = Object_transform_get_PosX_m0300722B7AAE342FE4C9F221E7DD1041248089BA_inline(L_0, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_2 = ___new_object_value0;
		NullCheck(L_2);
		float L_3;
		L_3 = Object_transform_get_PosY_m13C076F2E7DE7E68AE5A8BBA2C8868829284F2D9_inline(L_2, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_4 = ___new_object_value0;
		NullCheck(L_4);
		float L_5;
		L_5 = Object_transform_get_PosZ_m4A5E3DFFF2A9D7F34E17141EB6B603FE184187D5_inline(L_4, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_1, L_3, L_5, /*hidden argument*/NULL);
		// OBJ_Pos.transform.position = Obj_position; //���ܪ����m
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_OBJ_Pos_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_8, /*hidden argument*/NULL);
		// position = OBJ_Pos.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_OBJ_Pos_0();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		__this->set_position_5(L_11);
		// if (_time == 0) // �Ĥ@�������쪫�󱱨���
		int32_t L_12 = __this->get__time_4();
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		// old_localscale = new Vector3(new_object_value.ScaleX, new_object_value.ScaleY, new_object_value.ScaleZ); // �������_�l�Y����
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_13 = ___new_object_value0;
		NullCheck(L_13);
		float L_14;
		L_14 = Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62_inline(L_13, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_15 = ___new_object_value0;
		NullCheck(L_15);
		float L_16;
		L_16 = Object_transform_get_ScaleY_m0361F1DE06E2956C4B1125A413DE1F1E952F6D8B_inline(L_15, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_17 = ___new_object_value0;
		NullCheck(L_17);
		float L_18;
		L_18 = Object_transform_get_ScaleZ_mF4DC034D699E3629277BC173C92F7B99820B74E2_inline(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_14, L_16, L_18, /*hidden argument*/NULL);
		__this->set_old_localscale_7(L_19);
		// _time += 1;
		int32_t L_20 = __this->get__time_4();
		__this->set__time_4(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// }
		return;
	}

IL_0074:
	{
		// new_localscale = new Vector3(new_object_value.ScaleX, new_object_value.ScaleY, new_object_value.ScaleZ); // �������_�l�Y����
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_21 = ___new_object_value0;
		NullCheck(L_21);
		float L_22;
		L_22 = Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62_inline(L_21, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_23 = ___new_object_value0;
		NullCheck(L_23);
		float L_24;
		L_24 = Object_transform_get_ScaleY_m0361F1DE06E2956C4B1125A413DE1F1E952F6D8B_inline(L_23, /*hidden argument*/NULL);
		Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * L_25 = ___new_object_value0;
		NullCheck(L_25);
		float L_26;
		L_26 = Object_transform_get_ScaleZ_mF4DC034D699E3629277BC173C92F7B99820B74E2_inline(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_22, L_24, L_26, /*hidden argument*/NULL);
		__this->set_new_localscale_6(L_27);
		// if (new_localscale != old_localscale)  // �s���Y��j�p�������ª� �N��������
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_new_localscale_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_old_localscale_7();
		bool L_30;
		L_30 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00e2;
		}
	}
	{
		// float Scaleratio = new_localscale.x / old_localscale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = __this->get_address_of_new_localscale_6();
		float L_32 = L_31->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_old_localscale_7();
		float L_34 = L_33->get_x_2();
		V_1 = ((float)((float)L_32/(float)L_34));
		// OBJ_Pos.transform.localScale = OBJ_Pos.transform.localScale * Scaleratio;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_OBJ_Pos_0();
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_OBJ_Pos_0();
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_38, /*hidden argument*/NULL);
		float L_40 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_36, L_41, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// old_localscale = new_localscale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = __this->get_new_localscale_6();
		__this->set_old_localscale_7(L_42);
		// }
		return;
	}
}
// System.Void Volumetric_object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volumetric_object__ctor_mB733AC6CF46860B97C6519D1B436428B9EECF516 (Volumetric_object_tC1BAF0D060B8049DD2E408F4DE06688BA8DD1792 * __this, const RuntimeMethod* method)
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
// System.Void caculate_position_error_ours::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_Update_mD5ACCF7AA1B6211506BE9F26DFEAA034D9D7A92A (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisCaculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061_m4EF4C546C0A5237875DD2D2A214FCF842CAA52E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48D3EC939E60F781DDE92FFA9FA24DAC205586BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C22FBAF8673C8DA433C752B502EEC370874630);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD56C2448C5B4CF39E41F99FAECC447374320B748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * V_1 = NULL;
	Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// string Received_json = Getdata.GetReceivedDataFromServer();
		PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * L_0 = __this->get_Getdata_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PeerConnection_GetReceivedDataFromServer_m9F65E72D2689C4D457B38ADA216B83008F18E99E_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (Received_json == "")
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("ssss");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD56C2448C5B4CF39E41F99FAECC447374320B748, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// DataRow dataraw = reprojectionerrortocsv.NewRow();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_4 = __this->get_reprojectionerrortocsv_10();
		NullCheck(L_4);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_5;
		L_5 = DataTable_NewRow_mC5690D212555D907561E160361A152A23C9F171C(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Caculate_Reprojection_2D object_reprojection = JsonConvert.DeserializeObject<Caculate_Reprojection_2D>(Received_json);
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3E61432B577F7F330D30468FB42620C653DEE244_il2cpp_TypeInfo_var);
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_7;
		L_7 = JsonConvert_DeserializeObject_TisCaculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061_m4EF4C546C0A5237875DD2D2A214FCF842CAA52E4(L_6, /*hidden argument*/JsonConvert_DeserializeObject_TisCaculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061_m4EF4C546C0A5237875DD2D2A214FCF842CAA52E4_RuntimeMethod_var);
		V_2 = L_7;
		// Vector3 originalpoint = new Vector3(object_reprojection.Object_OriginalPosition_x, object_reprojection.Object_OriginalPosition_y, object_reprojection.Object_OriginalPosition_z);
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_8 = V_2;
		NullCheck(L_8);
		float L_9;
		L_9 = Caculate_Reprojection_2D_get_Object_OriginalPosition_x_mE68FD20A0898A56B8C905E771328D20DD986FC25_inline(L_8, /*hidden argument*/NULL);
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_10 = V_2;
		NullCheck(L_10);
		float L_11;
		L_11 = Caculate_Reprojection_2D_get_Object_OriginalPosition_y_m5CB0CE272CC06939244BE253C9041956B18C5F95_inline(L_10, /*hidden argument*/NULL);
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_12 = V_2;
		NullCheck(L_12);
		float L_13;
		L_13 = Caculate_Reprojection_2D_get_Object_OriginalPosition_z_mABF404F3028F5FCFCEF08C8B03DD258ED29E5431_inline(L_12, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_9, L_11, L_13, /*hidden argument*/NULL);
		// AddDatatoDataTable(dataraw, "raw_x", originalpoint.x);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_3;
		float L_16 = L_15.get_x_2();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_14, _stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B, L_16, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "raw_y", originalpoint.y);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_17 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		float L_19 = L_18.get_y_3();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_17, _stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8, L_19, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "raw_z", originalpoint.z);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		float L_22 = L_21.get_z_4();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_20, _stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6, L_22, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// if (object_reprojection.Object_Screen_norm_x != float.NaN && object_reprojection.Object_Screen_norm_y != float.NaN)
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_23 = V_2;
		NullCheck(L_23);
		float L_24;
		L_24 = Caculate_Reprojection_2D_get_Object_Screen_norm_x_m06A7AA56F20687DBB405F3B0E7B7A784938E5240_inline(L_23, /*hidden argument*/NULL);
		if ((((float)L_24) == ((float)(std::numeric_limits<float>::quiet_NaN()))))
		{
			goto IL_0254;
		}
	}
	{
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_25 = V_2;
		NullCheck(L_25);
		float L_26;
		L_26 = Caculate_Reprojection_2D_get_Object_Screen_norm_y_m1E1CA261734E8AC1498C7B99CB6BD6B38CD20812_inline(L_25, /*hidden argument*/NULL);
		if ((((float)L_26) == ((float)(std::numeric_limits<float>::quiet_NaN()))))
		{
			goto IL_0254;
		}
	}
	{
		// float straming_x = (gameobject.transform.localScale.x * object_reprojection.Object_Screen_norm_x) - (gameobject.transform.localScale.x / 2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_gameobject_7();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_x_2();
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_31 = V_2;
		NullCheck(L_31);
		float L_32;
		L_32 = Caculate_Reprojection_2D_get_Object_Screen_norm_x_m06A7AA56F20687DBB405F3B0E7B7A784938E5240_inline(L_31, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_gameobject_7();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		V_4 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_32)), (float)((float)((float)L_36/(float)(2.0f)))));
		// float straming_y = (gameobject.transform.localScale.y * object_reprojection.Object_Screen_norm_y) - (gameobject.transform.localScale.y / 2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_gameobject_7();
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_3();
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_41 = V_2;
		NullCheck(L_41);
		float L_42;
		L_42 = Caculate_Reprojection_2D_get_Object_Screen_norm_y_m1E1CA261734E8AC1498C7B99CB6BD6B38CD20812_inline(L_41, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_gameobject_7();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_y_3();
		V_5 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_42)), (float)((float)((float)L_46/(float)(2.0f)))));
		// Vector3 streamingpoint = new Vector3(object_reprojection.Object_OriginalPosition_x + straming_x, object_reprojection.Object_OriginalPosition_y + straming_y, object_reprojection.Object_OriginalPosition_z);
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_47 = V_2;
		NullCheck(L_47);
		float L_48;
		L_48 = Caculate_Reprojection_2D_get_Object_OriginalPosition_x_mE68FD20A0898A56B8C905E771328D20DD986FC25_inline(L_47, /*hidden argument*/NULL);
		float L_49 = V_4;
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_50 = V_2;
		NullCheck(L_50);
		float L_51;
		L_51 = Caculate_Reprojection_2D_get_Object_OriginalPosition_y_m5CB0CE272CC06939244BE253C9041956B18C5F95_inline(L_50, /*hidden argument*/NULL);
		float L_52 = V_5;
		Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * L_53 = V_2;
		NullCheck(L_53);
		float L_54;
		L_54 = Caculate_Reprojection_2D_get_Object_OriginalPosition_z_mABF404F3028F5FCFCEF08C8B03DD258ED29E5431_inline(L_53, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), ((float)il2cpp_codegen_add((float)L_48, (float)L_49)), ((float)il2cpp_codegen_add((float)L_51, (float)L_52)), L_54, /*hidden argument*/NULL);
		// reprojection_error_3D = Vector3.Distance(streamingpoint, originalpoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_3;
		float L_57;
		L_57 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_55, L_56, /*hidden argument*/NULL);
		__this->set_reprojection_error_3D_8(L_57);
		// Vector3 original_3Dto2D = cam.WorldToScreenPoint(originalpoint);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_58 = __this->get_cam_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_3;
		NullCheck(L_58);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_58, L_59, /*hidden argument*/NULL);
		V_7 = L_60;
		// Vector3 streaming_3Dto2D = cam.WorldToScreenPoint(streamingpoint);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_61 = __this->get_cam_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = V_6;
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_61, L_62, /*hidden argument*/NULL);
		V_8 = L_63;
		// Debug.Log(original_3Dto2D.ToString("f4"));
		String_t* L_64;
		L_64 = Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), _stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_64, /*hidden argument*/NULL);
		// Debug.Log(streaming_3Dto2D.ToString("f4"));
		String_t* L_65;
		L_65 = Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), _stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_65, /*hidden argument*/NULL);
		// Vector2 original_2D = new Vector2(original_3Dto2D.x / Screen.width, original_3Dto2D.y / Screen.height);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_7;
		float L_67 = L_66.get_x_2();
		int32_t L_68;
		L_68 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_7;
		float L_70 = L_69.get_y_3();
		int32_t L_71;
		L_71 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_9), ((float)((float)L_67/(float)((float)((float)L_68)))), ((float)((float)L_70/(float)((float)((float)L_71)))), /*hidden argument*/NULL);
		// Vector2 streaming_2D = new Vector2(streaming_3Dto2D.x / Screen.width, streaming_3Dto2D.y / Screen.height);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = V_8;
		float L_73 = L_72.get_x_2();
		int32_t L_74;
		L_74 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_8;
		float L_76 = L_75.get_y_3();
		int32_t L_77;
		L_77 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_10), ((float)((float)L_73/(float)((float)((float)L_74)))), ((float)((float)L_76/(float)((float)((float)L_77)))), /*hidden argument*/NULL);
		// reprojection_error_2D = Vector2.Distance(original_2D, streaming_2D);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_78 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79 = V_10;
		float L_80;
		L_80 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_78, L_79, /*hidden argument*/NULL);
		__this->set_reprojection_error_2D_9(L_80);
		// Debug.Log("reprojection_error_3D: " + reprojection_error_3D.ToString("f3"));
		float* L_81 = __this->get_address_of_reprojection_error_3D_8();
		String_t* L_82;
		L_82 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_81, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		String_t* L_83;
		L_83 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB3C22FBAF8673C8DA433C752B502EEC370874630, L_82, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_83, /*hidden argument*/NULL);
		// Debug.Log("reprojection_error_2D: " + reprojection_error_2D.ToString("f3"));
		float* L_84 = __this->get_address_of_reprojection_error_2D_9();
		String_t* L_85;
		L_85 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_84, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		String_t* L_86;
		L_86 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral48D3EC939E60F781DDE92FFA9FA24DAC205586BB, L_85, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_86, /*hidden argument*/NULL);
		// AddDatatoDataTable(dataraw, "stream_x", streamingpoint.x);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_87 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = V_6;
		float L_89 = L_88.get_x_2();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_87, _stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781, L_89, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "stream_y", streamingpoint.y);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_90 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = V_6;
		float L_92 = L_91.get_y_3();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_90, _stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608, L_92, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "stream_z", streamingpoint.z);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_93 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = V_6;
		float L_95 = L_94.get_z_4();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_93, _stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9, L_95, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// }
		goto IL_029d;
	}

IL_0254:
	{
		// reprojection_error_3D = 0f;
		__this->set_reprojection_error_3D_8((0.0f));
		// reprojection_error_2D = 0f;
		__this->set_reprojection_error_2D_9((0.0f));
		// AddDatatoDataTable(dataraw, "stream_x", 0f);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_96 = V_1;
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_96, _stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781, (0.0f), /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "stream_y", 0f);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_97 = V_1;
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_97, _stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608, (0.0f), /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "stream_z", 0f);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_98 = V_1;
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_98, _stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9, (0.0f), /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
	}

IL_029d:
	{
		// AddDatatoDataTable(dataraw, "reprojection_error_3D", reprojection_error_3D);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_99 = V_1;
		float L_100 = __this->get_reprojection_error_3D_8();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_99, _stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102, L_100, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// AddDatatoDataTable(dataraw, "reprojection_error_2D", reprojection_error_2D);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_101 = V_1;
		float L_102 = __this->get_reprojection_error_2D_9();
		caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3(__this, L_101, _stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26, L_102, /*hidden argument*/caculate_position_error_ours_AddDatatoDataTable_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1B3989438F629F0CDD11DBC703BCBCD80632D3F3_RuntimeMethod_var);
		// reprojectionerrortocsv.Rows.Add(dataraw);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_103 = __this->get_reprojectionerrortocsv_10();
		NullCheck(L_103);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_104;
		L_104 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_103, /*hidden argument*/NULL);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_105 = V_1;
		NullCheck(L_104);
		DataRowCollection_Add_mE3C33DB6DE9FAC64958701E01B6CFCE3E8AE6615(L_104, L_105, /*hidden argument*/NULL);
		// SaveReprojectionerror();
		caculate_position_error_ours_SaveReprojectionerror_mB413FD3AC05A838A6BFB9AE0354ECA4D1572F093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Data.DataTable caculate_position_error_ours::CreatCSVTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * caculate_position_error_ours_CreatCSVTable_mAEDB57634F3EE756FBAEAFB62563D5FFA548464F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3469D9196A73F4143DDD1E8E763AA5DF028E2125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B);
		s_Il2CppMethodInitialized = true;
	}
	DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * V_0 = NULL;
	{
		// DataTable dt = new DataTable("Reprojection");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 *)il2cpp_codegen_object_new(DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827_il2cpp_TypeInfo_var);
		DataTable__ctor_mA9DC1C498DE1B6A830D34C08EE8B1F630289670B(L_0, _stringLiteral3469D9196A73F4143DDD1E8E763AA5DF028E2125, /*hidden argument*/NULL);
		// dt.Columns.Add("reprojection_error_3D");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_1 = L_0;
		NullCheck(L_1);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_2;
		L_2 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_3;
		L_3 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_2, _stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102, /*hidden argument*/NULL);
		// dt.Columns.Add("reprojection_error_2D");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_4 = L_1;
		NullCheck(L_4);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_5;
		L_5 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_6;
		L_6 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_5, _stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26, /*hidden argument*/NULL);
		// dt.Columns.Add("raw_x");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_7 = L_4;
		NullCheck(L_7);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_8;
		L_8 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_9;
		L_9 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_8, _stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B, /*hidden argument*/NULL);
		// dt.Columns.Add("raw_y");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_10 = L_7;
		NullCheck(L_10);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_11;
		L_11 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_12;
		L_12 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_11, _stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8, /*hidden argument*/NULL);
		// dt.Columns.Add("raw_z");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_13 = L_10;
		NullCheck(L_13);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_14;
		L_14 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_15;
		L_15 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_14, _stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6, /*hidden argument*/NULL);
		// dt.Columns.Add("stream_x");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_16 = L_13;
		NullCheck(L_16);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_17;
		L_17 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_18;
		L_18 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_17, _stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781, /*hidden argument*/NULL);
		// dt.Columns.Add("stream_y");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_19 = L_16;
		NullCheck(L_19);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_20;
		L_20 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_21;
		L_21 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_20, _stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608, /*hidden argument*/NULL);
		// dt.Columns.Add("stream_z");
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_22 = L_19;
		NullCheck(L_22);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_23;
		L_23 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		DataColumn_tC346323CF7BCB3895FDAF750C8B594F436CD1638 * L_24;
		L_24 = DataColumnCollection_Add_mDB293F9E5893BE586C14A03C02E907B33166222D(L_23, _stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9, /*hidden argument*/NULL);
		// DataRow dr = dt.NewRow();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_25 = L_22;
		NullCheck(L_25);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_26;
		L_26 = DataTable_NewRow_mC5690D212555D907561E160361A152A23C9F171C(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// dr["reprojection_error_3D"] = "reprojection_error_3D";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_27 = V_0;
		NullCheck(L_27);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_27, _stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102, _stringLiteralDDBB0388F34542C55F02A8E030FC85CB3C956102, /*hidden argument*/NULL);
		// dr["reprojection_error_2D"] = "reprojection_error_2D";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_28 = V_0;
		NullCheck(L_28);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_28, _stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26, _stringLiteralDFC3AFD55054FA925DBE62D5F70DE4C93ED9BA26, /*hidden argument*/NULL);
		// dr["stream_x"] = "stream_x";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_29 = V_0;
		NullCheck(L_29);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_29, _stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781, _stringLiteralB7E202B90CE126D03DBDF9E2EBDF8A1D7133C781, /*hidden argument*/NULL);
		// dr["stream_y"] = "stream_y";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_30 = V_0;
		NullCheck(L_30);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_30, _stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608, _stringLiteral78BF08B42F9087C72F30DC4D54391DF992D04608, /*hidden argument*/NULL);
		// dr["stream_z"] = "stream_z";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_31 = V_0;
		NullCheck(L_31);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_31, _stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9, _stringLiteral88414DF8A9063413F19D2D0232180C67E77328E9, /*hidden argument*/NULL);
		// dr["raw_x"] = "raw_x";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_32 = V_0;
		NullCheck(L_32);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_32, _stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B, _stringLiteralFF927A8ADFB4A0E3D39717A8B6FA473BBA89446B, /*hidden argument*/NULL);
		// dr["raw_y"] = "raw_y";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_33 = V_0;
		NullCheck(L_33);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_33, _stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8, _stringLiteral4AC8A43DB1D298E0285A0A26946B7DA8F078D8F8, /*hidden argument*/NULL);
		// dr["raw_z"] = "raw_z";
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_34 = V_0;
		NullCheck(L_34);
		DataRow_set_Item_mC42472232BDBAF8A600F09FC2365DDEFC616EF40(L_34, _stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6, _stringLiteral366B9F5495E5C74161E5FBA94EF1F1C1532FCFC6, /*hidden argument*/NULL);
		// dt.Rows.Add(dr);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_35 = L_25;
		NullCheck(L_35);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_36;
		L_36 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_35, /*hidden argument*/NULL);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_37 = V_0;
		NullCheck(L_36);
		DataRowCollection_Add_mE3C33DB6DE9FAC64958701E01B6CFCE3E8AE6615(L_36, L_37, /*hidden argument*/NULL);
		// return dt;
		return L_35;
	}
}
// System.Void caculate_position_error_ours::SaveCSV(System.String,System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveCSV_m9DAF964A564F9854627B6F946921A2F0BE765758 (String_t* ___CSVPath0, DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * ___mSheet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_5 = NULL;
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject * G_B6_0 = NULL;
	StringBuilder_t * G_B6_1 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	StringBuilder_t * G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	StringBuilder_t * G_B7_1 = NULL;
	{
		// if (mSheet.Rows.Count < 1)
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = ___mSheet1;
		NullCheck(L_0);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_1;
		L_1 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_1);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// int rowCount = mSheet.Rows.Count;
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_3 = ___mSheet1;
		NullCheck(L_3);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_4;
		L_4 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_4);
		V_0 = L_5;
		// int colCount = mSheet.Columns.Count;
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_6 = ___mSheet1;
		NullCheck(L_6);
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_7;
		L_7 = DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_7);
		V_1 = L_8;
		// StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_9, /*hidden argument*/NULL);
		V_2 = L_9;
		// for (int i = 0; i < rowCount; i++)
		V_3 = 0;
		goto IL_0081;
	}

IL_0031:
	{
		// for (int j = 0; j < colCount; j++)
		V_4 = 0;
		goto IL_006c;
	}

IL_0036:
	{
		// stringBuilder.Append(mSheet.Rows[i][j] + ",");
		StringBuilder_t * L_10 = V_2;
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_11 = ___mSheet1;
		NullCheck(L_11);
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_12;
		L_12 = DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		NullCheck(L_12);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_14;
		L_14 = DataRowCollection_get_Item_mB38105BECDC3F388EB5E1A1D8DB50D45D667BDAD(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_4;
		NullCheck(L_14);
		RuntimeObject * L_16;
		L_16 = DataRow_get_Item_m8BB8DE62C55315271187FB7D5262A93C0676A1E6(L_14, L_15, /*hidden argument*/NULL);
		RuntimeObject * L_17 = L_16;
		G_B5_0 = L_17;
		G_B5_1 = L_10;
		if (L_17)
		{
			G_B6_0 = L_17;
			G_B6_1 = L_10;
			goto IL_0051;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0056;
	}

IL_0051:
	{
		NullCheck(G_B6_0);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_18;
		G_B7_1 = G_B6_1;
	}

IL_0056:
	{
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B7_0, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		NullCheck(G_B7_1);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B7_1, L_19, /*hidden argument*/NULL);
		// for (int j = 0; j < colCount; j++)
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006c:
	{
		// for (int j = 0; j < colCount; j++)
		int32_t L_22 = V_4;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0036;
		}
	}
	{
		// stringBuilder.Append("\r\n");
		StringBuilder_t * L_24 = V_2;
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		// for (int i = 0; i < rowCount; i++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0081:
	{
		// for (int i = 0; i < rowCount; i++)
		int32_t L_27 = V_3;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0031;
		}
	}
	{
		// using (FileStream fileStream = new FileStream(CSVPath, FileMode.Create, FileAccess.Write))
		String_t* L_29 = ___CSVPath0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_30 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D(L_30, L_29, 2, 2, /*hidden argument*/NULL);
		V_5 = L_30;
	}

IL_008f:
	try
	{ // begin try (depth: 1)
		{
			// using (TextWriter textWriter = new StreamWriter(fileStream, Encoding.UTF8))
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_31 = V_5;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_32;
			L_32 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_33 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
			StreamWriter__ctor_m4D0D93D2ED2D49AFB992D38F2102D5A72DD94D2E(L_33, L_31, L_32, /*hidden argument*/NULL);
			V_6 = L_33;
		}

IL_009d:
		try
		{ // begin try (depth: 2)
			// textWriter.Write(stringBuilder.ToString());
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_34 = V_6;
			StringBuilder_t * L_35 = V_2;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
			NullCheck(L_34);
			VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, L_36);
			// }
			IL2CPP_LEAVE(0xC4, FINALLY_00ac);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ac;
		}

FINALLY_00ac:
		{ // begin finally (depth: 2)
			{
				TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_37 = V_6;
				if (!L_37)
				{
					goto IL_00b7;
				}
			}

IL_00b0:
			{
				TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_38 = V_6;
				NullCheck(L_38);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_38);
			}

IL_00b7:
			{
				IL2CPP_END_FINALLY(172)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(172)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xC4, FINALLY_00b8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b8;
	}

FINALLY_00b8:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_39 = V_5;
			if (!L_39)
			{
				goto IL_00c3;
			}
		}

IL_00bc:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_40 = V_5;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_40);
		}

IL_00c3:
		{
			IL2CPP_END_FINALLY(184)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(184)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void caculate_position_error_ours::SaveCSV1(System.String,System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveCSV1_m5E85FAC1CF0194529B26E049F1C6A54933B7C4DB (String_t* ___CSVPath0, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___mSheet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_1 = NULL;
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// stringBuilder.Append(mSheet);
		StringBuilder_t * L_1 = V_0;
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_2 = ___mSheet1;
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_1, L_2, /*hidden argument*/NULL);
		// using (FileStream fileStream = new FileStream(CSVPath, FileMode.Create, FileAccess.Write))
		String_t* L_4 = ___CSVPath0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D(L_5, L_4, 2, 2, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// using (TextWriter textWriter = new StreamWriter(fileStream, Encoding.UTF8))
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = V_1;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
			L_7 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_8 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
			StreamWriter__ctor_m4D0D93D2ED2D49AFB992D38F2102D5A72DD94D2E(L_8, L_6, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			// textWriter.Write(stringBuilder.ToString());
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = V_2;
			StringBuilder_t * L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			NullCheck(L_9);
			VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_11);
			// }
			IL2CPP_LEAVE(0x45, FINALLY_0031);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0031;
		}

FINALLY_0031:
		{ // begin finally (depth: 2)
			{
				TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_12 = V_2;
				if (!L_12)
				{
					goto IL_003a;
				}
			}

IL_0034:
			{
				TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_13 = V_2;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
			}

IL_003a:
			{
				IL2CPP_END_FINALLY(49)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(49)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x45, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void caculate_position_error_ours::SaveReprojectionerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveReprojectionerror_mB413FD3AC05A838A6BFB9AE0354ECA4D1572F093 (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD216325705EBE62D30897545478B5DDE78C0B0CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataTable raw_data = control_User_Position.GetRawData();
		Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * L_0 = __this->get_control_User_Position_6();
		NullCheck(L_0);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_1;
		L_1 = Control_user_position_GetRawData_m909A53DFD71BC3501246447956788AEF5DA3AB50_inline(L_0, /*hidden argument*/NULL);
		// string filePath_error = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/multiuser_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
		// SaveCSV(filePath_error, reprojectionerrortocsv);
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_2 = __this->get_reprojectionerrortocsv_10();
		caculate_position_error_ours_SaveCSV_m9DAF964A564F9854627B6F946921A2F0BE765758(_stringLiteralD216325705EBE62D30897545478B5DDE78C0B0CA, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void caculate_position_error_ours::SaveReprojectionerror1(System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours_SaveReprojectionerror1_mF7FB74FAC9842E92EA482A53B28990F4CD5CC29E (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * ___raw_data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD216325705EBE62D30897545478B5DDE78C0B0CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string filePath_error = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/multiuser_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
		// SaveCSV1(filePath_error, raw_data);
		DataRow_tE27621B890B8198D5263AFFE602C6C2DCBF9CCEE * L_0 = ___raw_data0;
		caculate_position_error_ours_SaveCSV1_m5E85FAC1CF0194529B26E049F1C6A54933B7C4DB(_stringLiteralD216325705EBE62D30897545478B5DDE78C0B0CA, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void caculate_position_error_ours::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void caculate_position_error_ours__ctor_m1C56D02A705CB29075B7231EFECFD47E492A6A8E (caculate_position_error_ours_t081EB84FF5B90B53ECC203A85A4D56D116E5B7FB * __this, const RuntimeMethod* method)
{
	{
		// DataTable reprojectionerrortocsv = CreatCSVTable();
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0;
		L_0 = caculate_position_error_ours_CreatCSVTable_mAEDB57634F3EE756FBAEAFB62563D5FFA548464F(/*hidden argument*/NULL);
		__this->set_reprojectionerrortocsv_10(L_0);
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
// System.Void lookuserposition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookuserposition_Start_mDE288E8BB7426D9B0EDDCE9A1A25386B701686B5 (lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40 * __this, const RuntimeMethod* method)
{
	{
		// old_localscale = follow.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_follow_5();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		__this->set_old_localscale_6(L_1);
		// }
		return;
	}
}
// System.Void lookuserposition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookuserposition_Update_m7E80F6C10DEAB3ACBE664A9A0D48D964F0B77641 (lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// GetComponent<Transform>().LookAt(lookat_camera);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_lookat_camera_4();
		NullCheck(L_0);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_0, L_1, /*hidden argument*/NULL);
		// transform.position = follow.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_follow_5();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// new_localscale = follow.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_follow_5();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		__this->set_new_localscale_7(L_6);
		// if (new_localscale != old_localscale)  // �s���Y��j�p�������ª� �N��������
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_new_localscale_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_old_localscale_6();
		bool L_9;
		L_9 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		// float Scaleratio = new_localscale.x / old_localscale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_new_localscale_7();
		float L_11 = L_10->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_old_localscale_6();
		float L_13 = L_12->get_x_2();
		V_0 = ((float)((float)L_11/(float)L_13));
		// transform.localScale = transform.localScale * Scaleratio;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		float L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_18, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// old_localscale = new_localscale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = __this->get_new_localscale_7();
		__this->set_old_localscale_6(L_19);
		// }
		return;
	}
}
// System.Void lookuserposition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookuserposition__ctor_m6059DDBFFAEF477C7E5482D45C6571E5B19A4297 (lookuserposition_t9EB98893D8892FC5A705CCC35B3DD623EA1B5E40 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * DataTable_get_Columns_m66DC96CA636190222E4C2B8C6943C7A19D86A2C6_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method)
{
	{
		DataColumnCollection_t543E57724C598CD27A55604B73110804617F5820 * L_0 = __this->get__columnCollection_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * DataTable_get_Rows_mC6575B470D25D4554F306B11DF527C3808FB81BB_inline (DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * __this, const RuntimeMethod* method)
{
	{
		DataRowCollection_tFC565C4737B3CCAA82BCB904DF13A3BCD2809310 * L_0 = __this->get__rowCollection_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerConnection_GetInteractivedata_m841C63F3A2C2DA09BCAB58F561F6C2E83A3C1FB2_inline (PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * __this, const RuntimeMethod* method)
{
	{
		// return _Interact_data_json;
		String_t* L_0 = __this->get__Interact_data_json_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_PosX_m0300722B7AAE342FE4C9F221E7DD1041248089BA_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float PosX { get; set; }
		float L_0 = __this->get_U3CPosXU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_RotX_m6048AC62F2B9C6BD83E4E428311167C9C7208F0C_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float RotX { get; set; }
		float L_0 = __this->get_U3CRotXU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_ScaleX_m07D27C5CA4151BC1F20677F19732C6B5CA3B7D62_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float ScaleX { get; set; }
		float L_0 = __this->get_U3CScaleXU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_PosX_m2DDE0FA8343FF1D191E4193F4491DD04D75229E5_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PosX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CPosXU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_PosY_mF53EC8EE645EC8386648A03E1EBD06F2927E1AFA_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PosY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CPosYU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_PosZ_mF9E19DC4B62E2A3BEA5866213110AE4D5DF855FB_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PosZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CPosZU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotX_m83B3CA2DB9EDD17D031C19CD723C5A3516F67B9D_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotXU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotY_mA75BC4286017E7CE2CF5EF81297FC4D14F7706AC_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotYU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotZ_m85019EEDBFCE7A2C6F9AFD522C6687C78B2558FE_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotZU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_RotW_m53E1CA91AF9271D694A2AEBC999C15118BF364F1_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RotW { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRotWU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_ScaleX_mE50C7E009017AF0DCCDFF776917B7F43179C6E86_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ScaleX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CScaleXU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_ScaleY_m8C5876EEB40FE029041E7C767FF27F2D8C4C71D8_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ScaleY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CScaleYU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_transform_set_ScaleZ_m0F4299BD7711044C647B883CA36D2CDA0E03CD44_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ScaleZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CScaleZU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_PosY_m13C076F2E7DE7E68AE5A8BBA2C8868829284F2D9_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float PosY { get; set; }
		float L_0 = __this->get_U3CPosYU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_PosZ_m4A5E3DFFF2A9D7F34E17141EB6B603FE184187D5_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float PosZ { get; set; }
		float L_0 = __this->get_U3CPosZU3Ek__BackingField_2();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_ScaleY_m0361F1DE06E2956C4B1125A413DE1F1E952F6D8B_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float ScaleY { get; set; }
		float L_0 = __this->get_U3CScaleYU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Object_transform_get_ScaleZ_mF4DC034D699E3629277BC173C92F7B99820B74E2_inline (Object_transform_t06F2BC9F775ABA7C9A7C2B9BF2A03AA2877E9373 * __this, const RuntimeMethod* method)
{
	{
		// public float ScaleZ { get; set; }
		float L_0 = __this->get_U3CScaleZU3Ek__BackingField_9();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerConnection_GetReceivedDataFromServer_m9F65E72D2689C4D457B38ADA216B83008F18E99E_inline (PeerConnection_t9D4265B0497FBD310E5F171304F818A32C254BC3 * __this, const RuntimeMethod* method)
{
	{
		// return _Receivedfromserver;
		String_t* L_0 = __this->get__Receivedfromserver_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_x_mE68FD20A0898A56B8C905E771328D20DD986FC25_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_x { get; set; }
		float L_0 = __this->get_U3CObject_OriginalPosition_xU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_y_m5CB0CE272CC06939244BE253C9041956B18C5F95_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_y { get; set; }
		float L_0 = __this->get_U3CObject_OriginalPosition_yU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_OriginalPosition_z_mABF404F3028F5FCFCEF08C8B03DD258ED29E5431_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_OriginalPosition_z { get; set; }
		float L_0 = __this->get_U3CObject_OriginalPosition_zU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_Screen_norm_x_m06A7AA56F20687DBB405F3B0E7B7A784938E5240_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_Screen_norm_x { get; set; }
		float L_0 = __this->get_U3CObject_Screen_norm_xU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Caculate_Reprojection_2D_get_Object_Screen_norm_y_m1E1CA261734E8AC1498C7B99CB6BD6B38CD20812_inline (Caculate_Reprojection_2D_t3AF71243CFDF925F0A1DD042F220FDC1EDB3F061 * __this, const RuntimeMethod* method)
{
	{
		// public float Object_Screen_norm_y { get; set; }
		float L_0 = __this->get_U3CObject_Screen_norm_yU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * Control_user_position_GetRawData_m909A53DFD71BC3501246447956788AEF5DA3AB50_inline (Control_user_position_tF0BD86EA6653351B2BC53FC1CED0B3583A647907 * __this, const RuntimeMethod* method)
{
	{
		// return trace_raw_data;
		DataTable_tDBA400EA08E60C6C79DA5033C245F9252AB48827 * L_0 = __this->get_trace_raw_data_6();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
