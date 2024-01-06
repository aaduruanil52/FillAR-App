﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2AB2F09285677DDC3A0A75E97B5A7492F1E236C9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t69734EC5CF354F3B1434F2527067B631D09E1D27;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_tD2936860D0DBBB809F916DD79F6A1FDA961C3185;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t9503DE0744217071D554CC415B2890C454070024;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_tE6688B1D0092F017DF2F4826CC5D84C949D2429E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.PropertyMetadata>
struct KeyCollection_t955DF6F14659134D09E141EB4425AF8F55F679AA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t5DAF380E2438DEBAE74A7EE923FDFEEE1C5BDC80;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t9467C64146E0E28B1B96A0A953D40232244C1EF5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t011DD148DD1E459C54D3B86D436275360A0B864A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t2268EDE7A9B4F936A672B3380267DF730779A1B2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_t5B6745FEC66770915D98FF9337430E39F2C7F596;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_t5E5ADF12F5CBD0ACE41CD4E6FDE74FC9A04FABCA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.MethodInfo>
struct KeyCollection_t8D45DD26CAEC5F17F2CEEBE8D6F33B09D3E41E54;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_tF98E87A008809415D6AB6F9C787C311786D2F016;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_t59C53309B419C328FC0837737FEF760AE047CD0D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.PropertyMetadata>
struct ValueCollection_t32358315F68FC5BD948EBFB7C6EB843D1BAE6BC9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t83E53BA3EA08DD561AC7C5EDB4531AD216CFCE61;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tAFECE5DF6F1FB1BEF304EAA61C4F731E871A681B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_t8110CF124D20114B9F5705E2434F2DDFE505CC3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t62026A81D00FB49C8EE60A7D152FE7BCE160AAE3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_t9DEC1A402FF8D1E7F33F67FF13F0D9C8B3AB434C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_tF7998DF06D1D07D517739DA512466779BCC73787;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.MethodInfo>
struct ValueCollection_tA395C0460635906E16AC5F8593D8BCB9A6C656B3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_t2C9CB7257121A667C1587DCE644D26B187E0D6B5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_tFFD6B8317B8A4EC04C0CA2219BB927484E757C66;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.PropertyMetadata>[]
struct EntryU5BU5D_tA7A095FC67289B7550B389A45FAEAD876ABC79DB;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_tDB5466124978048AEE7EB5E0E3E00A17730CCD48;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_tBE94ACF469E632D10D12216E35F0F03019768F7C;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_t6571231E1804E10DF85CA83869BEEB713E4A4DE2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t0761EEEEF2622AAB5B39E69A7492D75B065C58D6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tABDBD24101DD7CE5A8D84BB5879160B31EAC148A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_tB852E8F817BCE8CDD4C6979579F1737AB30EF83B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.MethodInfo>[]
struct EntryU5BU5D_t6D60396D99C16167704D8C5FDCA8092D8EDBAA19;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_tDE228C379B6987B7CBBCC56E46244D08D332886F;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_tD567A773BB79854B9F60CD456C76D7B0FFC5D67F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Globalization.CalendarId[]
struct CalendarIdU5BU5D_t559EDBF1B819A695624BE9004EAA4FFA38B65CDA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t188E4B690F13A24B3486BD318C767E9BECCE3D72;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t74226C57698FFA61D8846D575CF58DC855C9CD07;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_tBFF8768BDE5F671BEEE483FBAF7A92CB6D8DE657;
// System.Globalization.DateTimeFormatInfo/TokenHashValue[]
struct TokenHashValueU5BU5D_t3F8794937D04BA380989A813F33418CED58E80B9;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// LitJson.ExporterFunc
struct ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// LitJson.FsmContext
struct FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// LitJson.IJsonWrapper
struct IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// LitJson.ImporterFunc
struct ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// LitJson.JsonData
struct JsonData_t3C51D89A19D30A47A74617107D861959322307F1;
// LitJson.JsonException
struct JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76;
// LitJson.JsonMapper
struct JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A;
// LitJson.JsonReader
struct JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD;
// LitJson.JsonWriter
struct JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F;
// LitJson.Lexer
struct Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LitJson.WrapperFactory
struct WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD;
// LitJson.WriterContext
struct WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F;
// LitJson.Lexer/StateHandler
struct StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t3D10824E2D7EC716BB4188AE53FF69437B9FDED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD9AFA6DDEDB81906ED90E6DD2E1A6E8CB9A28A97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE4324299D87C0ED69EFF6083103E594ED9299AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDFAB6A0EC1A6A40B5D759F32652B70BD609099EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t05B5613D1899393C5D9EB2B8AE7E874C4C23ED6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrderedDictionary_t4705C37EB66554997A0F3C58A92EE8E202BD46E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B3DDD3A07U2D2147U2D4FEAU2D81FAU2D4CA2055D6051U7D_t526943E2ACE10CEE21477D148F99E8FC3CB9B620____U24U24method0x60000fdU2D1_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4852B6F2412388B50C99BF806BFE926E4FFEA5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral13026DD559AA5A6B131F15B7DB4105EA898DA4D9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F;
IL2CPP_EXTERN_C String_t* _stringLiteral3898E7D2C1147692B865B70C530E4BB2264D9234;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC;
IL2CPP_EXTERN_C String_t* _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59;
IL2CPP_EXTERN_C String_t* _stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7;
IL2CPP_EXTERN_C String_t* _stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18;
IL2CPP_EXTERN_C String_t* _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6E8D33884A8AB4625102A8EEE80D34FD589540;
IL2CPP_EXTERN_C String_t* _stringLiteralAC752DDD9E7D71113EA72864BE92198866B1D658;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AF6981667F40A32E02D8E30F7F87E6D80E0C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B624A34AE5F3AF1DE39F5AA12C5DBF59299E28;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5DF53EB5CC9A30D6CA4EECD8F9C4882ABF00BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E5EFDC670ACA0D3155DEFB95477AD16E9744EB;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetBoolean_m02229DB77CB8074F0F2ED898D0CE29BA4350B95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetDouble_mBB4264E6B18E4DF17A4B00CB0BFE838A3895AE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetInt_mC20A4D6F04A93056C1FB067C68E092AA4CE13BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetLong_mC36169157591BD9D3A60C529659D4F6EF01A268D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetString_m6EA810BD49C5125077D92E11DFEC4AFE0A4235E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_m9E5C2463B2821FC2B3BE28F28F1050AE388902F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_m389DEBABD818E04A433759932BFFBB6C8DECC283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_m444E2C3E2FE42A6BC0A9454C74585FFA24E8F395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_mAC17002F29B9DEBA81C4E2CA2E3C83A575CC8AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_mB5E8ECE544C1830F13C28704AFED581B4AD8D7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_mD6A6341149649429139302E36DA4015EBBE11483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__0_m06C611AC1B21B2B2D22F76109BBE9F16CEB8A691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__1_mEAB9A1760CAEB1242812550E34C9FA185797EC95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__2_m4BEDC5323CACFD8DCFCCC07B1CC88068D36C3362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__3_m73B2E427BE9413236EAD03EB6417F29175E0D002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__4_mC9DCEB5070FA64DEFE2C830A1C438C05D949DECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__5_m520FB64B8443EC6A5DB8F854C0836BF010B432FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__6_mD2983EB27BD56A74150CBC7D8063C5657C40DB08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__7_mF5D343FB6F085DCA6FC5797E46ADC55180E05EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__8_m3D0AEBED5249ACD3226D595A43B4EE20B0B7DF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__12_m6F915B86FBBE26579F088CA3C2CC91B6822151DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__13_m3F25E4D0E235EFFDA9B7FB0DCB9783BB2F2A04B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__14_mF93E077A326543128DD876F5A124FC81CC37AC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__15_mE80BA1C173613F4CFA096AB1E4E63A5AA0C58A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__16_m63126AE5AB858470E651A06A14D36A41EFDAFDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__17_m235D04321169E9DD5EC9B3BABA5DA049FC5DB3FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__18_mD7EF04CA834226EE1E76BABD0FCFB4F6BE07D123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__19_m94BC9C68569BC1312FC39535CEECDC6CDA7E6F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1a_m46E727A21A70E5CE96F215B40D55F1A0CAA3D183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1b_mA86A8A5AAA8F4BD7BCDD2FBE1C45A27DA42EF222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1c_m9275830DAACF4BC7F1F1C71DF086E6FAC12AB361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m6F0A122A4C4F259BFAC9F46CA3A00BD7E0C778A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Eb__2a_m595042FE91079811032C5FC0EFFC7872C798C574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Eb__2c_mD6E4E518F51DEDF984F4260B69492922AD32BB85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Eb__2e_m8957ADDDDA8C9BD22F54FEE42E33C5996370D503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_mE9C9CDAB67FCC717E3EAE2AB97B51B26B8199283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_m706E077BD4C9AE462E7C9EB12B3FD361E404AC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m372B0999B2F0E88435FB4C4A140980FFDE8128E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_m4D2684CC9DCEE21BF734584FCC28C30416390198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_mE0FB489B9C85DEDF18109DE6CE8C25AD50678C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_m8DCD84F0B4130236E2B748777D9E63B8A84AAFEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_m311A50C30974F841F3A237E0B6879D25360154A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_mF42066845C438DE0DD4917074C9EECE7113DFD5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_m692E6E4F5CBBB749110B781F5CAEAF721990F224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_m17E195B888DEA1039C711F01A178F30EF03E39B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_mEAB1F6743FE216AA6A36A8094977CC2AF2B599FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_mBCFFE062E69B7C18CFF17B80210FD3C7F952A5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_mD0C30E42D81F282FBA5AA2F5603633CFFE0027EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_m98AD03EF8F075A2D644062ADA11A5F79D65A7CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_mB258C7FE0738774467E7B05296EEBCE447163FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_mCAD0C2571A7AE5C165AF88B35DD80077200B831E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_mC449B53D5EC65C8643AB027E729C3317127B3E71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_m714CB3B46761AFEFF217D0485B359DB10DE8C0A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_m4DFEE256AFD77A734E1C73C7659D312B42F0AF9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_mAD2C07B80833DA608B19B82385B2D6DC68FC2B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_m88781D4933F4F529CEC53DE1822016DA9489F02D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_m2288BD52F34928FEA34C67E13A8FC9AEB4F1A79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_mB6C181BB8BFBCD315F4B6B5A870C2B9859AC0ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_m879D96EB296293273384EFBE554D525344868882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_m48D4E33D1ABCA97802D1B3711A05E75DFF27A56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_m06BE99ECE371574D2DED8666DBDDCDE5A52BEA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_m654DEAE3558CDB7FC23CEF56D2FCB59B749793E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_m6FC3DC3CCB04275E724A911A2087180B082FC9F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t625F4EE40CDF76E63929DA3A0864C5AEF068DCF1 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFFD6B8317B8A4EC04C0CA2219BB927484E757C66* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE6688B1D0092F017DF2F4826CC5D84C949D2429E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t59C53309B419C328FC0837737FEF760AE047CD0D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA7A095FC67289B7550B389A45FAEAD876ABC79DB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t955DF6F14659134D09E141EB4425AF8F55F679AA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t32358315F68FC5BD948EBFB7C6EB843D1BAE6BC9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDB5466124978048AEE7EB5E0E3E00A17730CCD48* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5DAF380E2438DEBAE74A7EE923FDFEEE1C5BDC80* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t83E53BA3EA08DD561AC7C5EDB4531AD216CFCE61* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBE94ACF469E632D10D12216E35F0F03019768F7C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9467C64146E0E28B1B96A0A953D40232244C1EF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAFECE5DF6F1FB1BEF304EAA61C4F731E871A681B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6571231E1804E10DF85CA83869BEEB713E4A4DE2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t011DD148DD1E459C54D3B86D436275360A0B864A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8110CF124D20114B9F5705E2434F2DDFE505CC3A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0761EEEEF2622AAB5B39E69A7492D75B065C58D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2268EDE7A9B4F936A672B3380267DF730779A1B2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t62026A81D00FB49C8EE60A7D152FE7BCE160AAE3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tABDBD24101DD7CE5A8D84BB5879160B31EAC148A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5B6745FEC66770915D98FF9337430E39F2C7F596* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9DEC1A402FF8D1E7F33F67FF13F0D9C8B3AB434C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB852E8F817BCE8CDD4C6979579F1737AB30EF83B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5E5ADF12F5CBD0ACE41CD4E6FDE74FC9A04FABCA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF7998DF06D1D07D517739DA512466779BCC73787* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6D60396D99C16167704D8C5FDCA8092D8EDBAA19* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8D45DD26CAEC5F17F2CEEBE8D6F33B09D3E41E54* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA395C0460635906E16AC5F8593D8BCB9A6C656B3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDE228C379B6987B7CBBCC56E46244D08D332886F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF98E87A008809415D6AB6F9C787C311786D2F016* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2C9CB7257121A667C1587DCE644D26B187E0D6B5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tD567A773BB79854B9F60CD456C76D7B0FFC5D67F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tD567A773BB79854B9F60CD456C76D7B0FFC5D67F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_t188E4B690F13A24B3486BD318C767E9BECCE3D72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonDataU5BU5D_t188E4B690F13A24B3486BD318C767E9BECCE3D72* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_t74226C57698FFA61D8846D575CF58DC855C9CD07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PropertyMetadataU5BU5D_t74226C57698FFA61D8846D575CF58DC855C9CD07* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_tBFF8768BDE5F671BEEE483FBAF7A92CB6D8DE657* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A  : public RuntimeObject
{
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ____cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::_name
	String_t* ____name_2;
	// System.String System.Globalization.DateTimeFormatInfo::_langName
	String_t* ____langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::_cultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_abbrevEnglishEraNames_41;
	// System.Globalization.CalendarId[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	CalendarIdU5BU5D_t559EDBF1B819A695624BE9004EAA4FFA38B65CDA* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::_isReadOnly
	bool ____isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.String System.Globalization.DateTimeFormatInfo::_fullTimeSpanPositivePattern
	String_t* ____fullTimeSpanPositivePattern_49;
	// System.String System.Globalization.DateTimeFormatInfo::_fullTimeSpanNegativePattern
	String_t* ____fullTimeSpanNegativePattern_50;
	// System.Globalization.DateTimeFormatInfo/TokenHashValue[] System.Globalization.DateTimeFormatInfo::_dtfiTokenHash
	TokenHashValueU5BU5D_t3F8794937D04BA380989A813F33418CED58E80B9* ____dtfiTokenHash_52;
};

struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_StaticFields
{
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_invariantInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_invariantInfo_0;
	// System.Char[] System.Globalization.DateTimeFormatInfo::s_monthSpaces
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_monthSpaces_46;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_jajpDTFI_80;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_zhtwDTFI_81;
};

// LitJson.FsmContext
struct FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1  : public RuntimeObject
{
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;
};

// LitJson.JsonData
struct JsonData_t3C51D89A19D30A47A74617107D861959322307F1  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;
};

// LitJson.JsonMapper
struct JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A  : public RuntimeObject
{
};

struct JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields
{
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject* ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject* ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject* ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject* ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject* ___static_writer_lock_15;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate9
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegatea
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegateb
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegatec
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegatec_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegated
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegatee
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegatef
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate10
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate11
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_24;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate1e
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate1f
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1f_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate20
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate20_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate21
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate21_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate22
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate22_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate23
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate24
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate25
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate26
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate27
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate28
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate29
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_36;
	// LitJson.WrapperFactory LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate2b
	WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_37;
	// LitJson.WrapperFactory LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate2d
	WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_38;
	// LitJson.WrapperFactory LitJson.JsonMapper::CS$<>9__CachedAnonymousMethodDelegate2f
	WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2f_39;
};

// LitJson.JsonReader
struct JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject* ___token_value_12;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_13;
};

struct JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;
};

// LitJson.JsonWriter
struct JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F  : public RuntimeObject
{
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t* ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer_10;
};

struct JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields
{
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___number_format_0;
};

// LitJson.Lexer
struct Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9  : public RuntimeObject
{
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t* ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;
};

struct Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields
{
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* ___fsm_handler_table_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// LitJson.WriterContext
struct WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F  : public RuntimeObject
{
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value_1;
};

// LitJson.ArrayMetadata
struct ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D 
{
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t* ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;
};
// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke
{
	Type_t* ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com
{
	Type_t* ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// LitJson.ObjectMetadata
struct ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 
{
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t* ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;
};
// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke
{
	Type_t* ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com
{
	Type_t* ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// LitJson.PropertyMetadata
struct PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D 
{
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t* ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t* ___Type_2;
};
// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke
{
	MemberInfo_t* ___Info_0;
	int32_t ___IsField_1;
	Type_t* ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com
{
	MemberInfo_t* ___Info_0;
	int32_t ___IsField_1;
	Type_t* ___Type_2;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>{3DDD3A07-2147-4FEA-81FA-4CA2055D6051}/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_tBA02B4535E5DECAB20B4D951C0E02543FCD54762 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tBA02B4535E5DECAB20B4D951C0E02543FCD54762__padding[112];
	};
};

// <PrivateImplementationDetails>{3DDD3A07-2147-4FEA-81FA-4CA2055D6051}
struct U3CPrivateImplementationDetailsU3EU7B3DDD3A07U2D2147U2D4FEAU2D81FAU2D4CA2055D6051U7D_t526943E2ACE10CEE21477D148F99E8FC3CB9B620  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3EU7B3DDD3A07U2D2147U2D4FEAU2D81FAU2D4CA2055D6051U7D_t526943E2ACE10CEE21477D148F99E8FC3CB9B620_StaticFields
{
	// <PrivateImplementationDetails>{3DDD3A07-2147-4FEA-81FA-4CA2055D6051}/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>{3DDD3A07-2147-4FEA-81FA-4CA2055D6051}::$$method0x60000fd-1
	__StaticArrayInitTypeSizeU3D112_tBA02B4535E5DECAB20B4D951C0E02543FCD54762 ___U24U24method0x60000fdU2D1_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_6;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_7;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// LitJson.ExporterFunc
struct ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A  : public MulticastDelegate_t
{
};

// LitJson.ImporterFunc
struct ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5  : public MulticastDelegate_t
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// LitJson.JsonException
struct JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// LitJson.WrapperFactory
struct WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD  : public MulticastDelegate_t
{
};

// LitJson.Lexer/StateHandler
struct StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93  : public RuntimeArray
{
	ALIGN_FIELD (8) StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* m_Items[1];

	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCEB6C060836E9A15E6584CAFDA2353C41305B5A2_gshared (Dictionary_2_t2AB2F09285677DDC3A0A75E97B5A7492F1E236C9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m815B02A88DDC854D31CBCC02495BCB38F8132F91_gshared (Dictionary_2_t69734EC5CF354F3B1434F2527067B631D09E1D27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA3312DE46C49623D0AA69BF312E3D826D541F80D_gshared (Dictionary_2_tD2936860D0DBBB809F916DD79F6A1FDA961C3185* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_gshared (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m59A660054922D869F9CC95947848D1829AD2680C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8 (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_t3C51D89A19D30A47A74617107D861959322307F1* KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28* __this, const RuntimeMethod* method)
{
	return ((  JsonData_t3C51D89A19D30A47A74617107D861959322307F1* (*) (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_mA02E81165515B6A3FC71FC03A85734E9905FE450 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m36490E724869C57CC7CCDBA30430FCB5A3E4602A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_m094B3A225B2B50F0123D1BAB1012D5E652C200B7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_m082D69215FD4794AF4B026BFEB5BF72A6FD1CEBD (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m5F2D19AC3F87FB3D76F1FDAA9D6B2CF3564977FF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___prop_name0, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683 (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28* __this, String_t* ___key0, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28*, String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m874D334A667986B4FBC1515687EF6B551D71FAE8 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mEB4115AF975189279CB57527850DDAD9230D3D2B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, bool ___boolean0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m8A0A37263CACAC98E364B72BDF9929433707D6F7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, double ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m53BBD8B0DF27C525C5CD4BFD9E5C2EC09A106F78 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mB54717B470C1218DF181039F1A12F9BACD000462 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int64_t ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9FAA8A904760EDD166AA91A84184FB51FB68E3F3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m658608ADAC4FD37098A16F86171C6BEDAE6E4C30 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m179225C968B6EE68507BB3694882E41DA05DA4C4 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer0, const RuntimeMethod* method) ;
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mA88DA1756863A2C121F7D72986EDF2EF6E0B88E1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mE835230F6C9BF7EBC082A282BE74976A450B07A1 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111*, const RuntimeMethod*))List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___boolean0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, double ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int64_t ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_m8F61FD23A1ABE09D1F7C1B1D12A7B5E778D8E377 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___property_name0, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Int64::Equals(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E (int64_t* __this, int64_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9 (bool* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_mD2E0B7A30035474EB30FC5AB71B4C299E0C9124A (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m481B0251BEC0BF28EAAF3FCB11A47EFCB2E56E2A (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Type LitJson.ArrayMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.ArrayMetadata::get_IsList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Type LitJson.ObjectMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7 (Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053*, const RuntimeMethod*))Dictionary_2__ctor_mCEB6C060836E9A15E6584CAFDA2353C41305B5A2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65 (Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825 (Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914*, const RuntimeMethod*))Dictionary_2__ctor_m815B02A88DDC854D31CBCC02495BCB38F8132F91_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8 (Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mFF4C2DE4CAD061714750C2D87291FCF9D0AE4EF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277 (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49 (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_m31C6508EF93075526140A044605434AE9A874197 (const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mDFBB980B15CC881AD4401AD50D139DAD5D127211 (const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetInterface(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetInterface_m536A2DE796291194A1EAE035EE3742D3A220854E (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor()
inline void Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348 (Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954*, const RuntimeMethod*))Dictionary_2__ctor_mA3312DE46C49623D0AA69BF312E3D826D541F80D_gshared)(__this, method);
}
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
inline void List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8*, const RuntimeMethod*))List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::.ctor()
inline void Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227 (Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA (Type_t* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types1, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method) ;
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_m6AC36749AA2CE7BCC5416CA230C0E5B4BDCFF4DB (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* JsonMapper_GetConvOp_m8E2CB140B5C452FFCA01CE3473EA140680BD7655 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddArrayMetadata_mF2DFCA02974ED8053E884A6DEFDAF373CDD34077 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9 (Type_t* ___inst_type0, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader1, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m40F80F4A7A05B492BC5A19CEFB7F9AE8641FDE2C (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddObjectMetadata_mD956882CC274A9E8FD93B9E279D0072E8D7A9B5E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_inline (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m7C6ABAA922393ADAF61D1025667012FCBD84B2A4 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___factory0, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader1, const RuntimeMethod* method) ;
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1 (RuntimeObject* ___table0, Type_t* ___json_type1, Type_t* ___value_type2, ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___importer3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5 (Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method) ;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) ;
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_m82EA340BC4D4652783F7D2408BF02A945F0F90DE (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, uint64_t ___number0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m98D3E5C9E6ED60B7024D640BB347B03BC904D0A8 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mCFA289C24C9ECEE98AD50E970F0D1F032F7E1989 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m13693B577CD98D95C8660D318C8609C9FC5BDFBD (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___factory0, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m796FB622ADB958C9EC9B9F937C12B72B6424DE3A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_mC6BB77AC0184D0FAAB5585AB289F379D7A468C68 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___factory0, String_t* ___json1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mA7B3448630453E385BCAADCA985410AFFCE4ACC3 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___json_text0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD6F4F8BC8041480EBBF52F8CA11D1386A5EE019D (uint8_t ___value0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m58C791495049866C9E7439FBF2A14A402F1C81B6 (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m0AB90DC9AD2EF0AA0A6146013665DC60A8C52702 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m2042A55B478D11A2C4BB399CE96C17DB3D85133A (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___number0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m14B15FFD8B821CBF1EB2641AAEF7CB00157D9B8E (int8_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFE6E311A5AE91912673E6C7026A4A5C19C2C0F9B (int16_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCB03F1E460F2D07CB009ACAFDB2DB0D9B5D97B2B (uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mFBB976BA9AB1A83325F642219BF1D8F04030768D (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mFF10E9758B7414E9C187C95ECB27FB1DFD7904B2 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7899B63591257E56EC9B6BFB19396C3890F41233 (int32_t ___value0, const RuntimeMethod* method) ;
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m48FEC408BB749C81B91BAB51AC744EF05C7B1B25 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m01293E1E7E09858C74DE663E5EE1819A5D75FADB (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m574A6C8E905EEADA4FC733AE24C6DFCB8CAB0017 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m7E15E7E39C7E0835A13F3D3D54CB1723D7BF17E3 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mB562D40271078F5561C203FB30E15B8913667C2C (int32_t ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mD35A1BDDC7FE214E53E1B57C867B50B6BB5E61B9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m0817E542B617E7D00740EBA8687EA52092CED34C (double ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m9F3F4B62B8DA5A3EDC7FDD1A9893259C745DABE6 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF72D47BC87DE73EFF5A7F04046BFAF064FEB0100 (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m0CD0FAC3FF3ED01FFEA1264742D5E4BDAC79EA4A (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_AllowComments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m5A58DFFED8E9B63E82FC8500B6393B0DA39F23F4 (const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, bool ___owned1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___item0, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mEF8BD28E77BCC5B98C34C9CE51CD2DCF786CA5A9 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0 (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5 (int32_t ___rule0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8 (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___symbols2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mF3EF4D91F87594C1D6357FDE08D539DDB66A624D (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___number0, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m91AEDB0DE517F63898D830A3140B83032CFE8F2F (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m0E855A59E8E386619529E923A6A9BABFEE63769C (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD12D72A1D7949F48B846F1207BFA40EB8CB61E23 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___token0, Exception_t* ___inner_exception1, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m08BD3BFBBBE015F2EDCF6DE969ACFB327E453621 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8 (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7 (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037 (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(T)
inline void Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___add_comma0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mB090F938B611EE6CCB40B9C3F927DF0C6FBB8E04 (int32_t ___n0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65 (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___cond0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m968749D791BDDE9D6ECB2D71DDE205221B27953D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7E8CB36CAB0CAC9E6E8D7C3CA8238A6A2D8E8D06 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mF003FE14E8D6095D655814A1DB1CA3D8C43DCF56 (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC566A684B01894703BF5DD80425842A7B1DF6C (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2 (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_inline (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mA6807F50C0EB8FD7919FF140A627A42EF12735CF (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m65740EA47916AE8C2881DD66B2EEE0CECA3E7189 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1 (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m1EF36F1E5B61DCFE71F987C70606B141D271E042 (int32_t ___esc_char0, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m6D77ABB764E4A6FD645FD2FABF57AAF9DE1FF261 (int32_t ___digit0, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m4416B29A729201704EF5494475D04A81665E7D9D (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_inline (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m267C4D3DA6783E685C755BEB2B354A15AB620363 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___c0, const RuntimeMethod* method) ;
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
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m59A660054922D869F9CC95947848D1829AD2680C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_mA02E81165515B6A3FC71FC03A85734E9905FE450 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)7))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m36490E724869C57CC7CCDBA30430FCB5A3E4602A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_m094B3A225B2B50F0123D1BAB1012D5E652C200B7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_m082D69215FD4794AF4B026BFEB5BF72A6FD1CEBD (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m5F2D19AC3F87FB3D76F1FDAA9D6B2CF3564977FF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_m1928821DE12D36BC1ADD18A8640515E26712421D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = JsonData_get_Count_m59A660054922D869F9CC95947848D1829AD2680C(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_ICollection_get_IsSynchronized_m916ECDC97D55234918E33C68EBC7096AC3E9BB8C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_ICollection_get_SyncRoot_mBAB43E3293672F6EB626FA687E552B51DC2F1FC2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m5783EEBDE15601AB8FA90FD9A02B26AEB3176026 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Collections.IDictionary::get_IsFixedSize() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m4DDCFBDE28ED5393BC1DC2871B454D50271BB4BB (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Collections.IDictionary::get_IsReadOnly() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_get_Keys_m09C045695EBC903E21448D3DA5A9A5D787683D96 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___object_list_9;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001b_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_6);
				V_1 = L_7;
				RuntimeObject* L_8 = V_0;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
				NullCheck(L_8);
				InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_8, L_9);
			}

IL_002f_1:
			{
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		RuntimeObject* L_12 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_12, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}
}
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_get_Values_m5C4630F668BCD06DF24FF2A25D78D1A52D249099 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE4324299D87C0ED69EFF6083103E594ED9299AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* L_1 = (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*)il2cpp_codegen_object_new(List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8(L_1, List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___object_list_9;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001b_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_6);
				V_1 = L_7;
				RuntimeObject* L_8 = V_0;
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_9;
				L_9 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_1), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
				NullCheck(L_8);
				InterfaceActionInvoker1< JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.JsonData>::Add(T) */, ICollection_1_tE4324299D87C0ED69EFF6083103E594ED9299AF1_il2cpp_TypeInfo_var, L_8, L_9);
			}

IL_002f_1:
			{
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		RuntimeObject* L_12 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_12, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsArray_mF1E13B321569EA63CC1429F47E30E838F263BE9E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_mF6F37DE23B41831D7D996A6ED00A164098F9FD41 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsBoolean_mA02E81165515B6A3FC71FC03A85734E9905FE450(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m7370BEC0CE2BD5F1011A3C2F3DA91E314B9D1405 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsDouble_m36490E724869C57CC7CCDBA30430FCB5A3E4602A(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsInt_m6EEE905B9FCDCECB3CCC9B6207FC84E4B4FBB563 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsInt_m094B3A225B2B50F0123D1BAB1012D5E652C200B7(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsLong_m7A3DDB112C21CD0030A7C0212527DA234A00A836 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsLong_m082D69215FD4794AF4B026BFEB5BF72A6FD1CEBD(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsObject_mA27D82C6D4234AB1CE3241FE4CE50ECDD8B1B52E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsString_m77BD58710E042B213612CF4E51BAE0BF03EA9DD3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsString_m5F2D19AC3F87FB3D76F1FDAA9D6B2CF3564977FF(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsFixedSize_m5E943C4DE3DD920E91CD7C1F2E53192FA28200AE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_m6E271699DD735D2E1123085A3508AC27D735C4F7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_get_Item_m8E67E7723DA1D430AC2E2DDD1E592C708EFFB032 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_m9E5C2463B2821FC2B3BE28F28F1050AE388902F9 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_m9E5C2463B2821FC2B3BE28F28F1050AE388902F9_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___value1;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3;
		L_3 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = ___key0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_5 = V_0;
		JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m62C54CDE0A105AAF22FB8D88C5A04C18C9D592A8 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___object_list_9;
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_3;
		L_3 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4;
		L_4 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_mC21FB1501163CB204909FBB6A265534ED43AF14A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___idx0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___value1;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___object_list_9;
		int32_t L_4 = ___idx0;
		NullCheck(L_3);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_5;
		L_5 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_3, L_4);
		V_1 = L_5;
		RuntimeObject* L_6 = __this->___inst_object_5;
		String_t* L_7;
		L_7 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(TKey,TValue) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_10 = V_0;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_2), L_9, L_10, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_11 = __this->___object_list_9;
		int32_t L_12 = ___idx0;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_13 = V_2;
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IList_get_Item_mD896EB10F113D680EDFBC3D495131B2FCDEC55EF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_mB7EAC712FD88B435CF5D885BF0A678B09C19C60E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___value1;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___index0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_0;
		JsonData_set_Item_m874D334A667986B4FBC1515687EF6B551D71FAE8(__this, L_3, L_4, NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_get_Item_m6A08F7BE15696506EC603C2464772EE42AC216E7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___prop_name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___inst_object_5;
		String_t* L_2 = ___prop_name0;
		NullCheck(L_1);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3;
		L_3 = InterfaceFuncInvoker1< JsonData_t3C51D89A19D30A47A74617107D861959322307F1*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Item(TKey) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___prop_name0, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		String_t* L_1 = ___prop_name0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2 = ___value1;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_0), L_1, L_2, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->___inst_object_5;
		String_t* L_4 = ___prop_name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(TKey) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_0022:
	{
		RuntimeObject* L_6 = __this->___object_list_9;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_8;
		L_8 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_2), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		String_t* L_10 = ___prop_name0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_12 = __this->___object_list_9;
		int32_t L_13 = V_1;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_14 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		goto IL_006d;
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->___object_list_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_006d;
	}

IL_0061:
	{
		RuntimeObject* L_19 = __this->___object_list_9;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(T) */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_006d:
	{
		RuntimeObject* L_21 = __this->___inst_object_5;
		String_t* L_22 = ___prop_name0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_23 = ___value1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(TKey,TValue) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_get_Item_m86C371130EC3E4EC35A09E33C860CD825276A10D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		int32_t L_1 = __this->___type_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = __this->___inst_array_0;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4;
		L_4 = InterfaceFuncInvoker1< JsonData_t3C51D89A19D30A47A74617107D861959322307F1*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LitJson.JsonData>::get_Item(System.Int32) */, IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_001d:
	{
		RuntimeObject* L_5 = __this->___object_list_9;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_8;
		L_8 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m874D334A667986B4FBC1515687EF6B551D71FAE8 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		int32_t L_1 = __this->___type_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->___inst_array_0;
		int32_t L_3 = ___index0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,T) */, IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_005b;
	}

IL_001f:
	{
		RuntimeObject* L_5 = __this->___object_list_9;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_9 = ___value1;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_1), L_8, L_9, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_10 = __this->___object_list_9;
		int32_t L_11 = ___index0;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_12 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->___inst_object_5;
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_15 = ___value1;
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(TKey,TValue) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_005b:
	{
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mEB4115AF975189279CB57527850DDAD9230D3D2B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, bool ___boolean0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 7;
		bool L_0 = ___boolean0;
		__this->___inst_boolean_1 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m8A0A37263CACAC98E364B72BDF9929433707D6F7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, double ___number0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 6;
		double L_0 = ___number0;
		__this->___inst_double_2 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m53BBD8B0DF27C525C5CD4BFD9E5C2EC09A106F78 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 4;
		int32_t L_0 = ___number0;
		__this->___inst_int_3 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mB54717B470C1218DF181039F1A12F9BACD000462 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int64_t ___number0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 5;
		int64_t L_0 = ___number0;
		__this->___inst_long_4 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		__this->___type_8 = 7;
		RuntimeObject* L_1 = ___obj0;
		__this->___inst_boolean_1 = ((*(bool*)((bool*)(bool*)UnBox(L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		__this->___type_8 = 6;
		RuntimeObject* L_3 = ___obj0;
		__this->___inst_double_2 = ((*(double*)((double*)(double*)UnBox(L_3, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		return;
	}

IL_003e:
	{
		RuntimeObject* L_4 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		__this->___type_8 = 4;
		RuntimeObject* L_5 = ___obj0;
		__this->___inst_int_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		return;
	}

IL_005a:
	{
		RuntimeObject* L_6 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}
	{
		__this->___type_8 = 5;
		RuntimeObject* L_7 = ___obj0;
		__this->___inst_long_4 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_7, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		return;
	}

IL_0076:
	{
		RuntimeObject* L_8 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		__this->___type_8 = 3;
		RuntimeObject* L_9 = ___obj0;
		__this->___inst_string_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_0092:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0_RuntimeMethod_var)));
	}
}
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9FAA8A904760EDD166AA91A84184FB51FB68E3F3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 3;
		String_t* L_0 = ___str0;
		__this->___inst_string_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)L_0);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m9DF2CE44C8B8DA56E200C70B0C8D42E7489C9D83 (bool ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___data0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_mEB4115AF975189279CB57527850DDAD9230D3D2B(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m7E2AFCEE114C263744FE52965F0E783234B346EB (double ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___data0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_m8A0A37263CACAC98E364B72BDF9929433707D6F7(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m4C4AA6966CCBEE2140A2DC50D296AF71B9A41AD5 (int32_t ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___data0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_m53BBD8B0DF27C525C5CD4BFD9E5C2EC09A106F78(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m7F527DE00E97C4DD5CDE5B17D83840DEF46ACE2C (int64_t ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___data0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_mB54717B470C1218DF181039F1A12F9BACD000462(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m421F39A741A3A01F4D1608EBFC9D63F8E2FA4731 (String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___data0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_m9FAA8A904760EDD166AA91A84184FB51FB68E3F3(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_op_Explicit_mD6A6341149649429139302E36DA4015EBBE11483 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___data0, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3AF6981667F40A32E02D8E30F7F87E6D80E0C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_mD6A6341149649429139302E36DA4015EBBE11483_RuntimeMethod_var)));
	}

IL_0014:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___data0;
		NullCheck(L_3);
		bool L_4 = L_3->___inst_boolean_1;
		return L_4;
	}
}
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_op_Explicit_m444E2C3E2FE42A6BC0A9454C74585FFA24E8F395 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___data0, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3AF6981667F40A32E02D8E30F7F87E6D80E0C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_m444E2C3E2FE42A6BC0A9454C74585FFA24E8F395_RuntimeMethod_var)));
	}

IL_0014:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___data0;
		NullCheck(L_3);
		double L_4 = L_3->___inst_double_2;
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_op_Explicit_mB5E8ECE544C1830F13C28704AFED581B4AD8D7C6 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___data0, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC752DDD9E7D71113EA72864BE92198866B1D658)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_mB5E8ECE544C1830F13C28704AFED581B4AD8D7C6_RuntimeMethod_var)));
	}

IL_0014:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___data0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___inst_int_3;
		return L_4;
	}
}
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_op_Explicit_m389DEBABD818E04A433759932BFFBB6C8DECC283 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___data0, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC752DDD9E7D71113EA72864BE92198866B1D658)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_m389DEBABD818E04A433759932BFFBB6C8DECC283_RuntimeMethod_var)));
	}

IL_0014:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___data0;
		NullCheck(L_3);
		int64_t L_4 = L_3->___inst_long_4;
		return L_4;
	}
}
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_op_Explicit_mAC17002F29B9DEBA81C4E2CA2E3C83A575CC8AA4 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___data0, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13026DD559AA5A6B131F15B7DB4105EA898DA4D9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_mAC17002F29B9DEBA81C4E2CA2E3C83A575CC8AA4_RuntimeMethod_var)));
	}

IL_0014:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___data0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___inst_string_6;
		return L_4;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_m718153CFF6828AF6E374C7FDF80D7FD675544520 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Add_m8F766EE45CE3613EEE5136B5AC233C3FF3A16A1A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___value1;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1;
		L_1 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_3 = ___key0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		RuntimeObject* L_5 = ___key0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_6 = V_0;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_1), ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)), L_6, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_7 = __this->___object_list_9;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(T) */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_7, L_8);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Clear_m285AB467A43A7C41A8427B796E17F213AEA51528 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_1 = __this->___object_list_9;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Clear() */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_1);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_Contains_m02095723C5D92D7C080B137650156C56261FA23C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_mC7F4FE47A8BD7DD7A9941C7D62BDC8906FBE7AAE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOrderedDictionary_t4705C37EB66554997A0F3C58A92EE8E202BD46E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_t4705C37EB66554997A0F3C58A92EE8E202BD46E9_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Remove_m16DF2045A4C3B23570ACBFBF890CEABF481F81CF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(10 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = 0;
		goto IL_0043;
	}

IL_0010:
	{
		RuntimeObject* L_2 = __this->___object_list_9;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_4;
		L_4 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		String_t* L_5;
		L_5 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		RuntimeObject* L_6 = ___key0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_8 = __this->___object_list_9;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_8, L_9);
		goto IL_0051;
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0043:
	{
		int32_t L_11 = V_0;
		RuntimeObject* L_12 = __this->___object_list_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0010;
		}
	}

IL_0051:
	{
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_mFE8CBE09E06D74A6EFDBA81CC6755C65451862E2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_GetBoolean_m02229DB77CB8074F0F2ED898D0CE29BA4350B95B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetBoolean_m02229DB77CB8074F0F2ED898D0CE29BA4350B95B_RuntimeMethod_var)));
	}

IL_0014:
	{
		bool L_2 = __this->___inst_boolean_1;
		return L_2;
	}
}
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_LitJson_IJsonWrapper_GetDouble_mBB4264E6B18E4DF17A4B00CB0BFE838A3895AE69 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetDouble_mBB4264E6B18E4DF17A4B00CB0BFE838A3895AE69_RuntimeMethod_var)));
	}

IL_0014:
	{
		double L_2 = __this->___inst_double_2;
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_LitJson_IJsonWrapper_GetInt_mC20A4D6F04A93056C1FB067C68E092AA4CE13BEE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetInt_mC20A4D6F04A93056C1FB067C68E092AA4CE13BEE_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = __this->___inst_int_3;
		return L_2;
	}
}
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_LitJson_IJsonWrapper_GetLong_mC36169157591BD9D3A60C529659D4F6EF01A268D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetLong_mC36169157591BD9D3A60C529659D4F6EF01A268D_RuntimeMethod_var)));
	}

IL_0014:
	{
		int64_t L_2 = __this->___inst_long_4;
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_GetString_m6EA810BD49C5125077D92E11DFEC4AFE0A4235E1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetString_m6EA810BD49C5125077D92E11DFEC4AFE0A4235E1_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = __this->___inst_string_6;
		return L_2;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetBoolean_mF61DEBF6BDEFCEEC1CA6786DB676415813DCB014 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 7;
		bool L_0 = ___val0;
		__this->___inst_boolean_1 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetDouble_mDE0713F66AB143C6F3705DA877F01C9E60D76553 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, double ___val0, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 6;
		double L_0 = ___val0;
		__this->___inst_double_2 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetInt_m2FD29586CD2F56322C23D12E7622A30053C704D5 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___val0, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 4;
		int32_t L_0 = ___val0;
		__this->___inst_int_3 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetLong_mE40BE10F5427485DBFE8018E34C61EA862B18716 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int64_t ___val0, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 5;
		int64_t L_0 = ___val0;
		__this->___inst_long_4 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetString_m1D50848A9C4D6FDA2EA3A0B48AB58F27B859BFBA (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 3;
		String_t* L_0 = ___val0;
		__this->___inst_string_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)L_0);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_ToJson_m5B53ACE8DB62D0816B15367D6A35EDB96A3977CB (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonData_ToJson_m658608ADAC4FD37098A16F86171C6BEDAE6E4C30(__this, NULL);
		return L_0;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_ToJson_m9F1ACEC1D1CDC41BE912D364538A9DFB79053CCD (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer0, const RuntimeMethod* method) 
{
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer0;
		JsonData_ToJson_m179225C968B6EE68507BB3694882E41DA05DA4C4(__this, L_0, NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_mBB90F2B605DA48CF3B2BB283D83E3B68982D7857 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = JsonData_Add_mA88DA1756863A2C121F7D72986EDF2EF6E0B88E1(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_m480936A33C1592C34894FCCB427D2A650841D15B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_m524B6DEDCF030862D76E60DE0EF23CE305052A16 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_mC8D5D8C8B485992303ACF9F535A63BEBABDAC186 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_m968CA5587708151BD18906CD3A30CA3BB452D4F1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		int32_t L_1 = ___index0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_m6BE0CE268E656B03AFDF0E8F532C2D7C2A35611E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_mE575B66B97A5547B92B86551F53E8316411A1A4F (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m277AB6743B8845FE83E7DB3A71456CAAFB8620D5 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___object_list_9;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var, L_1);
		OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* L_3 = (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OrderedDictionaryEnumerator__ctor_mE835230F6C9BF7EBC082A282BE74976A450B07A1(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m453944A5175BF515C00BCC24BBE6D1A0121EC0B5 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___idx0, RuntimeObject* ___key1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_1 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___key1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ___value2;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_1;
		JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202(__this, L_3, L_4, NULL);
		String_t* L_5 = V_0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_6 = V_1;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_2), L_5, L_6, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_7 = __this->___object_list_9;
		int32_t L_8 = ___idx0;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_9 = V_2;
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Insert(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m276C779F61AFC7AA2ABC0866BB71FCAF219AF060 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___inst_object_5;
		RuntimeObject* L_2 = __this->___object_list_9;
		int32_t L_3 = ___idx0;
		NullCheck(L_2);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_4;
		L_4 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = L_4;
		String_t* L_5;
		L_5 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::Remove(TKey) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_1, L_5);
		RuntimeObject* L_7 = __this->___object_list_9;
		int32_t L_8 = ___idx0;
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_array_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->___type_8;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = __this->___inst_object_5;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283_RuntimeMethod_var)));
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_object_5;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->___type_8;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2_RuntimeMethod_var)));
	}

IL_0028:
	{
		__this->___type_8 = 1;
		Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931* L_4 = (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931*)il2cpp_codegen_object_new(Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC(L_4, Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		__this->___inst_object_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_object_5), (void*)L_4);
		List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111* L_5 = (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111*)il2cpp_codegen_object_new(List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F(L_5, List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		__this->___object_list_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_list_9), (void*)L_5);
		RuntimeObject* L_6 = __this->___inst_object_5;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_array_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->___type_8;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718_RuntimeMethod_var)));
	}

IL_0028:
	{
		__this->___type_8 = 2;
		List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* L_4 = (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*)il2cpp_codegen_object_new(List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8(L_4, List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		__this->___inst_array_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_array_0), (void*)L_4);
		RuntimeObject* L_5 = __this->___inst_array_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)IsInstClass((RuntimeObject*)L_1, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_2, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___obj0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0(L_4, L_3, NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_m8F61FD23A1ABE09D1F7C1B1D12A7B5E778D8E377 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean LitJson.IJsonWrapper::get_IsString() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_2 = ___writer1;
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String LitJson.IJsonWrapper::GetString() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_2, L_4, NULL);
		return;
	}

IL_0015:
	{
		RuntimeObject* L_5 = ___obj0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean LitJson.IJsonWrapper::get_IsBoolean() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_7 = ___writer1;
		RuntimeObject* L_8 = ___obj0;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean LitJson.IJsonWrapper::GetBoolean() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_7);
		JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C(L_7, L_9, NULL);
		return;
	}

IL_002a:
	{
		RuntimeObject* L_10 = ___obj0;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean LitJson.IJsonWrapper::get_IsDouble() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_12 = ___writer1;
		RuntimeObject* L_13 = ___obj0;
		NullCheck(L_13);
		double L_14;
		L_14 = InterfaceFuncInvoker0< double >::Invoke(8 /* System.Double LitJson.IJsonWrapper::GetDouble() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_12);
		JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D(L_12, L_14, NULL);
		return;
	}

IL_003f:
	{
		RuntimeObject* L_15 = ___obj0;
		NullCheck(L_15);
		bool L_16;
		L_16 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean LitJson.IJsonWrapper::get_IsInt() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_15);
		if (!L_16)
		{
			goto IL_0054;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_17 = ___writer1;
		RuntimeObject* L_18 = ___obj0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 LitJson.IJsonWrapper::GetInt() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_17);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_17, L_19, NULL);
		return;
	}

IL_0054:
	{
		RuntimeObject* L_20 = ___obj0;
		NullCheck(L_20);
		bool L_21;
		L_21 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean LitJson.IJsonWrapper::get_IsLong() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_0069;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_22 = ___writer1;
		RuntimeObject* L_23 = ___obj0;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = InterfaceFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 LitJson.IJsonWrapper::GetLong() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_22);
		JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4(L_22, L_24, NULL);
		return;
	}

IL_0069:
	{
		RuntimeObject* L_25 = ___obj0;
		NullCheck(L_25);
		bool L_26;
		L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean LitJson.IJsonWrapper::get_IsArray() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_25);
		if (!L_26)
		{
			goto IL_00b5;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_27 = ___writer1;
		NullCheck(L_27);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_27, NULL);
		RuntimeObject* L_28 = ___obj0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_28);
		V_2 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_30 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_31 = V_3;
					if (!L_31)
					{
						goto IL_00ad;
					}
				}
				{
					RuntimeObject* L_32 = V_3;
					NullCheck(L_32);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
				}

IL_00ad:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0080_1:
			{
				RuntimeObject* L_33 = V_2;
				NullCheck(L_33);
				RuntimeObject* L_34;
				L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_33);
				V_0 = L_34;
				RuntimeObject* L_35 = V_0;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_36 = ___writer1;
				JsonData_WriteJson_m8F61FD23A1ABE09D1F7C1B1D12A7B5E778D8E377(((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_35, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var)), L_36, NULL);
			}

IL_0093_1:
			{
				RuntimeObject* L_37 = V_2;
				NullCheck(L_37);
				bool L_38;
				L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_37);
				if (L_38)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_39 = ___writer1;
		NullCheck(L_39);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_39, NULL);
		return;
	}

IL_00b5:
	{
		RuntimeObject* L_40 = ___obj0;
		NullCheck(L_40);
		bool L_41;
		L_41 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean LitJson.IJsonWrapper::get_IsObject() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_40);
		if (!L_41)
		{
			goto IL_0124;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_42 = ___writer1;
		NullCheck(L_42);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_42, NULL);
		RuntimeObject* L_43 = ___obj0;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_43);
		V_4 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0109:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_45 = V_4;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_45, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_46 = V_5;
					if (!L_46)
					{
						goto IL_011d;
					}
				}
				{
					RuntimeObject* L_47 = V_5;
					NullCheck(L_47);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_47);
				}

IL_011d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00fe_1;
			}

IL_00cd_1:
			{
				RuntimeObject* L_48 = V_4;
				NullCheck(L_48);
				RuntimeObject* L_49;
				L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_48);
				V_1 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_49, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_50 = ___writer1;
				RuntimeObject* L_51;
				L_51 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_1), NULL);
				NullCheck(L_50);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_50, ((String_t*)CastclassSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var)), NULL);
				RuntimeObject* L_52;
				L_52 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_1), NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_53 = ___writer1;
				JsonData_WriteJson_m8F61FD23A1ABE09D1F7C1B1D12A7B5E778D8E377(((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_52, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var)), L_53, NULL);
			}

IL_00fe_1:
			{
				RuntimeObject* L_54 = V_4;
				NullCheck(L_54);
				bool L_55;
				L_55 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_54);
				if (L_55)
				{
					goto IL_00cd_1;
				}
			}
			{
				goto IL_011e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011e:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_56 = ___writer1;
		NullCheck(L_56);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_56, NULL);
	}

IL_0124:
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mA88DA1756863A2C121F7D72986EDF2EF6E0B88E1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1;
		L_1 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_0, NULL);
		V_0 = L_1;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Void LitJson.JsonData::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_Clear_m8CBDDC3858610406EB362973D8DFCB2A7D6F98CC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, __this);
		return;
	}

IL_000f:
	{
		bool L_1;
		L_1 = JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC(__this, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, __this);
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_Equals_m7369F0352ABADD880C05AC75E5B755FC38A60B45 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = ___x0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___type_8;
		int32_t L_3 = __this->___type_8;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t L_4 = __this->___type_8;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_007f;
			}
			case 5:
			{
				goto IL_0091;
			}
			case 6:
			{
				goto IL_00a3;
			}
			case 7:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		RuntimeObject* L_6 = __this->___inst_object_5;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_7 = ___x0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___inst_object_5;
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		return L_9;
	}

IL_005b:
	{
		RuntimeObject* L_10 = __this->___inst_array_0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_11 = ___x0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___inst_array_0;
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_006d:
	{
		String_t* L_14 = __this->___inst_string_6;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_15 = ___x0;
		NullCheck(L_15);
		String_t* L_16 = L_15->___inst_string_6;
		NullCheck(L_14);
		bool L_17;
		L_17 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_14, L_16, NULL);
		return L_17;
	}

IL_007f:
	{
		int32_t* L_18 = (&__this->___inst_int_3);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_19 = ___x0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___inst_int_3;
		bool L_21;
		L_21 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_18, L_20, NULL);
		return L_21;
	}

IL_0091:
	{
		int64_t* L_22 = (&__this->___inst_long_4);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_23 = ___x0;
		NullCheck(L_23);
		int64_t L_24 = L_23->___inst_long_4;
		bool L_25;
		L_25 = Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E(L_22, L_24, NULL);
		return L_25;
	}

IL_00a3:
	{
		double* L_26 = (&__this->___inst_double_2);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_27 = ___x0;
		NullCheck(L_27);
		double L_28 = L_27->___inst_double_2;
		bool L_29;
		L_29 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138(L_26, L_28, NULL);
		return L_29;
	}

IL_00b5:
	{
		bool* L_30 = (&__this->___inst_boolean_1);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_31 = ___x0;
		NullCheck(L_31);
		bool L_32 = L_31->___inst_boolean_1;
		bool L_33;
		L_33 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9(L_30, L_32, NULL);
		return L_33;
	}

IL_00c7:
	{
		return (bool)0;
	}
}
// LitJson.JsonType LitJson.JsonData::GetJsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_m7313142A8EEFA586606A2F25157426C377A6096C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return L_0;
	}
}
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_SetJsonType_m1E8E1D8FA51CA48796DB13ECD7DA808A7576A7C3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		int32_t L_1 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___type0;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_008d;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_006b;
			}
			case 6:
			{
				goto IL_0075;
			}
			case 7:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0034:
	{
		Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931* L_4 = (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931*)il2cpp_codegen_object_new(Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC(L_4, Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		__this->___inst_object_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_object_5), (void*)L_4);
		List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111* L_5 = (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111*)il2cpp_codegen_object_new(List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F(L_5, List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		__this->___object_list_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_list_9), (void*)L_5);
		goto IL_008d;
	}

IL_004c:
	{
		List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* L_6 = (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*)il2cpp_codegen_object_new(List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8(L_6, List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		__this->___inst_array_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_array_0), (void*)L_6);
		goto IL_008d;
	}

IL_0059:
	{
		__this->___inst_string_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)(String_t*)NULL);
		goto IL_008d;
	}

IL_0062:
	{
		__this->___inst_int_3 = 0;
		goto IL_008d;
	}

IL_006b:
	{
		__this->___inst_long_4 = ((int64_t)0);
		goto IL_008d;
	}

IL_0075:
	{
		__this->___inst_double_2 = (0.0);
		goto IL_008d;
	}

IL_0086:
	{
		__this->___inst_boolean_1 = (bool)0;
	}

IL_008d:
	{
		int32_t L_7 = ___type0;
		__this->___type_8 = L_7;
		return;
	}
}
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m658608ADAC4FD37098A16F86171C6BEDAE6E4C30 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* V_1 = NULL;
	{
		String_t* L_0 = __this->___json_7;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->___json_7;
		return L_1;
	}

IL_000f:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D(L_2, NULL);
		V_0 = L_2;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_3 = V_0;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_4 = (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*)il2cpp_codegen_object_new(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E(L_4, L_3, NULL);
		V_1 = L_4;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_5 = V_1;
		NullCheck(L_5);
		JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline(L_5, (bool)0, NULL);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_6 = V_1;
		JsonData_WriteJson_m8F61FD23A1ABE09D1F7C1B1D12A7B5E778D8E377(__this, L_6, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		__this->___json_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)L_8);
		String_t* L_9 = __this->___json_7;
		return L_9;
	}
}
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m179225C968B6EE68507BB3694882E41DA05DA4C4 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer0;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6_inline(L_0, NULL);
		V_0 = L_1;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline(L_2, (bool)0, NULL);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_3 = ___writer0;
		JsonData_WriteJson_m8F61FD23A1ABE09D1F7C1B1D12A7B5E778D8E377(__this, L_3, NULL);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_4 = ___writer0;
		bool L_5 = V_0;
		NullCheck(L_4);
		JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline(L_4, L_5, NULL);
		return;
	}
}
// System.String LitJson.JsonData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToString_m7F6F96196EDD1B0767AED023EC8640959B6D9382 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_002d:
	{
		return _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
	}

IL_0033:
	{
		bool* L_2 = (&__this->___inst_boolean_1);
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_2, NULL);
		return L_3;
	}

IL_003f:
	{
		double* L_4 = (&__this->___inst_double_2);
		String_t* L_5;
		L_5 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_4, NULL);
		return L_5;
	}

IL_004b:
	{
		int32_t* L_6 = (&__this->___inst_int_3);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		return L_7;
	}

IL_0057:
	{
		int64_t* L_8 = (&__this->___inst_long_4);
		String_t* L_9;
		L_9 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B(L_8, NULL);
		return L_9;
	}

IL_0063:
	{
		return _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
	}

IL_0069:
	{
		String_t* L_10 = __this->___inst_string_6;
		return L_10;
	}

IL_0070:
	{
		return _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
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
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Current_m26CAEFF45373A3A4EB6AA364345D4728F9616E6D (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = OrderedDictionaryEnumerator_get_Entry_mD2E0B7A30035474EB30FC5AB71B4C299E0C9124A(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_mD2E0B7A30035474EB30FC5AB71B4C299E0C9124A (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3;
		L_3 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Key_mD0051B27FCA09C476E348C40D1B8E8E48F3B8F9B (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Value_m666D246C6E8795EACCD622E49139F5B0A1AD8D2D (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mE835230F6C9BF7EBC082A282BE74976A450B07A1 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->___list_enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_enumerator_0), (void*)L_0);
		return;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m0862F64D1B571A878D85F0EA7B91F84C44A02B61 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m28A5AD433A2A8AF31DEF35FA549C0FFB356A3533 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
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
// System.Void LitJson.JsonException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m6E6F4D1266048142B4B1E1A049E9DA1FEC803381 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, const RuntimeMethod* method) 
{
	{
		ApplicationException__ctor_m481B0251BEC0BF28EAAF3FCB11A47EFCB2E56E2A(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD4207AFB58089E76BB79C31BDF909450FEE2E55C (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F, L_2, NULL);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_3, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD12D72A1D7949F48B846F1207BFA40EB8CB61E23 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___token0, Exception_t* ___inner_exception1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F, L_2, NULL);
		Exception_t* L_4 = ___inner_exception1;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_3, L_4, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m267C4D3DA6783E685C755BEB2B354A15AB620363 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)((int32_t)(uint16_t)L_0));
		RuntimeObject* L_2 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713, L_2, NULL);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_3, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mED383F0F7C13BE261BA2CDE530CA8535A0B7D0BD (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___c0, Exception_t* ___inner_exception1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)((int32_t)(uint16_t)L_0));
		RuntimeObject* L_2 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713, L_2, NULL);
		Exception_t* L_4 = ___inner_exception1;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_3, L_4, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_0, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m14A2679E4D43BF656B5DFD019E9BEA7A80BFB6F4 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, String_t* ___message0, Exception_t* ___inner_exception1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner_exception1;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_0, L_1, NULL);
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
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_pinvoke(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_pinvoke_back(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke& marshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_pinvoke_cleanup(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_com(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_com_back(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com& marshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_com_cleanup(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_pinvoke(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_pinvoke_back(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke& marshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_pinvoke_cleanup(ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_com(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_com_back(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com& marshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_com_cleanup(ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com& marshaled)
{
}
// System.Type LitJson.ArrayMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = __this->___element_type_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		return L_2;
	}

IL_0013:
	{
		Type_t* L_3 = __this->___element_type_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Type_t* ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_array_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	bool _returnValue;
	_returnValue = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___is_array_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ArrayMetadata::get_IsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_list_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	bool _returnValue;
	_returnValue = ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___is_list_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_pinvoke(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_pinvoke_back(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke& marshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_pinvoke_cleanup(ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_com(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_com_back(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com& marshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_com_cleanup(ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com& marshaled)
{
}
// System.Type LitJson.ObjectMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = __this->___element_type_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		return L_2;
	}

IL_0013:
	{
		Type_t* L_3 = __this->___element_type_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Type_t* ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_dictionary_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	bool _returnValue;
	_returnValue = ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___is_dictionary_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___properties_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___properties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___properties_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Multicast(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* currentDelegate = reinterpret_cast<ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, ___writer1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Open(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___writer1, method);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenVirtual(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(il2cpp_codegen_method_get_slot(method), ___obj0, ___writer1);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenInterface(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___obj0, ___writer1);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericVirtual(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(method, ___obj0, ___writer1);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericInterface(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(method, ___obj0, ___writer1);
}
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Open;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Multicast;
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, ___writer1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_mBA6940F67F0CDB782296CFA12D84BB9B57938AA8 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m5C0A1A181C17D6913DD424D7C4185B25CF052A25 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Multicast(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* currentDelegate = reinterpret_cast<ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___input0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Open(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___input0, method);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenVirtual(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___input0);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenInterface(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___input0);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericVirtual(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___input0);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericInterface(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___input0);
}
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Open;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Multicast;
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___input0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_mD7CF3CA8BCE43B4C7C2CB4539FCC07CFB3B459C2 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_EndInvoke_mBA9C97FCC0F1A51B4F9ADBA9C3C71B2992B8C853 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_Multicast(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* currentDelegate = reinterpret_cast<WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_Open(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_Open;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_Multicast;
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_BeginInvoke_mEFD9FE53CFC5454AAEB8B36D92C3328E55C03066 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_EndInvoke_m425C49E08B2DAB9EE155560276880757C783AE55 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_mD343512CC4CD68A3E605B01CF93CA709039C624B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_lock_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_lock_7), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9), (void*)L_1);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_lock_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_lock_11), (void*)L_2);
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_lock_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_lock_13), (void*)L_3);
		RuntimeObject* L_4 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_4, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_lock_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_lock_15), (void*)L_4);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___max_nesting_depth_0 = ((int32_t)100);
		Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053* L_5 = (Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053*)il2cpp_codegen_object_new(Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7(L_5, Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6), (void*)L_5);
		Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD* L_6 = (Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD*)il2cpp_codegen_object_new(Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65(L_6, Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8), (void*)L_6);
		Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914* L_7 = (Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914*)il2cpp_codegen_object_new(Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825(L_7, Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10), (void*)L_7);
		Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93* L_8 = (Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93*)il2cpp_codegen_object_new(Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8(L_8, Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12), (void*)L_8);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_9 = (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*)il2cpp_codegen_object_new(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		JsonWriter__ctor_mFF4C2DE4CAD061714750C2D87291FCF9D0AE4EF0(L_9, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14), (void*)L_9);
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_10;
		L_10 = DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B(NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1), (void*)L_10);
		Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0* L_11 = (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0*)il2cpp_codegen_object_new(Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277(L_11, Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2), (void*)L_11);
		Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0* L_12 = (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0*)il2cpp_codegen_object_new(Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277(L_12, Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3), (void*)L_12);
		Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998* L_13 = (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998*)il2cpp_codegen_object_new(Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49(L_13, Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4), (void*)L_13);
		Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998* L_14 = (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998*)il2cpp_codegen_object_new(Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49(L_14, Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5), (void*)L_14);
		JsonMapper_RegisterBaseExporters_m31C6508EF93075526140A044605434AE9A874197(NULL);
		JsonMapper_RegisterBaseImporters_mDFBB980B15CC881AD4401AD50D139DAD5D127211(NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddArrayMetadata_mF2DFCA02974ED8053E884A6DEFDAF373CDD34077 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DF53EB5CC9A30D6CA4EECD8F9C4882ABF00BB6);
		s_Il2CppMethodInitialized = true;
	}
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyInfo_t* V_1 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::ContainsKey(TKey) */, IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D));
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_3, NULL);
		ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline((&V_0), L_4, NULL);
		Type_t* L_5 = ___type0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Type_GetInterface_m536A2DE796291194A1EAE035EE3742D3A220854E(L_5, _stringLiteralD5DF53EB5CC9A30D6CA4EECD8F9C4882ABF00BB6, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline((&V_0), (bool)1, NULL);
	}

IL_0038:
	{
		Type_t* L_7 = ___type0;
		NullCheck(L_7);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_8;
		L_8 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_7, NULL);
		V_3 = L_8;
		V_4 = 0;
		goto IL_008f;
	}

IL_0044:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_9 = V_3;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		PropertyInfo_t* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		bool L_15;
		L_15 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_14, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (L_15)
		{
			goto IL_0089;
		}
	}
	{
		PropertyInfo_t* L_16 = V_1;
		NullCheck(L_16);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17;
		L_17 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_16);
		V_2 = L_17;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_2;
		NullCheck(L_18);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))))
		{
			goto IL_0089;
		}
	}
	{
		PropertyInfo_t* L_25 = V_1;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_25);
		ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline((&V_0), L_26, NULL);
	}

IL_0089:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_008f:
	{
		int32_t L_28 = V_4;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_29 = V_3;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_30 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_lock_7;
		RuntimeObject* L_31 = L_30;
		V_5 = L_31;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_31, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b6:
			{// begin finally (depth: 1)
				RuntimeObject* L_32 = V_5;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_32, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_33 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6;
				Type_t* L_34 = ___type0;
				ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D L_35 = V_0;
				NullCheck(L_33);
				InterfaceActionInvoker2< Type_t*, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::Add(TKey,TValue) */, IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var, L_33, L_34, L_35);
				goto IL_00b4_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00b1_1;
				}
				throw e;
			}

CATCH_00b1_1:
			{// begin catch(System.ArgumentException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)

IL_00b4_1:
			{
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddObjectMetadata_mD956882CC274A9E8FD93B9E279D0072E8D7A9B5E (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4852B6F2412388B50C99BF806BFE926E4FFEA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyInfo_t* V_1 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_3;
	memset((&V_3), 0, sizeof(V_3));
	FieldInfo_t* V_4 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_5;
	memset((&V_5), 0, sizeof(V_5));
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_6 = NULL;
	int32_t V_7 = 0;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_8 = NULL;
	int32_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::ContainsKey(TKey) */, IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661));
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Type_GetInterface_m536A2DE796291194A1EAE035EE3742D3A220854E(L_3, _stringLiteral0B4852B6F2412388B50C99BF806BFE926E4FFEA5, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline((&V_0), (bool)1, NULL);
	}

IL_002b:
	{
		Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954* L_5 = (Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954*)il2cpp_codegen_object_new(Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348(L_5, Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348_RuntimeMethod_var);
		ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline((&V_0), L_5, NULL);
		Type_t* L_6 = ___type0;
		NullCheck(L_6);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_7;
		L_7 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_6, NULL);
		V_6 = L_7;
		V_7 = 0;
		goto IL_00c2;
	}

IL_0044:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_8 = V_6;
		int32_t L_9 = V_7;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PropertyInfo_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		PropertyInfo_t* L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		PropertyInfo_t* L_15 = V_1;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		V_2 = L_16;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17 = V_2;
		NullCheck(L_17);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) == ((uint32_t)1))))
		{
			goto IL_00bc;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_21) == ((RuntimeObject*)(Type_t*)L_23))))
		{
			goto IL_00bc;
		}
	}
	{
		PropertyInfo_t* L_24 = V_1;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_24);
		ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline((&V_0), L_25, NULL);
		goto IL_00bc;
	}

IL_008c:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		PropertyInfo_t* L_26 = V_1;
		(&V_3)->___Info_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Info_0), (void*)L_26);
		PropertyInfo_t* L_27 = V_1;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_27);
		(&V_3)->___Type_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Type_2), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_0), NULL);
		PropertyInfo_t* L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_32 = V_3;
		NullCheck(L_29);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(TKey,TValue) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_29, L_31, L_32);
	}

IL_00bc:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c2:
	{
		int32_t L_34 = V_7;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_35 = V_6;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		Type_t* L_36 = ___type0;
		NullCheck(L_36);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_37;
		L_37 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_36, NULL);
		V_8 = L_37;
		V_9 = 0;
		goto IL_0123;
	}

IL_00da:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_38 = V_8;
		int32_t L_39 = V_9;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		FieldInfo_t* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_4 = L_41;
		il2cpp_codegen_initobj((&V_5), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		FieldInfo_t* L_42 = V_4;
		(&V_5)->___Info_0 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Info_0), (void*)L_42);
		(&V_5)->___IsField_1 = (bool)1;
		FieldInfo_t* L_43 = V_4;
		NullCheck(L_43);
		Type_t* L_44;
		L_44 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_43);
		(&V_5)->___Type_2 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Type_2), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_0), NULL);
		FieldInfo_t* L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_48 = V_5;
		NullCheck(L_45);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(TKey,TValue) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_45, L_47, L_48);
		int32_t L_49 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0123:
	{
		int32_t L_50 = V_9;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_51 = V_8;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00da;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_52 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_lock_11;
		RuntimeObject* L_53 = L_52;
		V_10 = L_53;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_53, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014b:
			{// begin finally (depth: 1)
				RuntimeObject* L_54 = V_10;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_54, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_55 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10;
				Type_t* L_56 = ___type0;
				ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 L_57 = V_0;
				NullCheck(L_55);
				InterfaceActionInvoker2< Type_t*, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::Add(TKey,TValue) */, IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var, L_55, L_56, L_57);
				goto IL_0149_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0146_1;
				}
				throw e;
			}

CATCH_0146_1:
			{// begin catch(System.ArgumentException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0153;
			}// end catch (depth: 2)

IL_0149_1:
			{
				goto IL_0153;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0153:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m98D3E5C9E6ED60B7024D640BB347B03BC904D0A8 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_2;
	memset((&V_2), 0, sizeof(V_2));
	FieldInfo_t* V_3 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_4;
	memset((&V_4), 0, sizeof(V_4));
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_5 = NULL;
	int32_t V_6 = 0;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(TKey) */, IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8* L_3 = (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8*)il2cpp_codegen_object_new(List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A(L_3, List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_RuntimeMethod_var);
		V_0 = L_3;
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5;
		L_5 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_4, NULL);
		V_5 = L_5;
		V_6 = 0;
		goto IL_005e;
	}

IL_0021:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_6 = V_5;
		int32_t L_7 = V_6;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		PropertyInfo_t* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		PropertyInfo_t* L_13 = V_1;
		(&V_2)->___Info_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___Info_0), (void*)L_13);
		(&V_2)->___IsField_1 = (bool)0;
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_15 = V_2;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(T) */, ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0058:
	{
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005e:
	{
		int32_t L_17 = V_6;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_19 = ___type0;
		NullCheck(L_19);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_20;
		L_20 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_19, NULL);
		V_7 = L_20;
		V_8 = 0;
		goto IL_009f;
	}

IL_0073:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_21 = V_7;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		FieldInfo_t* L_25 = V_3;
		(&V_4)->___Info_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___Info_0), (void*)L_25);
		(&V_4)->___IsField_1 = (bool)1;
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_27 = V_4;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(T) */, ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009f:
	{
		int32_t L_29 = V_8;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_30 = V_7;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_lock_13;
		RuntimeObject* L_32 = L_31;
		V_9 = L_32;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_32, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				RuntimeObject* L_33 = V_9;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_33, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_34 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12;
				Type_t* L_35 = ___type0;
				RuntimeObject* L_36 = V_0;
				NullCheck(L_34);
				InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(TKey,TValue) */, IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var, L_34, L_35, L_36);
				goto IL_00c5_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00c2_1;
				}
				throw e;
			}

CATCH_00c2_1:
			{// begin catch(System.ArgumentException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00cf;
			}// end catch (depth: 2)

IL_00c5_1:
			{
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		return;
	}
}
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* JsonMapper_GetConvOp_m8E2CB140B5C452FFCA01CE3473EA140680BD7655 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9;
		RuntimeObject* L_1 = L_0;
		V_2 = L_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_2;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
				Type_t* L_4 = ___t10;
				NullCheck(L_3);
				bool L_5;
				L_5 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::ContainsKey(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_3, L_4);
				if (L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_6 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
				Type_t* L_7 = ___t10;
				Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB* L_8 = (Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB*)il2cpp_codegen_object_new(Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227(L_8, Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227_RuntimeMethod_var);
				NullCheck(L_6);
				InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::Add(TKey,TValue) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_6, L_7, L_8);
			}

IL_0029_1:
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
		Type_t* L_10 = ___t10;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_9, L_10);
		Type_t* L_12 = ___t21;
		NullCheck(L_11);
		bool L_13;
		L_13 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::ContainsKey(TKey) */, IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var, L_11, L_12);
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
		Type_t* L_15 = ___t10;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_14, L_15);
		Type_t* L_17 = ___t21;
		NullCheck(L_16);
		MethodInfo_t* L_18;
		L_18 = InterfaceFuncInvoker1< MethodInfo_t*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(TKey) */, IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var, L_16, L_17);
		return L_18;
	}

IL_0057:
	{
		Type_t* L_19 = ___t10;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_3 = L_20;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = V_3;
		Type_t* L_22 = ___t21;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_22);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = V_3;
		NullCheck(L_19);
		MethodInfo_t* L_24;
		L_24 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_19, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, L_23, NULL);
		V_0 = L_24;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9;
		RuntimeObject* L_26 = L_25;
		V_4 = L_26;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_26, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				RuntimeObject* L_27 = V_4;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_27, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_28 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
				Type_t* L_29 = ___t10;
				NullCheck(L_28);
				RuntimeObject* L_30;
				L_30 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_28, L_29);
				Type_t* L_31 = ___t21;
				MethodInfo_t* L_32 = V_0;
				NullCheck(L_30);
				InterfaceActionInvoker2< Type_t*, MethodInfo_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::Add(TKey,TValue) */, IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var, L_30, L_31, L_32);
				goto IL_00a5_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0090_1;
				}
				throw e;
			}

CATCH_0090_1:
			{// begin catch(System.ArgumentException)
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var)));
				RuntimeObject* L_33 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))))->___conv_ops_8;
				Type_t* L_34 = ___t10;
				NullCheck(L_33);
				RuntimeObject* L_35;
				L_35 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var)), L_33, L_34);
				Type_t* L_36 = ___t21;
				NullCheck(L_35);
				MethodInfo_t* L_37;
				L_37 = InterfaceFuncInvoker1< MethodInfo_t*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(TKey) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var)), L_35, L_36);
				V_1 = L_37;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00b1;
			}// end catch (depth: 2)

IL_00a5_1:
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		MethodInfo_t* L_38 = V_0;
		return L_38;
	}

IL_00b1:
	{
		MethodInfo_t* L_39 = V_1;
		return L_39;
	}
}
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9 (Type_t* ___inst_type0, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* V_1 = NULL;
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Type_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 V_11;
	memset((&V_11), 0, sizeof(V_11));
	String_t* V_12 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_13;
	memset((&V_13), 0, sizeof(V_13));
	PropertyInfo_t* V_14 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_15 = NULL;
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_0 = ___reader1;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_0, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_2 = ___reader1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0012;
		}
	}
	{
		return NULL;
	}

IL_0012:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_6 = ___inst_type0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_6, NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		Type_t* L_8 = ___inst_type0;
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2B624A34AE5F3AF1DE39F5AA12C5DBF59299E28)), L_8, NULL);
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_10 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9_RuntimeMethod_var)));
	}

IL_0035:
	{
		return NULL;
	}

IL_0037:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_11 = ___reader1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)8)))
		{
			goto IL_0069;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_13 = ___reader1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)6)))
		{
			goto IL_0069;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_15 = ___reader1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_15, NULL);
		if ((((int32_t)L_16) == ((int32_t)7)))
		{
			goto IL_0069;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_17 = ___reader1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_17, NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)9))))
		{
			goto IL_0069;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_19 = ___reader1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0157;
		}
	}

IL_0069:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_21 = ___reader1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_21, NULL);
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
		V_0 = L_23;
		Type_t* L_24 = ___inst_type0;
		Type_t* L_25 = V_0;
		NullCheck(L_24);
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_24, L_25);
		if (!L_26)
		{
			goto IL_0085;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_27 = ___reader1;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_27, NULL);
		return L_28;
	}

IL_0085:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		Type_t* L_30 = V_0;
		NullCheck(L_29);
		bool L_31;
		L_31 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_29, L_30);
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		Type_t* L_33 = V_0;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_32, L_33);
		Type_t* L_35 = ___inst_type0;
		NullCheck(L_34);
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_34, L_35);
		if (!L_36)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		Type_t* L_38 = V_0;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_37, L_38);
		Type_t* L_40 = ___inst_type0;
		NullCheck(L_39);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_41;
		L_41 = InterfaceFuncInvoker1< ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_39, L_40);
		V_1 = L_41;
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_42 = V_1;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_43 = ___reader1;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_43, NULL);
		NullCheck(L_42);
		RuntimeObject* L_45;
		L_45 = ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline(L_42, L_44, NULL);
		return L_45;
	}

IL_00c4:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_46 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		Type_t* L_47 = V_0;
		NullCheck(L_46);
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_46, L_47);
		if (!L_48)
		{
			goto IL_0103;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		Type_t* L_50 = V_0;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_49, L_50);
		Type_t* L_52 = ___inst_type0;
		NullCheck(L_51);
		bool L_53;
		L_53 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_51, L_52);
		if (!L_53)
		{
			goto IL_0103;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_54 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		Type_t* L_55 = V_0;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_54, L_55);
		Type_t* L_57 = ___inst_type0;
		NullCheck(L_56);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_58;
		L_58 = InterfaceFuncInvoker1< ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_56, L_57);
		V_2 = L_58;
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_59 = V_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_60 = ___reader1;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_60, NULL);
		NullCheck(L_59);
		RuntimeObject* L_62;
		L_62 = ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline(L_59, L_61, NULL);
		return L_62;
	}

IL_0103:
	{
		Type_t* L_63 = ___inst_type0;
		NullCheck(L_63);
		bool L_64;
		L_64 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_63);
		if (!L_64)
		{
			goto IL_0118;
		}
	}
	{
		Type_t* L_65 = ___inst_type0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_66 = ___reader1;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_68;
		L_68 = Enum_ToObject_m6AC36749AA2CE7BCC5416CA230C0E5B4BDCFF4DB(L_65, L_67, NULL);
		return L_68;
	}

IL_0118:
	{
		Type_t* L_69 = ___inst_type0;
		Type_t* L_70 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		MethodInfo_t* L_71;
		L_71 = JsonMapper_GetConvOp_m8E2CB140B5C452FFCA01CE3473EA140680BD7655(L_69, L_70, NULL);
		V_3 = L_71;
		MethodInfo_t* L_72 = V_3;
		if (!L_72)
		{
			goto IL_013f;
		}
	}
	{
		MethodInfo_t* L_73 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		V_15 = L_74;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = V_15;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_76 = ___reader1;
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_76, NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_77);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_15;
		NullCheck(L_73);
		RuntimeObject* L_79;
		L_79 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_73, NULL, L_78, NULL);
		return L_79;
	}

IL_013f:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_80 = ___reader1;
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_80, NULL);
		Type_t* L_82 = V_0;
		Type_t* L_83 = ___inst_type0;
		String_t* L_84;
		L_84 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E5EFDC670ACA0D3155DEFB95477AD16E9744EB)), L_81, L_82, L_83, NULL);
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_85 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_85);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_85, L_84, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9_RuntimeMethod_var)));
	}

IL_0157:
	{
		V_4 = NULL;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_86 = ___reader1;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_86, NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)4))))
		{
			goto IL_023e;
		}
	}
	{
		Type_t* L_88 = ___inst_type0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_AddArrayMetadata_mF2DFCA02974ED8053E884A6DEFDAF373CDD34077(L_88, NULL);
		RuntimeObject* L_89 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6;
		Type_t* L_90 = ___inst_type0;
		NullCheck(L_89);
		ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D L_91;
		L_91 = InterfaceFuncInvoker1< ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::get_Item(TKey) */, IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var, L_89, L_90);
		V_5 = L_91;
		bool L_92;
		L_92 = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline((&V_5), NULL);
		if (L_92)
		{
			goto IL_019c;
		}
	}
	{
		bool L_93;
		L_93 = ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline((&V_5), NULL);
		if (L_93)
		{
			goto IL_019c;
		}
	}
	{
		Type_t* L_94 = ___inst_type0;
		String_t* L_95;
		L_95 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB6E8D33884A8AB4625102A8EEE80D34FD589540)), L_94, NULL);
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_96 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_96);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_96, L_95, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9_RuntimeMethod_var)));
	}

IL_019c:
	{
		bool L_97;
		L_97 = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline((&V_5), NULL);
		if (L_97)
		{
			goto IL_01bd;
		}
	}
	{
		Type_t* L_98 = ___inst_type0;
		RuntimeObject* L_99;
		L_99 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_98, NULL);
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		Type_t* L_100;
		L_100 = ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226((&V_5), NULL);
		V_7 = L_100;
		goto IL_01cc;
	}

IL_01bd:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_101 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_101, NULL);
		V_6 = L_101;
		Type_t* L_102 = ___inst_type0;
		NullCheck(L_102);
		Type_t* L_103;
		L_103 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_102);
		V_7 = L_103;
	}

IL_01cc:
	{
		Type_t* L_104 = V_7;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_105 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_106;
		L_106 = JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9(L_104, L_105, NULL);
		V_8 = L_106;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_107 = ___reader1;
		NullCheck(L_107);
		int32_t L_108;
		L_108 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_107, NULL);
		if ((((int32_t)L_108) == ((int32_t)5)))
		{
			goto IL_01eb;
		}
	}
	{
		RuntimeObject* L_109 = V_6;
		RuntimeObject* L_110 = V_8;
		NullCheck(L_109);
		int32_t L_111;
		L_111 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_109, L_110);
		goto IL_01cc;
	}

IL_01eb:
	{
		bool L_112;
		L_112 = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline((&V_5), NULL);
		if (!L_112)
		{
			goto IL_0235;
		}
	}
	{
		RuntimeObject* L_113 = V_6;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_113);
		V_9 = L_114;
		Type_t* L_115 = V_7;
		int32_t L_116 = V_9;
		RuntimeArray* L_117;
		L_117 = Array_CreateInstance_m40F80F4A7A05B492BC5A19CEFB7F9AE8641FDE2C(L_115, L_116, NULL);
		V_4 = L_117;
		V_10 = 0;
		goto IL_022a;
	}

IL_020d:
	{
		RuntimeObject* L_118 = V_4;
		RuntimeObject* L_119 = V_6;
		int32_t L_120 = V_10;
		NullCheck(L_119);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_119, L_120);
		int32_t L_122 = V_10;
		NullCheck(((RuntimeArray*)CastclassClass((RuntimeObject*)L_118, RuntimeArray_il2cpp_TypeInfo_var)));
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(((RuntimeArray*)CastclassClass((RuntimeObject*)L_118, RuntimeArray_il2cpp_TypeInfo_var)), L_121, L_122, NULL);
		int32_t L_123 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_022a:
	{
		int32_t L_124 = V_10;
		int32_t L_125 = V_9;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_020d;
		}
	}
	{
		goto IL_0355;
	}

IL_0235:
	{
		RuntimeObject* L_126 = V_6;
		V_4 = L_126;
		goto IL_0355;
	}

IL_023e:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_127 = ___reader1;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_127, NULL);
		if ((!(((uint32_t)L_128) == ((uint32_t)1))))
		{
			goto IL_0355;
		}
	}
	{
		Type_t* L_129 = ___inst_type0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_AddObjectMetadata_mD956882CC274A9E8FD93B9E279D0072E8D7A9B5E(L_129, NULL);
		RuntimeObject* L_130 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10;
		Type_t* L_131 = ___inst_type0;
		NullCheck(L_130);
		ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 L_132;
		L_132 = InterfaceFuncInvoker1< ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::get_Item(TKey) */, IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var, L_130, L_131);
		V_11 = L_132;
		Type_t* L_133 = ___inst_type0;
		RuntimeObject* L_134;
		L_134 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_133, NULL);
		V_4 = L_134;
	}

IL_0265:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_135 = ___reader1;
		NullCheck(L_135);
		bool L_136;
		L_136 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_135, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_137 = ___reader1;
		NullCheck(L_137);
		int32_t L_138;
		L_138 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_137, NULL);
		if ((((int32_t)L_138) == ((int32_t)3)))
		{
			goto IL_0355;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_139 = ___reader1;
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_139, NULL);
		V_12 = ((String_t*)CastclassSealed((RuntimeObject*)L_140, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_141;
		L_141 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_11), NULL);
		String_t* L_142 = V_12;
		NullCheck(L_141);
		bool L_143;
		L_143 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::ContainsKey(TKey) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_141, L_142);
		if (!L_143)
		{
			goto IL_0319;
		}
	}
	{
		RuntimeObject* L_144;
		L_144 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_11), NULL);
		String_t* L_145 = V_12;
		NullCheck(L_144);
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_146;
		L_146 = InterfaceFuncInvoker1< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::get_Item(TKey) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_144, L_145);
		V_13 = L_146;
		bool L_147 = (&V_13)->___IsField_1;
		if (!L_147)
		{
			goto IL_02d3;
		}
	}
	{
		MemberInfo_t* L_148 = (&V_13)->___Info_0;
		RuntimeObject* L_149 = V_4;
		Type_t* L_150 = (&V_13)->___Type_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_151 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_152;
		L_152 = JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9(L_150, L_151, NULL);
		NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_148, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_148, FieldInfo_t_il2cpp_TypeInfo_var)), L_149, L_152, NULL);
		goto IL_0265;
	}

IL_02d3:
	{
		MemberInfo_t* L_153 = (&V_13)->___Info_0;
		V_14 = ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_153, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_154 = V_14;
		NullCheck(L_154);
		bool L_155;
		L_155 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_154);
		if (!L_155)
		{
			goto IL_0306;
		}
	}
	{
		PropertyInfo_t* L_156 = V_14;
		RuntimeObject* L_157 = V_4;
		Type_t* L_158 = (&V_13)->___Type_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_159 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_160;
		L_160 = JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9(L_158, L_159, NULL);
		NullCheck(L_156);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(23 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_156, L_157, L_160, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_0265;
	}

IL_0306:
	{
		Type_t* L_161 = (&V_13)->___Type_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_162 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_163;
		L_163 = JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9(L_161, L_162, NULL);
		goto IL_0265;
	}

IL_0319:
	{
		bool L_164;
		L_164 = ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline((&V_11), NULL);
		if (L_164)
		{
			goto IL_0335;
		}
	}
	{
		Type_t* L_165 = ___inst_type0;
		String_t* L_166 = V_12;
		String_t* L_167;
		L_167 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3898E7D2C1147692B865B70C530E4BB2264D9234)), L_165, L_166, NULL);
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_168 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_168);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_168, L_167, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_168, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9_RuntimeMethod_var)));
	}

IL_0335:
	{
		RuntimeObject* L_169 = V_4;
		String_t* L_170 = V_12;
		Type_t* L_171;
		L_171 = ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE((&V_11), NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_172 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_173;
		L_173 = JsonMapper_ReadValue_m259AF0AEF0620461D10889D5FD25B4F7670EB3C9(L_171, L_172, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_169, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_169, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_170, L_173);
		goto IL_0265;
	}

IL_0355:
	{
		RuntimeObject* L_174 = V_4;
		return L_174;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m7C6ABAA922393ADAF61D1025667012FCBD84B2A4 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___factory0, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_0 = ___reader1;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_0, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_2 = ___reader1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (RuntimeObject*)NULL;
	}

IL_001c:
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_6 = ___factory0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_inline(L_6, NULL);
		V_0 = L_7;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_8 = ___reader1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_11 = ___reader1;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_11, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(18 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_10, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_13 = V_0;
		return L_13;
	}

IL_0040:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_14 = ___reader1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_17 = ___reader1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_17, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< double >::Invoke(14 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_16, ((*(double*)((double*)(double*)UnBox(L_18, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_19 = V_0;
		return L_19;
	}

IL_005c:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_20 = ___reader1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_22 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_23 = ___reader1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_23, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< int32_t >::Invoke(15 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_22, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_25 = V_0;
		return L_25;
	}

IL_0078:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_26 = ___reader1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_26, NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_28 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_29 = ___reader1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_29, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< int64_t >::Invoke(17 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_28, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_31 = V_0;
		return L_31;
	}

IL_0094:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_32 = ___reader1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_32, NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_34 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_35 = ___reader1;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_35, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_34, ((*(bool*)((bool*)(bool*)UnBox(L_36, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_37 = V_0;
		return L_37;
	}

IL_00b1:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_38 = ___reader1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_38, NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_00dc;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		NullCheck(L_40);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_40, 2);
	}

IL_00c1:
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_41 = ___factory0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_42 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = JsonMapper_ReadValue_m7C6ABAA922393ADAF61D1025667012FCBD84B2A4(L_41, L_42, NULL);
		V_1 = L_43;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_44 = ___reader1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_44, NULL);
		if ((((int32_t)L_45) == ((int32_t)5)))
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_46 = V_0;
		RuntimeObject* L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_46, L_47);
		goto IL_00c1;
	}

IL_00dc:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_49 = ___reader1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_49, NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_51 = V_0;
		NullCheck(L_51);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_51, 1);
	}

IL_00ec:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_52 = ___reader1;
		NullCheck(L_52);
		bool L_53;
		L_53 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_52, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_54 = ___reader1;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_54, NULL);
		if ((((int32_t)L_55) == ((int32_t)3)))
		{
			goto IL_0118;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_56 = ___reader1;
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_56, NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_57, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_58 = V_0;
		String_t* L_59 = V_2;
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_60 = ___factory0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_61 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_62;
		L_62 = JsonMapper_ReadValue_m7C6ABAA922393ADAF61D1025667012FCBD84B2A4(L_60, L_61, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_58, L_59, L_62);
		goto IL_00ec;
	}

IL_0118:
	{
		RuntimeObject* L_63 = V_0;
		return L_63;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_m31C6508EF93075526140A044605434AE9A874197 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__0_m06C611AC1B21B2B2D22F76109BBE9F16CEB8A691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__1_mEAB9A1760CAEB1242812550E34C9FA185797EC95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__2_m4BEDC5323CACFD8DCFCCC07B1CC88068D36C3362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__3_m73B2E427BE9413236EAD03EB6417F29175E0D002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__4_mC9DCEB5070FA64DEFE2C830A1C438C05D949DECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__5_m520FB64B8443EC6A5DB8F854C0836BF010B432FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__6_mD2983EB27BD56A74150CBC7D8063C5657C40DB08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__7_mF5D343FB6F085DCA6FC5797E46ADC55180E05EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Eb__8_m3D0AEBED5249ACD3226D595A43B4EE20B0B7DF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t* G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t* G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t* G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t* G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_16;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_4 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_4, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__0_m06C611AC1B21B2B2D22F76109BBE9F16CEB8A691_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_16), (void*)L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_5 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_16;
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_5);
		RuntimeObject* L_6 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_9 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_17;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0058;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_10 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_10, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__1_mEAB9A1760CAEB1242812550E34C9FA185797EC95_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_17), (void*)L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_11 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_17;
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_11);
		RuntimeObject* L_12 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_15 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_18;
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			goto IL_0089;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_16 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_16, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__2_m4BEDC5323CACFD8DCFCCC07B1CC88068D36C3362_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_18 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_18), (void*)L_16);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_17 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_18;
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_17);
		RuntimeObject* L_18 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_21 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatec_19;
		G_B7_0 = L_20;
		G_B7_1 = L_18;
		if (L_21)
		{
			G_B8_0 = L_20;
			G_B8_1 = L_18;
			goto IL_00ba;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_22 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_22, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__3_m73B2E427BE9413236EAD03EB6417F29175E0D002_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatec_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatec_19), (void*)L_22);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_23 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatec_19;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_23);
		RuntimeObject* L_24 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_27 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegated_20;
		G_B9_0 = L_26;
		G_B9_1 = L_24;
		if (L_27)
		{
			G_B10_0 = L_26;
			G_B10_1 = L_24;
			goto IL_00eb;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_28 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_28, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__4_mC9DCEB5070FA64DEFE2C830A1C438C05D949DECB_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegated_20 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegated_20), (void*)L_28);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_29 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegated_20;
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_29);
		RuntimeObject* L_30 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_33 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_21;
		G_B11_0 = L_32;
		G_B11_1 = L_30;
		if (L_33)
		{
			G_B12_0 = L_32;
			G_B12_1 = L_30;
			goto IL_011c;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_34 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_34, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__5_m520FB64B8443EC6A5DB8F854C0836BF010B432FF_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_21 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_21), (void*)L_34);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_35 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_21;
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_35);
		RuntimeObject* L_36 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_39 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_22;
		G_B13_0 = L_38;
		G_B13_1 = L_36;
		if (L_39)
		{
			G_B14_0 = L_38;
			G_B14_1 = L_36;
			goto IL_014d;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_40 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_40, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__6_mD2983EB27BD56A74150CBC7D8063C5657C40DB08_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_22 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_22), (void*)L_40);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_41 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_22;
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_45 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_23;
		G_B15_0 = L_44;
		G_B15_1 = L_42;
		if (L_45)
		{
			G_B16_0 = L_44;
			G_B16_1 = L_42;
			goto IL_017e;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_46 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_46, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__7_mF5D343FB6F085DCA6FC5797E46ADC55180E05EB7_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_23 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_23), (void*)L_46);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_47 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_23;
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_47);
		RuntimeObject* L_48 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_51 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_24;
		G_B17_0 = L_50;
		G_B17_1 = L_48;
		if (L_51)
		{
			G_B18_0 = L_50;
			G_B18_1 = L_48;
			goto IL_01af;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_52 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_52, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Eb__8_m3D0AEBED5249ACD3226D595A43B4EE20B0B7DF0E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_24 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_24), (void*)L_52);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_53 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_24;
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_53);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mDFBB980B15CC881AD4401AD50D139DAD5D127211 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__12_m6F915B86FBBE26579F088CA3C2CC91B6822151DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__13_m3F25E4D0E235EFFDA9B7FB0DCB9783BB2F2A04B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__14_mF93E077A326543128DD876F5A124FC81CC37AC70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__15_mE80BA1C173613F4CFA096AB1E4E63A5AA0C58A88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__16_m63126AE5AB858470E651A06A14D36A41EFDAFDD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__17_m235D04321169E9DD5EC9B3BABA5DA049FC5DB3FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__18_mD7EF04CA834226EE1E76BABD0FCFB4F6BE07D123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__19_m94BC9C68569BC1312FC39535CEECDC6CDA7E6F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__1a_m46E727A21A70E5CE96F215B40D55F1A0CAA3D183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__1b_mA86A8A5AAA8F4BD7BCDD2FBE1C45A27DA42EF222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__1c_m9275830DAACF4BC7F1F1C71DF086E6FAC12AB361_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m6F0A122A4C4F259BFAC9F46CA3A00BD7E0C778A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_25;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_1 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_1, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__12_m6F915B86FBBE26579F088CA3C2CC91B6822151DB_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_25), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_25;
		V_0 = L_2;
		RuntimeObject* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_8 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_3, L_5, L_7, L_8, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_9 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1f_26;
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_10 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_10, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__13_m3F25E4D0E235EFFDA9B7FB0DCB9783BB2F2A04B6_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1f_26 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1f_26), (void*)L_10);
	}

IL_0055:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_11 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1f_26;
		V_0 = L_11;
		RuntimeObject* L_12 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_17 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_12, L_14, L_16, L_17, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_18 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate20_27;
		if (L_18)
		{
			goto IL_0092;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_19 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_19, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__14_mF93E077A326543128DD876F5A124FC81CC37AC70_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate20_27 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate20_27), (void*)L_19);
	}

IL_0092:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_20 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate20_27;
		V_0 = L_20;
		RuntimeObject* L_21 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_24, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_26 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_21, L_23, L_25, L_26, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_27 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate21_28;
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_28 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_28, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__15_mE80BA1C173613F4CFA096AB1E4E63A5AA0C58A88_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate21_28 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate21_28), (void*)L_28);
	}

IL_00cf:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_29 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate21_28;
		V_0 = L_29;
		RuntimeObject* L_30 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_33, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_35 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_30, L_32, L_34, L_35, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_36 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate22_29;
		if (L_36)
		{
			goto IL_010c;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_37 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_37, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__16_m63126AE5AB858470E651A06A14D36A41EFDAFDD0_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate22_29 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate22_29), (void*)L_37);
	}

IL_010c:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_38 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate22_29;
		V_0 = L_38;
		RuntimeObject* L_39 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_42, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_44 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_39, L_41, L_43, L_44, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_45 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_30;
		if (L_45)
		{
			goto IL_0149;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_46 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_46, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__17_m235D04321169E9DD5EC9B3BABA5DA049FC5DB3FB_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_30 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_30), (void*)L_46);
	}

IL_0149:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_47 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_30;
		V_0 = L_47;
		RuntimeObject* L_48 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_51, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_53 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_48, L_50, L_52, L_53, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_54 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_31;
		if (L_54)
		{
			goto IL_0186;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_55 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_55, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__18_mD7EF04CA834226EE1E76BABD0FCFB4F6BE07D123_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_31 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_31), (void*)L_55);
	}

IL_0186:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_56 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_31;
		V_0 = L_56;
		RuntimeObject* L_57 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_60, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_62 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_57, L_59, L_61, L_62, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_63 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_32;
		if (L_63)
		{
			goto IL_01c3;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_64 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_64, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__19_m94BC9C68569BC1312FC39535CEECDC6CDA7E6F8E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_32 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_32), (void*)L_64);
	}

IL_01c3:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_65 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_32;
		V_0 = L_65;
		RuntimeObject* L_66 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_69, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_71 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_66, L_68, L_70, L_71, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_72 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_33;
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_73 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_73, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__1a_m46E727A21A70E5CE96F215B40D55F1A0CAA3D183_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_33 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_33), (void*)L_73);
	}

IL_0200:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_74 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_33;
		V_0 = L_74;
		RuntimeObject* L_75 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_78, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_80 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_75, L_77, L_79, L_80, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_81 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_34;
		if (L_81)
		{
			goto IL_023d;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_82 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_82, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__1b_mA86A8A5AAA8F4BD7BCDD2FBE1C45A27DA42EF222_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_34 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_34), (void*)L_82);
	}

IL_023d:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_83 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_34;
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_87, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_89 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_84, L_86, L_88, L_89, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_90 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_35;
		if (L_90)
		{
			goto IL_027a;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_91 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_91, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__1c_m9275830DAACF4BC7F1F1C71DF086E6FAC12AB361_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_35 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_35), (void*)L_91);
	}

IL_027a:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_92 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_35;
		V_0 = L_92;
		RuntimeObject* L_93 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_96, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_98 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_93, L_95, L_97, L_98, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_99 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_36;
		if (L_99)
		{
			goto IL_02b7;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_100 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_100, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m6F0A122A4C4F259BFAC9F46CA3A00BD7E0C778A4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_36 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_36), (void*)L_100);
	}

IL_02b7:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_101 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_36;
		V_0 = L_101;
		RuntimeObject* L_102 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_103, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_105, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_107 = V_0;
		JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1(L_102, L_104, L_106, L_107, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m233B91014DF633AA0B28924BDF36CA15A52FF8D1 (RuntimeObject* ___table0, Type_t* ___json_type1, Type_t* ___value_type2, ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___importer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t* L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t* L_4 = ___json_type1;
		Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625* L_5 = (Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625*)il2cpp_codegen_object_new(Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5(L_5, Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(TKey,TValue) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0015:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t* L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t* L_9 = ___value_type2;
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t*, ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDFAB6A0EC1A6A40B5D759F32652B70BD609099EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t05B5613D1899393C5D9EB2B8AE7E874C4C23ED6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* V_3 = NULL;
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* V_4 = NULL;
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* V_5 = NULL;
	Type_t* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_8;
	memset((&V_8), 0, sizeof(V_8));
	PropertyInfo_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	{
		int32_t L_0 = ___depth3;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___max_nesting_depth_0;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18)), L_3, NULL);
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_5 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC_RuntimeMethod_var)));
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___obj0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_7 = ___writer1;
		NullCheck(L_7);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_7, (String_t*)NULL, NULL);
		return;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		bool L_9 = ___writer_is_private2;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_10 = ___writer1;
		NullCheck(L_10);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11;
		L_11 = JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F_inline(L_10, NULL);
		RuntimeObject* L_12 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(19 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		return;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___obj0;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_15 = ___writer1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(20 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)), L_15);
		return;
	}

IL_0058:
	{
		RuntimeObject* L_16 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_17 = ___writer1;
		RuntimeObject* L_18 = ___obj0;
		NullCheck(L_17);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}

IL_006d:
	{
		RuntimeObject* L_19 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_20 = ___writer1;
		RuntimeObject* L_21 = ___obj0;
		NullCheck(L_20);
		JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D(L_20, ((*(double*)((double*)(double*)UnBox(L_21, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0082:
	{
		RuntimeObject* L_22 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0097;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_23 = ___writer1;
		RuntimeObject* L_24 = ___obj0;
		NullCheck(L_23);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_23, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0097:
	{
		RuntimeObject* L_25 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_25, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_00ac;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_26 = ___writer1;
		RuntimeObject* L_27 = ___obj0;
		NullCheck(L_26);
		JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C(L_26, ((*(bool*)((bool*)(bool*)UnBox(L_27, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_00ac:
	{
		RuntimeObject* L_28 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_28, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_00c1;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_29 = ___writer1;
		RuntimeObject* L_30 = ___obj0;
		NullCheck(L_29);
		JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4(L_29, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_00c1:
	{
		RuntimeObject* L_31 = ___obj0;
		if (!((RuntimeArray*)IsInstClass((RuntimeObject*)L_31, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0118;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_32 = ___writer1;
		NullCheck(L_32);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_32, NULL);
		RuntimeObject* L_33 = ___obj0;
		NullCheck(((RuntimeArray*)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34;
		L_34 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(((RuntimeArray*)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		V_10 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fc:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_35 = V_10;
					V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_35, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_36 = V_11;
					if (!L_36)
					{
						goto IL_0110;
					}
				}
				{
					RuntimeObject* L_37 = V_11;
					NullCheck(L_37);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_0110:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f1_1;
			}

IL_00de_1:
			{
				RuntimeObject* L_38 = V_10;
				NullCheck(L_38);
				RuntimeObject* L_39;
				L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_38);
				V_0 = L_39;
				RuntimeObject* L_40 = V_0;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_41 = ___writer1;
				bool L_42 = ___writer_is_private2;
				int32_t L_43 = ___depth3;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_40, L_41, L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), NULL);
			}

IL_00f1_1:
			{
				RuntimeObject* L_44 = V_10;
				NullCheck(L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_00de_1;
				}
			}
			{
				goto IL_0111;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0111:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_46 = ___writer1;
		NullCheck(L_46);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_46, NULL);
		return;
	}

IL_0118:
	{
		RuntimeObject* L_47 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_47, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)))
		{
			goto IL_016f;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_48 = ___writer1;
		NullCheck(L_48);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_48, NULL);
		RuntimeObject* L_49 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		V_12 = L_50;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0153:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_51 = V_12;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_51, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_52 = V_13;
					if (!L_52)
					{
						goto IL_0167;
					}
				}
				{
					RuntimeObject* L_53 = V_13;
					NullCheck(L_53);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
				}

IL_0167:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0148_1;
			}

IL_0135_1:
			{
				RuntimeObject* L_54 = V_12;
				NullCheck(L_54);
				RuntimeObject* L_55;
				L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_54);
				V_1 = L_55;
				RuntimeObject* L_56 = V_1;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_57 = ___writer1;
				bool L_58 = ___writer_is_private2;
				int32_t L_59 = ___depth3;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_56, L_57, L_58, ((int32_t)il2cpp_codegen_add(L_59, 1)), NULL);
			}

IL_0148_1:
			{
				RuntimeObject* L_60 = V_12;
				NullCheck(L_60);
				bool L_61;
				L_61 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_60);
				if (L_61)
				{
					goto IL_0135_1;
				}
			}
			{
				goto IL_0168;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0168:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_62 = ___writer1;
		NullCheck(L_62);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_62, NULL);
		return;
	}

IL_016f:
	{
		RuntimeObject* L_63 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_63, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)))
		{
			goto IL_01e3;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_64 = ___writer1;
		NullCheck(L_64);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_64, NULL);
		RuntimeObject* L_65 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		V_14 = L_66;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_67 = V_14;
					V_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_67, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_68 = V_15;
					if (!L_68)
					{
						goto IL_01db;
					}
				}
				{
					RuntimeObject* L_69 = V_15;
					NullCheck(L_69);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_69);
				}

IL_01db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01bc_1;
			}

IL_018c_1:
			{
				RuntimeObject* L_70 = V_14;
				NullCheck(L_70);
				RuntimeObject* L_71;
				L_71 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_70);
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_71, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_72 = ___writer1;
				RuntimeObject* L_73;
				L_73 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				NullCheck(L_72);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_72, ((String_t*)CastclassSealed((RuntimeObject*)L_73, String_t_il2cpp_TypeInfo_var)), NULL);
				RuntimeObject* L_74;
				L_74 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_2), NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_75 = ___writer1;
				bool L_76 = ___writer_is_private2;
				int32_t L_77 = ___depth3;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_74, L_75, L_76, ((int32_t)il2cpp_codegen_add(L_77, 1)), NULL);
			}

IL_01bc_1:
			{
				RuntimeObject* L_78 = V_14;
				NullCheck(L_78);
				bool L_79;
				L_79 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_78);
				if (L_79)
				{
					goto IL_018c_1;
				}
			}
			{
				goto IL_01dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01dc:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_80 = ___writer1;
		NullCheck(L_80);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_80, NULL);
		return;
	}

IL_01e3:
	{
		RuntimeObject* L_81 = ___obj0;
		NullCheck(L_81);
		Type_t* L_82;
		L_82 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_81, NULL);
		V_3 = L_82;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_83 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3;
		Type_t* L_84 = V_3;
		NullCheck(L_83);
		bool L_85;
		L_85 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_83, L_84);
		if (!L_85)
		{
			goto IL_020e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_86 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3;
		Type_t* L_87 = V_3;
		NullCheck(L_86);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_88;
		L_88 = InterfaceFuncInvoker1< ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_86, L_87);
		V_4 = L_88;
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_89 = V_4;
		RuntimeObject* L_90 = ___obj0;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_91 = ___writer1;
		NullCheck(L_89);
		ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline(L_89, L_90, L_91, NULL);
		return;
	}

IL_020e:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		Type_t* L_93 = V_3;
		NullCheck(L_92);
		bool L_94;
		L_94 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_92, L_93);
		if (!L_94)
		{
			goto IL_0232;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_95 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		Type_t* L_96 = V_3;
		NullCheck(L_95);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_97;
		L_97 = InterfaceFuncInvoker1< ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_95, L_96);
		V_5 = L_97;
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_98 = V_5;
		RuntimeObject* L_99 = ___obj0;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_100 = ___writer1;
		NullCheck(L_98);
		ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline(L_98, L_99, L_100, NULL);
		return;
	}

IL_0232:
	{
		RuntimeObject* L_101 = ___obj0;
		if (!((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)IsInstClass((RuntimeObject*)L_101, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var)))
		{
			goto IL_0286;
		}
	}
	{
		Type_t* L_102 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Enum_GetUnderlyingType_m82EA340BC4D4652783F7D2408BF02A945F0F90DE(L_102, NULL);
		V_6 = L_103;
		Type_t* L_104 = V_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_105, NULL);
		if ((((RuntimeObject*)(Type_t*)L_104) == ((RuntimeObject*)(Type_t*)L_106)))
		{
			goto IL_026c;
		}
	}
	{
		Type_t* L_107 = V_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_108, NULL);
		if ((((RuntimeObject*)(Type_t*)L_107) == ((RuntimeObject*)(Type_t*)L_109)))
		{
			goto IL_026c;
		}
	}
	{
		Type_t* L_110 = V_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_111, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_110) == ((RuntimeObject*)(Type_t*)L_112))))
		{
			goto IL_0279;
		}
	}

IL_026c:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_113 = ___writer1;
		RuntimeObject* L_114 = ___obj0;
		NullCheck(L_113);
		JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB(L_113, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_114, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0279:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_115 = ___writer1;
		RuntimeObject* L_116 = ___obj0;
		NullCheck(L_115);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_115, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_116, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0286:
	{
		Type_t* L_117 = V_3;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m98D3E5C9E6ED60B7024D640BB347B03BC904D0A8(L_117, NULL);
		RuntimeObject* L_118 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12;
		Type_t* L_119 = V_3;
		NullCheck(L_118);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(TKey) */, IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var, L_118, L_119);
		V_7 = L_120;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_121 = ___writer1;
		NullCheck(L_121);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_121, NULL);
		RuntimeObject* L_122 = V_7;
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_tDFAB6A0EC1A6A40B5D759F32652B70BD609099EE_il2cpp_TypeInfo_var, L_122);
		V_16 = L_123;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0336:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_124 = V_16;
					if (!L_124)
					{
						goto IL_0341;
					}
				}
				{
					RuntimeObject* L_125 = V_16;
					NullCheck(L_125);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_125);
				}

IL_0341:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0328_1;
			}

IL_02aa_1:
			{
				RuntimeObject* L_126 = V_16;
				NullCheck(L_126);
				PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_127;
				L_127 = InterfaceFuncInvoker0< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_t05B5613D1899393C5D9EB2B8AE7E874C4C23ED6C_il2cpp_TypeInfo_var, L_126);
				V_8 = L_127;
				bool L_128 = (&V_8)->___IsField_1;
				if (!L_128)
				{
					goto IL_02ec_1;
				}
			}
			{
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_129 = ___writer1;
				MemberInfo_t* L_130 = (&V_8)->___Info_0;
				NullCheck(L_130);
				String_t* L_131;
				L_131 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_130);
				NullCheck(L_129);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_129, L_131, NULL);
				MemberInfo_t* L_132 = (&V_8)->___Info_0;
				RuntimeObject* L_133 = ___obj0;
				NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_132, FieldInfo_t_il2cpp_TypeInfo_var)));
				RuntimeObject* L_134;
				L_134 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_132, FieldInfo_t_il2cpp_TypeInfo_var)), L_133);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_135 = ___writer1;
				bool L_136 = ___writer_is_private2;
				int32_t L_137 = ___depth3;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_134, L_135, L_136, ((int32_t)il2cpp_codegen_add(L_137, 1)), NULL);
				goto IL_0328_1;
			}

IL_02ec_1:
			{
				MemberInfo_t* L_138 = (&V_8)->___Info_0;
				V_9 = ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_138, PropertyInfo_t_il2cpp_TypeInfo_var));
				PropertyInfo_t* L_139 = V_9;
				NullCheck(L_139);
				bool L_140;
				L_140 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_139);
				if (!L_140)
				{
					goto IL_0328_1;
				}
			}
			{
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_141 = ___writer1;
				MemberInfo_t* L_142 = (&V_8)->___Info_0;
				NullCheck(L_142);
				String_t* L_143;
				L_143 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_142);
				NullCheck(L_141);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_141, L_143, NULL);
				PropertyInfo_t* L_144 = V_9;
				RuntimeObject* L_145 = ___obj0;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_144, L_145, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_147 = ___writer1;
				bool L_148 = ___writer_is_private2;
				int32_t L_149 = ___depth3;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_146, L_147, L_148, ((int32_t)il2cpp_codegen_add(L_149, 1)), NULL);
			}

IL_0328_1:
			{
				RuntimeObject* L_150 = V_16;
				NullCheck(L_150);
				bool L_151;
				L_151 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_150);
				if (L_151)
				{
					goto IL_02aa_1;
				}
			}
			{
				goto IL_0342;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0342:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_152 = ___writer1;
		NullCheck(L_152);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_152, NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_mBC44E378326E3BBBCDF34152AE60541F21B82051 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_lock_15;
		RuntimeObject* L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
			JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14;
			NullCheck(L_3);
			JsonWriter_Reset_mCFA289C24C9ECEE98AD50E970F0D1F032F7E1989(L_3, NULL);
			RuntimeObject* L_4 = ___obj0;
			JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_5 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14;
			JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_4, L_5, (bool)1, 0, NULL);
			JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_6 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			V_0 = L_7;
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ToJson_mAEBD255C23CC2F4DC50D46214B353B2F518014D6 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_1 = ___writer1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_WriteValue_m873B57AE69B85B3A3047824B3CE50EBF615D4CEC(L_0, L_1, (bool)0, 0, NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonMapper_ToObject_m72F156D6CDD6D958139C46E11362BA1EF1485932 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Eb__2a_m595042FE91079811032C5FC0EFFC7872C798C574_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_37;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_1 = (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*)il2cpp_codegen_object_new(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809(L_1, NULL, (intptr_t)((void*)JsonMapper_U3CToObjectU3Eb__2a_m595042FE91079811032C5FC0EFFC7872C798C574_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_37 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_37), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_37;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_3 = ___reader0;
		RuntimeObject* L_4;
		L_4 = JsonMapper_ToWrapper_m13693B577CD98D95C8660D318C8609C9FC5BDFBD(L_2, L_3, NULL);
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_4, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonMapper_ToObject_m2D691E63B94135277732A99DDD4975A10C92B7EE (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Eb__2c_mD6E4E518F51DEDF984F4260B69492922AD32BB85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* V_0 = NULL;
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_1 = (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD*)il2cpp_codegen_object_new(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonReader__ctor_m796FB622ADB958C9EC9B9F937C12B72B6424DE3A(L_1, L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_38;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_3 = (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*)il2cpp_codegen_object_new(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809(L_3, NULL, (intptr_t)((void*)JsonMapper_U3CToObjectU3Eb__2c_mD6E4E518F51DEDF984F4260B69492922AD32BB85_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_38 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_38), (void*)L_3);
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_4 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_38;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = JsonMapper_ToWrapper_m13693B577CD98D95C8660D318C8609C9FC5BDFBD(L_4, L_5, NULL);
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_6, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonMapper_ToObject_mE6511090A72B9B5050CBF9DA6CA5C94E569F1C0B (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Eb__2e_m8957ADDDDA8C9BD22F54FEE42E33C5996370D503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2f_39;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_1 = (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*)il2cpp_codegen_object_new(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809(L_1, NULL, (intptr_t)((void*)JsonMapper_U3CToObjectU3Eb__2e_m8957ADDDDA8C9BD22F54FEE42E33C5996370D503_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2f_39 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2f_39), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate2f_39;
		String_t* L_3 = ___json0;
		RuntimeObject* L_4;
		L_4 = JsonMapper_ToWrapper_mC6BB77AC0184D0FAAB5585AB289F379D7A468C68(L_2, L_3, NULL);
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_4, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m13693B577CD98D95C8660D318C8609C9FC5BDFBD (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___factory0, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___reader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_0 = ___factory0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_1 = ___reader1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = JsonMapper_ReadValue_m7C6ABAA922393ADAF61D1025667012FCBD84B2A4(L_0, L_1, NULL);
		return L_2;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_mC6BB77AC0184D0FAAB5585AB289F379D7A468C68 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___factory0, String_t* ___json1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* V_0 = NULL;
	{
		String_t* L_0 = ___json1;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_1 = (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD*)il2cpp_codegen_object_new(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonReader__ctor_mA7B3448630453E385BCAADCA985410AFFCE4ACC3(L_1, L_0, NULL);
		V_0 = L_1;
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ___factory0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = JsonMapper_ReadValue_m7C6ABAA922393ADAF61D1025667012FCBD84B2A4(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonMapper::UnregisterExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_UnregisterExporters_m45786181DC96B67995E42BC0307524F1305013E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t3D10824E2D7EC716BB4188AE53FF69437B9FDED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::Clear() */, ICollection_1_t3D10824E2D7EC716BB4188AE53FF69437B9FDED5_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::UnregisterImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_UnregisterImporters_mA100CAFB4181B20FF2D18BCC24C8C29682938DBF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD9AFA6DDEDB81906ED90E6DD2E1A6E8CB9A28A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>>::Clear() */, ICollection_1_tD9AFA6DDEDB81906ED90E6DD2E1A6E8CB9A28A97_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__ctor_m4EFA59D3C6A7E23D70386738A91ACDCF437E6E8A (JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__0_m06C611AC1B21B2B2D22F76109BBE9F16CEB8A691 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mD6F4F8BC8041480EBBF52F8CA11D1386A5EE019D(((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__1_mEAB9A1760CAEB1242812550E34C9FA185797EC95 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m58C791495049866C9E7439FBF2A14A402F1C81B6(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_1, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__2_m4BEDC5323CACFD8DCFCCC07B1CC88068D36C3362 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_m0AB90DC9AD2EF0AA0A6146013665DC60A8C52702(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), L_2, NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_0, L_3, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__3_m73B2E427BE9413236EAD03EB6417F29175E0D002 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m2042A55B478D11A2C4BB399CE96C17DB3D85133A(L_0, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__4_mC9DCEB5070FA64DEFE2C830A1C438C05D949DECB (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m14B15FFD8B821CBF1EB2641AAEF7CB00157D9B8E(((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_1, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__5_m520FB64B8443EC6A5DB8F854C0836BF010B432FF (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mFE6E311A5AE91912673E6C7026A4A5C19C2C0F9B(((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_1, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__6_mD2983EB27BD56A74150CBC7D8063C5657C40DB08 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCB03F1E460F2D07CB009ACAFDB2DB0D9B5D97B2B(((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_1, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__7_mF5D343FB6F085DCA6FC5797E46ADC55180E05EB7 (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_mFBB976BA9AB1A83325F642219BF1D8F04030768D(((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__8_m3D0AEBED5249ACD3226D595A43B4EE20B0B7DF0E (RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB(L_0, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_1, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__12_m6F915B86FBBE26579F088CA3C2CC91B6822151DB (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mFF10E9758B7414E9C187C95ECB27FB1DFD7904B2(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__13_m3F25E4D0E235EFFDA9B7FB0DCB9783BB2F2A04B6 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m7899B63591257E56EC9B6BFB19396C3890F41233(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__14(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__14_mF93E077A326543128DD876F5A124FC81CC37AC70 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m48FEC408BB749C81B91BAB51AC744EF05C7B1B25(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__15(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__15_mE80BA1C173613F4CFA096AB1E4E63A5AA0C58A88 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m01293E1E7E09858C74DE663E5EE1819A5D75FADB(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__16(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__16_m63126AE5AB858470E651A06A14D36A41EFDAFDD0 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_m574A6C8E905EEADA4FC733AE24C6DFCB8CAB0017(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__17(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__17_m235D04321169E9DD5EC9B3BABA5DA049FC5DB3FB (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m7E15E7E39C7E0835A13F3D3D54CB1723D7BF17E3(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__18(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__18_mD7EF04CA834226EE1E76BABD0FCFB4F6BE07D123 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_mB562D40271078F5561C203FB30E15B8913667C2C(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__19(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__19_m94BC9C68569BC1312FC39535CEECDC6CDA7E6F8E (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_mD35A1BDDC7FE214E53E1B57C867B50B6BB5E61B9(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1a(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__1a_m46E727A21A70E5CE96F215B40D55F1A0CAA3D183 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_m0817E542B617E7D00740EBA8687EA52092CED34C(((*(double*)((double*)(double*)UnBox(L_0, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1b(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__1b_mA86A8A5AAA8F4BD7BCDD2FBE1C45A27DA42EF222 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m9F3F4B62B8DA5A3EDC7FDD1A9893259C745DABE6(((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_0, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1c(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__1c_m9275830DAACF4BC7F1F1C71DF086E6FAC12AB361 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mF72D47BC87DE73EFF5A7F04046BFAF064FEB0100(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1d(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m6F0A122A4C4F259BFAC9F46CA3A00BD7E0C778A4 (RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = Convert_ToDateTime_m0CD0FAC3FF3ED01FFEA1264742D5E4BDAC79EA4A(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = L_2;
		RuntimeObject* L_4 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>b__2a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Eb__2a_m595042FE91079811032C5FC0EFFC7872C798C574 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22(L_0, NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>b__2c()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Eb__2c_mD6E4E518F51DEDF984F4260B69492922AD32BB85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22(L_0, NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>b__2e()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Eb__2e_m8957ADDDDA8C9BD22F54FEE42E33C5996370D503 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22(L_0, NULL);
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
// System.Boolean LitJson.JsonReader::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowComments_mC545DEA4DEF8BD93D5697DB9AFDEE65AE4EFA6F6 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowComments_m33ED48F247F6DA42BA8A583170D31BA4C51C30E4 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowSingleQuotedStrings_mEDC14EF3B3F603B0C152CAFFD5BFFC8CF0BEE8C6 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowSingleQuotedStrings_mA3BC7969C81E0D65C419DA9986921287B19A368D (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfInput_m95CB8B1F42A424E1A08288A8DA2DD93B6386C2CE (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_5;
		return L_0;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfJson_m22A0E4F711E833BFD49D80CC442191260EAAB13C (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_json_4;
		return L_0;
	}
}
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_13;
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token_value_12;
		return L_0;
	}
}
// System.Void LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mF87D14928CC2D3663A1493EE4D4C411D07DAAD90 (const RuntimeMethod* method) 
{
	{
		JsonReader_PopulateParseTable_m5A58DFFED8E9B63E82FC8500B6393B0DA39F23F4(NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mA7B3448630453E385BCAADCA985410AFFCE4ACC3 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___json_text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json_text0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A(__this, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m796FB622ADB958C9EC9B9F937C12B72B6424DE3A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, bool ___owned1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A_RuntimeMethod_var)));
	}

IL_0014:
	{
		__this->___parser_in_string_7 = (bool)0;
		__this->___parser_return_8 = (bool)0;
		__this->___read_started_9 = (bool)0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_2, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->___automaton_stack_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___automaton_stack_1), (void*)L_2);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_5 = ___reader0;
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9*)il2cpp_codegen_object_new(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Lexer__ctor_mEF8BD28E77BCC5B98C34C9CE51CD2DCF786CA5A9(L_6, L_5, NULL);
		__this->___lexer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lexer_6), (void*)L_6);
		__this->___end_of_input_5 = (bool)0;
		__this->___end_of_json_4 = (bool)0;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_7 = ___reader0;
		__this->___reader_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)L_7);
		bool L_8 = ___owned1;
		__this->___reader_is_owned_11 = L_8;
		return;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m5A58DFFED8E9B63E82FC8500B6393B0DA39F23F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_12 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_13 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_14 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_15 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_16 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_17 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_20 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_21 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_22 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_23 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_24 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_25 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_26 = NULL;
	{
		Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* L_0 = (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*)il2cpp_codegen_object_new(Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0(L_0, Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0), (void*)L_0);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65548), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65548), ((int32_t)91), L_4, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65549), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)34), L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_2 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_2;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)91), L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_3 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)93), L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_4 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_4;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_4;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_4;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_4;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)123), L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_5 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_5;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_5;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)65537), L_27, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_6 = L_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_6;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_6;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_6;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)65538), L_32, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_7 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_7;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_7;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_7;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)65539), L_37, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_8 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_8;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_8;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_8;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65549), ((int32_t)65540), L_42, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65544), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_9 = L_43;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_9;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_9;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_9;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65544), ((int32_t)123), L_46, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65545), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_10 = L_47;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_10;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65546));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_10;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65547));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_10;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)125));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_10;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65545), ((int32_t)34), L_51, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_52;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_11;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_11;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65545), ((int32_t)125), L_54, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65546), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_12 = L_55;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_12;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_12;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_12;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_12;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65546), ((int32_t)34), L_59, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65547), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_13 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_13;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_13;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65546));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_13;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)65547));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_13;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65547), ((int32_t)44), L_64, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_14 = L_65;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_14;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_14;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65547), ((int32_t)125), L_67, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65552), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_15 = L_68;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_15;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_15;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65541));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_15;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_15;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65552), ((int32_t)34), L_72, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65543), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_16 = L_73;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_16;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_16;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65543), ((int32_t)91), L_75, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_17 = L_76;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = V_17;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_17;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65543), ((int32_t)123), L_78, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65550), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_18 = L_79;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_18;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_18;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)34), L_81, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_82;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_19;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_19;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)91), L_84, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_85;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_20;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_20;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)123), L_87, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_21 = L_88;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_21;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_21;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)65537), L_90, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_22 = L_91;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_22;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_22;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)65538), L_93, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_23 = L_94;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_23;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = V_23;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)65539), L_96, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_24 = L_97;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_24;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_24;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65550), ((int32_t)65540), L_99, NULL);
		JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5(((int32_t)65551), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_25 = L_100;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_25;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = V_25;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_25;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)65551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_25;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65551), ((int32_t)44), L_104, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_26 = L_105;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = V_26;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_26;
		JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8(((int32_t)65551), ((int32_t)93), L_107, NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m4BBA71E7560CE973E815FCF1D8939A2749B05EC8 (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___symbols2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_1 = ___row0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___symbols2;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(TKey,TValue) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m29294B60ACCA24B636A202482C647547F576BBC5 (int32_t ___rule0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_1 = ___rule0;
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_2 = (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*)il2cpp_codegen_object_new(Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A(L_2, Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(TKey,TValue) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mF3EF4D91F87594C1D6357FDE08D539DDB66A624D (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)101), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)69), NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_004e;
		}
	}

IL_0021:
	{
		String_t* L_6 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		NullCheck(L_7);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_8;
		L_8 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_7);
		bool L_9;
		L_9 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_6, ((int32_t)167), L_8, (&V_0), NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		__this->___token_13 = 8;
		double L_10 = V_0;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		__this->___token_value_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_12);
		return;
	}

IL_004e:
	{
		String_t* L_13 = ___number0;
		bool L_14;
		L_14 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_13, (&V_1), NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		__this->___token_13 = 6;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		__this->___token_value_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_17);
		return;
	}

IL_006c:
	{
		String_t* L_18 = ___number0;
		bool L_19;
		L_19 = Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986(L_18, (&V_2), NULL);
		if (!L_19)
		{
			goto IL_008a;
		}
	}
	{
		__this->___token_13 = 7;
		int64_t L_20 = V_2;
		int64_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_21);
		__this->___token_value_12 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_22);
		return;
	}

IL_008a:
	{
		__this->___token_13 = 6;
		int32_t L_23 = 0;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		__this->___token_value_12 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_24);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m0E855A59E8E386619529E923A6A9BABFEE63769C (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0019;
		}
	}
	{
		__this->___token_13 = 4;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0019:
	{
		int32_t L_1 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0032;
		}
	}
	{
		__this->___token_13 = 5;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0032:
	{
		int32_t L_2 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_004b;
		}
	}
	{
		__this->___token_13 = 1;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_004b:
	{
		int32_t L_3 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->___token_13 = 3;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0064:
	{
		int32_t L_4 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009d;
		}
	}
	{
		bool L_5 = __this->___parser_in_string_7;
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->___parser_in_string_7 = (bool)0;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0085:
	{
		int32_t L_6 = __this->___token_13;
		if (L_6)
		{
			goto IL_0095;
		}
	}
	{
		__this->___token_13 = ((int32_t)9);
	}

IL_0095:
	{
		__this->___parser_in_string_7 = (bool)1;
		return;
	}

IL_009d:
	{
		int32_t L_7 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00bc;
		}
	}
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_8 = __this->___lexer_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline(L_8, NULL);
		__this->___token_value_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_9);
		return;
	}

IL_00bc:
	{
		int32_t L_10 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_00e5;
		}
	}
	{
		__this->___token_13 = ((int32_t)10);
		bool L_11 = ((bool)0);
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		__this->___token_value_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_12);
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_00e5:
	{
		int32_t L_13 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0102;
		}
	}
	{
		__this->___token_13 = ((int32_t)11);
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0102:
	{
		int32_t L_14 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0128;
		}
	}
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = __this->___lexer_6;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline(L_15, NULL);
		JsonReader_ProcessNumber_mF3EF4D91F87594C1D6357FDE08D539DDB66A624D(__this, L_16, NULL);
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0128:
	{
		int32_t L_17 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_013d;
		}
	}
	{
		__this->___token_13 = 2;
		return;
	}

IL_013d:
	{
		int32_t L_18 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_0165;
		}
	}
	{
		__this->___token_13 = ((int32_t)10);
		bool L_19 = ((bool)1);
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_20);
		__this->___parser_return_8 = (bool)1;
	}

IL_0165:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = __this->___lexer_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083(L_1, NULL);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_3 = __this->___lexer_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		JsonReader_Close_m91AEDB0DE517F63898D830A3140B83032CFE8F2F(__this, NULL);
		return (bool)0;
	}

IL_002b:
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_5 = __this->___lexer_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99_inline(L_5, NULL);
		__this->___current_input_2 = L_6;
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m91AEDB0DE517F63898D830A3140B83032CFE8F2F (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->___end_of_input_5 = (bool)1;
		__this->___end_of_json_4 = (bool)1;
		bool L_1 = __this->___reader_is_owned_11;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader_10;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_002a:
	{
		__this->___reader_10 = (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)(TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1 = __this->___end_of_json_4;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		__this->___end_of_json_4 = (bool)0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___automaton_stack_1;
		NullCheck(L_2);
		Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0(L_2, Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
	}

IL_0044:
	{
		__this->___parser_in_string_7 = (bool)0;
		__this->___parser_return_8 = (bool)0;
		__this->___token_13 = 0;
		__this->___token_value_12 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)NULL);
		bool L_5 = __this->___read_started_9;
		if (L_5)
		{
			goto IL_0079;
		}
	}
	{
		__this->___read_started_9 = (bool)1;
		bool L_6;
		L_6 = JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9(__this, NULL);
		if (L_6)
		{
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0079:
	{
		bool L_7 = __this->___parser_return_8;
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_8 = __this->___automaton_stack_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_8, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_009a;
		}
	}
	{
		__this->___end_of_json_4 = (bool)1;
	}

IL_009a:
	{
		return (bool)1;
	}

IL_009c:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_10 = __this->___automaton_stack_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_10, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		__this->___current_symbol_3 = L_11;
		JsonReader_ProcessSymbol_m0E855A59E8E386619529E923A6A9BABFEE63769C(__this, NULL);
		int32_t L_12 = __this->___current_symbol_3;
		int32_t L_13 = __this->___current_input_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00f2;
		}
	}
	{
		bool L_14;
		L_14 = JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9(__this, NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_15 = __this->___automaton_stack_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_15, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_00e6;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_17 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B_RuntimeMethod_var)));
	}

IL_00e6:
	{
		bool L_18 = __this->___parser_return_8;
		if (!L_18)
		{
			goto IL_00f0;
		}
	}
	{
		return (bool)1;
	}

IL_00f0:
	{
		return (bool)0;
	}

IL_00f2:
	try
	{// begin try (depth: 1)

IL_00f2_1:
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_20 = __this->___current_symbol_3;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->___current_input_2;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23;
		L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(TKey) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_011e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0110;
		}
		throw e;
	}

CATCH_0110:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = ((KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*));
		int32_t L_24 = __this->___current_input_2;
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_25 = V_1;
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_26 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		JsonException__ctor_mD12D72A1D7949F48B846F1207BFA40EB8CB61E23(L_26, L_24, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_011e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65554))))
		{
			goto IL_0079;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1));
		goto IL_0145;
	}

IL_0133:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_31 = __this->___automaton_stack_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_31, L_35, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
	}

IL_0145:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		goto IL_0079;
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
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037 (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 LitJson.JsonWriter::get_IndentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_IndentValue_mF2FD1FADA3207ECD754534B9D5E65CC12A770182 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___indent_value_6;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_IndentValue_m50BCF8F90DF5E4EB581AEC9B320FAF57960B7A92 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___indentation_5;
		int32_t L_1 = __this->___indent_value_6;
		int32_t L_2 = ___value0;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0/L_1)), L_2));
		int32_t L_3 = ___value0;
		__this->___indent_value_6 = L_3;
		return;
	}
}
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_PrettyPrint_mD81B92E6DF9C1A37598BB57E018818E616472446 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___pretty_print_8;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_PrettyPrint_mF46CF67E6862407E9B7BCF628F99BA071B4EE25C (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___pretty_print_8 = L_0;
		return;
	}
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___writer_10;
		return L_0;
	}
}
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___validate_9;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___validate_9 = L_0;
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m47C49AE5B3EB8569EE2031598A86644ED9B7BB06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m08BD3BFBBBE015F2EDCF6DE969ACFB327E453621(NULL);
		((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0), (void*)L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mFF4C2DE4CAD061714750C2D87291FCF9D0AE4EF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___inst_string_builder_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_builder_7), (void*)L_0);
		StringBuilder_t* L_1 = __this->___inst_string_builder_7;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_2, L_1, NULL);
		__this->___writer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_10), (void*)L_2);
		JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m25FA80F1F771C70FB5353B2C9B592DB260A56B52 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = ___sb0;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_1, L_0, NULL);
		JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E(__this, L_1, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E_RuntimeMethod_var)));
	}

IL_0014:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = ___writer0;
		__this->___writer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_10), (void*)L_2);
		JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___cond0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_0 = __this->___context_1;
		NullCheck(L_0);
		bool L_1 = L_0->___ExpectingValue_3;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_2 = __this->___context_1;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		NullCheck(L_3);
		L_3->___Count_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0020:
	{
		bool L_5 = __this->___validate_9;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		bool L_6 = __this->___has_reached_end_3;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_7 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00c1;
			}
			case 4:
			{
				goto IL_00e6;
			}
		}
	}
	{
		return;
	}

IL_0059:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_10 = __this->___context_1;
		NullCheck(L_10);
		bool L_11 = L_10->___InArray_1;
		if (L_11)
		{
			goto IL_0118;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_12 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_0074:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_13 = __this->___context_1;
		NullCheck(L_13);
		bool L_14 = L_13->___InObject_2;
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_15 = __this->___context_1;
		NullCheck(L_15);
		bool L_16 = L_15->___ExpectingValue_3;
		if (!L_16)
		{
			goto IL_0118;
		}
	}

IL_0091:
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_17 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_009c:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_18 = __this->___context_1;
		NullCheck(L_18);
		bool L_19 = L_18->___InObject_2;
		if (!L_19)
		{
			goto IL_0118;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_20 = __this->___context_1;
		NullCheck(L_20);
		bool L_21 = L_20->___ExpectingValue_3;
		if (L_21)
		{
			goto IL_0118;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_22 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_00c1:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_23 = __this->___context_1;
		NullCheck(L_23);
		bool L_24 = L_23->___InObject_2;
		if (!L_24)
		{
			goto IL_00db;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_25 = __this->___context_1;
		NullCheck(L_25);
		bool L_26 = L_25->___ExpectingValue_3;
		if (!L_26)
		{
			goto IL_0118;
		}
	}

IL_00db:
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_27 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_00e6:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_28 = __this->___context_1;
		NullCheck(L_28);
		bool L_29 = L_28->___InArray_1;
		if (L_29)
		{
			goto IL_0118;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_30 = __this->___context_1;
		NullCheck(L_30);
		bool L_31 = L_30->___InObject_2;
		if (!L_31)
		{
			goto IL_010d;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_32 = __this->___context_1;
		NullCheck(L_32);
		bool L_33 = L_32->___ExpectingValue_3;
		if (L_33)
		{
			goto IL_0118;
		}
	}

IL_010d:
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_34 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_0118:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___has_reached_end_3 = (bool)0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___hex_seq_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hex_seq_4), (void*)L_0);
		__this->___indentation_5 = 0;
		__this->___indent_value_6 = 4;
		__this->___pretty_print_8 = (bool)0;
		__this->___validate_9 = (bool)1;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_1 = (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*)il2cpp_codegen_object_new(Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7(L_1, Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7_RuntimeMethod_var);
		__this->___ctx_stack_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctx_stack_2), (void*)L_1);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_2 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_2, NULL);
		__this->___context_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_2);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_3 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_4 = __this->___context_1;
		NullCheck(L_3);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_3, L_4, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mB090F938B611EE6CCB40B9C3F927DF0C6FBB8E04 (int32_t ___n0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)(L_0%((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_3))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_4))));
		goto IL_0027;
	}

IL_001a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_6))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)65), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10)))))));
	}

IL_0027:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)(L_8>>4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
	}

IL_001b:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = __this->___writer_10;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_002a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___indentation_5;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___writer_10;
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100(__this, (bool)1, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___add_comma0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_5 = __this->___writer_10;
		NullCheck(L_5);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		bool L_6 = __this->___pretty_print_8;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_7 = __this->___context_1;
		NullCheck(L_7);
		bool L_8 = L_7->___ExpectingValue_3;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = __this->___writer_10;
		NullCheck(L_9);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_004d:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_0, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___writer_10;
		NullCheck(L_1);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_10 = __this->___writer_10;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		goto IL_0141;
	}

IL_0072:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = __this->___writer_10;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		goto IL_0141;
	}

IL_0087:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12 = __this->___writer_10;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		goto IL_0141;
	}

IL_009c:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->___writer_10;
		NullCheck(L_13);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_14 = __this->___writer_10;
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0141;
	}

IL_00c0:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18 = __this->___writer_10;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		goto IL_0141;
	}

IL_00d2:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_19 = __this->___writer_10;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		goto IL_0141;
	}

IL_00e4:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_26 = __this->___writer_10;
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_28, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0141;
	}

IL_010e:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, L_31, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___hex_seq_4;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_mB090F938B611EE6CCB40B9C3F927DF0C6FBB8E04(L_32, L_33, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_34 = __this->___writer_10;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_35 = __this->___writer_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = __this->___hex_seq_4;
		NullCheck(L_35);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0145:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_40 = __this->___writer_10;
		NullCheck(L_40);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001b:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m787891ECDDA05AC2F51A2571A273ED2A5FF984FC (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___inst_string_builder_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t* L_2 = __this->___inst_string_builder_7;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mCFA289C24C9ECEE98AD50E970F0D1F032F7E1989 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___has_reached_end_3 = (bool)0;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65(L_0, Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65_RuntimeMethod_var);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_1, NULL);
		__this->___context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_1);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_2, L_3, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		StringBuilder_t* L_4 = __this->___inst_string_builder_7;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t* L_5 = __this->___inst_string_builder_7;
		StringBuilder_t* L_6 = __this->___inst_string_builder_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_6, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_5, 0, L_7, NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___boolean0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* G_B2_0 = NULL;
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(G_B3_1, G_B3_0, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m2042A55B478D11A2C4BB399CE96C17DB3D85133A (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m968749D791BDDE9D6ECB2D71DDE205221B27953D(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, double ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		double L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7E8CB36CAB0CAC9E6E8D7C3CA8238A6A2D8E8D06(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_3, NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = __this->___writer_10;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_0046:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_9 = __this->___context_1;
		NullCheck(L_9);
		L_9->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		int32_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		int64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mF003FE14E8D6095D655814A1DB1CA3D8C43DCF56(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1(__this, L_1, NULL);
	}

IL_0024:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_2 = __this->___context_1;
		NullCheck(L_2);
		L_2->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, uint64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		uint64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC566A684B01894703BF5DD80425842A7B1DF6C(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 0, NULL);
		JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100(__this, (bool)0, NULL);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1;
		L_1 = Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2(L_0, Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_inline(L_2, Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->___has_reached_end_3 = (bool)1;
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_5;
		L_5 = Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C(L_4, Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_004e:
	{
		JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 2, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_0 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InArray_1 = (bool)1;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_2, L_3, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 1, NULL);
		JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100(__this, (bool)0, NULL);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1;
		L_1 = Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2(L_0, Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_inline(L_2, Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->___has_reached_end_3 = (bool)1;
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_5;
		L_5 = Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C(L_4, Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_004e:
	{
		JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 2, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_0 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InObject_2 = (bool)1;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_2, L_3, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___property_name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 3, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		String_t* L_0 = ___property_name0;
		JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1(__this, L_0, NULL);
		bool L_1 = __this->___pretty_print_8;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_4 = __this->___context_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Padding_4;
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0040;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_6 = __this->___context_1;
		String_t* L_7 = ___property_name0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		L_6->___Padding_4 = L_8;
	}

IL_0040:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_9 = __this->___context_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Padding_4;
		String_t* L_11 = ___property_name0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_12));
		goto IL_0066;
	}

IL_0055:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->___writer_10;
		NullCheck(L_13);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)32));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0066:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_16 = __this->___writer_10;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_0089;
	}

IL_007c:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_17 = __this->___writer_10;
		NullCheck(L_17);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)58));
	}

IL_0089:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_18 = __this->___context_1;
		NullCheck(L_18);
		L_18->___ExpectingValue_3 = (bool)1;
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
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m65740EA47916AE8C2881DD66B2EEE0CECA3E7189 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean LitJson.Lexer::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___allow_comments_2 = L_0;
		return;
	}
}
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___allow_single_quoted_strings_3 = L_0;
		return;
	}
}
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
// System.Void LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_m250C231E7ADCDBEAF85A29727B8609F22D5FCCA8 (const RuntimeMethod* method) 
{
	{
		Lexer_PopulateFsmTables_mA6807F50C0EB8FD7919FF140A627A42EF12735CF(NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mEF8BD28E77BCC5B98C34C9CE51CD2DCF786CA5A9 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___allow_comments_2 = (bool)1;
		__this->___allow_single_quoted_strings_3 = (bool)1;
		__this->___input_buffer_6 = 0;
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)128), NULL);
		__this->___string_buffer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_buffer_10), (void*)L_0);
		__this->___state_9 = 1;
		__this->___end_of_input_4 = (bool)0;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = ___reader0;
		__this->___reader_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_8), (void*)L_1);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_2 = (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*)il2cpp_codegen_object_new(FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FsmContext__ctor_m65740EA47916AE8C2881DD66B2EEE0CECA3E7189(L_2, NULL);
		__this->___fsm_context_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fsm_context_5), (void*)L_2);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = __this->___fsm_context_5;
		NullCheck(L_3);
		L_3->___L_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___L_2), (void*)__this);
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m6D77ABB764E4A6FD645FD2FABF57AAF9DE1FF261 (int32_t ___digit0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___digit0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)65))))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0055;
			}
		}
	}
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)97))))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0046:
	{
		return ((int32_t)10);
	}

IL_0049:
	{
		return ((int32_t)11);
	}

IL_004c:
	{
		return ((int32_t)12);
	}

IL_004f:
	{
		return ((int32_t)13);
	}

IL_0052:
	{
		return ((int32_t)14);
	}

IL_0055:
	{
		return ((int32_t)15);
	}

IL_0058:
	{
		int32_t L_3 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mA6807F50C0EB8FD7919FF140A627A42EF12735CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_mE9C9CDAB67FCC717E3EAE2AB97B51B26B8199283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_m706E077BD4C9AE462E7C9EB12B3FD361E404AC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m372B0999B2F0E88435FB4C4A140980FFDE8128E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_m4D2684CC9DCEE21BF734584FCC28C30416390198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_mE0FB489B9C85DEDF18109DE6CE8C25AD50678C99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_m8DCD84F0B4130236E2B748777D9E63B8A84AAFEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_m311A50C30974F841F3A237E0B6879D25360154A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_mF42066845C438DE0DD4917074C9EECE7113DFD5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_m692E6E4F5CBBB749110B781F5CAEAF721990F224_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_m17E195B888DEA1039C711F01A178F30EF03E39B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_mEAB1F6743FE216AA6A36A8094977CC2AF2B599FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_mBCFFE062E69B7C18CFF17B80210FD3C7F952A5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_mD0C30E42D81F282FBA5AA2F5603633CFFE0027EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_m98AD03EF8F075A2D644062ADA11A5F79D65A7CD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_mB258C7FE0738774467E7B05296EEBCE447163FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_mCAD0C2571A7AE5C165AF88B35DD80077200B831E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_mC449B53D5EC65C8643AB027E729C3317127B3E71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_m714CB3B46761AFEFF217D0485B359DB10DE8C0A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_m4DFEE256AFD77A734E1C73C7659D312B42F0AF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_mAD2C07B80833DA608B19B82385B2D6DC68FC2B0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_m88781D4933F4F529CEC53DE1822016DA9489F02D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_m2288BD52F34928FEA34C67E13A8FC9AEB4F1A79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_mB6C181BB8BFBCD315F4B6B5A870C2B9859AC0ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_m879D96EB296293273384EFBE554D525344868882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_m48D4E33D1ABCA97802D1B3711A05E75DFF27A56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_m06BE99ECE371574D2DED8666DBDDCDE5A52BEA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_m654DEAE3558CDB7FC23CEF56D2FCB59B749793E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_m6FC3DC3CCB04275E724A911A2087180B082FC9F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B3DDD3A07U2D2147U2D4FEAU2D81FAU2D4CA2055D6051U7D_t526943E2ACE10CEE21477D148F99E8FC3CB9B620____U24U24method0x60000fdU2D1_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* V_0 = NULL;
	{
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_0 = (StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93*)(StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93*)SZArrayNew(StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_1 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_2 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_2, NULL, (intptr_t)((void*)Lexer_State1_mEAB1F6743FE216AA6A36A8094977CC2AF2B599FB_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_2);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_3 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_4 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_4, NULL, (intptr_t)((void*)Lexer_State2_m88781D4933F4F529CEC53DE1822016DA9489F02D_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_4);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_5 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_6 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_6, NULL, (intptr_t)((void*)Lexer_State3_m2288BD52F34928FEA34C67E13A8FC9AEB4F1A79B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_6);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_7 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_8 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_8, NULL, (intptr_t)((void*)Lexer_State4_mB6C181BB8BFBCD315F4B6B5A870C2B9859AC0ECA_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_8);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_9 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_10 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_10, NULL, (intptr_t)((void*)Lexer_State5_m879D96EB296293273384EFBE554D525344868882_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_10);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_11 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_12 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_12, NULL, (intptr_t)((void*)Lexer_State6_m48D4E33D1ABCA97802D1B3711A05E75DFF27A56A_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_12);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_13 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_14 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_14, NULL, (intptr_t)((void*)Lexer_State7_m06BE99ECE371574D2DED8666DBDDCDE5A52BEA5D_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_14);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_15 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_16 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_16, NULL, (intptr_t)((void*)Lexer_State8_m654DEAE3558CDB7FC23CEF56D2FCB59B749793E2_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_16);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_17 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_18 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_18, NULL, (intptr_t)((void*)Lexer_State9_m6FC3DC3CCB04275E724A911A2087180B082FC9F6_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_18);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_19 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_20 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_20, NULL, (intptr_t)((void*)Lexer_State10_mE9C9CDAB67FCC717E3EAE2AB97B51B26B8199283_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_20);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_21 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_22 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_22, NULL, (intptr_t)((void*)Lexer_State11_m706E077BD4C9AE462E7C9EB12B3FD361E404AC15_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_22);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_23 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_24 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_24, NULL, (intptr_t)((void*)Lexer_State12_m372B0999B2F0E88435FB4C4A140980FFDE8128E4_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_24);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_25 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_26 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_26, NULL, (intptr_t)((void*)Lexer_State13_m4D2684CC9DCEE21BF734584FCC28C30416390198_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_26);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_27 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_28 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_28, NULL, (intptr_t)((void*)Lexer_State14_mE0FB489B9C85DEDF18109DE6CE8C25AD50678C99_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_28);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_29 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_30 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_30, NULL, (intptr_t)((void*)Lexer_State15_m8DCD84F0B4130236E2B748777D9E63B8A84AAFEA_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_30);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_31 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_32 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_32, NULL, (intptr_t)((void*)Lexer_State16_m311A50C30974F841F3A237E0B6879D25360154A1_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_32);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_33 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_34 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_34, NULL, (intptr_t)((void*)Lexer_State17_mF42066845C438DE0DD4917074C9EECE7113DFD5D_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_34);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_35 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_36 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_36, NULL, (intptr_t)((void*)Lexer_State18_m692E6E4F5CBBB749110B781F5CAEAF721990F224_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_36);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_37 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_38 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_38, NULL, (intptr_t)((void*)Lexer_State19_m17E195B888DEA1039C711F01A178F30EF03E39B6_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_38);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_39 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_40 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_40, NULL, (intptr_t)((void*)Lexer_State20_mBCFFE062E69B7C18CFF17B80210FD3C7F952A5F9_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_40);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_41 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_42 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_42, NULL, (intptr_t)((void*)Lexer_State21_mD0C30E42D81F282FBA5AA2F5603633CFFE0027EC_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_42);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_43 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_44 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_44, NULL, (intptr_t)((void*)Lexer_State22_m98AD03EF8F075A2D644062ADA11A5F79D65A7CD2_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_44);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_45 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_46 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_46, NULL, (intptr_t)((void*)Lexer_State23_mB258C7FE0738774467E7B05296EEBCE447163FDD_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_46);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_47 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_48 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_48, NULL, (intptr_t)((void*)Lexer_State24_mCAD0C2571A7AE5C165AF88B35DD80077200B831E_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_48);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_49 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_50 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_50, NULL, (intptr_t)((void*)Lexer_State25_mC449B53D5EC65C8643AB027E729C3317127B3E71_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_50);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_51 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_52 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_52, NULL, (intptr_t)((void*)Lexer_State26_m714CB3B46761AFEFF217D0485B359DB10DE8C0A7_RuntimeMethod_var), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_52);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_53 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_54 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_54, NULL, (intptr_t)((void*)Lexer_State27_m4DFEE256AFD77A734E1C73C7659D312B42F0AF9F_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_54);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_55 = V_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_56 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_56, NULL, (intptr_t)((void*)Lexer_State28_mAD2C07B80833DA608B19B82385B2D6DC68FC2B0E_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_56);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_57 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_handler_table_1 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_handler_table_1), (void*)L_57);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B3DDD3A07U2D2147U2D4FEAU2D81FAU2D4CA2055D6051U7D_t526943E2ACE10CEE21477D148F99E8FC3CB9B620____U24U24method0x60000fdU2D1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_59, L_60, NULL);
		((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_return_table_0 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_return_table_0), (void*)L_59);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m1EF36F1E5B61DCFE71F987C70606B141D271E042 (int32_t ___esc_char0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___esc_char0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)92))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)39))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)39))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0066;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0066;
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)98))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)102))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_0066;
	}

IL_0035:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_005e;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_0051:
	{
		int32_t L_12 = ___esc_char0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_13;
		L_13 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_12, NULL);
		return L_13;
	}

IL_0058:
	{
		return ((int32_t)10);
	}

IL_005b:
	{
		return ((int32_t)9);
	}

IL_005e:
	{
		return ((int32_t)13);
	}

IL_0061:
	{
		return 8;
	}

IL_0063:
	{
		return ((int32_t)12);
	}

IL_0066:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_mEAB1F6743FE216AA6A36A8094977CC2AF2B599FB (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_01f2;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_01f2;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)13))))
		{
			goto IL_01f2;
		}
	}

IL_0038:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_16 = L_15->___L_2;
		NullCheck(L_16);
		StringBuilder_t* L_17 = L_16->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->___input_char_7;
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)(uint16_t)L_20), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___NextState_1 = 3;
		return (bool)1;
	}

IL_007c:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_24 = L_23->___L_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char_7;
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)58))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)39))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01f0;
	}

IL_00a7:
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_0140;
			}
			case 2:
			{
				goto IL_01f0;
			}
			case 3:
			{
				goto IL_01d7;
			}
			case 4:
			{
				goto IL_0166;
			}
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01f0;
	}

IL_00ce:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)102))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_33 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_33, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_01f0;
			}
			case 2:
			{
				goto IL_0130;
			}
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)102))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_01f0;
	}

IL_00f5:
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)110))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)116))))
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_37 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_37, ((int32_t)123))))
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_01f0;
			}
			case 2:
			{
				goto IL_0130;
			}
		}
	}
	{
		goto IL_01f0;
	}

IL_011f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_38 = ___ctx0;
		NullCheck(L_38);
		L_38->___NextState_1 = ((int32_t)19);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_39 = ___ctx0;
		NullCheck(L_39);
		L_39->___Return_0 = (bool)1;
		return (bool)1;
	}

IL_0130:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_40 = ___ctx0;
		NullCheck(L_40);
		L_40->___NextState_1 = 1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->___Return_0 = (bool)1;
		return (bool)1;
	}

IL_0140:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_43 = L_42->___L_2;
		NullCheck(L_43);
		StringBuilder_t* L_44 = L_43->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_46 = L_45->___L_2;
		NullCheck(L_46);
		int32_t L_47 = L_46->___input_char_7;
		NullCheck(L_44);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, ((int32_t)(uint16_t)L_47), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_49 = ___ctx0;
		NullCheck(L_49);
		L_49->___NextState_1 = 2;
		return (bool)1;
	}

IL_0166:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_50 = ___ctx0;
		NullCheck(L_50);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_51 = L_50->___L_2;
		NullCheck(L_51);
		StringBuilder_t* L_52 = L_51->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_53 = ___ctx0;
		NullCheck(L_53);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_54 = L_53->___L_2;
		NullCheck(L_54);
		int32_t L_55 = L_54->___input_char_7;
		NullCheck(L_52);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_52, ((int32_t)(uint16_t)L_55), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_57 = ___ctx0;
		NullCheck(L_57);
		L_57->___NextState_1 = 4;
		return (bool)1;
	}

IL_018c:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_58 = ___ctx0;
		NullCheck(L_58);
		L_58->___NextState_1 = ((int32_t)12);
		return (bool)1;
	}

IL_0196:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_59 = ___ctx0;
		NullCheck(L_59);
		L_59->___NextState_1 = ((int32_t)16);
		return (bool)1;
	}

IL_01a0:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_60 = ___ctx0;
		NullCheck(L_60);
		L_60->___NextState_1 = ((int32_t)9);
		return (bool)1;
	}

IL_01aa:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_61 = ___ctx0;
		NullCheck(L_61);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_62 = L_61->___L_2;
		NullCheck(L_62);
		bool L_63 = L_62->___allow_single_quoted_strings_3;
		if (L_63)
		{
			goto IL_01b9;
		}
	}
	{
		return (bool)0;
	}

IL_01b9:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_64 = ___ctx0;
		NullCheck(L_64);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_65 = L_64->___L_2;
		NullCheck(L_65);
		L_65->___input_char_7 = ((int32_t)34);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_66 = ___ctx0;
		NullCheck(L_66);
		L_66->___NextState_1 = ((int32_t)23);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_67 = ___ctx0;
		NullCheck(L_67);
		L_67->___Return_0 = (bool)1;
		return (bool)1;
	}

IL_01d7:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_68 = ___ctx0;
		NullCheck(L_68);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_69 = L_68->___L_2;
		NullCheck(L_69);
		bool L_70 = L_69->___allow_comments_2;
		if (L_70)
		{
			goto IL_01e6;
		}
	}
	{
		return (bool)0;
	}

IL_01e6:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_71 = ___ctx0;
		NullCheck(L_71);
		L_71->___NextState_1 = ((int32_t)25);
		return (bool)1;
	}

IL_01f0:
	{
		return (bool)0;
	}

IL_01f2:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_72 = ___ctx0;
		NullCheck(L_72);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_73 = L_72->___L_2;
		NullCheck(L_73);
		bool L_74;
		L_74 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_73, NULL);
		if (L_74)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_m88781D4933F4F529CEC53DE1822016DA9489F02D (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 3;
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0087;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21->___L_2;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		NullCheck(L_23);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)(uint16_t)L_26), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_28 = ___ctx0;
		NullCheck(L_28);
		L_28->___NextState_1 = 4;
		return (bool)1;
	}

IL_0087:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_m2288BD52F34928FEA34C67E13A8FC9AEB4F1A79B (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0127;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_0127;
	}

IL_0045:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_28 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_00be;
			}
			case 1:
			{
				goto IL_0125;
			}
			case 2:
			{
				goto IL_00d9;
			}
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)69))))
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_0125;
	}

IL_00af:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)101))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0125;
		}
	}

IL_00be:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_34 = L_33->___L_2;
		NullCheck(L_34);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_34, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->___NextState_1 = 1;
		return (bool)1;
	}

IL_00d9:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_38 = L_37->___L_2;
		NullCheck(L_38);
		StringBuilder_t* L_39 = L_38->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_40 = ___ctx0;
		NullCheck(L_40);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_41 = L_40->___L_2;
		NullCheck(L_41);
		int32_t L_42 = L_41->___input_char_7;
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->___NextState_1 = 5;
		return (bool)1;
	}

IL_00ff:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_46 = L_45->___L_2;
		NullCheck(L_46);
		StringBuilder_t* L_47 = L_46->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_48 = ___ctx0;
		NullCheck(L_48);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_49 = L_48->___L_2;
		NullCheck(L_49);
		int32_t L_50 = L_49->___input_char_7;
		NullCheck(L_47);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, ((int32_t)(uint16_t)L_50), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_52 = ___ctx0;
		NullCheck(L_52);
		L_52->___NextState_1 = 7;
		return (bool)1;
	}

IL_0125:
	{
		return (bool)0;
	}

IL_0127:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_53 = ___ctx0;
		NullCheck(L_53);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_54 = L_53->___L_2;
		NullCheck(L_54);
		bool L_55;
		L_55 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_54, NULL);
		if (L_55)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_mB6C181BB8BFBCD315F4B6B5A870C2B9859AC0ECA (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0049;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->___NextState_1 = 1;
		return (bool)1;
	}

IL_0049:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)69))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_18 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_0085;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_00ec;
	}

IL_0076:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)93))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ec;
		}
	}

IL_0085:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_24 = L_23->___L_2;
		NullCheck(L_24);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_24, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_25 = ___ctx0;
		NullCheck(L_25);
		L_25->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_26 = ___ctx0;
		NullCheck(L_26);
		L_26->___NextState_1 = 1;
		return (bool)1;
	}

IL_00a0:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_27 = ___ctx0;
		NullCheck(L_27);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_28 = L_27->___L_2;
		NullCheck(L_28);
		StringBuilder_t* L_29 = L_28->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_30 = ___ctx0;
		NullCheck(L_30);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_31 = L_30->___L_2;
		NullCheck(L_31);
		int32_t L_32 = L_31->___input_char_7;
		NullCheck(L_29);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)(uint16_t)L_32), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->___NextState_1 = 5;
		return (bool)1;
	}

IL_00c6:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_36 = L_35->___L_2;
		NullCheck(L_36);
		StringBuilder_t* L_37 = L_36->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_39 = L_38->___L_2;
		NullCheck(L_39);
		int32_t L_40 = L_39->___input_char_7;
		NullCheck(L_37);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_37, ((int32_t)(uint16_t)L_40), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->___NextState_1 = 7;
		return (bool)1;
	}

IL_00ec:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_m879D96EB296293273384EFBE554D525344868882 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 6;
		return (bool)1;
	}

IL_0050:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_m48D4E33D1ABCA97802D1B3711A05E75DFF27A56A (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00f1;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_00f1;
	}

IL_0045:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00ef;
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}

IL_00ae:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_34 = L_33->___L_2;
		NullCheck(L_34);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_34, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->___NextState_1 = 1;
		return (bool)1;
	}

IL_00c9:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_38 = L_37->___L_2;
		NullCheck(L_38);
		StringBuilder_t* L_39 = L_38->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_40 = ___ctx0;
		NullCheck(L_40);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_41 = L_40->___L_2;
		NullCheck(L_41);
		int32_t L_42 = L_41->___input_char_7;
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->___NextState_1 = 7;
		return (bool)1;
	}

IL_00ef:
	{
		return (bool)0;
	}

IL_00f1:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_46 = L_45->___L_2;
		NullCheck(L_46);
		bool L_47;
		L_47 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_46, NULL);
		if (L_47)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_m06BE99ECE371574D2DED8666DBDDCDE5A52BEA5D (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 8;
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		V_0 = L_19;
		int32_t L_20 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)43))))
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0099;
	}

IL_0073:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21->___L_2;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		NullCheck(L_23);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)(uint16_t)L_26), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_28 = ___ctx0;
		NullCheck(L_28);
		L_28->___NextState_1 = 8;
		return (bool)1;
	}

IL_0099:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_m654DEAE3558CDB7FC23CEF56D2FCB59B749793E2 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00b7;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_00b7;
	}

IL_0042:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_006f;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_007f;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_007f;
		}
	}

IL_006f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		return (bool)1;
	}

IL_007f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00b5;
		}
	}

IL_009a:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_30 = ___ctx0;
		NullCheck(L_30);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_31 = L_30->___L_2;
		NullCheck(L_31);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_31, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->___NextState_1 = 1;
		return (bool)1;
	}

IL_00b5:
	{
		return (bool)0;
	}

IL_00b7:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_35 = L_34->___L_2;
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_35, NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_m6FC3DC3CCB04275E724A911A2087180B082FC9F6 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)10);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_mE9C9CDAB67FCC717E3EAE2AB97B51B26B8199283 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)11);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_m706E077BD4C9AE462E7C9EB12B3FD361E404AC15 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m372B0999B2F0E88435FB4C4A140980FFDE8128E4 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)13);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_m4D2684CC9DCEE21BF734584FCC28C30416390198 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)14);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_mE0FB489B9C85DEDF18109DE6CE8C25AD50678C99 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)15);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_m8DCD84F0B4130236E2B748777D9E63B8A84AAFEA (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_m311A50C30974F841F3A237E0B6879D25360154A1 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)17);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_mF42066845C438DE0DD4917074C9EECE7113DFD5D (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)18);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_m692E6E4F5CBBB749110B781F5CAEAF721990F224 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_m17E195B888DEA1039C711F01A178F30EF03E39B6 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_6, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)20);
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)19);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_mBCFFE062E69B7C18CFF17B80210FD3C7F952A5F9 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_mD0C30E42D81F282FBA5AA2F5603633CFFE0027EC (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)92))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)39))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_003a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)102))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_006b:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___ctx0;
		NullCheck(L_17);
		L_17->___NextState_1 = ((int32_t)22);
		return (bool)1;
	}

IL_0075:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		StringBuilder_t* L_20 = L_19->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21->___L_2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		Il2CppChar L_24;
		L_24 = Lexer_ProcessEscChar_m1EF36F1E5B61DCFE71F987C70606B141D271E042(L_23, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_24, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_26 = ___ctx0;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_27 = ___ctx0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___StateStack_3;
		NullCheck(L_26);
		L_26->___NextState_1 = L_28;
		return (bool)1;
	}

IL_00a4:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_m98AD03EF8F075A2D644062ADA11A5F79D65A7CD2 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		L_1->___unichar_13 = 0;
		goto IL_00d5;
	}

IL_0019:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_3 = L_2->___L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___input_char_7;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = L_5->___L_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___input_char_7;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0073;
		}
	}

IL_0037:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_9 = L_8->___L_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->___input_char_7;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0055;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_12 = L_11->___L_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___input_char_7;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d3;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}

IL_0073:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_21 = L_20->___L_2;
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->___unichar_13;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_m6D77ABB764E4A6FD645FD2FABF57AAF9DE1FF261(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->___unichar_13 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)(L_30/((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00d5;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_33 = L_32->___L_2;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_36 = L_35->___L_2;
		NullCheck(L_36);
		int32_t L_37 = L_36->___unichar_13;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_37, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_38, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_40 = ___ctx0;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_41 = ___ctx0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___StateStack_3;
		NullCheck(L_40);
		L_40->___NextState_1 = L_42;
		return (bool)1;
	}

IL_00d3:
	{
		return (bool)0;
	}

IL_00d5:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_44 = L_43->___L_2;
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_44, NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_mB258C7FE0738774467E7B05296EEBCE447163FDD (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_6, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)24);
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)23);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_mCAD0C2571A7AE5C165AF88B35DD80077200B831E (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_003a;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_8 = L_7->___L_2;
		NullCheck(L_8);
		L_8->___input_char_7 = ((int32_t)34);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = 1;
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_mC449B53D5EC65C8643AB027E729C3317127B3E71 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)27);
		return (bool)1;
	}

IL_002e:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___NextState_1 = ((int32_t)26);
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_m714CB3B46761AFEFF217D0485B359DB10DE8C0A7 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_001a;
	}

IL_0002:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001a;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->___NextState_1 = 1;
		return (bool)1;
	}

IL_001a:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_m4DFEE256AFD77A734E1C73C7659D312B42F0AF9F (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_001b;
	}

IL_0002:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->___NextState_1 = ((int32_t)28);
		return (bool)1;
	}

IL_001b:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_mAD2C07B80833DA608B19B82385B2D6DC68FC2B0E (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_0033;
	}

IL_0002:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0033;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0029;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = 1;
		return (bool)1;
	}

IL_0029:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)27);
		return (bool)1;
	}

IL_0033:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_9 = L_8->___L_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_9, NULL);
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Lexer_NextChar_m4416B29A729201704EF5494475D04A81665E7D9D(__this, NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___input_char_7 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		__this->___end_of_input_4 = (bool)1;
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m4416B29A729201704EF5494475D04A81665E7D9D (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___input_buffer_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___input_buffer_6;
		V_0 = L_1;
		__this->___input_buffer_6 = 0;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0018:
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_3 = __this->___reader_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* V_0 = NULL;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = __this->___fsm_context_5;
		NullCheck(L_0);
		L_0->___Return_0 = (bool)0;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_1 = ((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_handler_table_1;
		int32_t L_2 = __this->___state_9;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_5 = V_0;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = __this->___fsm_context_5;
		NullCheck(L_5);
		bool L_7;
		L_7 = StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = __this->___input_char_7;
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_9 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		JsonException__ctor_m267C4D3DA6783E685C755BEB2B354A15AB620363(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083_RuntimeMethod_var)));
	}

IL_0035:
	{
		bool L_10 = __this->___end_of_input_4;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_003f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = __this->___fsm_context_5;
		NullCheck(L_11);
		bool L_12 = L_11->___Return_0;
		if (!L_12)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t* L_13 = __this->___string_buffer_10;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->___string_value_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_value_11), (void*)L_14);
		StringBuilder_t* L_15 = __this->___string_buffer_10;
		StringBuilder_t* L_16 = __this->___string_buffer_10;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_15, 0, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_return_table_0;
		int32_t L_20 = __this->___state_9;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->___token_12 = L_22;
		int32_t L_23 = __this->___token_12;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_24 = __this->___input_char_7;
		__this->___token_12 = L_24;
	}

IL_00a2:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_25 = __this->___fsm_context_5;
		NullCheck(L_25);
		int32_t L_26 = L_25->___NextState_1;
		__this->___state_9 = L_26;
		return (bool)1;
	}

IL_00b5:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_27 = __this->___fsm_context_5;
		NullCheck(L_27);
		int32_t L_28 = L_27->___NextState_1;
		__this->___state_9 = L_28;
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___input_char_7;
		__this->___input_buffer_6 = L_0;
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
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Multicast(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* currentDelegate = reinterpret_cast<StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ctx0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Open(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ctx0, method);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenVirtual(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___ctx0);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenInterface(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ctx0);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericVirtual(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___ctx0);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericInterface(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___ctx0);
}
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1 (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Open;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Multicast;
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_m3634450072D2369CDFAFBF2169CCEC492F091DDE (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_m074FBD7D69F1004BB97465371BB0B78154F01AFF (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___validate_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___validate_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___is_array_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_list_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___is_list_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_dictionary_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___is_dictionary_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___properties_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___properties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___properties_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token_value_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___input0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_inline (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___writer_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___obj0, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, ___writer1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___allow_comments_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___allow_single_quoted_strings_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_inline (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___ctx0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
