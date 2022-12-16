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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementDefinitionList>
struct Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementProgressList>
struct Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementUpdate>
struct Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463;
// Oculus.Platform.Message`1/Callback<System.Boolean>
struct Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LeaderboardEntryList>
struct Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_t80E1E12B0A5397910E616CA65BFEA673FF16934D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.ProductList>
struct Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Purchase>
struct Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PurchaseList>
struct Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>
struct Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList>
struct Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserProof>
struct Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.AchievementDefinition>
struct DeserializableList_1_t1DEB53C597DDC53CEB3982479D636D954E6B685F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.AchievementProgress>
struct DeserializableList_1_tF328A94CA00780F009738727571ED40D4126172B;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.LeaderboardEntry>
struct DeserializableList_1_tFAC7CAC2D0D8E5D23F0096F7C9722F9353E5F4FD;
// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tF03B8C48A736E5705A86C89209212CD695949C09;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>
struct DeserializableList_1_tDC302AFD37EC50BB1B2E5B3FC30740B13395F726;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>
struct DeserializableList_1_t3C99E4F7C6D287622F5C24A5DCB068C75276C26A;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.List`1<System.Single>>
struct Dictionary_2_t4B1587BDEC8D774AC4DA8FAE39EB12C3DE03AA0A;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Single>
struct Dictionary_2_t91AEE4C19EB4A3A798C825ADA50EE583BCC2DA8A;
// System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Models.User>
struct Dictionary_2_t877757B756D74C8394C2834A529F2016F336FAC7;
// System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData>
struct Dictionary_2_t3DF088805DF3AF16095D914E76683C3A8B28C58C;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.AchievementDefinition>
struct IEnumerator_1_tD08E06D3764707017BF3E8E491EE17F76A670D03;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.AchievementProgress>
struct IEnumerator_1_t02B3DF1F509825EAC1EC1386600666B7F3A0D19A;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.LeaderboardEntry>
struct IEnumerator_1_t7D15C6788F45D32BF5415ECEA787D7992A22AAC7;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.Product>
struct IEnumerator_1_tA722780E5D086FDA86BE80184AD36A1FDBED43E7;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.Purchase>
struct IEnumerator_1_t8DBD1E8FD64E36FEEE7EA15382340E8844D3AE3A;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>
struct IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct KeyCollection_t312B0B64A2A93EDCD4586D9EFC8928BC2C752D7F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Oculus.Platform.Models.AchievementDefinition>
struct List_1_t03E4AA4A7812560AA62CF5CEA66A1961B61B4C0A;
// System.Collections.Generic.List`1<Oculus.Platform.Models.AchievementProgress>
struct List_1_t406679CA1FCDA4200411847D8345CCBC6A737F49;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Oculus.Platform.Models.LeaderboardEntry>
struct List_1_t6F003F074CBF00AF3AE5038859929007271040BE;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>
struct List_1_t343FC0CE86B8F273B092B64AE015B9C03EB8861A;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>
struct List_1_t78ED9505CFF2D76DD1213DAEF1C1FDA4F381C27E;
// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_tB50E56B21736F2DC9837A4E83456632A7789B539;
// Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementDefinitionList>
struct Message_1_tBD474C7F30EF588F32F3721FB47791C61A43A3F1;
// Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList>
struct Message_1_t3399BBEE644D14520DE73725A4F098F45E1D2589;
// Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementUpdate>
struct Message_1_t309A6DB9758688E557907DE0AE9CC1F52C38C825;
// Oculus.Platform.Message`1<System.Boolean>
struct Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A;
// Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList>
struct Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6;
// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767;
// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5;
// Oculus.Platform.Message`1<System.Object>
struct Message_1_tC4674D49302BAB6183CEF95D099A5F93211019CB;
// Oculus.Platform.Message`1<Oculus.Platform.Models.ProductList>
struct Message_1_t6600CB25BE1DA3008F62FB49B44DB20C23B9FE93;
// Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>
struct Message_1_t27A884141DAE8B0CC324ED8E3C07EE4DD1D14D2D;
// Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>
struct Message_1_t06970779D503B50E986C5462619C2F6FB72381FA;
// Oculus.Platform.Message`1<Oculus.Platform.Models.Room>
struct Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD;
// Oculus.Platform.Message`1<Oculus.Platform.Models.User>
struct Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>
struct Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>
struct Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList>
struct Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7;
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList>
struct Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215;
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate>
struct Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3;
// Oculus.Platform.Request`1<System.Boolean>
struct Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList>
struct Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D;
// Oculus.Platform.Request`1<System.Object>
struct Request_1_t4CB96621592A20B180089ED17BA12AE8564AF53F;
// Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList>
struct Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Purchase>
struct Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE;
// Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList>
struct Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room>
struct Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C;
// System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>
struct SortedDictionary_2_tD34912AE82ED2B538AB8DEC19F79D58A5148D87D;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct ValueCollection_t98D5327829AC8B47A5C74CA8CE52FCB9010B6665;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>[]
struct EntryU5BU5D_t816BAA984BB632BC8C03117780CEAC0490C61888;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Oculus.Platform.Samples.VrBoardGame.BoardPosition[]
struct BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Oculus.Platform.Matchmaking/CustomQuery/Criterion[]
struct CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA;
// Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo[,]
struct PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A;
// Oculus.Platform.Models.AchievementDefinitionList
struct AchievementDefinitionList_t86268A10B1135620D1EF1258E43228A17FDD9F39;
// Oculus.Platform.Models.AchievementProgressList
struct AchievementProgressList_t6B759119872D99D481D2F305A0849799D9E44E6F;
// Oculus.Platform.Samples.VrHoops.AchievementsManager
struct AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Oculus.Platform.Samples.VrHoops.BallEjector
struct BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Oculus.Platform.Samples.VrBoardGame.BoardPosition
struct BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Oculus.Platform.Samples.NetChat.DataEntry
struct DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28;
// Oculus.Platform.Samples.SimplePlatformSample.DataEntry
struct DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Platform.Samples.VrHoops.DetectBasket
struct DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck
struct EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Oculus.Platform.Models.Error
struct Error_t0A46640739F2057B84B1EE6489A55DDC224935A4;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Oculus.Platform.Samples.VrBoardGame.EyeCamera
struct EyeCamera_tD63752AB918EFC877B068F4DFD0A2DFD4364A9B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Oculus.Platform.Samples.VrBoardGame.GameBoard
struct GameBoard_t60116B13F343499C4471611881814A5299C696D8;
// Oculus.Platform.Samples.VrBoardGame.GameController
struct GameController_tD5904736CDF8FE24810C9703CACB7749B207377F;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Oculus.Platform.Samples.VrBoardGame.GamePiece
struct GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B;
// Oculus.Platform.Samples.VrHoops.GoalMover
struct GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Oculus.Platform.Samples.VrBoardGame.IAPManager
struct IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// Oculus.Platform.Models.LeaderboardEntryList
struct LeaderboardEntryList_tB421181A99FE7D44EF4C5D8A5846753CA4BB0EA1;
// Oculus.Platform.Samples.VrHoops.LeaderboardManager
struct LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955;
// Oculus.Platform.Models.MatchmakingAdminSnapshot
struct MatchmakingAdminSnapshot_t4782211192F69D0CCE99B9846E1D7874FA5D03D6;
// Oculus.Platform.Models.MatchmakingEnqueueResult
struct MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25;
// Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
struct MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF;
// Oculus.Platform.Models.MatchmakingEnqueuedUserList
struct MatchmakingEnqueuedUserList_t2F46EA165B2FE027EF5ABF9E0C4DC281C24F41EA;
// Oculus.Platform.Samples.VrBoardGame.MatchmakingManager
struct MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager
struct MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789;
// Oculus.Platform.MatchmakingOptions
struct MatchmakingOptions_t7C5F8003B4878CDBA092E6FDA874BDAEB2560A78;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Oculus.Platform.Message
struct Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Platform.Samples.VrHoops.P2PManager
struct P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94;
// Oculus.Platform.Samples.VrHoops.P2PNetworkBall
struct P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0;
// Oculus.Platform.Samples.VrHoops.P2PNetworkGoal
struct P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D;
// Oculus.Platform.Packet
struct Packet_t54871D991C39844C3642CBCD5573C87974DF6A32;
// Oculus.Platform.Samples.VrBoardGame.PlatformManager
struct PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE;
// Oculus.Platform.Samples.VrHoops.PlatformManager
struct PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5;
// Oculus.Platform.Samples.VrHoops.Player
struct Player_tCCA93288D258E225DD8C604DCC59E755FAE79044;
// Oculus.Platform.Samples.VrHoops.PlayerArea
struct PlayerArea_tC80BF9671AA8AD2D0E6C713538D80045DDABA6EE;
// Oculus.Platform.Models.ProductList
struct ProductList_tE3694D232C493A9CD580C5557D937FD0A2506981;
// Oculus.Platform.Models.Purchase
struct Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697;
// Oculus.Platform.Models.PurchaseList
struct PurchaseList_tC41D329066EE7B56984F653FB46971C0614DBA0B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Oculus.Platform.Samples.VrHoops.RemotePlayer
struct RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Oculus.Platform.Request
struct Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Oculus.Platform.Models.Room
struct Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Oculus.Platform.Models.SupplementaryMetric
struct SupplementaryMetric_t0F0B51014386A10FBA99B506481B5ACE546EA5C7;
// Oculus.Platform.Models.TeamList
struct TeamList_t725F5CD46BE434E0B32962634D5BEFE4F41DECB6;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Oculus.Platform.Models.User
struct User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4;
// Oculus.Platform.Models.UserList
struct UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376;
// Oculus.Platform.Models.UserProof
struct UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19;
// Oculus.Platform.Samples.VrHoops.VREyeRaycaster
struct VREyeRaycaster_t67F0F5D38771C577D3461E188CCBBCED6C6C0FC4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Oculus.Platform.Samples.NetChat.chatPacket
struct chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated
struct OnHighScoreLeaderboardUpdated_t4365BA99C024FFC5792FFABBA05921B196886D9A;
// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated
struct OnMostWinsLeaderboardUpdated_t70AA2D85D7BBEDFC787C676B14369AE3D5CC3F3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Oculus.Platform.Matchmaking/CustomQuery
struct CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult
struct OnEnqueueResult_t7689A4247C34432C3754B4A0F686A13E5FFAA19C;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded
struct OnMatchPlayerAdded_tE152AEB9FDA65EBA050CF4F1D6452D067550A615;
// Oculus.Platform.Message/Callback
struct Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_t1140ACF58BA319459C041E281C5BCC00FBD2D389;
// Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
struct RemotePlayerData_tC2516244F2AEB7F3FE5FE893E93B4C0C70B6CEC0;
// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer
struct StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t02B3DF1F509825EAC1EC1386600666B7F3A0D19A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7D15C6788F45D32BF5415ECEA787D7992A22AAC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8DBD1E8FD64E36FEEE7EA15382340E8844D3AE3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA722780E5D086FDA86BE80184AD36A1FDBED43E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD08E06D3764707017BF3E8E491EE17F76A670D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomJoinPolicy_tFE64945B2883F6122D2E158EAD2EE58F99A58A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomType_t3568C36CAB5E355168F9A2B08D8045BD5E9C25A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC____532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B6ADD9BA4A2596DA37C86818DBB1FA5543BC90;
IL2CPP_EXTERN_C String_t* _stringLiteral02841C9F0155836DC3C03D98330F64B42FE1B48D;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0755B7E364B77D9BB3BEFC3EF4FFB862E9570DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral0819FD4E82783169E28ED469E40CCB889350FD7A;
IL2CPP_EXTERN_C String_t* _stringLiteral09BE46CFC570E852E7D7F8966E8A962FCCD4FFE2;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63;
IL2CPP_EXTERN_C String_t* _stringLiteral0C392FDC40D4EE69177DB44E9470131CC933247D;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCB5BA4C133B7E5BA7CA4ADE89029A9DB7C7198;
IL2CPP_EXTERN_C String_t* _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF65C57E50C6B89F46AD08E017CDC95CC32E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48;
IL2CPP_EXTERN_C String_t* _stringLiteral103286C2476ADEE88E61E03694D9EE2887E80E08;
IL2CPP_EXTERN_C String_t* _stringLiteral10612B607F62D4956B44212696B4D1E5D5F37023;
IL2CPP_EXTERN_C String_t* _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6;
IL2CPP_EXTERN_C String_t* _stringLiteral11AA1E19A60EAA84D99B1B63B0042B44D0231529;
IL2CPP_EXTERN_C String_t* _stringLiteral12576603FD0BF68450852DD71E03966A14C67CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral1323C2A5A31249381ACFBC419E6172995B7A7A26;
IL2CPP_EXTERN_C String_t* _stringLiteral1390C763341D99E40AB8A6BA2ABDD6E54A4CE5B5;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral17490F55601C1F90A7803263837FE3F21E759D69;
IL2CPP_EXTERN_C String_t* _stringLiteral191F166329A46D024FFB3D9E9D20933BCF2C9006;
IL2CPP_EXTERN_C String_t* _stringLiteral1940EA0E4417CCD58675D987C883CCDF53A5ADAA;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C299BF5107D7E0629D16837F4C97C929EFE5861;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8;
IL2CPP_EXTERN_C String_t* _stringLiteral21C17994972DD214893B82640E0D675E392FC185;
IL2CPP_EXTERN_C String_t* _stringLiteral21CF80100A176C5ABF31BAD31E39091BF9F7C6F0;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF;
IL2CPP_EXTERN_C String_t* _stringLiteral225849BE345A969B0BF7C08FE1826D5A43D3B40F;
IL2CPP_EXTERN_C String_t* _stringLiteral22C7D61C114BE6EC54C5F7CD3B9FBA6D0F2E88ED;
IL2CPP_EXTERN_C String_t* _stringLiteral22CCD6204E1DE64F7D2BE6C2D8D4013154B2B101;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C;
IL2CPP_EXTERN_C String_t* _stringLiteral2518FEF899597D3DC2CD4DB72A6EBBFF5A39BE23;
IL2CPP_EXTERN_C String_t* _stringLiteral25D51CC9D87AEDB20388919750B0D8FB1F3138F6;
IL2CPP_EXTERN_C String_t* _stringLiteral264036AC47852FD60740287CA60085B23C6659EA;
IL2CPP_EXTERN_C String_t* _stringLiteral268D77D9A0B2E8B0B84ADC12E445064E2D76171D;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD3F1ADDCE85E66879EDA556C862F4E45829F83;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB64132DD8FC0CEDB01DF37CF525BEB99914CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3080B691E1C8BCE9D97620F648B6E8AC15E3D82D;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral37177F94F58631A946E38C26D526F41643C36133;
IL2CPP_EXTERN_C String_t* _stringLiteral37A50091974FE11FAC57C870272F76245820AA18;
IL2CPP_EXTERN_C String_t* _stringLiteral37F5BA1C82DA8DAC6463BA85C1A8BC81E3461E6B;
IL2CPP_EXTERN_C String_t* _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral39B7A48F6B660564BD9FEF1C21619340A1F10F2F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E24CEDCF34D9304DEA90F7B6CCFC5DE658F9D04;
IL2CPP_EXTERN_C String_t* _stringLiteral3F4F0222EBD98FF76276C80362B03DDD11482249;
IL2CPP_EXTERN_C String_t* _stringLiteral4446267B0ADB09CEAD5B3B11746EBA22DF2E3915;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral461198D6A0E2DD2E1B416DF92C78033184D0D12D;
IL2CPP_EXTERN_C String_t* _stringLiteral46CA543EF3D4FBA7C2E4EDBD944AFA72DB18A7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral48BADE6D41DD866A40A32C651C57B716AE37416F;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5745313695BB32A7BE264930411F75CE40EF69;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8868EE439C093EFE6227936162EBFE1B6A9B54;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBD08B18CC99B6FD20FDD9215C61B731F93C76A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0057598B4E8BEF6162B8E3305326C0F1A20E84;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4A4FC27000B98F3A3B69BF24E1A684E926745E;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBE1E4876E6FC3B6024EB2A991D8CC78B87140D;
IL2CPP_EXTERN_C String_t* _stringLiteral500CF30CCABB715DBF03EE4B03FFF7C1539DF0B1;
IL2CPP_EXTERN_C String_t* _stringLiteral50283DD864F30ADAF61600086976BA0AD6FFDBB0;
IL2CPP_EXTERN_C String_t* _stringLiteral52D2DCD03432CB51587635B17FD0A347EFAC77EB;
IL2CPP_EXTERN_C String_t* _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2;
IL2CPP_EXTERN_C String_t* _stringLiteral53C31FD88FC45491206A97B3BA92809927395D84;
IL2CPP_EXTERN_C String_t* _stringLiteral55220B98676243DE016C9A22A5D76B19AEFC0819;
IL2CPP_EXTERN_C String_t* _stringLiteral57561F5366EB5F6DCBABA97949CE1870AB5A416F;
IL2CPP_EXTERN_C String_t* _stringLiteral5B15C3156FB9A3410CA04089DB592EFAF713F8DF;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5BC8523900AE414198EA2E4D09442768E577938B;
IL2CPP_EXTERN_C String_t* _stringLiteral5E1C976F60244B115100EC190008B33BF33964D8;
IL2CPP_EXTERN_C String_t* _stringLiteral5F756C9D78C754A456A25655842D949FD3A24198;
IL2CPP_EXTERN_C String_t* _stringLiteral5F75D76EF22085FECDB6F6F2B5C17354F406FD43;
IL2CPP_EXTERN_C String_t* _stringLiteral5FBF510CEC3C051838F753E8E3804AC73FA94ADE;
IL2CPP_EXTERN_C String_t* _stringLiteral5FD0C74C87095054668B74B9A9D318BBA886E9D4;
IL2CPP_EXTERN_C String_t* _stringLiteral60FDE1969AB38ACA7FE72839F89B8DEC9E3AE2AF;
IL2CPP_EXTERN_C String_t* _stringLiteral61955C32E6B7E67BA49805D7A3F33E999EF4189F;
IL2CPP_EXTERN_C String_t* _stringLiteral62FDA796EAA8D4A32E366505CF6A9958A6B70C99;
IL2CPP_EXTERN_C String_t* _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B;
IL2CPP_EXTERN_C String_t* _stringLiteral66128F32B7A498052C952E74E0051973A479392D;
IL2CPP_EXTERN_C String_t* _stringLiteral66302616BC1BDF9D2409AB2485FCF016D5D6CDEE;
IL2CPP_EXTERN_C String_t* _stringLiteral67D99629508594497A9A2B2D1038916726E8B6D7;
IL2CPP_EXTERN_C String_t* _stringLiteral6B195F37DD1176ECD61AC9E3DC377068C974FABF;
IL2CPP_EXTERN_C String_t* _stringLiteral6DADAF53A242F347691A36533ED107041D677B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161;
IL2CPP_EXTERN_C String_t* _stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7221CF7C464DEECEE0E28DCD6217EDE3B068304F;
IL2CPP_EXTERN_C String_t* _stringLiteral72B48A51B07AC1C7864C54E67D61959214014604;
IL2CPP_EXTERN_C String_t* _stringLiteral73B89F5C37122339EE4665AEF418ED056BB476AF;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral75685E145E5A73B802A53F0E146332038B24E134;
IL2CPP_EXTERN_C String_t* _stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38;
IL2CPP_EXTERN_C String_t* _stringLiteral791AEA70C83F9E51DF9CA11386F4F76F508F903E;
IL2CPP_EXTERN_C String_t* _stringLiteral7970A9EAFF2C28894F04C4600209CBA65BE905B8;
IL2CPP_EXTERN_C String_t* _stringLiteral7A97C7A9CE08269358528A5B41256A4DA81D2F32;
IL2CPP_EXTERN_C String_t* _stringLiteral7AADDB51D004EA589EB4E9DD5703135A929256F9;
IL2CPP_EXTERN_C String_t* _stringLiteral7B1B0E5FAEC96BE9A7969FE0ED275C8AD3545277;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8986E15C0F7C222FF9FCD6B48A64E3899A31B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7C82539476EBA2361ED4DCBDA020B419A348AEED;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB6ACFDF2C1A5B35A8941FD5B4879B24F494485;
IL2CPP_EXTERN_C String_t* _stringLiteral7E48DAB075275DC16F091D91060501E276CBB001;
IL2CPP_EXTERN_C String_t* _stringLiteral7FAA59B9C02D35A6E919CF20ED24C5084688CD65;
IL2CPP_EXTERN_C String_t* _stringLiteral81051A4E414CA5464DA6F58F873619B8C28C577D;
IL2CPP_EXTERN_C String_t* _stringLiteral83035F9759A79E53CE6C6BE65BBD4A7A6484F128;
IL2CPP_EXTERN_C String_t* _stringLiteral84E7AC6981B27F44D8763F2DFC717C2C203BAEC6;
IL2CPP_EXTERN_C String_t* _stringLiteral85018765AA90E069768AE2702E4A54398205B131;
IL2CPP_EXTERN_C String_t* _stringLiteral877D0194FF556ABDE79FFD3AEFFED01B977F695B;
IL2CPP_EXTERN_C String_t* _stringLiteral8868BF62138D40BF2F806A9E8A0F634747FCCB1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE;
IL2CPP_EXTERN_C String_t* _stringLiteral8A5F46F9B593D71657AFF50E12009120980D7B15;
IL2CPP_EXTERN_C String_t* _stringLiteral8A75A62BB1FEC2FFEABF54296BF555C078B48AF3;
IL2CPP_EXTERN_C String_t* _stringLiteral8CCA8B878B39779FD375578FCB5CAF19070686ED;
IL2CPP_EXTERN_C String_t* _stringLiteral8DFA8638FC7431EA5D6B04A7BF5D3C988A9C5639;
IL2CPP_EXTERN_C String_t* _stringLiteral8E43D0FA0B142E3F3C3C80B28B7FB598DF5C4680;
IL2CPP_EXTERN_C String_t* _stringLiteral90708ED394FEE14162EE26AF32C50B47073934C1;
IL2CPP_EXTERN_C String_t* _stringLiteral920D0134A13224A01963C8D399951D7365029ACF;
IL2CPP_EXTERN_C String_t* _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C;
IL2CPP_EXTERN_C String_t* _stringLiteral939181588842FF7F98CC1212E170637F4EEA8773;
IL2CPP_EXTERN_C String_t* _stringLiteral959F4946E1BD750ACC2F8E6E3D57BA81F1674691;
IL2CPP_EXTERN_C String_t* _stringLiteral9731D7A1BCEAEBE1BFF036F15143DD1BADF4CB50;
IL2CPP_EXTERN_C String_t* _stringLiteral9F789C7015EDCD8428BEEF2627D0CE6FC3D2161C;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA34D6EF1E2362FDF218C3F66A14BD063BD368435;
IL2CPP_EXTERN_C String_t* _stringLiteralA3501744B0773A50D3BF8BAEFE01A55DC50D5C50;
IL2CPP_EXTERN_C String_t* _stringLiteralA43D16DF81BDC17F7F44D18FF4B8A7730E241FC3;
IL2CPP_EXTERN_C String_t* _stringLiteralA4AFF14AE5157F3A41CA32B8CAA514AC80B16DA0;
IL2CPP_EXTERN_C String_t* _stringLiteralA5CFCFDAA6866F9B581D29C31DCF56A4FE1D2A97;
IL2CPP_EXTERN_C String_t* _stringLiteralA62149C68BE8C153041DBD2A664BA02DFA504C7A;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralABE124DF0BF0B371251482CC6E27224B47406782;
IL2CPP_EXTERN_C String_t* _stringLiteralABF9398EEFD6ECA47C416C7BF1927883C858D16D;
IL2CPP_EXTERN_C String_t* _stringLiteralADADF3C8B28503740B195E491FCD48B7DBC501F8;
IL2CPP_EXTERN_C String_t* _stringLiteralAF841B88E21DACCF207C50AC522C0FE9DD847454;
IL2CPP_EXTERN_C String_t* _stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38;
IL2CPP_EXTERN_C String_t* _stringLiteralB17D0E550A67F8059F0FE5BCD905A402E97D9A6A;
IL2CPP_EXTERN_C String_t* _stringLiteralB18BADDEE7C309125D66FB0DAD563A86A1269891;
IL2CPP_EXTERN_C String_t* _stringLiteralB349CA9BF27A5CB77BB09D3F1567AC751691CE68;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E758227CF5C8EA8D2743CCA1C5E890C11026D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB88CE824F615CA983E62FF4E871CCF638D6C05AE;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D4C2955EFD6E53D26F90895FA4FC882DE0234E;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0BE7F36A753120388756ADC31357DF565C6C89;
IL2CPP_EXTERN_C String_t* _stringLiteralBE9F33A231D8F3251F9FD7D72877E80BF62510CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC2086D64681BE7D3EF06FECF7AB0D3C66A19EE71;
IL2CPP_EXTERN_C String_t* _stringLiteralC6910AD2A7F96FD67D641FF04075BA360893D7B9;
IL2CPP_EXTERN_C String_t* _stringLiteralC80E2483D866C3CBCBA0E8A81A05FB50E5D79936;
IL2CPP_EXTERN_C String_t* _stringLiteralCB1BACBF4BC66DE384EB416D9B721AD93A0848C7;
IL2CPP_EXTERN_C String_t* _stringLiteralCE4E3F628F25B19F1771C4E6CE4C83EC8BE0F1DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6137FE4C5927013C087EE74D84C2501852BED4;
IL2CPP_EXTERN_C String_t* _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53;
IL2CPP_EXTERN_C String_t* _stringLiteralD038D81FB9093934C691608A0A2F41B350086FBD;
IL2CPP_EXTERN_C String_t* _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DA7B058D04F30E090B0FB85E3B9BC7BB8D582F;
IL2CPP_EXTERN_C String_t* _stringLiteralD518793363C83731F5EB512A4536332399C3B11C;
IL2CPP_EXTERN_C String_t* _stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A;
IL2CPP_EXTERN_C String_t* _stringLiteralD62E59118528817075980A32FDB5E9FE2406C285;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B4381464714B4E20BF34C7BBB7C55921BE8523;
IL2CPP_EXTERN_C String_t* _stringLiteralD901F99CE5B7BDAD4DAC96D048448BD8C887EB53;
IL2CPP_EXTERN_C String_t* _stringLiteralD906C38E3D05EEE8C2F94A7E5F33BC8BDCC843E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA458F7132B2BCD5C74464DA66636E5F863CB01;
IL2CPP_EXTERN_C String_t* _stringLiteralE03E733F77ED93A0B5CB4B1E0E34307F856300C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03;
IL2CPP_EXTERN_C String_t* _stringLiteralE188B7082D61178A7D9F7C1D16955F8CCC096ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralE29B7CBB4F1931A6EC35BF086F4E6327176AA947;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DAC14B7F3B7BF497E2310312C1186653CCAAC8;
IL2CPP_EXTERN_C String_t* _stringLiteralE43D4A7AF952C74D904C9FF52239662FAA7039A8;
IL2CPP_EXTERN_C String_t* _stringLiteralE4DEAD6C25FCA9E16FBD435817E4F6429A8D4451;
IL2CPP_EXTERN_C String_t* _stringLiteralE73C9F749635A0D75A8E196B77CB94A0F35BFCFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralEEFA624EF2B98CBD83AD9BED3C5BD3EF73F1507A;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB1CFA78FC529C4D6B26E2366F57FC652AB29AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB;
IL2CPP_EXTERN_C String_t* _stringLiteralF2D93D73EFB98C82E58AC126525A3CCD82365940;
IL2CPP_EXTERN_C String_t* _stringLiteralF661C314CFE8F42EF8E01B97E23F30BC0B7CDFFE;
IL2CPP_EXTERN_C String_t* _stringLiteralF738530550845DB075C93EAF91A341B00DC90FFA;
IL2CPP_EXTERN_C String_t* _stringLiteralF7423CA6FD92EF3F3989043A87E2B8793080DF03;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF8382F4AC14DA5B2B80FF9294DD4E60F6DB2932D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFA15FFC56B7874938C2A6A24E1F97FBEC2836EE9;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1C3DDA293E6E804ED02479C52960A53EC491F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB37D9C199667058CA8B43F9AC3B24069EC4B1B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB5E996F4F3C7E6CCBB98C6CEC9328DF294F5C19;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC35A1A1D733D0A11D65543BC6D22D5A8C62ECF6;
IL2CPP_EXTERN_C String_t* _stringLiteralFEF57C9991ABE2C7C59473A48FB3D8C1B77BC19B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisBallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1_m5B5C44C724C6C27F921C5C9CDFDDCEDE94231D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7_mE0AA2286CBC04A69C52C7EE1FBC7741CB29F8B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m056326252E8EF90C6DB1511E39C0481E614160F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_achievementCountCallback_m6D044F1DEAAFD0A26C41A14EFA1971507FC66FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_achievementDefinitionCallback_m8AF19523A41A17A0CC78EAE465843131C9A3BB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_achievementFieldsCallback_m7904FB75E758011C8B9F52DD093D4AF1B7154977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_achievementProgressCallback_m9D415118A5CBD6CCB5887CEFF799361EAB5F1B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_achievementUnlockCallback_m96CF052655F582B3DF7EB23CF4CCE943762AA112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_createAndJoinPrivateRoomCallback_m2C6FB69E84726917D91756FCEB22B461E2F9B6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getEntitlementCallback_mCAEE44A099357BE4F68CBD5D4782FF86A80F35C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getFriendsCallback_m61D1F63EC13F53B37599C52B192046935A498865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getInvitableUsersCallback_m7AA6207A4C863A74016701298D74E4B0E4DC633C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getUserCallback_mD0E8EE956C42AC047F6DE819F07E55ACCE849F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_inviteUserCallback_m5F17E487EF50EB30C38BE22D0A54E1E52D8A67D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_joinRoomCallback_mF0888856238BA8A1D66DAC7456E8C1A49E34A37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_leaderboardGetCallback_mA1DE4462B4F26D1A6C01DE2DA407F9F689ED6435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_leaderboardWriteCallback_m98DB146A413D15CE4BCD9AE109A68FFE7E7AA84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_leaveRoomCallback_mB0C104974995470334E5CC094DEF68D216A5B6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_userProofCallback_m4CEEF34E7D7776F7F4C278696B5AF65570B82179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m6FF4EACFD252C29BB95B64ECCF6945F0F4DB69F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m735A4209EB116B9D0B8289C227DC5023F6C7DEC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m97C6E1206F18E8B7B97BD679E033CF0E9B3AEE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_mAC083D84F92906EF099482B15D8BC6E3195E0E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_mD1538F698A5EC6DCD33D41EEA655474C5CE213AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m16010889A38608B714FB55661615EF676E758365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9CA746917F641C6070A4C5D211B9184C0D03207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m91B53F3AF1B3D329412CCA3634A4633B1554BBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m416C4573AA7F972AB6D25BBEC267C5F9986A1877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisP2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D_m0DCB695676D17C6FCB05333F837FC23C13E7BBE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045_mA150F9A4E0ABF34518C3A2107659CB3E46C328B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324_m86F5B50DBEB6DD734374CEBED1D673CD3755F8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tCCA93288D258E225DD8C604DCC59E755FAE79044_m331608F613A6DAD7E3744E263907219DD26160BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_GetProductsBySKUCallback_m75E36A2F7323E1AF0AB5F901C0C321EC4EF0E00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_GetViewerPurchasesCallback_mC59D74CD44DE5759357598077EF9007951BC6705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_LaunchCheckoutFlowCallback_m88FE3A7C93F77D34B8E1951B9611FA50F9B50FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchmakingManager_GenericErrorCheckCallback_m40466B72DD095BD70C7784E42678E700E881EB11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchmakingManager_MatchFoundCallback_mBEB52A347B3EEB6CC772360603BCAA38857BDD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchmakingManager_MatchmakingEnqueueCallback_m37AE0684B29F24680557D16BE184273FB5CF04CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchmakingManager_MatchmakingJoinRoomCallback_m0786991B1F2E1C8A0248A9EF8718DB8622D7340A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchmakingManager_MatchmakingRoomUpdateCallback_m5ECEAB77E45E9C54611E4DF4F53E233A0F0D7C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchmakingManager_UpdateDataStoreCallback_mB8DD9D1665DE526E4D0BF516D8E681E333BA5866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m5C8C2B4824B5DDF54637962C6989189204572630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mA4DB507B5FD1A5847074AE28B9910E4686150828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mF829EE114595202C5F13D822CE4BA219CC04710D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformManager_GetLoggedInUserCallback_m0D6AA93D5C1CD37AFACC758A587F4A107652C81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformManager_GetLoggedInUserCallback_mF77527368A61FF05688585AF3E5F3DB428E686EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformManager_IsEntitledCallback_m35CDEDDD7C57FD0376922EAFC90058125996E304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformManager_IsEntitledCallback_mC82329FE0D74D342ABD14C047D4BD3B620045973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_mFA1E83229BB407C0F17B2F4302364B026942891B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m13A85C5716534C581895C7CDE9C611D7BCD57F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m3F50A33107EA0C6A77B46389951975C23FEEC6D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m90589E35F2777DA17D8E76661F67C766D644952C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mA1680CDE78012F90AEF2FA8555DB35E11542DA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mC66FA212BFBFE9CAA49F78FEC2AE5BBF7623D1CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mE48DA95E6E337FEF07E73AF055F036404408301D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mE92A72BF377F9BA7E0900A7BC0D2AEB0265511D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA;
struct PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.AchievementDefinition>
struct DeserializableList_1_t1DEB53C597DDC53CEB3982479D636D954E6B685F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t03E4AA4A7812560AA62CF5CEA66A1961B61B4C0A* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.AchievementProgress>
struct DeserializableList_1_tF328A94CA00780F009738727571ED40D4126172B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t406679CA1FCDA4200411847D8345CCBC6A737F49* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.LeaderboardEntry>
struct DeserializableList_1_tFAC7CAC2D0D8E5D23F0096F7C9722F9353E5F4FD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t6F003F074CBF00AF3AE5038859929007271040BE* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>
struct DeserializableList_1_tDC302AFD37EC50BB1B2E5B3FC30740B13395F726  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t343FC0CE86B8F273B092B64AE015B9C03EB8861A* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>
struct DeserializableList_1_t3C99E4F7C6D287622F5C24A5DCB068C75276C26A  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t78ED9505CFF2D76DD1213DAEF1C1FDA4F381C27E* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tB50E56B21736F2DC9837A4E83456632A7789B539* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t816BAA984BB632BC8C03117780CEAC0490C61888* ____entries_1;
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
	KeyCollection_t312B0B64A2A93EDCD4586D9EFC8928BC2C752D7F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t98D5327829AC8B47A5C74CA8CE52FCB9010B6665* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC_StaticFields
{
	// System.Int32 <PrivateImplementationDetails>::532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25
	int32_t ___532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25_0;
};

// Oculus.Platform.Models.AchievementDefinition
struct AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB  : public RuntimeObject
{
	// Oculus.Platform.AchievementType Oculus.Platform.Models.AchievementDefinition::Type
	int32_t ___Type_0;
	// System.String Oculus.Platform.Models.AchievementDefinition::Name
	String_t* ___Name_1;
	// System.UInt32 Oculus.Platform.Models.AchievementDefinition::BitfieldLength
	uint32_t ___BitfieldLength_2;
	// System.UInt64 Oculus.Platform.Models.AchievementDefinition::Target
	uint64_t ___Target_3;
};

// Oculus.Platform.Samples.VrHoops.AchievementsManager
struct AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F  : public RuntimeObject
{
	// System.Boolean Oculus.Platform.Samples.VrHoops.AchievementsManager::m_likesToWinUnlocked
	bool ___m_likesToWinUnlocked_1;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Oculus.Platform.Samples.NetChat.Constants
struct Constants_tF75E64A7B3494B5ACBD4B16810427A57173E96AD  : public RuntimeObject
{
};

// Oculus.Platform.Core
struct Core_t272580A990CA827C27F3116C5420EB2F87FE290C  : public RuntimeObject
{
};

struct Core_t272580A990CA827C27F3116C5420EB2F87FE290C_StaticFields
{
	// System.Boolean Oculus.Platform.Core::IsPlatformInitialized
	bool ___IsPlatformInitialized_0;
	// System.Boolean Oculus.Platform.Core::LogMessages
	bool ___LogMessages_1;
	// System.String Oculus.Platform.Core::PlatformUninitializedError
	String_t* ___PlatformUninitializedError_2;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Oculus.Platform.Models.Error
struct Error_t0A46640739F2057B84B1EE6489A55DDC224935A4  : public RuntimeObject
{
	// System.Int32 Oculus.Platform.Models.Error::Code
	int32_t ___Code_0;
	// System.Int32 Oculus.Platform.Models.Error::HttpCode
	int32_t ___HttpCode_1;
	// System.String Oculus.Platform.Models.Error::Message
	String_t* ___Message_2;
};

// Oculus.Platform.Samples.VrHoops.LeaderboardManager
struct LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955  : public RuntimeObject
{
	// System.Single Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_nextCheckTime
	float ___m_nextCheckTime_4;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry> modreq(System.Runtime.CompilerServices.IsVolatile) Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_mostWins
	SortedDictionary_2_tD34912AE82ED2B538AB8DEC19F79D58A5148D87D* ___m_mostWins_5;
	// System.Boolean Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_foundLocalUserMostWinsEntry
	bool ___m_foundLocalUserMostWinsEntry_6;
	// System.Int64 Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_numWins
	int64_t ___m_numWins_7;
	// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_mostWinsCallback
	OnMostWinsLeaderboardUpdated_t70AA2D85D7BBEDFC787C676B14369AE3D5CC3F3E* ___m_mostWinsCallback_8;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry> modreq(System.Runtime.CompilerServices.IsVolatile) Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_highScores
	SortedDictionary_2_tD34912AE82ED2B538AB8DEC19F79D58A5148D87D* ___m_highScores_9;
	// System.Boolean Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_foundLocalUserHighScore
	bool ___m_foundLocalUserHighScore_10;
	// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated Oculus.Platform.Samples.VrHoops.LeaderboardManager::m_highScoreCallback
	OnHighScoreLeaderboardUpdated_t4365BA99C024FFC5792FFABBA05921B196886D9A* ___m_highScoreCallback_11;
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

// Oculus.Platform.Models.MatchmakingEnqueueResult
struct MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25  : public RuntimeObject
{
	// Oculus.Platform.Models.MatchmakingAdminSnapshot Oculus.Platform.Models.MatchmakingEnqueueResult::AdminSnapshotOptional
	MatchmakingAdminSnapshot_t4782211192F69D0CCE99B9846E1D7874FA5D03D6* ___AdminSnapshotOptional_0;
	// Oculus.Platform.Models.MatchmakingAdminSnapshot Oculus.Platform.Models.MatchmakingEnqueueResult::AdminSnapshot
	MatchmakingAdminSnapshot_t4782211192F69D0CCE99B9846E1D7874FA5D03D6* ___AdminSnapshot_1;
	// System.UInt32 Oculus.Platform.Models.MatchmakingEnqueueResult::AverageWait
	uint32_t ___AverageWait_2;
	// System.UInt32 Oculus.Platform.Models.MatchmakingEnqueueResult::MatchesInLastHourCount
	uint32_t ___MatchesInLastHourCount_3;
	// System.UInt32 Oculus.Platform.Models.MatchmakingEnqueueResult::MaxExpectedWait
	uint32_t ___MaxExpectedWait_4;
	// System.String Oculus.Platform.Models.MatchmakingEnqueueResult::Pool
	String_t* ___Pool_5;
	// System.UInt32 Oculus.Platform.Models.MatchmakingEnqueueResult::RecentMatchPercentage
	uint32_t ___RecentMatchPercentage_6;
	// System.String Oculus.Platform.Models.MatchmakingEnqueueResult::RequestHash
	String_t* ___RequestHash_7;
};

// Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
struct MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF  : public RuntimeObject
{
	// Oculus.Platform.Models.MatchmakingEnqueueResult Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom::MatchmakingEnqueueResult
	MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* ___MatchmakingEnqueueResult_0;
	// Oculus.Platform.Models.Room Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom::Room
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___Room_1;
};

// Oculus.Platform.Samples.VrHoops.MatchmakingManager
struct MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789  : public RuntimeObject
{
	// System.UInt64 Oculus.Platform.Samples.VrHoops.MatchmakingManager::m_matchRoom
	uint64_t ___m_matchRoom_1;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Models.User> Oculus.Platform.Samples.VrHoops.MatchmakingManager::m_remotePlayers
	Dictionary_2_t877757B756D74C8394C2834A529F2016F336FAC7* ___m_remotePlayers_2;
	// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult Oculus.Platform.Samples.VrHoops.MatchmakingManager::m_enqueueCallback
	OnEnqueueResult_t7689A4247C34432C3754B4A0F686A13E5FFAA19C* ___m_enqueueCallback_3;
	// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded Oculus.Platform.Samples.VrHoops.MatchmakingManager::m_playerCallback
	OnMatchPlayerAdded_tE152AEB9FDA65EBA050CF4F1D6452D067550A615* ___m_playerCallback_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Oculus.Platform.Message
struct Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9  : public RuntimeObject
{
	// Oculus.Platform.Message/MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* ___error_2;
};

struct Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9_StaticFields
{
	// Oculus.Platform.Message/ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_t1140ACF58BA319459C041E281C5BCC00FBD2D389* ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;
};

// Oculus.Platform.Samples.VrHoops.P2PManager
struct P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData> Oculus.Platform.Samples.VrHoops.P2PManager::m_remotePlayers
	Dictionary_2_t3DF088805DF3AF16095D914E76683C3A8B28C58C* ___m_remotePlayers_0;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager::m_timeForNextBallUpdate
	float ___m_timeForNextBallUpdate_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall> Oculus.Platform.Samples.VrHoops.P2PManager::m_localBalls
	Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851* ___m_localBalls_14;
	// System.Byte[] Oculus.Platform.Samples.VrHoops.P2PManager::readBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___readBuffer_15;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.List`1<System.Single>> Oculus.Platform.Samples.VrHoops.P2PManager::m_remoteSyncTimeCache
	Dictionary_2_t4B1587BDEC8D774AC4DA8FAE39EB12C3DE03AA0A* ___m_remoteSyncTimeCache_16;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Single> Oculus.Platform.Samples.VrHoops.P2PManager::m_remoteSentTimeCache
	Dictionary_2_t91AEE4C19EB4A3A798C825ADA50EE583BCC2DA8A* ___m_remoteSentTimeCache_17;
	// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer Oculus.Platform.Samples.VrHoops.P2PManager::m_startTimeOfferCallback
	StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* ___m_startTimeOfferCallback_18;
};

// Oculus.Platform.Models.Product
struct Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.Product::Description
	String_t* ___Description_0;
	// System.String Oculus.Platform.Models.Product::FormattedPrice
	String_t* ___FormattedPrice_1;
	// System.String Oculus.Platform.Models.Product::Name
	String_t* ___Name_2;
	// System.String Oculus.Platform.Models.Product::Sku
	String_t* ___Sku_3;
};

// Oculus.Platform.Request
struct Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B  : public RuntimeObject
{
	// Oculus.Platform.Message/Callback Oculus.Platform.Request::callback_
	Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* ___callback__0;
	// System.UInt64 Oculus.Platform.Request::<RequestID>k__BackingField
	uint64_t ___U3CRequestIDU3Ek__BackingField_1;
};

// Oculus.Platform.Models.Room
struct Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C  : public RuntimeObject
{
	// System.UInt64 Oculus.Platform.Models.Room::ApplicationID
	uint64_t ___ApplicationID_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Oculus.Platform.Models.Room::DataStore
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___DataStore_1;
	// System.String Oculus.Platform.Models.Room::Description
	String_t* ___Description_2;
	// System.UInt64 Oculus.Platform.Models.Room::ID
	uint64_t ___ID_3;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::InvitedUsersOptional
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___InvitedUsersOptional_4;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::InvitedUsers
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___InvitedUsers_5;
	// System.Boolean Oculus.Platform.Models.Room::IsMembershipLocked
	bool ___IsMembershipLocked_6;
	// Oculus.Platform.RoomJoinPolicy Oculus.Platform.Models.Room::JoinPolicy
	int32_t ___JoinPolicy_7;
	// Oculus.Platform.RoomJoinability Oculus.Platform.Models.Room::Joinability
	int32_t ___Joinability_8;
	// Oculus.Platform.Models.MatchmakingEnqueuedUserList Oculus.Platform.Models.Room::MatchedUsersOptional
	MatchmakingEnqueuedUserList_t2F46EA165B2FE027EF5ABF9E0C4DC281C24F41EA* ___MatchedUsersOptional_9;
	// Oculus.Platform.Models.MatchmakingEnqueuedUserList Oculus.Platform.Models.Room::MatchedUsers
	MatchmakingEnqueuedUserList_t2F46EA165B2FE027EF5ABF9E0C4DC281C24F41EA* ___MatchedUsers_10;
	// System.UInt32 Oculus.Platform.Models.Room::MaxUsers
	uint32_t ___MaxUsers_11;
	// System.String Oculus.Platform.Models.Room::Name
	String_t* ___Name_12;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Room::OwnerOptional
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___OwnerOptional_13;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Room::Owner
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___Owner_14;
	// Oculus.Platform.Models.TeamList Oculus.Platform.Models.Room::TeamsOptional
	TeamList_t725F5CD46BE434E0B32962634D5BEFE4F41DECB6* ___TeamsOptional_15;
	// Oculus.Platform.Models.TeamList Oculus.Platform.Models.Room::Teams
	TeamList_t725F5CD46BE434E0B32962634D5BEFE4F41DECB6* ___Teams_16;
	// Oculus.Platform.RoomType Oculus.Platform.Models.Room::Type
	int32_t ___Type_17;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::UsersOptional
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___UsersOptional_18;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::Users
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___Users_19;
	// System.UInt32 Oculus.Platform.Models.Room::Version
	uint32_t ___Version_20;
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

// Oculus.Platform.Models.User
struct User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.UInt64 Oculus.Platform.Models.User::ID
	uint64_t ___ID_1;
	// System.String Oculus.Platform.Models.User::ImageURL
	String_t* ___ImageURL_2;
	// System.String Oculus.Platform.Models.User::InviteToken
	String_t* ___InviteToken_3;
	// System.String Oculus.Platform.Models.User::OculusID
	String_t* ___OculusID_4;
	// System.String Oculus.Platform.Models.User::Presence
	String_t* ___Presence_5;
	// System.String Oculus.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_6;
	// System.String Oculus.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_7;
	// System.String Oculus.Platform.Models.User::PresenceLobbySessionId
	String_t* ___PresenceLobbySessionId_8;
	// System.String Oculus.Platform.Models.User::PresenceMatchSessionId
	String_t* ___PresenceMatchSessionId_9;
	// Oculus.Platform.UserPresenceStatus Oculus.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_10;
	// System.String Oculus.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_11;
};

// Oculus.Platform.Models.UserProof
struct UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.UserProof::Value
	String_t* ___Value_0;
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

// Oculus.Platform.Samples.NetChat.chatPacket
struct chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296  : public RuntimeObject
{
	// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::<packetID>k__BackingField
	int32_t ___U3CpacketIDU3Ek__BackingField_0;
	// System.String Oculus.Platform.Samples.NetChat.chatPacket::<textString>k__BackingField
	String_t* ___U3CtextStringU3Ek__BackingField_1;
};

// Oculus.Platform.Matchmaking/CustomQuery
struct CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery::data
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data_0;
	// Oculus.Platform.Matchmaking/CustomQuery/Criterion[] Oculus.Platform.Matchmaking/CustomQuery::criteria
	CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* ___criteria_1;
};

// Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
struct RemotePlayerData_tC2516244F2AEB7F3FE5FE893E93B4C0C70B6CEC0  : public RuntimeObject
{
	// Oculus.Platform.PeerConnectionState Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::state
	int32_t ___state_0;
	// Oculus.Platform.Samples.VrHoops.RemotePlayer Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::player
	RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* ___player_1;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::remoteTimeOffset
	float ___remoteTimeOffset_2;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::lastReceivedBallsTime
	float ___lastReceivedBallsTime_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall> Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::activeBalls
	Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851* ___activeBalls_4;
};

// System.Collections.Generic.Queue`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____currentElement_3;
};

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementDefinitionList>
struct Message_1_tBD474C7F30EF588F32F3721FB47791C61A43A3F1  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	AchievementDefinitionList_t86268A10B1135620D1EF1258E43228A17FDD9F39* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList>
struct Message_1_t3399BBEE644D14520DE73725A4F098F45E1D2589  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	AchievementProgressList_t6B759119872D99D481D2F305A0849799D9E44E6F* ___data_4;
};

// Oculus.Platform.Message`1<System.Boolean>
struct Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	bool ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList>
struct Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	LeaderboardEntryList_tB421181A99FE7D44EF4C5D8A5846753CA4BB0EA1* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* ___data_4;
};

// Oculus.Platform.Message`1<System.Object>
struct Message_1_tC4674D49302BAB6183CEF95D099A5F93211019CB  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	RuntimeObject* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.ProductList>
struct Message_1_t6600CB25BE1DA3008F62FB49B44DB20C23B9FE93  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	ProductList_tE3694D232C493A9CD580C5557D937FD0A2506981* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>
struct Message_1_t27A884141DAE8B0CC324ED8E3C07EE4DD1D14D2D  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>
struct Message_1_t06970779D503B50E986C5462619C2F6FB72381FA  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	PurchaseList_tC41D329066EE7B56984F653FB46971C0614DBA0B* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.Room>
struct Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.User>
struct Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>
struct Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>
struct Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19* ___data_4;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList>
struct Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList>
struct Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate>
struct Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463* ___callback__2;
};

// Oculus.Platform.Request`1<System.Boolean>
struct Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList>
struct Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList>
struct Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.Purchase>
struct Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList>
struct Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.Room>
struct Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA* ___callback__2;
};

// Oculus.Platform.Models.AchievementDefinitionList
struct AchievementDefinitionList_t86268A10B1135620D1EF1258E43228A17FDD9F39  : public DeserializableList_1_t1DEB53C597DDC53CEB3982479D636D954E6B685F
{
};

// Oculus.Platform.Models.AchievementProgressList
struct AchievementProgressList_t6B759119872D99D481D2F305A0849799D9E44E6F  : public DeserializableList_1_tF328A94CA00780F009738727571ED40D4126172B
{
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// Oculus.Platform.Models.LeaderboardEntryList
struct LeaderboardEntryList_tB421181A99FE7D44EF4C5D8A5846753CA4BB0EA1  : public DeserializableList_1_tFAC7CAC2D0D8E5D23F0096F7C9722F9353E5F4FD
{
	// System.UInt64 Oculus.Platform.Models.LeaderboardEntryList::TotalCount
	uint64_t ___TotalCount_3;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Oculus.Platform.Models.ProductList
struct ProductList_tE3694D232C493A9CD580C5557D937FD0A2506981  : public DeserializableList_1_tDC302AFD37EC50BB1B2E5B3FC30740B13395F726
{
};

// Oculus.Platform.Models.PurchaseList
struct PurchaseList_tC41D329066EE7B56984F653FB46971C0614DBA0B  : public DeserializableList_1_t3C99E4F7C6D287622F5C24A5DCB068C75276C26A
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// Oculus.Platform.Models.UserList
struct UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376  : public DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
struct PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 
{
	// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo::piece
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piece_0;
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo::pieceOwner
	int32_t ___pieceOwner_1;
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo::powerPieceOwner
	int32_t ___powerPieceOwner_2;
};
// Native definition for P/Invoke marshalling of Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
struct PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};
// Native definition for COM marshalling of Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
struct PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};

// Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t54B6224B146E04D495514C26CF62499652365BE2 
{
	// System.String Oculus.Platform.Matchmaking/CustomQuery/Criterion::key
	String_t* ___key_0;
	// Oculus.Platform.MatchmakingCriterionImportance Oculus.Platform.Matchmaking/CustomQuery/Criterion::importance
	int32_t ___importance_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery/Criterion::parameters
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_2;
};
// Native definition for P/Invoke marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t54B6224B146E04D495514C26CF62499652365BE2_marshaled_pinvoke
{
	char* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_2;
};
// Native definition for COM marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t54B6224B146E04D495514C26CF62499652365BE2_marshaled_com
{
	Il2CppChar* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_2;
};

// Oculus.Platform.Models.AchievementProgress
struct AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.AchievementProgress::Bitfield
	String_t* ___Bitfield_0;
	// System.UInt64 Oculus.Platform.Models.AchievementProgress::Count
	uint64_t ___Count_1;
	// System.Boolean Oculus.Platform.Models.AchievementProgress::IsUnlocked
	bool ___IsUnlocked_2;
	// System.String Oculus.Platform.Models.AchievementProgress::Name
	String_t* ___Name_3;
	// System.DateTime Oculus.Platform.Models.AchievementProgress::UnlockTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnlockTime_4;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// Oculus.Platform.Models.LeaderboardEntry
struct LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.LeaderboardEntry::DisplayScore
	String_t* ___DisplayScore_0;
	// System.Byte[] Oculus.Platform.Models.LeaderboardEntry::ExtraData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ExtraData_1;
	// System.UInt64 Oculus.Platform.Models.LeaderboardEntry::ID
	uint64_t ___ID_2;
	// System.Int32 Oculus.Platform.Models.LeaderboardEntry::Rank
	int32_t ___Rank_3;
	// System.Int64 Oculus.Platform.Models.LeaderboardEntry::Score
	int64_t ___Score_4;
	// Oculus.Platform.Models.SupplementaryMetric Oculus.Platform.Models.LeaderboardEntry::SupplementaryMetricOptional
	SupplementaryMetric_t0F0B51014386A10FBA99B506481B5ACE546EA5C7* ___SupplementaryMetricOptional_5;
	// Oculus.Platform.Models.SupplementaryMetric Oculus.Platform.Models.LeaderboardEntry::SupplementaryMetric
	SupplementaryMetric_t0F0B51014386A10FBA99B506481B5ACE546EA5C7* ___SupplementaryMetric_6;
	// System.DateTime Oculus.Platform.Models.LeaderboardEntry::Timestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Timestamp_7;
	// Oculus.Platform.Models.User Oculus.Platform.Models.LeaderboardEntry::User
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___User_8;
};

// Oculus.Platform.MatchmakingOptions
struct MatchmakingOptions_t7C5F8003B4878CDBA092E6FDA874BDAEB2560A78  : public RuntimeObject
{
	// System.IntPtr Oculus.Platform.MatchmakingOptions::Handle
	intptr_t ___Handle_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Oculus.Platform.Packet
struct Packet_t54871D991C39844C3642CBCD5573C87974DF6A32  : public RuntimeObject
{
	// System.UInt64 Oculus.Platform.Packet::size
	uint64_t ___size_0;
	// System.IntPtr Oculus.Platform.Packet::packetHandle
	intptr_t ___packetHandle_1;
};

// Oculus.Platform.Models.Purchase
struct Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.Purchase::DeveloperPayload
	String_t* ___DeveloperPayload_0;
	// System.DateTime Oculus.Platform.Models.Purchase::ExpirationTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___ExpirationTime_1;
	// System.DateTime Oculus.Platform.Models.Purchase::GrantTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GrantTime_2;
	// System.String Oculus.Platform.Models.Purchase::ID
	String_t* ___ID_3;
	// System.String Oculus.Platform.Models.Purchase::ReportingId
	String_t* ___ReportingId_4;
	// System.String Oculus.Platform.Models.Purchase::Sku
	String_t* ___Sku_5;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementDefinitionList>
struct Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementProgressList>
struct Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementUpdate>
struct Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<System.Boolean>
struct Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LeaderboardEntryList>
struct Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.ProductList>
struct Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Purchase>
struct Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PurchaseList>
struct Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>
struct Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList>
struct Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserProof>
struct Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Platform.Message/Callback
struct Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D  : public MulticastDelegate_t
{
};

// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer
struct StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// Oculus.Platform.Samples.VrHoops.BallEjector
struct BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Platform.Samples.VrBoardGame.BoardPosition
struct BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.BoardPosition::x
	int32_t ___x_4;
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.BoardPosition::y
	int32_t ___y_5;
};

// Oculus.Platform.Samples.NetChat.DataEntry
struct DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Oculus.Platform.Samples.NetChat.DataEntry::dataOutput
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dataOutput_4;
	// Oculus.Platform.Samples.NetChat.states Oculus.Platform.Samples.NetChat.DataEntry::currentState
	int32_t ___currentState_5;
	// Oculus.Platform.Models.User Oculus.Platform.Samples.NetChat.DataEntry::localUser
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___localUser_6;
	// Oculus.Platform.Models.User Oculus.Platform.Samples.NetChat.DataEntry::remoteUser
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___remoteUser_7;
	// Oculus.Platform.Models.Room Oculus.Platform.Samples.NetChat.DataEntry::currentRoom
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___currentRoom_8;
	// System.Int32 Oculus.Platform.Samples.NetChat.DataEntry::lastPacketID
	int32_t ___lastPacketID_9;
	// System.Boolean Oculus.Platform.Samples.NetChat.DataEntry::ratedMatchStarted
	bool ___ratedMatchStarted_10;
};

// Oculus.Platform.Samples.SimplePlatformSample.DataEntry
struct DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Oculus.Platform.Samples.SimplePlatformSample.DataEntry::dataOutput
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dataOutput_4;
};

// Oculus.Platform.Samples.VrHoops.DetectBasket
struct DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrHoops.DetectBasket/BasketPhase Oculus.Platform.Samples.VrHoops.DetectBasket::m_phase
	int32_t ___m_phase_4;
	// Oculus.Platform.Samples.VrHoops.Player Oculus.Platform.Samples.VrHoops.DetectBasket::m_owningPlayer
	Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* ___m_owningPlayer_5;
};

// Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck
struct EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::exitAppOnFailure
	bool ___exitAppOnFailure_4;
};

struct EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields
{
	// System.Action Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::UserFailedEntitlementCheck
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UserFailedEntitlementCheck_5;
	// System.Action Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::UserPassedEntitlementCheck
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UserPassedEntitlementCheck_6;
};

// Oculus.Platform.Samples.VrBoardGame.EyeCamera
struct EyeCamera_tD63752AB918EFC877B068F4DFD0A2DFD4364A9B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.EventSystems.EventSystem Oculus.Platform.Samples.VrBoardGame.EyeCamera::m_eventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_eventSystem_4;
	// Oculus.Platform.Samples.VrBoardGame.GameController Oculus.Platform.Samples.VrBoardGame.EyeCamera::m_gameController
	GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* ___m_gameController_5;
	// UnityEngine.SphereCollider Oculus.Platform.Samples.VrBoardGame.EyeCamera::m_gazeTracker
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ___m_gazeTracker_6;
	// UnityEngine.UI.Button Oculus.Platform.Samples.VrBoardGame.EyeCamera::m_currentButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_currentButton_7;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.EyeCamera::m_currentPiece
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_currentPiece_8;
	// Oculus.Platform.Samples.VrBoardGame.BoardPosition Oculus.Platform.Samples.VrBoardGame.EyeCamera::m_boardPosition
	BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___m_boardPosition_9;
};

// Oculus.Platform.Samples.VrBoardGame.GameBoard
struct GameBoard_t60116B13F343499C4471611881814A5299C696D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color[] Oculus.Platform.Samples.VrBoardGame.GameBoard::m_playerColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___m_playerColors_7;
	// UnityEngine.Color Oculus.Platform.Samples.VrBoardGame.GameBoard::m_proposedMoveColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_proposedMoveColor_8;
	// System.Int32[] Oculus.Platform.Samples.VrBoardGame.GameBoard::m_scores
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_scores_9;
	// Oculus.Platform.Samples.VrBoardGame.BoardPosition[] Oculus.Platform.Samples.VrBoardGame.GameBoard::m_positions
	BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE* ___m_positions_10;
	// Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo[,] Oculus.Platform.Samples.VrBoardGame.GameBoard::m_pieces
	PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* ___m_pieces_11;
};

// Oculus.Platform.Samples.VrBoardGame.GameController
struct GameController_tD5904736CDF8FE24810C9703CACB7749B207377F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrBoardGame.MatchmakingManager Oculus.Platform.Samples.VrBoardGame.GameController::m_matchmaking
	MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* ___m_matchmaking_4;
	// Oculus.Platform.Samples.VrBoardGame.GameBoard Oculus.Platform.Samples.VrBoardGame.GameController::m_board
	GameBoard_t60116B13F343499C4471611881814A5299C696D8* ___m_board_5;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameController::m_pieceA
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_pieceA_6;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameController::m_pieceB
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_pieceB_7;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameController::m_powerPiece
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_powerPiece_8;
	// UnityEngine.Color Oculus.Platform.Samples.VrBoardGame.GameController::m_unusableColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_unusableColor_9;
	// UnityEngine.Color Oculus.Platform.Samples.VrBoardGame.GameController::m_unselectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_unselectedColor_10;
	// UnityEngine.Color Oculus.Platform.Samples.VrBoardGame.GameController::m_selectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_selectedColor_11;
	// UnityEngine.Color Oculus.Platform.Samples.VrBoardGame.GameController::m_highlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_highlightedColor_12;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrBoardGame.GameController::m_ballCountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ballCountText_13;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrBoardGame.GameController::m_player0Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_player0Text_14;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrBoardGame.GameController::m_player1Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_player1Text_15;
	// Oculus.Platform.Samples.VrBoardGame.GameController/GameState Oculus.Platform.Samples.VrBoardGame.GameController::m_state
	int32_t ___m_state_16;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameController::m_interestedPiece
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_interestedPiece_17;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameController::m_selectedPiece
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_selectedPiece_18;
	// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameController::m_proposedPiece
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___m_proposedPiece_19;
	// System.UInt32 Oculus.Platform.Samples.VrBoardGame.GameController::m_powerBallcount
	uint32_t ___m_powerBallcount_20;
	// System.String Oculus.Platform.Samples.VrBoardGame.GameController::m_opponentName
	String_t* ___m_opponentName_21;
};

// Oculus.Platform.Samples.VrBoardGame.GamePiece
struct GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece Oculus.Platform.Samples.VrBoardGame.GamePiece::m_type
	int32_t ___m_type_4;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::m_prefabA
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_prefabA_5;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::m_prefabB
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_prefabB_6;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::m_prefabPower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_prefabPower_7;
	// Oculus.Platform.Samples.VrBoardGame.BoardPosition Oculus.Platform.Samples.VrBoardGame.GamePiece::m_position
	BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___m_position_8;
};

// Oculus.Platform.Samples.VrHoops.GoalMover
struct GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Platform.Samples.VrHoops.GoalMover::MAX_OFFSET
	float ___MAX_OFFSET_4;
	// System.Single Oculus.Platform.Samples.VrHoops.GoalMover::m_speed
	float ___m_speed_5;
	// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.GoalMover::m_expectedPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_expectedPosition_7;
	// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.GoalMover::m_moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_moveDirection_8;
	// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.GoalMover::m_nextMoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_nextMoveDirection_9;
};

// Oculus.Platform.Samples.VrBoardGame.IAPManager
struct IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrBoardGame.GameController Oculus.Platform.Samples.VrBoardGame.IAPManager::m_gameController
	GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* ___m_gameController_4;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrBoardGame.IAPManager::m_priceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_priceText_5;
};

// Oculus.Platform.Samples.VrBoardGame.MatchmakingManager
struct MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrBoardGame.GameController Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_gameController
	GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* ___m_gameController_4;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_matchButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_matchButtonText_5;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_infoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_infoText_6;
	// System.UInt64 Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_matchRoom
	uint64_t ___m_matchRoom_8;
	// Oculus.Platform.Models.User Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_remotePlayer
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___m_remotePlayer_9;
	// System.Single Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_lastUpdateTime
	float ___m_lastUpdateTime_10;
	// Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::m_state
	int32_t ___m_state_12;
};

// Oculus.Platform.Samples.VrHoops.P2PNetworkBall
struct P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Platform.Samples.VrHoops.P2PNetworkBall::lastCollisionTime
	float ___lastCollisionTime_4;
	// UnityEngine.Rigidbody Oculus.Platform.Samples.VrHoops.P2PNetworkBall::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_5;
};

// Oculus.Platform.Samples.VrHoops.P2PNetworkGoal
struct P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrHoops.GoalMover Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::m_goal
	GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* ___m_goal_4;
	// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::m_lastSentMoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_lastSentMoveDirection_5;
	// System.Boolean Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::m_sendUpdates
	bool ___m_sendUpdates_6;
};

// Oculus.Platform.Samples.VrBoardGame.PlatformManager
struct PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt64 Oculus.Platform.Samples.VrBoardGame.PlatformManager::m_myID
	uint64_t ___m_myID_5;
	// System.String Oculus.Platform.Samples.VrBoardGame.PlatformManager::m_myOculusID
	String_t* ___m_myOculusID_6;
};

struct PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields
{
	// Oculus.Platform.Samples.VrBoardGame.PlatformManager Oculus.Platform.Samples.VrBoardGame.PlatformManager::s_instance
	PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* ___s_instance_4;
};

// Oculus.Platform.Samples.VrHoops.PlatformManager
struct PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Platform.Samples.VrHoops.MatchmakingManager Oculus.Platform.Samples.VrHoops.PlatformManager::m_matchmaking
	MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* ___m_matchmaking_5;
	// Oculus.Platform.Samples.VrHoops.P2PManager Oculus.Platform.Samples.VrHoops.PlatformManager::m_p2p
	P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* ___m_p2p_6;
	// Oculus.Platform.Samples.VrHoops.LeaderboardManager Oculus.Platform.Samples.VrHoops.PlatformManager::m_leaderboards
	LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* ___m_leaderboards_7;
	// Oculus.Platform.Samples.VrHoops.AchievementsManager Oculus.Platform.Samples.VrHoops.PlatformManager::m_achievements
	AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* ___m_achievements_8;
	// Oculus.Platform.Samples.VrHoops.PlatformManager/State Oculus.Platform.Samples.VrHoops.PlatformManager::m_currentState
	int32_t ___m_currentState_9;
	// System.UInt64 Oculus.Platform.Samples.VrHoops.PlatformManager::m_myID
	uint64_t ___m_myID_10;
	// System.String Oculus.Platform.Samples.VrHoops.PlatformManager::m_myOculusID
	String_t* ___m_myOculusID_11;
};

struct PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields
{
	// Oculus.Platform.Samples.VrHoops.PlatformManager Oculus.Platform.Samples.VrHoops.PlatformManager::s_instance
	PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* ___s_instance_4;
};

// Oculus.Platform.Samples.VrHoops.Player
struct Player_tCCA93288D258E225DD8C604DCC59E755FAE79044  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt32 Oculus.Platform.Samples.VrHoops.Player::m_score
	uint32_t ___m_score_7;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrHoops.Player::m_scoreUI
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_scoreUI_8;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::m_ballPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ballPrefab_9;
	// Oculus.Platform.Samples.VrHoops.BallEjector Oculus.Platform.Samples.VrHoops.Player::m_ballEjector
	BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* ___m_ballEjector_10;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> Oculus.Platform.Samples.VrHoops.Player::m_balls
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___m_balls_11;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::m_heldBall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_heldBall_12;
	// System.Single Oculus.Platform.Samples.VrHoops.Player::m_nextSpawnTime
	float ___m_nextSpawnTime_13;
};

// Oculus.Platform.Samples.VrHoops.PlayerArea
struct PlayerArea_tC80BF9671AA8AD2D0E6C713538D80045DDABA6EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.PlayerArea::m_ballPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ballPrefab_4;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.PlayerArea::m_playerHead
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_playerHead_5;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrHoops.PlayerArea::m_nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_nameText_6;
	// Oculus.Platform.Samples.VrHoops.P2PNetworkGoal Oculus.Platform.Samples.VrHoops.PlayerArea::m_p2pGoal
	P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* ___m_p2pGoal_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Platform.Samples.VrHoops.VREyeRaycaster
struct VREyeRaycaster_t67F0F5D38771C577D3461E188CCBBCED6C6C0FC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.EventSystems.EventSystem Oculus.Platform.Samples.VrHoops.VREyeRaycaster::m_eventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_eventSystem_4;
	// UnityEngine.UI.Button Oculus.Platform.Samples.VrHoops.VREyeRaycaster::m_currentButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_currentButton_5;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Oculus.Platform.Samples.VrHoops.RemotePlayer
struct RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073  : public Player_tCCA93288D258E225DD8C604DCC59E755FAE79044
{
	// Oculus.Platform.Models.User Oculus.Platform.Samples.VrHoops.RemotePlayer::m_user
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___m_user_14;
	// Oculus.Platform.Samples.VrHoops.P2PNetworkGoal Oculus.Platform.Samples.VrHoops.RemotePlayer::m_goal
	P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* ___m_goal_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
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
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo[,]
struct PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A  : public RuntimeArray
{
	ALIGN_FIELD (8) PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 m_Items[1];

	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___piece_0), (void*)NULL);
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___piece_0), (void*)NULL);
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___piece_0), (void*)NULL);
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___piece_0), (void*)NULL);
	}
};
// Oculus.Platform.Samples.VrBoardGame.BoardPosition[]
struct BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE  : public RuntimeArray
{
	ALIGN_FIELD (8) BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* m_Items[1];

	inline BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// Oculus.Platform.Matchmaking/CustomQuery/Criterion[]
struct CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA  : public RuntimeArray
{
	ALIGN_FIELD (8) Criterion_t54B6224B146E04D495514C26CF62499652365BE2 m_Items[1];

	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Criterion_t54B6224B146E04D495514C26CF62499652365BE2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parameters_2), (void*)NULL);
		#endif
	}
	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Criterion_t54B6224B146E04D495514C26CF62499652365BE2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parameters_2), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared (Callback_t80E1E12B0A5397910E616CA65BFEA673FF16934D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Object>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t4CB96621592A20B180089ED17BA12AE8564AF53F* Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared (Request_1_t4CB96621592A20B180089ED17BA12AE8564AF53F* __this, Callback_t80E1E12B0A5397910E616CA65BFEA673FF16934D* ___callback0, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<System.Object>::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline (Message_1_tC4674D49302BAB6183CEF95D099A5F93211019CB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared (DeserializableList_1_tF03B8C48A736E5705A86C89209212CD695949C09* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 Oculus.Platform.Models.DeserializableList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializableList_1_get_Count_m8D2A16F510FEBC66136C64012BC482ED2007B478_gshared (DeserializableList_1_tF03B8C48A736E5705A86C89209212CD695949C09* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mC88E93F26E40F52AB779EEFD0BD3A3C056D8330B_gshared (Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Boolean>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE_gshared (Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* __this, Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<System.Boolean>::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_gshared_inline (Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>::.ctor()
inline void Dictionary_2__ctor_m16010889A38608B714FB55661615EF676E758365 (Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.P2PNetworkBall::estimatePosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P2PNetworkBall_estimatePosition_m3A350D221A45DCB983F553CE938F14B8BD4E132A (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startVelocty1, float ___time2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.P2PNetworkBall::estimateVelocity(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P2PNetworkBall_estimateVelocity_m59056F32AA16CB4C055C94B12B8DAA63B1B655B4 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startVelocity0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Samples.VrHoops.P2PNetworkBall::IsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P2PNetworkBall_IsHeld_mF6563E2C0A398FAC4C24FD0FE66813784055F733 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody::get_drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_drag_m03B87FE60D5ABB7B937993112982C75080929D54 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrHoops.P2PManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_P2P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* PlatformManager_get_P2P_mBD870AC541261766E5F2B64ABA9161FE6A2E4EB6 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager::RemoveNetworkBall(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PManager_RemoveNetworkBall_m1FED105166C7BFAD3E1FC20E740652E8DFA088FB (P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ball0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Oculus.Platform.Samples.VrHoops.GoalMover>()
inline GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* GameObject_GetComponent_TisGoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324_m86F5B50DBEB6DD734374CEBED1D673CD3755F8E3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.GoalMover::get_MoveDirection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GoalMover_get_MoveDirection_mF88D514D395761AC26D6C15D717E7DC3E6FD5078_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::SendBackboardUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal_SendBackboardUpdate_mB573EF2BDDBCAFBD6B1131651913C2408E8BC0CD (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.GoalMover::get_NextMoveDirection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GoalMover_get_NextMoveDirection_m01B000F150B9A082139944E05806D5519061A181_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager::SendBackboardUpdate(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PManager_SendBackboardUpdate_m5AC90544FF3C0CDCEC98ADE010ABADF6E7E484A7 (P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* __this, float ___time0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDir2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextMoveDir3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.GoalMover::set_ExpectedPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoalMover_set_ExpectedPosition_m60F1FE20BD3651F98085BA1D9CE311EB91DC7DAC_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.GoalMover::set_MoveDirection(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoalMover_set_MoveDirection_m5F6AAE7BBC7C397DB066FBB989C5C7FFA7D2C666_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.GoalMover::set_NextMoveDirection(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoalMover_set_NextMoveDirection_m04D654D7259DE7FEC945F83B0930ECE19D5B105A_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager::UpdateNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PManager_UpdateNetwork_m278B7FA95644058194484295DEEE27DB07F13D78 (P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager::CheckForUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardManager_CheckForUpdates_m60029701F7032F3314481B796FEB64B48167E905 (LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Core::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A (String_t* ___appId0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager__ctor_m33CEB7B07410B7297007C0A6AE834E33C905668A (MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PManager__ctor_mF7313652F7D4223BF959674E5395AA6B3A4151FB (P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardManager__ctor_m9B7A29DD756C5887D05EF4B1A43D95A5650E79F7 (LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.AchievementsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementsManager__ctor_mB036AF17F9F75189E0ED2F8D97B17ABF4CBA5B5C (AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Entitlements::IsUserEntitledToApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Entitlements_IsUserEntitledToApplication_m12DD5469C7A81F00804FC5BD2C3E75157F3BA309 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92 (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Request::OnComplete(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE (Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* __this, Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* ___callback0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Message::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4 (Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::TerminateWithError(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TerminateWithError_mA415DEFFE7FAFC5283F763E40ADE0CD1E0903426 (Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.User>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* __this, Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* (*) (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259*, Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.User>::get_Data()
inline User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline (Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* __this, const RuntimeMethod* method)
{
	return ((  User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* (*) (Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::TransitionToState(Oculus.Platform.Samples.VrHoops.PlatformManager/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TransitionToState_m8DA84EBF704D84F8B585B134401338A8169A3252 (int32_t ___newState0, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrHoops.AchievementsManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_Achievements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* PlatformManager_get_Achievements_m0FFF57BA5FBC8F0FBF279570EF25FE649EDA4E6C (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.AchievementsManager::CheckForAchievmentUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementsManager_CheckForAchievmentUpdates_mA407ECF822F36BA72E90A25FD4840855744351A0 (AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_Matchmaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* PlatformManager_get_Matchmaking_m276B8C536E04015BEBA8266A2A4E93180BAA7C25 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager::LeaveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_LeaveQueue_m553221F7C11AE9502EEF12FFA1BCCC70DEB9C381 (MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<Oculus.Platform.Samples.VrHoops.BallEjector>()
inline BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* Component_GetComponentInChildren_TisBallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1_m5B5C44C724C6C27F921C5C9CDFDDCEDE94231D2E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::get_Count()
inline int32_t Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(T)
inline void Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Oculus.Platform.Samples.VrHoops.DetectBasket>()
inline DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045* GameObject_GetComponent_TisDetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045_mA150F9A4E0ABF34518C3A2107659CB3E46C328B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrHoops.DetectBasket::set_Player(Oculus.Platform.Samples.VrHoops.Player)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DetectBasket_set_Player_m74FABECCFAFE6E8A50F73EBE345F312799227121_inline (DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045* __this, Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* ___value0, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrHoops.PlatformManager/State Oculus.Platform.Samples.VrHoops.PlatformManager::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformManager_get_CurrentState_m4A194299BF01C0DDC29A2A7A1E0AB472C2138833 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Samples.VrHoops.Player::get_HasBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_HasBall_mEC90953EF62031944F0A99CDB1819D1ADF18DD60 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::CreateBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Player_CreateBall_m58333115DD7451CDA219B3F1ABA55D6D6DE4D0B1 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A Queue_1_GetEnumerator_mFA1E83229BB407C0F17B2F4302364B026942891B (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_mD9CA746917F641C6070A4C5D211B9184C0D03207 (Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A*, const RuntimeMethod*))Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m416C4573AA7F972AB6D25BBEC267C5F9986A1877 (Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A*, const RuntimeMethod*))Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m91B53F3AF1B3D329412CCA3634A4633B1554BBE8 (Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A*, const RuntimeMethod*))Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Oculus.Platform.Samples.VrHoops.Player>()
inline Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* GameObject_GetComponent_TisPlayer_tCCA93288D258E225DD8C604DCC59E755FAE79044_m331608F613A6DAD7E3744E263907219DD26160BE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<Oculus.Platform.Samples.VrHoops.P2PNetworkGoal>()
inline P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* GameObject_GetComponentInChildren_TisP2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D_m0DCB695676D17C6FCB05333F837FC23C13E7BBE9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrHoops.Player::set_Score(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Score_m3A7337095A3767714CDCB6A1B13226E9E421C1E3 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrHoops.Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m274B1DE0CFCA2553C26DAE89C6F4BDCE693F6731 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Oculus.Platform.Samples.VrBoardGame.GamePiece>()
inline GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* Component_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m056326252E8EF90C6DB1511E39C0481E614160F5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Oculus.Platform.Samples.VrBoardGame.BoardPosition>()
inline BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* Component_GetComponent_TisBoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7_mE0AA2286CBC04A69C52C7EE1FBC7741CB29F8B44 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StoppedLookingAtPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StoppedLookingAtPiece_mF84B7C1BCDB19CA0574BC698AE2E62297E6BB505 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StartedLookingAtPiece(Oculus.Platform.Samples.VrBoardGame.GamePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartedLookingAtPiece_mF8D7DCE809BF01E669F5D13C13FCF7FAE5F8B645 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___piece0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StartedLookingAtPosition(Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartedLookingAtPosition_mE3A4D5BAACA43C48C4E9AF3A86FB11CB3A821058 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::ClearProposedMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClearProposedMove_m007B691F93B5722B5A1A02CFAB3C538F60A0E393 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameBoard::Create(UnityEngine.GameObject,UnityEngine.GameObject,Oculus.Platform.Samples.VrBoardGame.BoardPosition,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameBoard_Create_m792BBABEB188BDE85DA7F18F00A8C27EF29A8F8F (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent1, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___pos2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___off3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::UpdateScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_UpdateScores_m0B3098CE91A5B6EA39BDB7003E19CD807D63C7AE (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<Oculus.Platform.Samples.VrBoardGame.GamePiece>()
inline GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GamePiece::set_Position(Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_Position_m425D2AD280F38D594B0E0252623A42D0C98A75AA_inline (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TransitionToState(Oculus.Platform.Samples.VrBoardGame.GameController/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, int32_t ___state0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::UpdateScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::PerFrameStateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PerFrameStateUpdate_mA612A282551FCEE54486472E39963CB1B14EE058 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::UpdateGamePieceColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateGamePieceColors_m7999C8FB2BC8323F952607BC9ED96178D6ED0AE0 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Samples.VrBoardGame.GameBoard::IsFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_IsFull_m975EACD1900C5890DD53280EB1B467C282D67DDB (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameBoard::GetPlayerScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___player0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::EndMatch(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_EndMatch_m16924F8889FDEB613DA50D56412A946604AAAF71 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, int32_t ___localScore0, int32_t ___remoteScore1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::MakeAIMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeAIMove_m40B74334C4497DCA0C16B9E0C64479EA7909FD0B (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, int32_t ___player0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TrySelectPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TrySelectPiece_m39A8A4BB03FEAE3A685C9C9220D4D9C43C2560F8 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TryPlacePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TryPlacePiece_m13BBC7FEF69145808C7B239D8F7B7E777B560229 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_Reset_mC7B2AF3FC51B8008CCCC63C3FDDBD0603F796D5F (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Samples.VrBoardGame.GameBoard::CanPlayerMoveToPostion(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_CanPlayerMoveToPostion_m85C17341279DC70FEBACDF9B14B6F1D3FCC372E2 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::get_Prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::AddPiece(System.Int32,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_AddPiece_m7B1C5812D3DF30191308F6FEDD450B6EB71C4796 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___player0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Samples.VrBoardGame.GameBoard::CanPlayerPowerUpPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_CanPlayerPowerUpPosition_m47A041630D35FB258EF28DE8ABCA93349B9E7C33 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::AddPowerPiece(System.Int32,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_AddPowerPiece_m5717EB21C074328FB08B6C0D0F7FD3A6A102C297 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___player0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TransitionToNextState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TransitionToNextState_mEEF4E6738A87D0B03487639AE03E9D42C15E929A (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::PrefabFor(Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GamePiece_PrefabFor_m410AB82FAE818FAADEB8C7A5A9A90A244A6A1529 (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, int32_t ___p0, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameBoard::AddProposedPiece(UnityEngine.GameObject,Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameBoard_AddProposedPiece_m6B8A8F95EBEF9C36ABDB8D9E9FD431382FFD0A32 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___pos1, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameBoard::AddProposedPowerPiece(UnityEngine.GameObject,Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameBoard_AddProposedPowerPiece_mB2904D98846ADB9B441241F83C578F957F698F27 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___pos1, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrBoardGame.BoardPosition Oculus.Platform.Samples.VrBoardGame.GamePiece::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* GamePiece_get_Position_mC6F65B75035DB03E989F36D76BCE1919905DA131_inline (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece Oculus.Platform.Samples.VrBoardGame.GamePiece::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePiece_get_Type_m72EC9DE3B781426D864BF8F185FF4148D4D170A1_inline (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::SendLocalMove(Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_SendLocalMove_m8BA1D500F113939069C8EF569B84B327D2FDF6B7 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, int32_t ___piece0, int32_t ___boardX1, int32_t ___boardY2, const RuntimeMethod* method) ;
// System.String Oculus.Platform.Samples.VrBoardGame.PlatformManager::get_MyOculusID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformManager_get_MyOculusID_mD5DB1A9E395C35707FE46E7C3DB3D3D5D625486D (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::FetchProductPrices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_FetchProductPrices_mA3EA3C722261E087F1DF2233D277528B68931B3A (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::FetchPurchasedProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_FetchPurchasedProducts_mED4C1B56D4609200732F39F7563FFE4F13D68AA3 (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList> Oculus.Platform.IAP::GetProductsBySKU(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3* IAP_GetProductsBySKU_mA703B7BDB14429394E52F87917611C897B4085F6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___skus0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.ProductList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mD4BB84B5AD39D29AFA8F82A4AB1F1D6F92A9C5EB (Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3* Request_1_OnComplete_m90589E35F2777DA17D8E76661F67C766D644952C (Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3* __this, Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3* (*) (Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3*, Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::TerminateWithError(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9 (Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m6FF4EACFD252C29BB95B64ECCF6945F0F4DB69F1 (DeserializableList_1_tDC302AFD37EC50BB1B2E5B3FC30740B13395F726* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_tDC302AFD37EC50BB1B2E5B3FC30740B13395F726*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> Oculus.Platform.IAP::GetViewerPurchases(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6* IAP_GetViewerPurchases_mDC9F2E1FB5B93683A0EAE253825D6F96340CE189 (bool ___fetchDeveloperPayload0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PurchaseList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mC0D8F4E69B15C5C470C097D6265BF60948CA572D (Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6* Request_1_OnComplete_mE48DA95E6E337FEF07E73AF055F036404408301D (Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6* __this, Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6* (*) (Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6*, Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m97C6E1206F18E8B7B97BD679E033CF0E9B3AEE62 (DeserializableList_1_t3C99E4F7C6D287622F5C24A5DCB068C75276C26A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_t3C99E4F7C6D287622F5C24A5DCB068C75276C26A*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Purchase> Oculus.Platform.IAP::LaunchCheckoutFlow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE* IAP_LaunchCheckoutFlow_m6B38B8FB408A1918D271917BD9E2BC1A055ED2CB (String_t* ___sku0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Purchase>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m2039BFED243E3205CDB15E41D2F894EC4554E978 (Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.Purchase>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE* Request_1_OnComplete_mC66FA212BFBFE9CAA49F78FEC2AE5BBF7623D1CF (Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE* __this, Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE* (*) (Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE*, Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::AddPowerballs(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddPowerballs_m0D0BCB894035CC715580D74D0C63A0283E4FF237 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, uint32_t ___count0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68 (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.Matchmaking::SetMatchFoundNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matchmaking_SetMatchFoundNotificationCallback_m5FD84AC9FE2986FB827DE7F6240848C127B36A80 (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Rooms::SetUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetUpdateNotificationCallback_m91DAA806DCBE29A0DE31EB9C324F66DA9DD8BCEF (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::TransitionToState(Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, int32_t ___state0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_Get_m5BD3B00447E38D661328C512EAA267FAB3CBF390 (uint64_t ___roomID0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.Room>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889 (Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* __this, Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* (*) (Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE*, Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.UInt64 Oculus.Platform.Samples.VrBoardGame.PlatformManager::get_MyID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C (const RuntimeMethod* method) ;
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F (uint64_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// Oculus.Platform.Request Oculus.Platform.Matchmaking::ReportResultsInsecure(System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Matchmaking_ReportResultsInsecure_mC8F1B5BD784967EE51FA85362F2AFE14D00D6D2D (uint64_t ___roomID0, Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___data1, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Matchmaking::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Matchmaking_Cancel_m706FB1CABA9DF535FF277595CD558C8000E1025A (const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Leave(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_Leave_mA3D120D16515D494AB8146DB8C03F639A2CECC77 (uint64_t ___roomID0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Oculus.Platform.Matchmaking::Enqueue2(System.String,Oculus.Platform.MatchmakingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* Matchmaking_Enqueue2_m5ACC4DED15B2FF40CE758DCFE073AD1E9F3BC3A0 (String_t* ___pool0, MatchmakingOptions_t7C5F8003B4878CDBA092E6FDA874BDAEB2560A78* ___matchmakingOptions1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResult>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6 (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993 (Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* __this, Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* (*) (Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905*, Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResult>::get_Data()
inline MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* Message_1_get_Data_mF829EE114595202C5F13D822CE4BA219CC04710D_inline (Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767* __this, const RuntimeMethod* method)
{
	return ((  MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* (*) (Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<Oculus.Platform.Models.Room>::get_Data()
inline Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline (Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* __this, const RuntimeMethod* method)
{
	return ((  Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* (*) (Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Matchmaking::JoinRoom(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Matchmaking_JoinRoom_mC10BB916CDD1EC2CAA76DD1A0D75B88E08AC1407 (uint64_t ___roomID0, bool ___subscribeToUpdates1, const RuntimeMethod* method) ;
// System.Int32 Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_Count()
inline int32_t DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9 (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8*, const RuntimeMethod*))DeserializableList_1_get_Count_m8D2A16F510FEBC66136C64012BC482ED2007B478_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::ProcessRoomData(Oculus.Platform.Models.Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_ProcessRoomData_m2882E4545F801340954454BB2E844CC2B0C048B4 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___room0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
inline int32_t Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93 (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// System.Boolean Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::DoesLocalUserGoFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatchmakingManager_DoesLocalUserGoFirst_mDFE3E2157F9C17DAD7068E5407E6F170246869E1 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Matchmaking::StartMatch(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Matchmaking_StartMatch_mA0D9B2868918B1D405B2D2907F9D4C6F8F8BC9A7 (uint64_t ___roomID0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StartOnlineMatch(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartOnlineMatch_mD4FAEE5805B0A61809C24CF2EA30A0C3F2119BD3 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, String_t* ___opponentName0, bool ___localUserGoesFirst1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::ProcessRemoteMove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_ProcessRemoteMove_m44C0F2EF64888809B04398D5832817EFCD6852D4 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, String_t* ___moveString0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::MarkRemoteTurnComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MarkRemoteTurnComplete_mE983E9EF3600AFECC378220D93D1CEBFFB3B4069 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::RemoteMatchEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_RemoteMatchEnded_mB273946F8DD29362CE3D79AEBE8CE1A0141A2A6A (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::MakeRemoteMove(Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeRemoteMove_m1F41AE124BC529E1F4BA67446A359A581F8B48BF (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, int32_t ___piece0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::UpdateDataStore(System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_UpdateDataStore_mECD4F3F3392C36B29316009C2E5E313A63E2E637 (uint64_t ___roomID0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data1, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Rooms::UpdateOwner(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Rooms_UpdateOwner_m0C5FF7EF83D691AF89D45CAC53872579F0368EE2 (uint64_t ___roomID0, uint64_t ___userID1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::checkEntitlement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_checkEntitlement_m04534284B09D66C2A2599E1CE1B68D95BBBB3F58 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::SubmitCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_SubmitCommand_mEC792665C0698CB7B2169C9AFECEE7451D16ADC3 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___command0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Request::RunCallbacks(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_RunCallbacks_mB86BB1543FDEF582E537265EF3BC2DCAACB86939 (uint32_t ___limit0, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7046F41E3D6045F7CFC5B2BBB4F295967F6FA9D8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::createAndJoinPrivateRoom(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_createAndJoinPrivateRoom_m027DA24A2B7EB7A8CCBFE929469CCBCEE970840D (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___joinPolicy0, String_t* ___maxUsers1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getCurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getCurrentRoom_m5A3CC80D51C3128F3409ACA8349CC9E38FAD4954 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getRoom_m052D5B788F8F3A82FDD31510B5ADFB1C8CAC830A (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::joinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_joinRoom_mB6BA1A6D16C78F525D639183ED857DCBC3413F52 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::leaveRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaveRoom_mDB68BE054CEC25A12ECDAF1F90547D2BFB59EB4E (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::kickUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_kickUser_m21DEA1A7589CC461E9AC745A12DC914AF72F3432 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___userID1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getLoggedInUser_m59ACED4D6203AC059B94CF7D584439E26260C540 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getUser_m624A6CA6E4898FFE4AF9883DED5BF1EB3F78A204 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___userID0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getLoggedInFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getLoggedInFriends_mB6869715887978481B2DFD67EFC582AE3A143B92 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getInvitableUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getInvitableUsers_mCABE5F4F4F7A89CA7E63C6B75D611E4ABCA9EBB5 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::inviteUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_inviteUser_m5F72BB146929D51D1BCE0F0E471960326221FC3C (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___inviteToken1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::setRoomDescription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_setRoomDescription_m13B492F45364D2F98401BD917CC4C05C4FFC130A (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___description1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::updateRoomDataStore(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_updateRoomDataStore_mBCB0D5F140344A104D25223F561825DD02294E51 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getUserNonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getUserNonce_m286B72252C2A6F9F0C494C5CCC130AF308D519AC (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getAchievementDefinition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getAchievementDefinition_m7D3FB177225B02FDC870A12817721AED1F8DF522 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getAchievementProgress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getAchievementProgress_m3361B1C5718951AFFAABC70546D294E112985285 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::unlockAchievement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_unlockAchievement_m311D4F3E7862463761D5B1DAF09892D3A98EE96B (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::addCountAchievement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_addCountAchievement_m1DEE34463703A3CC5F8EE030E8BDAAA25DE4711B (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, String_t* ___count1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::addFieldsAchievement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_addFieldsAchievement_m7A9DE2C67D96B006B87AF997E0F25A1E9E614EC2 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, String_t* ___fields1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::writeLeaderboardEntry(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_writeLeaderboardEntry_m099FB5010519C049740AFCEE0FA861DE002B8451 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___leaderboardName0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getLeaderboardEntries(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getLeaderboardEntries_m97A824DCB596F201282CEA7FA872A89CBD9C64C1 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___leaderboardName0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::printOutputLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___newLine0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> Oculus.Platform.Leaderboards::GetEntries(System.String,System.Int32,Oculus.Platform.LeaderboardFilterType,Oculus.Platform.LeaderboardStartAt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB* Leaderboards_GetEntries_m561C56F0D404DA9265BA6A7B3AE759B1FBA049E1 (String_t* ___leaderboardName0, int32_t ___limit1, int32_t ___filter2, int32_t ___startAt3, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LeaderboardEntryList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mA57F8BFF347EF4FA57AC28F86EEEDF3284C7F55E (Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB* Request_1_OnComplete_mA1680CDE78012F90AEF2FA8555DB35E11542DA4D (Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB* __this, Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB* (*) (Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB*, Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___value0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<System.Boolean> Oculus.Platform.Leaderboards::WriteEntry(System.String,System.Int64,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* Leaderboards_WriteEntry_mA3D86734EC13FEBB516A83EA7CFB36B36AD6DB74 (String_t* ___leaderboardName0, int64_t ___score1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extraData2, bool ___forceUpdate3, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mC88E93F26E40F52AB779EEFD0BD3A3C056D8330B (Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mC88E93F26E40F52AB779EEFD0BD3A3C056D8330B_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Boolean>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE (Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* __this, Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* (*) (Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7*, Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD*, const RuntimeMethod*))Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE_gshared)(__this, ___callback0, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate> Oculus.Platform.Achievements::AddFields(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* Achievements_AddFields_m1A35634A7F7DC978C9FB584360F33B62444D98F1 (String_t* ___name0, String_t* ___fields1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementUpdate>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m4896EA57C01F759E7FC5DDDDBCCD56C96AD9909D (Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D (Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* __this, Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* (*) (Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3*, Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.UInt64 System.Convert::ToUInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E (String_t* ___value0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate> Oculus.Platform.Achievements::AddCount(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* Achievements_AddCount_m691EA5043D0514BE618E03AFA61B1081E839192F (String_t* ___name0, uint64_t ___count1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate> Oculus.Platform.Achievements::Unlock(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* Achievements_Unlock_m676D0D1402F1F964F90288CA30C38AC64C72ECFA (String_t* ___name0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList> Oculus.Platform.Achievements::GetProgressByName(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215* Achievements_GetProgressByName_m2B165F6E9A23E899654283B5E645830B957A720E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementProgressList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mC79D274A845DD174C23148392331D0C2601C1576 (Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215* Request_1_OnComplete_mE92A72BF377F9BA7E0900A7BC0D2AEB0265511D4 (Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215* __this, Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215* (*) (Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215*, Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList> Oculus.Platform.Achievements::GetDefinitionsByName(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7* Achievements_GetDefinitionsByName_m3C40F8BD86E8D1464E4079B6443A667495AAA08C (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AchievementDefinitionList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m1AF836A78AEEC14D7BBF567F3C733CEE8EB79B49 (Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7* Request_1_OnComplete_m13A85C5716534C581895C7CDE9C611D7BCD57F93 (Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7* __this, Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7* (*) (Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7*, Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> Oculus.Platform.Users::GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C* Users_GetUserProof_mFBAE7BC2918F0C81D510EC39C540F22F28700E28 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserProof>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m52B40AED4A7F4080C0578B5C06EB49AA866EBA4F (Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C* Request_1_OnComplete_m3F50A33107EA0C6A77B46389951975C23FEEC6D0 (Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C* __this, Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C* (*) (Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C*, Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.UInt32 System.Convert::ToUInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m7D758DA8A9CBB62661D2DB83937F7779CFB4453D (String_t* ___value0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::CreateAndJoinPrivate(Oculus.Platform.RoomJoinPolicy,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_CreateAndJoinPrivate_m3E7902B29C4D52D904CF59456C3B818E578159B2 (int32_t ___joinPolicy0, uint32_t ___maxUsers1, bool ___subscribeToUpdates2, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::GetCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_GetCurrent_m34B0FA210CD645E50C2A7B29087E76D339757C8E (const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Join(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_Join_m4D5EF33AC82309B4A8DE9F00D95FA12E66AFCE8D (uint64_t ___roomID0, bool ___subscribeToUpdates1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::KickUser(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_KickUser_m562457C772E119A3C7E5E62F32016777A33DF8CB (uint64_t ___roomID0, uint64_t ___userID1, int32_t ___kickDurationSeconds2, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* Users_Get_m1D73F64C0CD11B8B6A8066425893940D351493A0 (uint64_t ___userID0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* Users_GetLoggedInUserFriends_mB34BA2A578306FA8E3684D4097544AC2DC8F627F (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mB6BF3366635F92400E69587BD7369928D2C7B5B0 (Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215 (Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* __this, Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* (*) (Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8*, Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Rooms::GetInvitableUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* Rooms_GetInvitableUsers_m36054AA18B319AA97A1E8F71CFCFFE502528BD9F (const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::InviteUser(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_InviteUser_m3A095A2BCC4AA643EC105D163B9C4B621A2C69AC (uint64_t ___roomID0, String_t* ___inviteToken1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::SetDescription(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_SetDescription_mB3F47E463006005DD14E3C0483709FA8AFCE17D1 (uint64_t ___roomID0, String_t* ___description1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>::get_Data()
inline UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19* Message_1_get_Data_mA4DB507B5FD1A5847074AE28B9910E4686150828_inline (Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716* __this, const RuntimeMethod* method)
{
	return ((  UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19* (*) (Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList>::get_Data()
inline LeaderboardEntryList_tB421181A99FE7D44EF4C5D8A5846753CA4BB0EA1* Message_1_get_Data_m5C8C2B4824B5DDF54637962C6989189204572630_inline (Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6* __this, const RuntimeMethod* method)
{
	return ((  LeaderboardEntryList_tB421181A99FE7D44EF4C5D8A5846753CA4BB0EA1* (*) (Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.LeaderboardEntry>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m735A4209EB116B9D0B8289C227DC5023F6C7DEC6 (DeserializableList_1_tFAC7CAC2D0D8E5D23F0096F7C9722F9353E5F4FD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_tFAC7CAC2D0D8E5D23F0096F7C9722F9353E5F4FD*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<System.Boolean>::get_Data()
inline bool Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_inline (Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A*, const RuntimeMethod*))Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.AchievementProgress>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_mD1538F698A5EC6DCD33D41EEA655474C5CE213AC (DeserializableList_1_tF328A94CA00780F009738727571ED40D4126172B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_tF328A94CA00780F009738727571ED40D4126172B*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.AchievementDefinition>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_mAC083D84F92906EF099482B15D8BC6E3195E0E57 (DeserializableList_1_t1DEB53C597DDC53CEB3982479D636D954E6B685F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_t1DEB53C597DDC53CEB3982479D636D954E6B685F*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::outputRoomDetails(Oculus.Platform.Models.Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_outputRoomDetails_mFBC32E83BA0B0F4C5EA980A9CF5FD142827D4396 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___room0, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>::get_Data()
inline UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_inline (Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* __this, const RuntimeMethod* method)
{
	return ((  UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* (*) (Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::outputUserArray(Oculus.Platform.Models.UserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_outputUserArray_m13BC48533E02E08B8AF56CA68259BAC4B870378F (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___users0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.String Oculus.Platform.Samples.NetChat.chatPacket::get_textString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_textString(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::get_packetID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_packetID(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::checkEntitlement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_checkEntitlement_mEB4952576422487933805C610570A96F9C9725B7 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::SubmitCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_SubmitCommand_m2B2273D85F0E6C2B26BC3E291A5FA9A0AC98CBCF (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___command0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::processNetPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateRoom_mE16812155228F93592F74725FB237F358E05AD15 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateFilterRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateFilterRoom_m070D6EFA28EE0839F92BBFEBDA1C84AE548F0992 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindMatch_m0EBABDA92E1917BB705978CD57833BC8795CC9EE (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindRoom_mFEBC2B3471414AA6ADE9DB27417783499794AE1E (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindFilteredRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindFilteredRoom_mEBDEE9D663FCF12E5A767EDFDD4AE2EF48B9A946 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_sendChat_m3CC704504D6548B5CD1FECE9247561891850EE04 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___chatMessage0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestLeaveRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestStartRatedMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestStartRatedMatch_mC165EA843F2170E0440D796522EE872D7903E05A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestReportResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestReportResults_m7B9359AF8DC1E8DE209237856CFC304FC468A721 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::printOutputLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___newLine0, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom> Oculus.Platform.Matchmaking::CreateAndEnqueueRoom(System.String,System.UInt32,System.Boolean,Oculus.Platform.Matchmaking/CustomQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* Matchmaking_CreateAndEnqueueRoom_m78B3EA8E5C8BC2DCE16F0F63A6D97B9CD64E7E6A (String_t* ___pool0, uint32_t ___maxUsers1, bool ___subscribeToUpdates2, CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* ___customQueryData3, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m42FB3BC4C5F799AAB256CA92E9D85BC0F64FF1E4 (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED (Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* __this, Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* (*) (Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D*, Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>::get_Data()
inline MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_inline (Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* __this, const RuntimeMethod* method)
{
	return ((  MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* (*) (Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.Matchmaking/CustomQuery::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomQuery__ctor_m42DA97765E8CCC9AEDB5DEAC71C4B57642987ED5 (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Oculus.Platform.Matchmaking::Enqueue(System.String,Oculus.Platform.Matchmaking/CustomQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* Matchmaking_Enqueue_m27942904DAB9818122976C0D1C5339162DBA327F (String_t* ___pool0, CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* ___customQueryData1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Byte[] Oculus.Platform.Samples.NetChat.chatPacket::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* chatPacket_Serialize_mFE298B3EE45E1CC24F9239D336CC32F19F5C19DA (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Net::SendPacket(System.UInt64,System.Byte[],Oculus.Platform.SendPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Net_SendPacket_mF57EF337932A33440DD11ED75B8DC0C4D831227F (uint64_t ___userID0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___policy2, const RuntimeMethod* method) ;
// Oculus.Platform.Packet Oculus.Platform.Net::ReadPacket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* Net_ReadPacket_mEC534D761EE3A23708F6B4112D0E12FCDE96AEA3 (const RuntimeMethod* method) ;
// System.UInt64 Oculus.Platform.Packet::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Packet_get_Size_m1F2BE120F25A9738C6E6EEF99329E0816B358FA9_inline (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, const RuntimeMethod* method) ;
// System.UInt64 Oculus.Platform.Packet::ReadBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_ReadBytes_m63FC14879AE9EF7BAA377A0856FC58BFAA95135C (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination0, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.NetChat.chatPacket Oculus.Platform.Samples.NetChat.chatPacket::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* chatPacket_Deserialize_m969626B07732033FC28420D60574BFB94B0D35E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.UInt64 Oculus.Platform.Packet::get_SenderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_get_SenderID_m5628E47F8EBF4A796EB145DF0CAC97FBE240C410 (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Core::IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::HandleEntitlementCheckResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayerData__ctor_m87C47FB10A6402D46DE983E4043640525EE0632F (RemotePlayerData_tC2516244F2AEB7F3FE5FE893E93B4C0C70B6CEC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m16010889A38608B714FB55661615EF676E758365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851* L_0 = (Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851*)il2cpp_codegen_object_new(Dictionary_2_tF1A6E37CE4DBE6FFCEDFFAD031DF73A1BBFEC851_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m16010889A38608B714FB55661615EF676E758365(L_0, Dictionary_2__ctor_m16010889A38608B714FB55661615EF676E758365_RuntimeMethod_var);
		__this->___activeBalls_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeBalls_4), (void*)L_0);
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
float StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_Multicast(StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* currentDelegate = reinterpret_cast<StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___remoteTime0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_OpenInst(StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___remoteTime0, method);
}
float StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_OpenStatic(StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___remoteTime0, method);
}
float StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_OpenStaticInvoker(StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___remoteTime0);
}
float StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_ClosedStaticInvoker(StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< float, RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___remoteTime0);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC (StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___remoteTime0);

	return returnValue;
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTimeOffer__ctor_mE88EAA75741822C37228BE3B6683CCFB51042EED (StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9_Multicast;
}
// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StartTimeOffer_Invoke_m4FD16ABF9CAA3C594441DAAB6173B082FE541BE9 (StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___remoteTime0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartTimeOffer_BeginInvoke_m5B90A685AD94CD8E6BDAB8C2F5648F3C1CD3D5B8 (StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, float ___remoteTime0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___remoteTime0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StartTimeOffer_EndInvoke_mA9BD176FAEAC89BADBC2DBE89736D94F53E7C075 (StartTimeOffer_tE94B7F235AEC66FE1AE9F7B7E16F003CDBBFD3CC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkBall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkBall_Awake_mDA28AC27D7B7C265DF9CDC51DF91DF4C17C9E40F (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rigidBody_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_5), (void*)L_1);
		return;
	}
}
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.P2PNetworkBall::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P2PNetworkBall_get_velocity_mAB9C23360BBE10B585A2160AAF66D1DDAE7508A0 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, const RuntimeMethod* method) 
{
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidBody_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Platform.Samples.VrHoops.P2PNetworkBall::IsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P2PNetworkBall_IsHeld_mF6563E2C0A398FAC4C24FD0FE66813784055F733 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, const RuntimeMethod* method) 
{
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidBody_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkBall::ProcessRemoteUpdate(System.Single,System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkBall_ProcessRemoteUpdate_m2D92CDB7D549A4FE2C978FF92B2C31A87212B073 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, float ___remoteTime0, bool ___isHeld1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vel3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		bool L_0 = ___isHeld1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos2;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		return;
	}

IL_0010:
	{
		float L_3 = __this->___lastCollisionTime_4;
		float L_4 = ___remoteTime0;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_006a;
		}
	}
	{
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_6 = ___remoteTime0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___vel3;
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = P2PNetworkBall_estimatePosition_m3A350D221A45DCB983F553CE938F14B8BD4E132A(__this, L_8, L_9, L_10, NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_11, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rigidBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vel3;
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = P2PNetworkBall_estimateVelocity_m59056F32AA16CB4C055C94B12B8DAA63B1B655B4(__this, L_13, L_14, NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_15, NULL);
		bool L_16;
		L_16 = P2PNetworkBall_IsHeld_mF6563E2C0A398FAC4C24FD0FE66813784055F733(__this, NULL);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rigidBody_5;
		NullCheck(L_17);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_17, (bool)1, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rigidBody_5;
		NullCheck(L_18);
		Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF(L_18, (bool)1, NULL);
	}

IL_006a:
	{
		return;
	}
}
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.P2PNetworkBall::estimatePosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P2PNetworkBall_estimatePosition_m3A350D221A45DCB983F553CE938F14B8BD4E132A (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startVelocty1, float ___time2, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startVelocty1;
		float L_2 = ___time2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_5, NULL);
		float L_7 = ___time2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		float L_9 = ___time2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 Oculus.Platform.Samples.VrHoops.P2PNetworkBall::estimateVelocity(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P2PNetworkBall_estimateVelocity_m59056F32AA16CB4C055C94B12B8DAA63B1B655B4 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startVelocity0, float ___time1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_2 = ___time1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rigidBody_5;
		NullCheck(L_4);
		float L_5;
		L_5 = Rigidbody_get_drag_m03B87FE60D5ABB7B937993112982C75080929D54(L_4, NULL);
		float L_6 = ___time1;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_5, L_6)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_8, NULL);
		return L_9;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkBall::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkBall_OnCollisionEnter_m0EBAE6E881336736470D2C3EF742DF89726260D5 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___lastCollisionTime_4 = L_0;
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkBall::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkBall_OnDestroy_m09CAF32E90C7A1B2903492E3036C064FF8FE48D9 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, const RuntimeMethod* method) 
{
	{
		P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* L_0;
		L_0 = PlatformManager_get_P2P_mBD870AC541261766E5F2B64ABA9161FE6A2E4EB6(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		P2PManager_RemoveNetworkBall_m1FED105166C7BFAD3E1FC20E740652E8DFA088FB(L_0, L_1, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkBall__ctor_mDA8ED5836F25E74CF36B499AD3FC4EFD27F0BEF9 (P2PNetworkBall_tD1C9BDD74520E77EC2B42C137A657C485984E2C0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::set_SendUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal_set_SendUpdates_m22D5CB78AD031D10451761D76A2C3A72E3D19DA8 (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___m_sendUpdates_6 = L_0;
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal_Awake_m3D7EC9996878C9724759E35EDB087C8D26B7CA10 (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324_m86F5B50DBEB6DD734374CEBED1D673CD3755F8E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_1;
		L_1 = GameObject_GetComponent_TisGoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324_m86F5B50DBEB6DD734374CEBED1D673CD3755F8E3(L_0, GameObject_GetComponent_TisGoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324_m86F5B50DBEB6DD734374CEBED1D673CD3755F8E3_RuntimeMethod_var);
		__this->___m_goal_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_goal_4), (void*)L_1);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal_FixedUpdate_mD8A5F3F0755A56535F1A5B76106A4A713608BBCB (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_sendUpdates_6;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_1 = __this->___m_goal_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GoalMover_get_MoveDirection_mF88D514D395761AC26D6C15D717E7DC3E6FD5078_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_lastSentMoveDirection_5;
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		P2PNetworkGoal_SendBackboardUpdate_mB573EF2BDDBCAFBD6B1131651913C2408E8BC0CD(__this, NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::SendBackboardUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal_SendBackboardUpdate_mB573EF2BDDBCAFBD6B1131651913C2408E8BC0CD (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_0 = __this->___m_goal_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = GoalMover_get_MoveDirection_mF88D514D395761AC26D6C15D717E7DC3E6FD5078_inline(L_0, NULL);
		__this->___m_lastSentMoveDirection_5 = L_1;
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = L_2;
		P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* L_3;
		L_3 = PlatformManager_get_P2P_mBD870AC541261766E5F2B64ABA9161FE6A2E4EB6(NULL);
		float L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_7 = __this->___m_goal_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = GoalMover_get_MoveDirection_mF88D514D395761AC26D6C15D717E7DC3E6FD5078_inline(L_7, NULL);
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_9 = __this->___m_goal_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = GoalMover_get_NextMoveDirection_m01B000F150B9A082139944E05806D5519061A181_inline(L_9, NULL);
		NullCheck(L_3);
		P2PManager_SendBackboardUpdate_m5AC90544FF3C0CDCEC98ADE010ABADF6E7E484A7(L_3, L_4, L_6, L_8, L_10, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::RemoteBackboardUpdate(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal_RemoteBackboardUpdate_mB45BE1FF54DFBCF8F9DD7DCE64C5B4FE9ECA17FE (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, float ___remoteTime0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDir2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextMoveDir3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = ___remoteTime0;
		float L_2;
		L_2 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_3 = __this->___m_goal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos1;
		float L_5 = V_0;
		float L_6;
		L_6 = bankers_roundf(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___moveDir2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_8, NULL);
		NullCheck(L_3);
		GoalMover_set_ExpectedPosition_m60F1FE20BD3651F98085BA1D9CE311EB91DC7DAC_inline(L_3, L_9, NULL);
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_10 = __this->___m_goal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___moveDir2;
		NullCheck(L_10);
		GoalMover_set_MoveDirection_m5F6AAE7BBC7C397DB066FBB989C5C7FFA7D2C666_inline(L_10, L_11, NULL);
		GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* L_12 = __this->___m_goal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___nextMoveDir3;
		NullCheck(L_12);
		GoalMover_set_NextMoveDirection_m04D654D7259DE7FEC945F83B0930ECE19D5B105A_inline(L_12, L_13, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PNetworkGoal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2PNetworkGoal__ctor_m8AA0EF0E24CF0332B9AF1DE2E4B415C48AC8F48C (P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_Update_m40EA0BF07B10AEF9FFBF50A1E94529325A735EB8 (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, const RuntimeMethod* method) 
{
	{
		P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* L_0 = __this->___m_p2p_6;
		NullCheck(L_0);
		P2PManager_UpdateNetwork_m278B7FA95644058194484295DEEE27DB07F13D78(L_0, NULL);
		LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* L_1 = __this->___m_leaderboards_7;
		NullCheck(L_1);
		LeaderboardManager_CheckForUpdates_m60029701F7032F3314481B796FEB64B48167E905(L_1, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_Awake_m7ACABCDA9CE77AE6179DA1FC0938F5E9321954E5 (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		return;
	}

IL_0019:
	{
		((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4), (void*)__this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A((String_t*)NULL, NULL);
		MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* L_4 = (MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789*)il2cpp_codegen_object_new(MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MatchmakingManager__ctor_m33CEB7B07410B7297007C0A6AE834E33C905668A(L_4, NULL);
		__this->___m_matchmaking_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_matchmaking_5), (void*)L_4);
		P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* L_5 = (P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94*)il2cpp_codegen_object_new(P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		P2PManager__ctor_mF7313652F7D4223BF959674E5395AA6B3A4151FB(L_5, NULL);
		__this->___m_p2p_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_p2p_6), (void*)L_5);
		LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* L_6 = (LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955*)il2cpp_codegen_object_new(LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		LeaderboardManager__ctor_m9B7A29DD756C5887D05EF4B1A43D95A5650E79F7(L_6, NULL);
		__this->___m_leaderboards_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_leaderboards_7), (void*)L_6);
		AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* L_7 = (AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F*)il2cpp_codegen_object_new(AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AchievementsManager__ctor_mB036AF17F9F75189E0ED2F8D97B17ABF4CBA5B5C(L_7, NULL);
		__this->___m_achievements_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_achievements_8), (void*)L_7);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_Start_m8DE17882AECEB0B32A3550D9E23C72FC17773A5E (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_IsEntitledCallback_mC82329FE0D74D342ABD14C047D4BD3B620045973_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_0;
		L_0 = Entitlements_IsUserEntitledToApplication_m12DD5469C7A81F00804FC5BD2C3E75157F3BA309(NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_1 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_1, __this, (intptr_t)((void*)PlatformManager_IsEntitledCallback_mC82329FE0D74D342ABD14C047D4BD3B620045973_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_2;
		L_2 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_0, L_1, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::IsEntitledCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_IsEntitledCallback_mC82329FE0D74D342ABD14C047D4BD3B620045973 (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_GetLoggedInUserCallback_m0D6AA93D5C1CD37AFACC758A587F4A107652C81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mA415DEFFE7FAFC5283F763E40ADE0CD1E0903426(L_2, NULL);
		return;
	}

IL_000f:
	{
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_3;
		L_3 = Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_4 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_4, __this, (intptr_t)((void*)PlatformManager_GetLoggedInUserCallback_m0D6AA93D5C1CD37AFACC758A587F4A107652C81E_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_5;
		L_5 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_3, L_4, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::GetLoggedInUserCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.User>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_GetLoggedInUserCallback_m0D6AA93D5C1CD37AFACC758A587F4A107652C81E (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mA415DEFFE7FAFC5283F763E40ADE0CD1E0903426(L_2, NULL);
		return;
	}

IL_000f:
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_3 = ___msg0;
		NullCheck(L_3);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_4;
		L_4 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline(L_3, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		NullCheck(L_4);
		uint64_t L_5 = L_4->___ID_1;
		__this->___m_myID_10 = L_5;
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_6 = ___msg0;
		NullCheck(L_6);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_7;
		L_7 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline(L_6, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = L_7->___OculusID_4;
		__this->___m_myOculusID_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_myOculusID_11), (void*)L_8);
		PlatformManager_TransitionToState_m8DA84EBF704D84F8B585B134401338A8169A3252(1, NULL);
		AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* L_9;
		L_9 = PlatformManager_get_Achievements_m0FFF57BA5FBC8F0FBF279570EF25FE649EDA4E6C(NULL);
		NullCheck(L_9);
		AchievementsManager_CheckForAchievmentUpdates_mA407ECF822F36BA72E90A25FD4840855744351A0(L_9, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::TerminateWithError(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TerminateWithError_mA415DEFFE7FAFC5283F763E40ADE0CD1E0903426 (Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_1;
		L_1 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = L_1->___Message_2;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::QuitButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_QuitButtonPressed_mED5CA393B6605CA69404791306766953E2E5F179 (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, const RuntimeMethod* method) 
{
	{
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_OnApplicationQuit_m72E4C6DB25675542CFD877D9B9B02AECADE594C5 (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, const RuntimeMethod* method) 
{
	{
		MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* L_0;
		L_0 = PlatformManager_get_Matchmaking_m276B8C536E04015BEBA8266A2A4E93180BAA7C25(NULL);
		NullCheck(L_0);
		MatchmakingManager_LeaveQueue_m553221F7C11AE9502EEF12FFA1BCCC70DEB9C381(L_0, NULL);
		return;
	}
}
// Oculus.Platform.Samples.VrHoops.MatchmakingManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_Matchmaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* PlatformManager_get_Matchmaking_m276B8C536E04015BEBA8266A2A4E93180BAA7C25 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_0);
		MatchmakingManager_t98F572E01BC3BAA07362E3542F624C422FC82789* L_1 = L_0->___m_matchmaking_5;
		return L_1;
	}
}
// Oculus.Platform.Samples.VrHoops.P2PManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_P2P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* PlatformManager_get_P2P_mBD870AC541261766E5F2B64ABA9161FE6A2E4EB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_0);
		P2PManager_tA638343FBE3D3C8AAD525E2C61A1911A95562F94* L_1 = L_0->___m_p2p_6;
		return L_1;
	}
}
// Oculus.Platform.Samples.VrHoops.LeaderboardManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_Leaderboards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* PlatformManager_get_Leaderboards_m19BDD6FDB9CD63A34AD22D8AF4211B33DBB644C1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_0);
		LeaderboardManager_tC38017BAE84402782D45B8F19DE83154487B7955* L_1 = L_0->___m_leaderboards_7;
		return L_1;
	}
}
// Oculus.Platform.Samples.VrHoops.AchievementsManager Oculus.Platform.Samples.VrHoops.PlatformManager::get_Achievements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* PlatformManager_get_Achievements_m0FFF57BA5FBC8F0FBF279570EF25FE649EDA4E6C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_0);
		AchievementsManager_t1EA1F8D88BF7F4794F3D09A046AF326024CB258F* L_1 = L_0->___m_achievements_8;
		return L_1;
	}
}
// Oculus.Platform.Samples.VrHoops.PlatformManager/State Oculus.Platform.Samples.VrHoops.PlatformManager::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformManager_get_CurrentState_m4A194299BF01C0DDC29A2A7A1E0AB472C2138833 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_currentState_9;
		return L_1;
	}
}
// System.UInt64 Oculus.Platform.Samples.VrHoops.PlatformManager::get_MyID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PlatformManager_get_MyID_m0EAE79BA9C21C91D9117158208A73DF3A62EC878 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_2 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___m_myID_10;
		return L_3;
	}

IL_0018:
	{
		return ((int64_t)0);
	}
}
// System.String Oculus.Platform.Samples.VrHoops.PlatformManager::get_MyOculusID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformManager_get_MyOculusID_m14D7B5A4BBE7FBE92D9C2CE675B1CCAD4EB9302D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_2 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_2);
		String_t* L_3 = L_2->___m_myOculusID_11;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_4 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___m_myOculusID_11;
		return L_5;
	}

IL_0024:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_6;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::TransitionToState(Oculus.Platform.Samples.VrHoops.PlatformManager/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TransitionToState_m8DA84EBF704D84F8B585B134401338A8169A3252 (int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_0 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_2 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___m_currentState_9;
		int32_t L_4 = ___newState0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* L_5 = ((PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5_il2cpp_TypeInfo_var))->___s_instance_4;
		int32_t L_6 = ___newState0;
		NullCheck(L_5);
		L_5->___m_currentState_9 = L_6;
	}

IL_0024:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlatformManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager__ctor_mD86CB8CE845149827805D7C0F2BBE3CBF9CBC69C (PlatformManager_t75601619A2452F2CDFB110BCB9B1747C0A7A35B5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 Oculus.Platform.Samples.VrHoops.Player::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Player_get_Score_m1BCE096CD1CD85738745D9B1429FF16F1F1870B4 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___m_score_7;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.Player::set_Score(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Score_m3A7337095A3767714CDCB6A1B13226E9E421C1E3 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		__this->___m_score_7 = L_0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___m_scoreUI_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_scoreUI_8;
		uint32_t* L_4 = (&__this->___m_score_7);
		String_t* L_5;
		L_5 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.Player::set_BallPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_BallPrefab_mDF44ED397B603CEB56871323EFFD1099809EB540 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_ballPrefab_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ballPrefab_9), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Platform.Samples.VrHoops.Player::get_HasBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_HasBall_mEC90953EF62031944F0A99CDB1819D1ADF18DD60 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_heldBall_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_m272DC64EB75D49251E4EDC2E22D2411091DEE2B9 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisBallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1_m5B5C44C724C6C27F921C5C9CDFDDCEDE94231D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* L_1;
		L_1 = Component_GetComponentInChildren_TisBallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1_m5B5C44C724C6C27F921C5C9CDFDDCEDE94231D2E(L_0, Component_GetComponentInChildren_TisBallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1_m5B5C44C724C6C27F921C5C9CDFDDCEDE94231D2E_RuntimeMethod_var);
		__this->___m_ballEjector_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ballEjector_10), (void*)L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4;
		L_4 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_3, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___m_scoreUI_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_scoreUI_8), (void*)L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___m_scoreUI_8;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		return;
	}
}
// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::CreateBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Player_CreateBall_m58333115DD7451CDA219B3F1ABA55D6D6DE4D0B1 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045_mA150F9A4E0ABF34518C3A2107659CB3E46C328B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = __this->___m_balls_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline(L_0, Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		if ((((int64_t)((int64_t)L_1)) < ((int64_t)((int64_t)6))))
		{
			goto IL_0020;
		}
	}
	{
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_2 = __this->___m_balls_11;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24(L_2, Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0020:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_ballPrefab_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_5;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_6 = __this->___m_balls_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_6);
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_6, L_7, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* L_10 = __this->___m_ballEjector_10;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* L_15 = __this->___m_ballEjector_10;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_14);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_14, L_16, (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_17, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		NullCheck(L_18);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_18, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		NullCheck(L_19);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20;
		L_20 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_19, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		NullCheck(L_20);
		Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF(L_20, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045* L_22;
		L_22 = GameObject_GetComponent_TisDetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045_mA150F9A4E0ABF34518C3A2107659CB3E46C328B8(L_21, GameObject_GetComponent_TisDetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045_mA150F9A4E0ABF34518C3A2107659CB3E46C328B8_RuntimeMethod_var);
		NullCheck(L_22);
		DetectBasket_set_Player_m74FABECCFAFE6E8A50F73EBE345F312799227121_inline(L_22, __this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::CheckSpawnBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Player_CheckSpawnBall_m674B44E734B142A71AF8FE71637FB119D7C0C1D2 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = PlatformManager_get_CurrentState_m4A194299BF01C0DDC29A2A7A1E0AB472C2138833(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3))) <= ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}

IL_0010:
	{
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4 = __this->___m_nextSpawnTime_13;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_5;
		L_5 = Player_get_HasBall_mEC90953EF62031944F0A99CDB1819D1ADF18DD60(__this, NULL);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Player_CreateBall_m58333115DD7451CDA219B3F1ABA55D6D6DE4D0B1(__this, NULL);
		__this->___m_heldBall_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_heldBall_12), (void*)L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___m_heldBall_12;
		return L_7;
	}

IL_0038:
	{
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::ShootBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Player_ShootBall_mD575339FECD0711CEBF174C4D7A8620765807563 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_heldBall_12;
		__this->___m_heldBall_12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_heldBall_12), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_1, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		NullCheck(L_2);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_2, (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_1;
		NullCheck(L_3);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_3, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		NullCheck(L_4);
		Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF(L_4, (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_3;
		NullCheck(L_5);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_5, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		BallEjector_t023EB6B237DE52EBFC0435AD57FF12A78CD13FE1* L_7 = __this->___m_ballEjector_10;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (870.0f), NULL);
		NullCheck(L_6);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_6, L_10, 5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_14, (bool)1, NULL);
		float L_15;
		L_15 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___m_nextSpawnTime_13 = ((float)il2cpp_codegen_add(L_15, (2.0f)));
		return L_11;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.Player::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDestroy_m65F719654CFED3095017BF0792870C575E94244C (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9CA746917F641C6070A4C5D211B9184C0D03207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m91B53F3AF1B3D329412CCA3634A4633B1554BBE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m416C4573AA7F972AB6D25BBEC267C5F9986A1877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_mFA1E83229BB407C0F17B2F4302364B026942891B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = __this->___m_balls_11;
		NullCheck(L_0);
		Enumerator_t550E4A2DBCDB3A15F4A9C4EBC473A9787132793A L_1;
		L_1 = Queue_1_GetEnumerator_mFA1E83229BB407C0F17B2F4302364B026942891B(L_0, Queue_1_GetEnumerator_mFA1E83229BB407C0F17B2F4302364B026942891B_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9CA746917F641C6070A4C5D211B9184C0D03207((&V_0), Enumerator_Dispose_mD9CA746917F641C6070A4C5D211B9184C0D03207_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m416C4573AA7F972AB6D25BBEC267C5F9986A1877((&V_0), Enumerator_get_Current_m416C4573AA7F972AB6D25BBEC267C5F9986A1877_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				bool L_3;
				L_3 = Enumerator_MoveNext_m91B53F3AF1B3D329412CCA3634A4633B1554BBE8((&V_0), Enumerator_MoveNext_m91B53F3AF1B3D329412CCA3634A4633B1554BBE8_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m274B1DE0CFCA2553C26DAE89C6F4BDCE693F6731 (Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_0, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		__this->___m_balls_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_balls_11), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Oculus.Platform.Samples.VrHoops.Player Oculus.Platform.Samples.VrHoops.PlayerArea::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* PlayerArea_get_Player_mA9E85AA17C6BEE5C5CDAD1BE25A96BC7342373C1 (PlayerArea_tC80BF9671AA8AD2D0E6C713538D80045DDABA6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tCCA93288D258E225DD8C604DCC59E755FAE79044_m331608F613A6DAD7E3744E263907219DD26160BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_playerHead_5;
		NullCheck(L_0);
		Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tCCA93288D258E225DD8C604DCC59E755FAE79044_m331608F613A6DAD7E3744E263907219DD26160BE(L_0, GameObject_GetComponent_TisPlayer_tCCA93288D258E225DD8C604DCC59E755FAE79044_m331608F613A6DAD7E3744E263907219DD26160BE_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.UI.Text Oculus.Platform.Samples.VrHoops.PlayerArea::get_NameText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* PlayerArea_get_NameText_mB9725CD93FF2A0CC2A0B51E2621000D87F46583D (PlayerArea_tC80BF9671AA8AD2D0E6C713538D80045DDABA6EE* __this, const RuntimeMethod* method) 
{
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_nameText_6;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlayerArea::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerArea_Awake_m149E590080A836389907640739A5F42E88351AC2 (PlayerArea_tC80BF9671AA8AD2D0E6C713538D80045DDABA6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisP2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D_m0DCB695676D17C6FCB05333F837FC23C13E7BBE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA62149C68BE8C153041DBD2A664BA02DFA504C7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteralA62149C68BE8C153041DBD2A664BA02DFA504C7A, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		__this->___m_playerHead_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_playerHead_5), (void*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_5;
		L_5 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_4, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = 1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___m_nameText_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_nameText_6), (void*)L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* L_9;
		L_9 = GameObject_GetComponentInChildren_TisP2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D_m0DCB695676D17C6FCB05333F837FC23C13E7BBE9(L_8, GameObject_GetComponentInChildren_TisP2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D_m0DCB695676D17C6FCB05333F837FC23C13E7BBE9_RuntimeMethod_var);
		__this->___m_p2pGoal_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_p2pGoal_7), (void*)L_9);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.PlayerArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerArea__ctor_m515E617155426536A36D0C0A9D10930B6AA6A052 (PlayerArea_tC80BF9671AA8AD2D0E6C713538D80045DDABA6EE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrHoops.RemotePlayer::set_User(Oculus.Platform.Models.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayer_set_User_m20F5C239239BB2E62C6CA095080820423FD0BEC5 (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___value0, const RuntimeMethod* method) 
{
	{
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_0 = ___value0;
		__this->___m_user_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_user_14), (void*)L_0);
		return;
	}
}
// System.UInt64 Oculus.Platform.Samples.VrHoops.RemotePlayer::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RemotePlayer_get_ID_m43CCF02021C7551D75E3EC1005F8A94EA78FD168 (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, const RuntimeMethod* method) 
{
	{
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_0 = __this->___m_user_14;
		NullCheck(L_0);
		uint64_t L_1 = L_0->___ID_1;
		return L_1;
	}
}
// Oculus.Platform.Samples.VrHoops.P2PNetworkGoal Oculus.Platform.Samples.VrHoops.RemotePlayer::get_Goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* RemotePlayer_get_Goal_m00A88EF3290522B9187DAC5A58169FD9BBA791C7 (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, const RuntimeMethod* method) 
{
	{
		P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* L_0 = __this->___m_goal_15;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.RemotePlayer::set_Goal(Oculus.Platform.Samples.VrHoops.P2PNetworkGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayer_set_Goal_mB3DEA776059B7A405C1011BE31B48A2588C10F3B (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* ___value0, const RuntimeMethod* method) 
{
	{
		P2PNetworkGoal_t38B87FDC11D2DE1C7568C91ED418422C2C8F9B1D* L_0 = ___value0;
		__this->___m_goal_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_goal_15), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.RemotePlayer::set_Score(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayer_set_Score_m565EBFB8CE2AF47FB2D4BFFA3C2CA248055F5A26 (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.RemotePlayer::ReceiveRemoteScore(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayer_ReceiveRemoteScore_m3DFF4C2304429922FA64B95ECA20C5FCBB0F0BC6 (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, uint32_t ___score0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___score0;
		Player_set_Score_m3A7337095A3767714CDCB6A1B13226E9E421C1E3(__this, L_0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.RemotePlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayer__ctor_m53ED0F908586C77A2C0D6D02260F585CFEDB3F6C (RemotePlayer_t6D9EC707F9351864CCC050F8BEB14845C6DC0073* __this, const RuntimeMethod* method) 
{
	{
		Player__ctor_m274B1DE0CFCA2553C26DAE89C6F4BDCE693F6731(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrHoops.VREyeRaycaster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREyeRaycaster_Update_mDF3101BA4B7B788EBC5C87CEFBF121446F3CFF50 (VREyeRaycaster_t67F0F5D38771C577D3461E188CCBBCED6C6C0FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_1 = NULL;
	{
		V_1 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), (50.0f), NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_5);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6;
		L_6 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_5, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0033:
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___m_currentButton_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = V_1;
		__this->___m_currentButton_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentButton_5), (void*)L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___m_currentButton_5;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_13);
		return;
	}

IL_005d:
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___m_currentButton_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		__this->___m_currentButton_5 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentButton_5), (void*)(Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_16 = __this->___m_eventSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_18 = __this->___m_eventSystem_4;
		NullCheck(L_18);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_18, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.VREyeRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREyeRaycaster__ctor_m335EFE241C71B6D54F7DE88DF3E0EBBE1764E0DE (VREyeRaycaster_t67F0F5D38771C577D3461E188CCBBCED6C6C0FC4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrBoardGame.BoardPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardPosition__ctor_m19D738995189BD357477939C3DEA2C486BACEBAD (BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrBoardGame.EyeCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeCamera_Update_m42DA00558E50FB4946F444FDFCD431295B46CBB5 (EyeCamera_tD63752AB918EFC877B068F4DFD0A2DFD4364A9B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7_mE0AA2286CBC04A69C52C7EE1FBC7741CB29F8B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m056326252E8EF90C6DB1511E39C0481E614160F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_1 = NULL;
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* V_2 = NULL;
	BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_1 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		V_2 = (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B*)NULL;
		V_3 = (BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7*)NULL;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), (50.0f), NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_5);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6;
		L_6 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_5, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_1 = L_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_7);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_8;
		L_8 = Component_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m056326252E8EF90C6DB1511E39C0481E614160F5(L_7, Component_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m056326252E8EF90C6DB1511E39C0481E614160F5_RuntimeMethod_var);
		V_2 = L_8;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_9);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_10;
		L_10 = Component_GetComponent_TisBoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7_mE0AA2286CBC04A69C52C7EE1FBC7741CB29F8B44(L_9, Component_GetComponent_TisBoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7_mE0AA2286CBC04A69C52C7EE1FBC7741CB29F8B44_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0051:
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___m_currentButton_7;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14 = __this->___m_eventSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0079;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_16 = __this->___m_eventSystem_4;
		NullCheck(L_16);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_16, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_0079:
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = V_1;
		__this->___m_currentButton_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentButton_7), (void*)L_17);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___m_currentButton_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_0099;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___m_currentButton_7;
		NullCheck(L_20);
		VirtualActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_20);
	}

IL_0099:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_21 = __this->___m_currentPiece_8;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_22 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_24 = __this->___m_currentPiece_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_26 = __this->___m_gameController_5;
		NullCheck(L_26);
		GameController_StoppedLookingAtPiece_mF84B7C1BCDB19CA0574BC698AE2E62297E6BB505(L_26, NULL);
	}

IL_00c0:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_27 = V_2;
		__this->___m_currentPiece_8 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentPiece_8), (void*)L_27);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_28 = __this->___m_currentPiece_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00e6;
		}
	}
	{
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_30 = __this->___m_gameController_5;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_31 = __this->___m_currentPiece_8;
		NullCheck(L_30);
		GameController_StartedLookingAtPiece_mF8D7DCE809BF01E669F5D13C13FCF7FAE5F8B645(L_30, L_31, NULL);
	}

IL_00e6:
	{
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_32 = __this->___m_boardPosition_9;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_33 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_011a;
		}
	}
	{
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_35 = V_3;
		__this->___m_boardPosition_9 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_boardPosition_9), (void*)L_35);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_36 = __this->___m_boardPosition_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_011a;
		}
	}
	{
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_38 = __this->___m_gameController_5;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_39 = __this->___m_boardPosition_9;
		NullCheck(L_38);
		GameController_StartedLookingAtPosition_mE3A4D5BAACA43C48C4E9AF3A86FB11CB3A821058(L_38, L_39, NULL);
	}

IL_011a:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_40;
		L_40 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_41 = __this->___m_gazeTracker_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_0139;
		}
	}
	{
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_43 = __this->___m_gameController_5;
		NullCheck(L_43);
		GameController_ClearProposedMove_m007B691F93B5722B5A1A02CFAB3C538F60A0E393(L_43, NULL);
	}

IL_0139:
	{
		bool L_44;
		L_44 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03, NULL);
		if (!L_44)
		{
			goto IL_01cb;
		}
	}
	{
		float L_45;
		L_45 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_4 = L_45;
		float L_46;
		L_46 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_5 = L_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = L_47;
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_48, NULL);
		float L_50 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_50, L_51, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_49, L_52, NULL);
		NullCheck(L_48);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_48, L_53, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = L_54;
		NullCheck(L_55);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_55, NULL);
		float L_57 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((-L_57)), L_58, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_56, L_59, NULL);
		NullCheck(L_55);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_55, L_60, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_61, NULL);
		V_6 = L_62;
		(&V_6)->___z_4 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_6;
		NullCheck(L_63);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_63, L_64, NULL);
	}

IL_01cb:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.EyeCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeCamera__ctor_m1376CEE798A997C3D4186FE693A49809E19E9E12 (EyeCamera_tD63752AB918EFC877B068F4DFD0A2DFD4364A9B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_Reset_mC7B2AF3FC51B8008CCCC63C3FDDBD0603F796D5F (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_007e;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0076;
	}

IL_0008:
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_0 = __this->___m_pieces_11;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_3;
		L_3 = (L_0)->GetAddressAt(L_1, L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___piece_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_6 = __this->___m_pieces_11;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_9;
		L_9 = (L_6)->GetAddressAt(L_7, L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___piece_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_11 = __this->___m_pieces_11;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_14;
		L_14 = (L_11)->GetAddressAt(L_12, L_13);
		L_14->___piece_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___piece_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_15 = __this->___m_pieces_11;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_18;
		L_18 = (L_15)->GetAddressAt(L_16, L_17);
		L_18->___pieceOwner_1 = (-1);
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_19 = __this->___m_pieces_11;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_19);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_22;
		L_22 = (L_19)->GetAddressAt(L_20, L_21);
		L_22->___powerPieceOwner_2 = (-1);
	}

IL_0072:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0076:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007e:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Platform.Samples.VrBoardGame.GameBoard::IsFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_IsFull_m975EACD1900C5890DD53280EB1B467C282D67DDB (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0028;
	}

IL_0008:
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_0 = __this->___m_pieces_11;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_3;
		L_3 = (L_0)->GetAddressAt(L_1, L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___piece_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Oculus.Platform.Samples.VrBoardGame.GameBoard::CanPlayerMoveToPostion(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_CanPlayerMoveToPostion_m85C17341279DC70FEBACDF9B14B6F1D3FCC372E2 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_0 = __this->___m_pieces_11;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_3;
		L_3 = (L_0)->GetAddressAt(L_1, L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___piece_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_5;
	}
}
// System.Boolean Oculus.Platform.Samples.VrBoardGame.GameBoard::CanPlayerPowerUpPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_CanPlayerPowerUpPosition_m47A041630D35FB258EF28DE8ABCA93349B9E7C33 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_0 = __this->___m_pieces_11;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_3;
		L_3 = (L_0)->GetAddressAt(L_1, L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___piece_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_5;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::AddPiece(System.Int32,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_AddPiece_m7B1C5812D3DF30191308F6FEDD450B6EB71C4796 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___player0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* V_0 = NULL;
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* V_1 = NULL;
	{
		BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE* L_0 = __this->___m_positions_10;
		int32_t L_1 = ___x2;
		int32_t L_2 = ___y3;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 3)), L_2));
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___prefab1;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_6 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_10;
		L_10 = GameBoard_Create_m792BBABEB188BDE85DA7F18F00A8C27EF29A8F8F(__this, L_5, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_11 = V_1;
		NullCheck(L_11);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12;
		L_12 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_11, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_12, NULL);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_14 = __this->___m_playerColors_7;
		int32_t L_15 = ___player0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_13, L_17, NULL);
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_18 = __this->___m_pieces_11;
		int32_t L_19 = ___x2;
		int32_t L_20 = ___y3;
		NullCheck(L_18);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_21;
		L_21 = (L_18)->GetAddressAt(L_19, L_20);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		L_21->___piece_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___piece_0), (void*)L_23);
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_24 = __this->___m_pieces_11;
		int32_t L_25 = ___x2;
		int32_t L_26 = ___y3;
		NullCheck(L_24);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_27;
		L_27 = (L_24)->GetAddressAt(L_25, L_26);
		int32_t L_28 = ___player0;
		L_27->___pieceOwner_1 = L_28;
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_29 = __this->___m_pieces_11;
		int32_t L_30 = ___x2;
		int32_t L_31 = ___y3;
		NullCheck(L_29);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_32;
		L_32 = (L_29)->GetAddressAt(L_30, L_31);
		L_32->___powerPieceOwner_2 = (-1);
		GameBoard_UpdateScores_m0B3098CE91A5B6EA39BDB7003E19CD807D63C7AE(__this, NULL);
		return;
	}
}
// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameBoard::AddProposedPiece(UnityEngine.GameObject,Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameBoard_AddProposedPiece_m6B8A8F95EBEF9C36ABDB8D9E9FD431382FFD0A32 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab0;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_1 = ___pos1;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_3 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_5;
		L_5 = GameBoard_Create_m792BBABEB188BDE85DA7F18F00A8C27EF29A8F8F(__this, L_0, L_2, L_3, L_4, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_6 = L_5;
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_6, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___m_proposedMoveColor_8;
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		return L_6;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::AddPowerPiece(System.Int32,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_AddPowerPiece_m5717EB21C074328FB08B6C0D0F7FD3A6A102C297 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___player0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab1;
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_1 = __this->___m_pieces_11;
		int32_t L_2 = ___x2;
		int32_t L_3 = ___y3;
		NullCheck(L_1);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_4;
		L_4 = (L_1)->GetAddressAt(L_2, L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___piece_0;
		BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE* L_6 = __this->___m_positions_10;
		int32_t L_7 = ___x2;
		int32_t L_8 = ___y3;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 3)), L_8));
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.200000003f), L_11, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_13;
		L_13 = GameBoard_Create_m792BBABEB188BDE85DA7F18F00A8C27EF29A8F8F(__this, L_0, L_5, L_10, L_12, NULL);
		NullCheck(L_13);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14;
		L_14 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_13, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_14, NULL);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = __this->___m_playerColors_7;
		int32_t L_17 = ___player0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_15, L_19, NULL);
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_20 = __this->___m_pieces_11;
		int32_t L_21 = ___x2;
		int32_t L_22 = ___y3;
		NullCheck(L_20);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_23;
		L_23 = (L_20)->GetAddressAt(L_21, L_22);
		int32_t L_24 = ___player0;
		L_23->___powerPieceOwner_2 = L_24;
		GameBoard_UpdateScores_m0B3098CE91A5B6EA39BDB7003E19CD807D63C7AE(__this, NULL);
		return;
	}
}
// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameBoard::AddProposedPowerPiece(UnityEngine.GameObject,Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameBoard_AddProposedPowerPiece_mB2904D98846ADB9B441241F83C578F957F698F27 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab0;
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_1 = __this->___m_pieces_11;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_2 = ___pos1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_4;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_4 = ___pos1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_5;
		NullCheck(L_1);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_6;
		L_6 = (L_1)->GetAddressAt(L_3, L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___piece_0;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_8 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.200000003f), L_9, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_11;
		L_11 = GameBoard_Create_m792BBABEB188BDE85DA7F18F00A8C27EF29A8F8F(__this, L_0, L_7, L_8, L_10, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_12 = L_11;
		NullCheck(L_12);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13;
		L_13 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_12, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___m_proposedMoveColor_8;
		NullCheck(L_14);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_14, L_15, NULL);
		return L_12;
	}
}
// Oculus.Platform.Samples.VrBoardGame.GamePiece Oculus.Platform.Samples.VrBoardGame.GameBoard::Create(UnityEngine.GameObject,UnityEngine.GameObject,Oculus.Platform.Samples.VrBoardGame.BoardPosition,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* GameBoard_Create_m792BBABEB188BDE85DA7F18F00A8C27EF29A8F8F (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent1, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___pos2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___off3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___parent1;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___parent1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___off3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_9, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_4;
		NullCheck(L_11);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_12;
		L_12 = GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E(L_11, GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E_RuntimeMethod_var);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_13 = ___pos2;
		NullCheck(L_12);
		GamePiece_set_Position_m425D2AD280F38D594B0E0252623A42D0C98A75AA_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_14;
		L_14 = GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E(L_11, GameObject_GetComponent_TisGamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B_m4EBA6F1FDA00B96EFC79CEC8B4C6F764AE83A65E_RuntimeMethod_var);
		return L_14;
	}
}
// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameBoard::GetPlayerScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, int32_t ___player0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_scores_9;
		int32_t L_1 = ___player0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::UpdateScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard_UpdateScores_m0B3098CE91A5B6EA39BDB7003E19CD807D63C7AE (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B16_0 = 0;
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_scores_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		V_1 = 0;
		goto IL_0114;
	}

IL_001c:
	{
		V_2 = 0;
		goto IL_0109;
	}

IL_0023:
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_4 = __this->___m_pieces_11;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_7;
		L_7 = (L_4)->GetAddressAt(L_5, L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___piece_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0105;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___m_scores_9;
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_11 = __this->___m_pieces_11;
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_14;
		L_14 = (L_11)->GetAddressAt(L_12, L_13);
		int32_t L_15 = L_14->___pieceOwner_1;
		NullCheck(L_10);
		int32_t* L_16 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		int32_t L_17 = *((int32_t*)L_16);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, ((int32_t)10)));
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_18 = __this->___m_pieces_11;
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_21;
		L_21 = (L_18)->GetAddressAt(L_19, L_20);
		int32_t L_22 = L_21->___powerPieceOwner_2;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_23 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_00fc;
	}

IL_0081:
	{
		int32_t L_24 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_00f1;
	}

IL_0088:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) >= ((int32_t)3)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) >= ((int32_t)3)))
		{
			goto IL_00eb;
		}
	}
	{
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_29 = __this->___m_pieces_11;
		int32_t L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_29);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_32;
		L_32 = (L_29)->GetAddressAt(L_30, L_31);
		int32_t L_33 = L_32->___pieceOwner_1;
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_34 = __this->___m_pieces_11;
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		NullCheck(L_34);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_37;
		L_37 = (L_34)->GetAddressAt(L_35, L_36);
		int32_t L_38 = L_37->___powerPieceOwner_2;
		if ((((int32_t)L_33) == ((int32_t)L_38)))
		{
			goto IL_00c4;
		}
	}
	{
		G_B16_0 = ((int32_t)-10);
		goto IL_00c6;
	}

IL_00c4:
	{
		G_B16_0 = ((int32_t)10);
	}

IL_00c6:
	{
		V_5 = G_B16_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___m_scores_9;
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_40 = __this->___m_pieces_11;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		NullCheck(L_40);
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07* L_43;
		L_43 = (L_40)->GetAddressAt(L_41, L_42);
		int32_t L_44 = L_43->___powerPieceOwner_2;
		NullCheck(L_39);
		int32_t* L_45 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)));
		int32_t L_46 = *((int32_t*)L_45);
		int32_t L_47 = V_5;
		*((int32_t*)L_45) = (int32_t)((int32_t)il2cpp_codegen_add(L_46, L_47));
	}

IL_00eb:
	{
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00f1:
	{
		int32_t L_49 = V_4;
		int32_t L_50 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_50, 1)))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00fc:
	{
		int32_t L_52 = V_3;
		int32_t L_53 = V_1;
		if ((((int32_t)L_52) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_53, 1)))))
		{
			goto IL_0081;
		}
	}

IL_0105:
	{
		int32_t L_54 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0109:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)3)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0114:
	{
		int32_t L_57 = V_1;
		if ((((int32_t)L_57) < ((int32_t)3)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard__ctor_m85472286F122623C1C11C4465D3895E55A908A31 (GameBoard_t60116B13F343499C4471611881814A5299C696D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_playerColors_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_playerColors_7), (void*)L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_proposedMoveColor_8 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_scores_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_scores_9), (void*)L_2);
		BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE* L_3 = (BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE*)(BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE*)SZArrayNew(BoardPositionU5BU5D_t8D9171197CFF25E25ACB31C56C6F5237C07AF2DE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___m_positions_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_positions_10), (void*)L_3);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)3, (il2cpp_array_size_t)3 };
		PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A* L_4 = (PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A*)GenArrayNew(PositionInfoU5BU2CU5D_tE525879EA6B8CC6B46D7FB411EC20AF34D8E0C1A_il2cpp_TypeInfo_var, L_5);
		__this->___m_pieces_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pieces_11), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshal_pinvoke(const PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07& unmarshaled, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_pinvoke& marshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
IL2CPP_EXTERN_C void PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshal_pinvoke_back(const PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_pinvoke& marshaled, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07& unmarshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshal_pinvoke_cleanup(PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshal_com(const PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07& unmarshaled, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_com& marshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
IL2CPP_EXTERN_C void PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshal_com_back(const PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_com& marshaled, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07& unmarshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshal_com_cleanup(PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_com& marshaled)
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
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_m5119A72C8429158802D2BA5A4C7BDBB4EB8F941A (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 0, NULL);
		GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mD22442A9A603866C7A7659C996EE45924882C9A6 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		GameController_PerFrameStateUpdate_mA612A282551FCEE54486472E39963CB1B14EE058(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TransitionToState(Oculus.Platform.Samples.VrBoardGame.GameController/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___state0;
		__this->___m_state_16 = L_0;
		GameController_UpdateGamePieceColors_m7999C8FB2BC8323F952607BC9ED96178D6ED0AE0(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TransitionToNextState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TransitionToNextState_mEEF4E6738A87D0B03487639AE03E9D42C15E929A (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_0 = __this->___m_board_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameBoard_IsFull_m975EACD1900C5890DD53280EB1B467C282D67DDB(L_0, NULL);
		if (L_1)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = __this->___m_state_16;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_003d;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 1, NULL);
		return;
	}

IL_0035:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 2, NULL);
		return;
	}

IL_003d:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 3, NULL);
		return;
	}

IL_0045:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 4, NULL);
		return;
	}

IL_004d:
	{
		int32_t L_4 = __this->___m_state_16;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 3))) <= ((uint32_t)1))))
		{
			goto IL_007d;
		}
	}
	{
		MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* L_6 = __this->___m_matchmaking_4;
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_7 = __this->___m_board_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_7, 0, NULL);
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_9 = __this->___m_board_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_9, 1, NULL);
		NullCheck(L_6);
		MatchmakingManager_EndMatch_m16924F8889FDEB613DA50D56412A946604AAAF71(L_6, L_8, L_10, NULL);
	}

IL_007d:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::PerFrameStateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PerFrameStateUpdate_mA612A282551FCEE54486472E39963CB1B14EE058 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_002f;
			}
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)100), NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		GameController_MakeAIMove_m40B74334C4497DCA0C16B9E0C64479EA7909FD0B(__this, 1, NULL);
		return;
	}

IL_002f:
	{
		bool L_3;
		L_3 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		GameController_TrySelectPiece_m39A8A4BB03FEAE3A685C9C9220D4D9C43C2560F8(__this, NULL);
		GameController_TryPlacePiece_m13BBC7FEF69145808C7B239D8F7B7E777B560229(__this, NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::PracticeButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PracticeButtonPressed_m03D0FA8621C83E52534E864BA4DBD9B77DFE3284 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0819FD4E82783169E28ED469E40CCB889350FD7A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___m_opponentName_21 = _stringLiteral0819FD4E82783169E28ED469E40CCB889350FD7A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_opponentName_21), (void*)_stringLiteral0819FD4E82783169E28ED469E40CCB889350FD7A);
		int32_t L_0 = __this->___m_state_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 3))) <= ((uint32_t)1))))
		{
			goto IL_003b;
		}
	}
	{
		MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* L_2 = __this->___m_matchmaking_4;
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_3 = __this->___m_board_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_3, 0, NULL);
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_5 = __this->___m_board_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_5, 1, NULL);
		NullCheck(L_2);
		MatchmakingManager_EndMatch_m16924F8889FDEB613DA50D56412A946604AAAF71(L_2, L_4, L_6, NULL);
	}

IL_003b:
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_7 = __this->___m_board_5;
		NullCheck(L_7);
		GameBoard_Reset_mC7B2AF3FC51B8008CCCC63C3FDDBD0603F796D5F(L_7, NULL);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 1, NULL);
		goto IL_0060;
	}

IL_0059:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 2, NULL);
	}

IL_0060:
	{
		GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::MakeAIMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeAIMove_m40B74334C4497DCA0C16B9E0C64479EA7909FD0B (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, int32_t ___player0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* V_7 = NULL;
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* G_B6_0 = NULL;
	{
		V_0 = (bool)0;
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_1 = L_0;
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_2 = L_1;
		V_3 = 0;
		goto IL_00c2;
	}

IL_0019:
	{
		V_4 = 0;
		goto IL_00b3;
	}

IL_0021:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_3;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))%3));
		int32_t L_4 = V_2;
		int32_t L_5 = V_4;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, L_5))%3));
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_6 = __this->___m_board_5;
		int32_t L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_6);
		bool L_9;
		L_9 = GameBoard_CanPlayerMoveToPostion_m85C17341279DC70FEBACDF9B14B6F1D3FCC372E2(L_6, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_10;
		L_10 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_11 = __this->___m_pieceB_7;
		G_B6_0 = L_11;
		goto IL_0058;
	}

IL_0052:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_12 = __this->___m_pieceA_6;
		G_B6_0 = L_12;
	}

IL_0058:
	{
		V_7 = G_B6_0;
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_13 = __this->___m_board_5;
		int32_t L_14 = ___player0;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_15 = V_7;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE(L_15, NULL);
		int32_t L_17 = V_5;
		int32_t L_18 = V_6;
		NullCheck(L_13);
		GameBoard_AddPiece_m7B1C5812D3DF30191308F6FEDD450B6EB71C4796(L_13, L_14, L_16, L_17, L_18, NULL);
		V_0 = (bool)1;
		goto IL_00ad;
	}

IL_0075:
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_19 = __this->___m_board_5;
		int32_t L_20 = V_5;
		int32_t L_21 = V_6;
		NullCheck(L_19);
		bool L_22;
		L_22 = GameBoard_CanPlayerPowerUpPosition_m47A041630D35FB258EF28DE8ABCA93349B9E7C33(L_19, L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_23;
		L_23 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 8, NULL);
		if ((((int32_t)L_23) >= ((int32_t)2)))
		{
			goto IL_00ad;
		}
	}
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_24 = __this->___m_board_5;
		int32_t L_25 = ___player0;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_26 = __this->___m_powerPiece_8;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE(L_26, NULL);
		int32_t L_28 = V_5;
		int32_t L_29 = V_6;
		NullCheck(L_24);
		GameBoard_AddPowerPiece_m5717EB21C074328FB08B6C0D0F7FD3A6A102C297(L_24, L_25, L_27, L_28, L_29, NULL);
		V_0 = (bool)1;
	}

IL_00ad:
	{
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b3:
	{
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) >= ((int32_t)3)))
		{
			goto IL_00be;
		}
	}
	{
		bool L_32 = V_0;
		if (!L_32)
		{
			goto IL_0021;
		}
	}

IL_00be:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c2:
	{
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) >= ((int32_t)3)))
		{
			goto IL_00cc;
		}
	}
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_0019;
		}
	}

IL_00cc:
	{
		bool L_36 = V_0;
		if (!L_36)
		{
			goto IL_00db;
		}
	}
	{
		GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82(__this, NULL);
		GameController_TransitionToNextState_mEEF4E6738A87D0B03487639AE03E9D42C15E929A(__this, NULL);
	}

IL_00db:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StartOnlineMatch(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartOnlineMatch_mD4FAEE5805B0A61809C24CF2EA30A0C3F2119BD3 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, String_t* ___opponentName0, bool ___localUserGoesFirst1, const RuntimeMethod* method) 
{
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_0 = __this->___m_board_5;
		NullCheck(L_0);
		GameBoard_Reset_mC7B2AF3FC51B8008CCCC63C3FDDBD0603F796D5F(L_0, NULL);
		String_t* L_1 = ___opponentName0;
		__this->___m_opponentName_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_opponentName_21), (void*)L_1);
		bool L_2 = ___localUserGoesFirst1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 3, NULL);
		goto IL_0025;
	}

IL_001e:
	{
		GameController_TransitionToState_mEFD36EAD7FA054413B429D1D88A062419797FCF4(__this, 4, NULL);
	}

IL_0025:
	{
		GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::MakeRemoteMove(Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeRemoteMove_m1F41AE124BC529E1F4BA67446A359A581F8B48BF (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, int32_t ___piece0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_0 = __this->___m_pieceA_6;
		int32_t L_1 = ___piece0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GamePiece_PrefabFor_m410AB82FAE818FAADEB8C7A5A9A90A244A6A1529(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___piece0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_4 = __this->___m_board_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		int32_t L_6 = ___x1;
		int32_t L_7 = ___y2;
		NullCheck(L_4);
		GameBoard_AddPowerPiece_m5717EB21C074328FB08B6C0D0F7FD3A6A102C297(L_4, 1, L_5, L_6, L_7, NULL);
		goto IL_0031;
	}

IL_0022:
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_8 = __this->___m_board_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		int32_t L_10 = ___x1;
		int32_t L_11 = ___y2;
		NullCheck(L_8);
		GameBoard_AddPiece_m7B1C5812D3DF30191308F6FEDD450B6EB71C4796(L_8, 1, L_9, L_10, L_11, NULL);
	}

IL_0031:
	{
		GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::MarkRemoteTurnComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MarkRemoteTurnComplete_mE983E9EF3600AFECC378220D93D1CEBFFB3B4069 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_state_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000f;
		}
	}
	{
		GameController_TransitionToNextState_mEEF4E6738A87D0B03487639AE03E9D42C15E929A(__this, NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::RemoteMatchEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_RemoteMatchEnded_mB273946F8DD29362CE3D79AEBE8CE1A0141A2A6A (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* L_0 = __this->___m_matchmaking_4;
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_1 = __this->___m_board_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_1, 0, NULL);
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_3 = __this->___m_board_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_3, 1, NULL);
		NullCheck(L_0);
		MatchmakingManager_EndMatch_m16924F8889FDEB613DA50D56412A946604AAAF71(L_0, L_2, L_4, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StartedLookingAtPiece(Oculus.Platform.Samples.VrBoardGame.GamePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartedLookingAtPiece_mF8D7DCE809BF01E669F5D13C13FCF7FAE5F8B645 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* ___piece0, const RuntimeMethod* method) 
{
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_0 = ___piece0;
		__this->___m_interestedPiece_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_interestedPiece_17), (void*)L_0);
		GameController_UpdateGamePieceColors_m7999C8FB2BC8323F952607BC9ED96178D6ED0AE0(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StoppedLookingAtPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StoppedLookingAtPiece_mF84B7C1BCDB19CA0574BC698AE2E62297E6BB505 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_interestedPiece_17 = (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_interestedPiece_17), (void*)(GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B*)NULL);
		GameController_UpdateGamePieceColors_m7999C8FB2BC8323F952607BC9ED96178D6ED0AE0(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::StartedLookingAtPosition(Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartedLookingAtPosition_mE3A4D5BAACA43C48C4E9AF3A86FB11CB3A821058 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_state_16;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___m_state_16;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_0 = (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B*)NULL;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_2 = __this->___m_selectedPiece_18;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_3 = __this->___m_pieceA_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_5 = __this->___m_selectedPiece_18;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_6 = __this->___m_pieceB_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}

IL_003b:
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_8 = __this->___m_board_5;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_9 = ___position0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___x_4;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_11 = ___position0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___y_5;
		NullCheck(L_8);
		bool L_13;
		L_13 = GameBoard_CanPlayerMoveToPostion_m85C17341279DC70FEBACDF9B14B6F1D3FCC372E2(L_8, L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_14 = __this->___m_board_5;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_15 = __this->___m_selectedPiece_18;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE(L_15, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_17 = ___position0;
		NullCheck(L_14);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_18;
		L_18 = GameBoard_AddProposedPiece_m6B8A8F95EBEF9C36ABDB8D9E9FD431382FFD0A32(L_14, L_16, L_17, NULL);
		V_0 = L_18;
		goto IL_00b2;
	}

IL_006e:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_19 = __this->___m_selectedPiece_18;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_20 = __this->___m_powerPiece_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00b2;
		}
	}
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_22 = __this->___m_board_5;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_23 = ___position0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___x_4;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_25 = ___position0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___y_5;
		NullCheck(L_22);
		bool L_27;
		L_27 = GameBoard_CanPlayerPowerUpPosition_m47A041630D35FB258EF28DE8ABCA93349B9E7C33(L_22, L_24, L_26, NULL);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_28 = __this->___m_board_5;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_29 = __this->___m_selectedPiece_18;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE(L_29, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_31 = ___position0;
		NullCheck(L_28);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_32;
		L_32 = GameBoard_AddProposedPowerPiece_mB2904D98846ADB9B441241F83C578F957F698F27(L_28, L_30, L_31, NULL);
		V_0 = L_32;
	}

IL_00b2:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_00e0;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_35 = __this->___m_proposedPiece_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_00d9;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_37 = __this->___m_proposedPiece_19;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_38, NULL);
	}

IL_00d9:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_39 = V_0;
		__this->___m_proposedPiece_19 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_proposedPiece_19), (void*)L_39);
	}

IL_00e0:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::ClearProposedMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClearProposedMove_m007B691F93B5722B5A1A02CFAB3C538F60A0E393 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_0 = __this->___m_proposedPiece_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_2 = __this->___m_proposedPiece_19;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TrySelectPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TrySelectPiece_m39A8A4BB03FEAE3A685C9C9220D4D9C43C2560F8 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_0 = __this->___m_interestedPiece_17;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_1 = __this->___m_pieceA_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_3 = __this->___m_interestedPiece_17;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_4 = __this->___m_pieceB_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0026:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_6 = __this->___m_interestedPiece_17;
		__this->___m_selectedPiece_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_selectedPiece_18), (void*)L_6);
		goto IL_0065;
	}

IL_0034:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_7 = __this->___m_interestedPiece_17;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_8 = __this->___m_powerPiece_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_10 = __this->___m_powerBallcount_20;
		if ((!(((uint32_t)L_10) <= ((uint32_t)0))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_11 = __this->___m_state_16;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}

IL_0059:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_12 = __this->___m_interestedPiece_17;
		__this->___m_selectedPiece_18 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_selectedPiece_18), (void*)L_12);
	}

IL_0065:
	{
		GameController_UpdateGamePieceColors_m7999C8FB2BC8323F952607BC9ED96178D6ED0AE0(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::TryPlacePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TryPlacePiece_m13BBC7FEF69145808C7B239D8F7B7E777B560229 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_0 = __this->___m_proposedPiece_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_2 = __this->___m_proposedPiece_19;
		NullCheck(L_2);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_3;
		L_3 = GamePiece_get_Position_mC6F65B75035DB03E989F36D76BCE1919905DA131_inline(L_2, NULL);
		V_0 = L_3;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_4 = __this->___m_proposedPiece_19;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GamePiece_get_Type_m72EC9DE3B781426D864BF8F185FF4148D4D170A1_inline(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) > ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0079;
	}

IL_0031:
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_8 = __this->___m_board_5;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_9 = __this->___m_proposedPiece_19;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE(L_9, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___x_4;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___y_5;
		NullCheck(L_8);
		GameBoard_AddPiece_m7B1C5812D3DF30191308F6FEDD450B6EB71C4796(L_8, 0, L_10, L_12, L_14, NULL);
		goto IL_0079;
	}

IL_0056:
	{
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_15 = __this->___m_board_5;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_16 = __this->___m_proposedPiece_19;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE(L_16, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___x_4;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___y_5;
		NullCheck(L_15);
		GameBoard_AddPowerPiece_m5717EB21C074328FB08B6C0D0F7FD3A6A102C297(L_15, 0, L_17, L_19, L_21, NULL);
	}

IL_0079:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_22 = __this->___m_proposedPiece_19;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_23, NULL);
		int32_t L_24 = __this->___m_state_16;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00b4;
		}
	}
	{
		MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* L_25 = __this->___m_matchmaking_4;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_26 = __this->___m_proposedPiece_19;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = GamePiece_get_Type_m72EC9DE3B781426D864BF8F185FF4148D4D170A1_inline(L_26, NULL);
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___x_4;
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___y_5;
		NullCheck(L_25);
		MatchmakingManager_SendLocalMove_m8BA1D500F113939069C8EF569B84B327D2FDF6B7(L_25, L_27, L_29, L_31, NULL);
	}

IL_00b4:
	{
		GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82(__this, NULL);
		GameController_TransitionToNextState_mEEF4E6738A87D0B03487639AE03E9D42C15E929A(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::QuitButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_QuitButtonPressed_m253A49780F3C188D210225AAB74BB38996CED423 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::AddPowerballs(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddPowerballs_m0D0BCB894035CC715580D74D0C63A0283E4FF237 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, uint32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->___m_powerBallcount_20;
		uint32_t L_1 = ___count0;
		__this->___m_powerBallcount_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___m_ballCountText_13;
		uint32_t* L_3 = (&__this->___m_powerBallcount_20);
		String_t* L_4;
		L_4 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::UpdateScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateScores_mD86DB8AB7608D78307D71246DC8A9DCC688D0A82 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FDE1969AB38ACA7FE72839F89B8DEC9E3AE2AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_player0Text_14;
		String_t* L_1;
		L_1 = PlatformManager_get_MyOculusID_mD5DB1A9E395C35707FE46E7C3DB3D3D5D625486D(NULL);
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_2 = __this->___m_board_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_2, 0, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral60FDE1969AB38ACA7FE72839F89B8DEC9E3AE2AF, L_1, L_5, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___m_player1Text_15;
		String_t* L_8 = __this->___m_opponentName_21;
		GameBoard_t60116B13F343499C4471611881814A5299C696D8* L_9 = __this->___m_board_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameBoard_GetPlayerScore_m9C8B3832A50ADFDEA7F7262F699122906A664724(L_9, 1, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral60FDE1969AB38ACA7FE72839F89B8DEC9E3AE2AF, L_8, L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::UpdateGamePieceColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateGamePieceColors_m7999C8FB2BC8323F952607BC9ED96178D6ED0AE0 (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_0022;
			}
			case 3:
			{
				goto IL_0095;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_2 = __this->___m_pieceA_6;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_2, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___m_unusableColor_9;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_6 = __this->___m_pieceB_7;
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_6, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___m_unusableColor_9;
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_10 = __this->___m_powerPiece_8;
		NullCheck(L_10);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11;
		L_11 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_10, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___m_unusableColor_9;
		NullCheck(L_12);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_12, L_13, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_14 = __this->___m_proposedPiece_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0163;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_16 = __this->___m_proposedPiece_19;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
		return;
	}

IL_0095:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_18 = __this->___m_pieceA_6;
		NullCheck(L_18);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19;
		L_19 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_18, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_19, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___m_unselectedColor_10;
		NullCheck(L_20);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_20, L_21, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_22 = __this->___m_pieceB_7;
		NullCheck(L_22);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_22, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24;
		L_24 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_23, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->___m_unselectedColor_10;
		NullCheck(L_24);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_24, L_25, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_26 = __this->___m_powerPiece_8;
		NullCheck(L_26);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_27;
		L_27 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_26, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_27);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_27, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___m_unselectedColor_10;
		NullCheck(L_28);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_28, L_29, NULL);
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_30 = __this->___m_interestedPiece_17;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_31 = __this->___m_pieceA_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_011f;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_33 = __this->___m_interestedPiece_17;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_34 = __this->___m_pieceB_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_33, L_34, NULL);
		if (L_35)
		{
			goto IL_011f;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_36 = __this->___m_interestedPiece_17;
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_37 = __this->___m_powerPiece_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_013a;
		}
	}

IL_011f:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_39 = __this->___m_interestedPiece_17;
		NullCheck(L_39);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_40;
		L_40 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_39, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_40);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41;
		L_41 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_40, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = __this->___m_highlightedColor_12;
		NullCheck(L_41);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_41, L_42, NULL);
	}

IL_013a:
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_43 = __this->___m_selectedPiece_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_44)
		{
			goto IL_0163;
		}
	}
	{
		GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* L_45 = __this->___m_selectedPiece_18;
		NullCheck(L_45);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_46;
		L_46 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_45, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_46);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47;
		L_47 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_46, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48 = __this->___m_selectedColor_11;
		NullCheck(L_47);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_47, L_48, NULL);
	}

IL_0163:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mFCD49F50D6DE13C608364C31C8C5165B119DFAEC (GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_unusableColor_9 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_unselectedColor_10 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_selectedColor_11 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_highlightedColor_12 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece Oculus.Platform.Samples.VrBoardGame.GamePiece::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamePiece_get_Type_m72EC9DE3B781426D864BF8F185FF4148D4D170A1 (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_type_4;
		return L_0;
	}
}
// Oculus.Platform.Samples.VrBoardGame.BoardPosition Oculus.Platform.Samples.VrBoardGame.GamePiece::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* GamePiece_get_Position_mC6F65B75035DB03E989F36D76BCE1919905DA131 (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) 
{
	{
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_0 = __this->___m_position_8;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GamePiece::set_Position(Oculus.Platform.Samples.VrBoardGame.BoardPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_set_Position_m425D2AD280F38D594B0E0252623A42D0C98A75AA (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___value0, const RuntimeMethod* method) 
{
	{
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_0 = ___value0;
		__this->___m_position_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_position_8), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::get_Prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GamePiece_get_Prefab_m3CA397E1601B10401690FB168616AF57699087AE (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_type_4;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_001e;
	}

IL_0010:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_prefabA_5;
		return L_3;
	}

IL_0017:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_prefabB_6;
		return L_4;
	}

IL_001e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_prefabPower_7;
		return L_5;
	}
}
// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GamePiece::PrefabFor(Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GamePiece_PrefabFor_m410AB82FAE818FAADEB8C7A5A9A90A244A6A1529 (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, int32_t ___p0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___p0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0017;
	}

IL_0009:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_prefabA_5;
		return L_2;
	}

IL_0010:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_prefabB_6;
		return L_3;
	}

IL_0017:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_prefabPower_7;
		return L_4;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.GamePiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece__ctor_mE20DE776E5B06EDFFE8884576AB09A67661B47DB (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_Start_m524AB324407AEDDACDAEDC4E70BCCAEEA470C85A (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) 
{
	{
		IAPManager_FetchProductPrices_mA3EA3C722261E087F1DF2233D277528B68931B3A(__this, NULL);
		IAPManager_FetchPurchasedProducts_mED4C1B56D4609200732F39F7563FFE4F13D68AA3(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::FetchProductPrices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_FetchProductPrices_mA3EA3C722261E087F1DF2233D277528B68931B3A (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_GetProductsBySKUCallback_m75E36A2F7323E1AF0AB5F901C0C321EC4EF0E00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m90589E35F2777DA17D8E76661F67C766D644952C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38);
		Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3* L_2;
		L_2 = IAP_GetProductsBySKU_mA703B7BDB14429394E52F87917611C897B4085F6(L_1, NULL);
		Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7* L_3 = (Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7*)il2cpp_codegen_object_new(Callback_tF40AFE5CB6143B01D367D833004BB52FA297C7E7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_mD4BB84B5AD39D29AFA8F82A4AB1F1D6F92A9C5EB(L_3, __this, (intptr_t)((void*)IAPManager_GetProductsBySKUCallback_m75E36A2F7323E1AF0AB5F901C0C321EC4EF0E00D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Request_1_t5C8CBF80FDF0210E465CF29A069954267CF19DB3* L_4;
		L_4 = Request_1_OnComplete_m90589E35F2777DA17D8E76661F67C766D644952C(L_2, L_3, Request_1_OnComplete_m90589E35F2777DA17D8E76661F67C766D644952C_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::GetProductsBySKUCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.ProductList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_GetProductsBySKUCallback_m75E36A2F7323E1AF0AB5F901C0C321EC4EF0E00D (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, Message_1_t6600CB25BE1DA3008F62FB49B44DB20C23B9FE93* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m6FF4EACFD252C29BB95B64ECCF6945F0F4DB69F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA722780E5D086FDA86BE80184AD36A1FDBED43E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D4C2955EFD6E53D26F90895FA4FC882DE0234E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* V_1 = NULL;
	{
		Message_1_t6600CB25BE1DA3008F62FB49B44DB20C23B9FE93* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_1_t6600CB25BE1DA3008F62FB49B44DB20C23B9FE93* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9(L_2, NULL);
		return;
	}

IL_000f:
	{
		Message_1_t6600CB25BE1DA3008F62FB49B44DB20C23B9FE93* L_3 = ___msg0;
		NullCheck(L_3);
		ProductList_tE3694D232C493A9CD580C5557D937FD0A2506981* L_4;
		L_4 = VirtualFuncInvoker0< ProductList_tE3694D232C493A9CD580C5557D937FD0A2506981* >::Invoke(68 /* Oculus.Platform.Models.ProductList Oculus.Platform.Message::GetProductList() */, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = DeserializableList_1_GetEnumerator_m6FF4EACFD252C29BB95B64ECCF6945F0F4DB69F1(L_4, DeserializableList_1_GetEnumerator_m6FF4EACFD252C29BB95B64ECCF6945F0F4DB69F1_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0085;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0085:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0072_1;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* L_9;
				L_9 = InterfaceFuncInvoker0< Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.Product>::get_Current() */, IEnumerator_1_tA722780E5D086FDA86BE80184AD36A1FDBED43E7_il2cpp_TypeInfo_var, L_8);
				V_1 = L_9;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
				Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* L_12 = V_1;
				NullCheck(L_12);
				String_t* L_13 = L_12->___Sku_3;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_13);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
				Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* L_15 = V_1;
				NullCheck(L_15);
				String_t* L_16 = L_15->___Name_2;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_16);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
				Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* L_18 = V_1;
				NullCheck(L_18);
				String_t* L_19 = L_18->___FormattedPrice_1;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_19);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_19);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralB9D4C2955EFD6E53D26F90895FA4FC882DE0234E, L_17, NULL);
				Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* L_20 = V_1;
				NullCheck(L_20);
				String_t* L_21 = L_20->___Sku_3;
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38, NULL);
				if (!L_22)
				{
					goto IL_0072_1;
				}
			}
			{
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___m_priceText_5;
				Product_t1E3B29FA2D37996B1EB12E317F17538A4CFAEBB1* L_24 = V_1;
				NullCheck(L_24);
				String_t* L_25 = L_24->___FormattedPrice_1;
				NullCheck(L_23);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
			}

IL_0072_1:
			{
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::FetchPurchasedProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_FetchPurchasedProducts_mED4C1B56D4609200732F39F7563FFE4F13D68AA3 (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_GetViewerPurchasesCallback_mC59D74CD44DE5759357598077EF9007951BC6705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mE48DA95E6E337FEF07E73AF055F036404408301D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6* L_0;
		L_0 = IAP_GetViewerPurchases_mDC9F2E1FB5B93683A0EAE253825D6F96340CE189((bool)0, NULL);
		Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9* L_1 = (Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9*)il2cpp_codegen_object_new(Callback_t68D318874164CF157B48CC9CC0FEA09979D4A5C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mC0D8F4E69B15C5C470C097D6265BF60948CA572D(L_1, __this, (intptr_t)((void*)IAPManager_GetViewerPurchasesCallback_mC59D74CD44DE5759357598077EF9007951BC6705_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6* L_2;
		L_2 = Request_1_OnComplete_mE48DA95E6E337FEF07E73AF055F036404408301D(L_0, L_1, Request_1_OnComplete_mE48DA95E6E337FEF07E73AF055F036404408301D_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::GetViewerPurchasesCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_GetViewerPurchasesCallback_mC59D74CD44DE5759357598077EF9007951BC6705 (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, Message_1_t06970779D503B50E986C5462619C2F6FB72381FA* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m97C6E1206F18E8B7B97BD679E033CF0E9B3AEE62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8DBD1E8FD64E36FEEE7EA15382340E8844D3AE3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FAA59B9C02D35A6E919CF20ED24C5084688CD65);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* V_1 = NULL;
	{
		Message_1_t06970779D503B50E986C5462619C2F6FB72381FA* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_1_t06970779D503B50E986C5462619C2F6FB72381FA* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9(L_2, NULL);
		return;
	}

IL_000f:
	{
		Message_1_t06970779D503B50E986C5462619C2F6FB72381FA* L_3 = ___msg0;
		NullCheck(L_3);
		PurchaseList_tC41D329066EE7B56984F653FB46971C0614DBA0B* L_4;
		L_4 = VirtualFuncInvoker0< PurchaseList_tC41D329066EE7B56984F653FB46971C0614DBA0B* >::Invoke(70 /* Oculus.Platform.Models.PurchaseList Oculus.Platform.Message::GetPurchaseList() */, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = DeserializableList_1_GetEnumerator_m97C6E1206F18E8B7B97BD679E033CF0E9B3AEE62(L_4, DeserializableList_1_GetEnumerator_m97C6E1206F18E8B7B97BD679E033CF0E9B3AEE62_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0067;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* L_9;
				L_9 = InterfaceFuncInvoker0< Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.Purchase>::get_Current() */, IEnumerator_1_t8DBD1E8FD64E36FEEE7EA15382340E8844D3AE3A_il2cpp_TypeInfo_var, L_8);
				V_1 = L_9;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
				Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* L_12 = V_1;
				NullCheck(L_12);
				String_t* L_13 = L_12->___Sku_5;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_13);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
				Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* L_15 = V_1;
				NullCheck(L_15);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16 = L_15->___GrantTime_2;
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17 = L_16;
				RuntimeObject* L_18 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_17);
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_18);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
				Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* L_20 = V_1;
				NullCheck(L_20);
				String_t* L_21 = L_20->___ID_3;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, L_21);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral7FAA59B9C02D35A6E919CF20ED24C5084688CD65, L_19, NULL);
			}

IL_0054_1:
			{
				RuntimeObject* L_22 = V_0;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::BuyPowerBallsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_BuyPowerBallsPressed_m9D23D3E5E840C2A60BE6497A4CE842124C340BAA (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_LaunchCheckoutFlowCallback_m88FE3A7C93F77D34B8E1951B9611FA50F9B50FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mC66FA212BFBFE9CAA49F78FEC2AE5BBF7623D1CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38);
		s_Il2CppMethodInitialized = true;
	}
	{
		Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE* L_0;
		L_0 = IAP_LaunchCheckoutFlow_m6B38B8FB408A1918D271917BD9E2BC1A055ED2CB(_stringLiteral77B69D3558CA4EB89B1520DD9448E96C01CBFA38, NULL);
		Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C* L_1 = (Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C*)il2cpp_codegen_object_new(Callback_t6249946C7BF223B5ED01C2BD1D231B3371A58A3C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_m2039BFED243E3205CDB15E41D2F894EC4554E978(L_1, __this, (intptr_t)((void*)IAPManager_LaunchCheckoutFlowCallback_m88FE3A7C93F77D34B8E1951B9611FA50F9B50FB8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_tC9DC4AB9EF9F62B430146D773654385C70FEF2CE* L_2;
		L_2 = Request_1_OnComplete_mC66FA212BFBFE9CAA49F78FEC2AE5BBF7623D1CF(L_0, L_1, Request_1_OnComplete_mC66FA212BFBFE9CAA49F78FEC2AE5BBF7623D1CF_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::LaunchCheckoutFlowCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_LaunchCheckoutFlowCallback_m88FE3A7C93F77D34B8E1951B9611FA50F9B50FB8 (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, Message_1_t27A884141DAE8B0CC324ED8E3C07EE4DD1D14D2D* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66128F32B7A498052C952E74E0051973A479392D);
		s_Il2CppMethodInitialized = true;
	}
	Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* V_0 = NULL;
	{
		Message_1_t27A884141DAE8B0CC324ED8E3C07EE4DD1D14D2D* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_1_t27A884141DAE8B0CC324ED8E3C07EE4DD1D14D2D* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9(L_2, NULL);
		return;
	}

IL_000f:
	{
		Message_1_t27A884141DAE8B0CC324ED8E3C07EE4DD1D14D2D* L_3 = ___msg0;
		NullCheck(L_3);
		Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* L_4;
		L_4 = VirtualFuncInvoker0< Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* >::Invoke(69 /* Oculus.Platform.Models.Purchase Oculus.Platform.Message::GetPurchase() */, L_3);
		V_0 = L_4;
		Purchase_tD525E4FF299D923FAF9BF3EDB81772753A1E3697* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Sku_5;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral66128F32B7A498052C952E74E0051973A479392D, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_8 = __this->___m_gameController_4;
		NullCheck(L_8);
		GameController_AddPowerballs_m0D0BCB894035CC715580D74D0C63A0283E4FF237(L_8, 3, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.IAPManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager__ctor_m66DD9D00B8FE8C51D67721E77357E06C3B8F94F5 (IAPManager_t1BC52798D66C79698EA5E9DB930B62D0BF321060* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_Start_m406EBE7AA6918089F5B0B0FAE66D62FC32B7254E (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_MatchFoundCallback_mBEB52A347B3EEB6CC772360603BCAA38857BDD68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_MatchmakingRoomUpdateCallback_m5ECEAB77E45E9C54611E4DF4F53E233A0F0D7C22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_0 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_0, __this, (intptr_t)((void*)MatchmakingManager_MatchFoundCallback_mBEB52A347B3EEB6CC772360603BCAA38857BDD68_RuntimeMethod_var), NULL);
		Matchmaking_SetMatchFoundNotificationCallback_m5FD84AC9FE2986FB827DE7F6240848C127B36A80(L_0, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_1 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_1, __this, (intptr_t)((void*)MatchmakingManager_MatchmakingRoomUpdateCallback_m5ECEAB77E45E9C54611E4DF4F53E233A0F0D7C22_RuntimeMethod_var), NULL);
		Rooms_SetUpdateNotificationCallback_m91DAA806DCBE29A0DE31EB9C324F66DA9DD8BCEF(L_1, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_Update_mFDAC3A60839537E1B65C411F2B819E0C9885689D (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_MatchmakingRoomUpdateCallback_m5ECEAB77E45E9C54611E4DF4F53E233A0F0D7C22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3080B691E1C8BCE9D97620F648B6E8AC15E3D82D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_12;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 2))) <= ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___m_lastUpdateTime_10;
		if ((!(((float)(30.0f)) < ((float)((float)il2cpp_codegen_subtract(L_2, L_3))))))
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3080B691E1C8BCE9D97620F648B6E8AC15E3D82D, NULL);
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___m_lastUpdateTime_10 = L_4;
		uint64_t L_5 = __this->___m_matchRoom_8;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Rooms_Get_m5BD3B00447E38D661328C512EAA267FAB3CBF390(L_5, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_7 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_7, __this, (intptr_t)((void*)MatchmakingManager_MatchmakingRoomUpdateCallback_m5ECEAB77E45E9C54611E4DF4F53E233A0F0D7C22_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_8;
		L_8 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_6, L_7, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::MatchButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_MatchButtonPressed_mAB20114B99F7679C43B8DC5FFC83E19690BAF0FD (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_state_12;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 1, NULL);
		return;
	}

IL_0010:
	{
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::EndMatch(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_EndMatch_m16924F8889FDEB613DA50D56412A946604AAAF71 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, int32_t ___localScore0, int32_t ___remoteScore1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_GenericErrorCheckCallback_m40466B72DD095BD70C7784E42678E700E881EB11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* V_2 = NULL;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	{
		int32_t L_0 = __this->___m_state_12;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 3))) <= ((uint32_t)1))))
		{
			goto IL_0090;
		}
	}
	{
		uint64_t L_2;
		L_2 = PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C(NULL);
		V_4 = L_2;
		String_t* L_3;
		L_3 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F((&V_4), NULL);
		V_0 = L_3;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_4 = __this->___m_remotePlayer_9;
		NullCheck(L_4);
		uint64_t* L_5 = (&L_4->___ID_1);
		String_t* L_6;
		L_6 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_5, NULL);
		V_1 = L_6;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_7, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_2 = L_7;
		int32_t L_8 = ___localScore0;
		int32_t L_9 = ___remoteScore1;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = V_2;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_10, L_11, 1, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_12 = V_2;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_12, L_13, 2, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		goto IL_0072;
	}

IL_004c:
	{
		int32_t L_14 = ___localScore0;
		int32_t L_15 = ___remoteScore1;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0062;
		}
	}
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_16 = V_2;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_16, L_17, 2, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_18 = V_2;
		String_t* L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_18, L_19, 1, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		goto IL_0072;
	}

IL_0062:
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_20 = V_2;
		String_t* L_21 = V_0;
		NullCheck(L_20);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_20, L_21, 1, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_22 = V_2;
		String_t* L_23 = V_1;
		NullCheck(L_22);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_22, L_23, 1, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
	}

IL_0072:
	{
		uint64_t L_24 = __this->___m_matchRoom_8;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_25 = V_2;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_26;
		L_26 = Matchmaking_ReportResultsInsecure_mC8F1B5BD784967EE51FA85362F2AFE14D00D6D2D(L_24, L_25, NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_27 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_27, __this, (intptr_t)((void*)MatchmakingManager_GenericErrorCheckCallback_m40466B72DD095BD70C7784E42678E700E881EB11_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_28;
		L_28 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_26, L_27, NULL);
	}

IL_0090:
	{
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_OnApplicationQuit_mDC398E1FBA16C5B1B30E9AF918C51D2001A86143 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) 
{
	{
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_0;
		L_0 = Matchmaking_Cancel_m706FB1CABA9DF535FF277595CD558C8000E1025A(NULL);
		uint64_t L_1 = __this->___m_matchRoom_8;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		uint64_t L_2 = __this->___m_matchRoom_8;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_3;
		L_3 = Rooms_Leave_mA3D120D16515D494AB8146DB8C03F639A2CECC77(L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::TransitionToState(Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_MatchmakingEnqueueCallback_m37AE0684B29F24680557D16BE184273FB5CF04CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F4F0222EBD98FF76276C80362B03DDD11482249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46CA543EF3D4FBA7C2E4EDBD944AFA72DB18A7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81051A4E414CA5464DA6F58F873619B8C28C577D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF738530550845DB075C93EAF91A341B00DC90FFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_12;
		int32_t L_1 = ___state0;
		__this->___m_state_12 = L_1;
		int32_t L_2 = __this->___m_state_12;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_0098;
			}
			case 3:
			{
				goto IL_00a9;
			}
			case 4:
			{
				goto IL_00a9;
			}
		}
	}
	{
		return;
	}

IL_0030:
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___m_matchButtonText_5;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral46CA543EF3D4FBA7C2E4EDBD944AFA72DB18A7B3);
		__this->___m_remotePlayer_9 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_remotePlayer_9), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_5;
		L_5 = Matchmaking_Cancel_m706FB1CABA9DF535FF277595CD558C8000E1025A(NULL);
		uint64_t L_6 = __this->___m_matchRoom_8;
		if (!L_6)
		{
			goto IL_00b9;
		}
	}
	{
		uint64_t L_7 = __this->___m_matchRoom_8;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_8;
		L_8 = Rooms_Leave_mA3D120D16515D494AB8146DB8C03F639A2CECC77(L_7, NULL);
		__this->___m_matchRoom_8 = ((int64_t)0);
		return;
	}

IL_006a:
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___m_matchButtonText_5;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral3F4F0222EBD98FF76276C80362B03DDD11482249);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_10;
		L_10 = Matchmaking_Enqueue2_m5ACC4DED15B2FF40CE758DCFE073AD1E9F3BC3A0(_stringLiteralF738530550845DB075C93EAF91A341B00DC90FFA, (MatchmakingOptions_t7C5F8003B4878CDBA092E6FDA874BDAEB2560A78*)NULL, NULL);
		Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* L_11 = (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*)il2cpp_codegen_object_new(Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6(L_11, __this, (intptr_t)((void*)MatchmakingManager_MatchmakingEnqueueCallback_m37AE0684B29F24680557D16BE184273FB5CF04CC_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_12;
		L_12 = Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993(L_10, L_11, Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		return;
	}

IL_0098:
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___m_matchButtonText_5;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral81051A4E414CA5464DA6F58F873619B8C28C577D);
		return;
	}

IL_00a9:
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___m_matchButtonText_5;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral81051A4E414CA5464DA6F58F873619B8C28C577D);
	}

IL_00b9:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::MatchmakingEnqueueCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_MatchmakingEnqueueCallback_m37AE0684B29F24680557D16BE184273FB5CF04CC (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___untyped_msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mF829EE114595202C5F13D822CE4BA219CC04710D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C7D61C114BE6EC54C5F7CD3B9FBA6D0F2E88ED);
		s_Il2CppMethodInitialized = true;
	}
	MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___untyped_msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___untyped_msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}

IL_0020:
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_5 = ___untyped_msg0;
		NullCheck(((Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767*)CastclassClass((RuntimeObject*)L_5, Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767_il2cpp_TypeInfo_var)));
		MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* L_6;
		L_6 = Message_1_get_Data_mF829EE114595202C5F13D822CE4BA219CC04710D_inline(((Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767*)CastclassClass((RuntimeObject*)L_5, Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767_il2cpp_TypeInfo_var)), Message_1_get_Data_mF829EE114595202C5F13D822CE4BA219CC04710D_RuntimeMethod_var);
		V_0 = L_6;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___m_infoText_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* L_10 = V_0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___AverageWait_2;
		uint32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_9;
		MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* L_15 = V_0;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___MaxExpectedWait_4;
		uint32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* L_20 = V_0;
		NullCheck(L_20);
		uint32_t L_21 = L_20->___MatchesInLastHourCount_3;
		uint32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_19;
		MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* L_25 = V_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___RecentMatchPercentage_6;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral22C7D61C114BE6EC54C5F7CD3B9FBA6D0F2E88ED, L_24, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_29);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::MatchFoundCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_MatchFoundCallback_mBEB52A347B3EEB6CC772360603BCAA38857BDD68 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_MatchmakingJoinRoomCallback_m0786991B1F2E1C8A0248A9EF8718DB8622D7340A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}

IL_0020:
	{
		int32_t L_5 = __this->___m_state_12;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_6 = ___msg0;
		NullCheck(L_6);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_7;
		L_7 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_6, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_7);
		uint64_t L_8 = L_7->___ID_3;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_9;
		L_9 = Matchmaking_JoinRoom_mC10BB916CDD1EC2CAA76DD1A0D75B88E08AC1407(L_8, (bool)1, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_10 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_10, __this, (intptr_t)((void*)MatchmakingManager_MatchmakingJoinRoomCallback_m0786991B1F2E1C8A0248A9EF8718DB8622D7340A_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_11;
		L_11 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_9, L_10, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_12 = ___msg0;
		NullCheck(L_12);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_13;
		L_13 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_12, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_13);
		uint64_t L_14 = L_13->___ID_3;
		__this->___m_matchRoom_8 = L_14;
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::MatchmakingJoinRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_MatchmakingJoinRoomCallback_m0786991B1F2E1C8A0248A9EF8718DB8622D7340A (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral103286C2476ADEE88E61E03694D9EE2887E80E08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B48A51B07AC1C7864C54E67D61959214014604);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}

IL_0020:
	{
		int32_t L_5 = __this->___m_state_12;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_6 = ___msg0;
		NullCheck(L_6);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_7;
		L_7 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_6, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_7);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_8 = L_7->___UsersOptional_18;
		if (L_8)
		{
			goto IL_003a;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_004a;
	}

IL_003a:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_9 = ___msg0;
		NullCheck(L_9);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_10;
		L_10 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_9, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_10);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_11 = L_10->___UsersOptional_18;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_11, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		G_B7_0 = L_12;
	}

IL_004a:
	{
		V_0 = G_B7_0;
		uint64_t* L_13 = (&__this->___m_matchRoom_8);
		String_t* L_14;
		L_14 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_13, NULL);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral103286C2476ADEE88E61E03694D9EE2887E80E08, L_14, _stringLiteral72B48A51B07AC1C7864C54E67D61959214014604, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 2, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_17 = ___msg0;
		NullCheck(L_17);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_18;
		L_18 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_17, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_18);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_19 = L_18->___UsersOptional_18;
		if (!L_19)
		{
			goto IL_00a4;
		}
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_20 = ___msg0;
		NullCheck(L_20);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_21;
		L_21 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_20, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_21);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_22 = L_21->___UsersOptional_18;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_22, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_24 = ___msg0;
		NullCheck(L_24);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_25;
		L_25 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_24, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		MatchmakingManager_ProcessRoomData_m2882E4545F801340954454BB2E844CC2B0C048B4(__this, L_25, NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::MatchmakingRoomUpdateCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_MatchmakingRoomUpdateCallback_m5ECEAB77E45E9C54611E4DF4F53E233A0F0D7C22 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02841C9F0155836DC3C03D98330F64B42FE1B48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE03E733F77ED93A0B5CB4B1E0E34307F856300C7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}

IL_0020:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_5 = ___msg0;
		NullCheck(L_5);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_6;
		L_6 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_5, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_6);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_7 = L_6->___OwnerOptional_13;
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0044;
	}

IL_0034:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_8 = ___msg0;
		NullCheck(L_8);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_9;
		L_9 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_8, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_9);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_10 = L_9->___OwnerOptional_13;
		NullCheck(L_10);
		String_t* L_11 = L_10->___OculusID_4;
		G_B5_0 = L_11;
	}

IL_0044:
	{
		V_0 = G_B5_0;
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_12 = ___msg0;
		NullCheck(L_12);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_13;
		L_13 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_12, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_13);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_14 = L_13->___UsersOptional_18;
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0065;
	}

IL_0055:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_15 = ___msg0;
		NullCheck(L_15);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_16;
		L_16 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_15, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_16);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_17 = L_16->___UsersOptional_18;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_17, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		G_B8_0 = L_18;
	}

IL_0065:
	{
		V_1 = G_B8_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_21 = ___msg0;
		NullCheck(L_21);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_22;
		L_22 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_21, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_22);
		uint64_t L_23 = L_22->___ID_3;
		uint64_t L_24 = L_23;
		RuntimeObject* L_25 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_25);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_20;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_26;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_33 = ___msg0;
		NullCheck(L_33);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_34;
		L_34 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_33, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_35 = L_34->___DataStore_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843(L_35, Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_38);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralE03E733F77ED93A0B5CB4B1E0E34307F856300C7, L_32, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_39 = ___msg0;
		NullCheck(L_39);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_40;
		L_40 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_39, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_40);
		uint64_t L_41 = L_40->___ID_3;
		uint64_t L_42 = __this->___m_matchRoom_8;
		if ((((int64_t)L_41) == ((int64_t)L_42)))
		{
			goto IL_00e1;
		}
	}
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_43 = ___msg0;
		NullCheck(L_43);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_44;
		L_44 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_43, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_44);
		uint64_t* L_45 = (&L_44->___ID_3);
		String_t* L_46;
		L_46 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_45, NULL);
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral02841C9F0155836DC3C03D98330F64B42FE1B48D, L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_47, NULL);
		return;
	}

IL_00e1:
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_48 = ___msg0;
		NullCheck(L_48);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_49;
		L_49 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_48, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		MatchmakingManager_ProcessRoomData_m2882E4545F801340954454BB2E844CC2B0C048B4(__this, L_49, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::ProcessRoomData(Oculus.Platform.Models.Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_ProcessRoomData_m2882E4545F801340954454BB2E844CC2B0C048B4 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___room0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_GenericErrorCheckCallback_m40466B72DD095BD70C7784E42678E700E881EB11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA43D16DF81BDC17F7F44D18FF4B8A7730E241FC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1DA7B058D04F30E090B0FB85E3B9BC7BB8D582F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_2 = NULL;
	MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* G_B15_0 = NULL;
	MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* G_B16_1 = NULL;
	{
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___m_lastUpdateTime_10 = L_0;
		int32_t L_1 = __this->___m_state_12;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_00c4;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_2 = ___room0;
		NullCheck(L_2);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_3 = L_2->___UsersOptional_18;
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_4 = ___room0;
		NullCheck(L_4);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_5 = L_4->___UsersOptional_18;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93(L_5, DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_002d_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_10;
				L_10 = InterfaceFuncInvoker0< User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				uint64_t L_11;
				L_11 = PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C(NULL);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_12 = V_2;
				NullCheck(L_12);
				uint64_t L_13 = L_12->___ID_1;
				if ((((int64_t)L_11) == ((int64_t)L_13)))
				{
					goto IL_005f_1;
				}
			}
			{
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_14 = V_2;
				NullCheck(L_14);
				String_t* L_15 = L_14->___OculusID_4;
				String_t* L_16;
				L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA43D16DF81BDC17F7F44D18FF4B8A7730E241FC3, L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_17 = V_2;
				__this->___m_remotePlayer_9 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_remotePlayer_9), (void*)L_17);
				goto IL_0073;
			}

IL_005f_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_20 = __this->___m_remotePlayer_9;
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		return;
	}

IL_007c:
	{
		bool L_21;
		L_21 = MatchmakingManager_DoesLocalUserGoFirst_mDFE3E2157F9C17DAD7068E5407E6F170246869E1(__this, NULL);
		V_0 = L_21;
		bool L_22 = V_0;
		G_B14_0 = __this;
		if (L_22)
		{
			G_B15_0 = __this;
			goto IL_008a;
		}
	}
	{
		G_B16_0 = 4;
		G_B16_1 = G_B14_0;
		goto IL_008b;
	}

IL_008a:
	{
		G_B16_0 = 3;
		G_B16_1 = G_B15_0;
	}

IL_008b:
	{
		NullCheck(G_B16_1);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(G_B16_1, G_B16_0, NULL);
		uint64_t L_23 = __this->___m_matchRoom_8;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_24;
		L_24 = Matchmaking_StartMatch_mA0D9B2868918B1D405B2D2907F9D4C6F8F8BC9A7(L_23, NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_25 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_25, __this, (intptr_t)((void*)MatchmakingManager_GenericErrorCheckCallback_m40466B72DD095BD70C7784E42678E700E881EB11_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_26;
		L_26 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_24, L_25, NULL);
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_27 = __this->___m_gameController_4;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_28 = __this->___m_remotePlayer_9;
		NullCheck(L_28);
		String_t* L_29 = L_28->___OculusID_4;
		bool L_30 = V_0;
		NullCheck(L_27);
		GameController_StartOnlineMatch_mD4FAEE5805B0A61809C24CF2EA30A0C3F2119BD3(L_27, L_29, L_30, NULL);
	}

IL_00c4:
	{
		int32_t L_31 = __this->___m_state_12;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_012a;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_32 = ___room0;
		NullCheck(L_32);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = L_32->___DataStore_1;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_34 = __this->___m_remotePlayer_9;
		NullCheck(L_34);
		String_t* L_35 = L_34->___OculusID_4;
		NullCheck(L_33);
		bool L_36;
		L_36 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_33, L_35, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_012a;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_37 = ___room0;
		NullCheck(L_37);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = L_37->___DataStore_1;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_39 = __this->___m_remotePlayer_9;
		NullCheck(L_39);
		String_t* L_40 = L_39->___OculusID_4;
		NullCheck(L_38);
		String_t* L_41;
		L_41 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_38, L_40, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_42;
		L_42 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_41, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_42)
		{
			goto IL_012a;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_43 = ___room0;
		NullCheck(L_43);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = L_43->___DataStore_1;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_45 = __this->___m_remotePlayer_9;
		NullCheck(L_45);
		String_t* L_46 = L_45->___OculusID_4;
		NullCheck(L_44);
		String_t* L_47;
		L_47 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_44, L_46, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		MatchmakingManager_ProcessRemoteMove_m44C0F2EF64888809B04398D5832817EFCD6852D4(__this, L_47, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 3, NULL);
	}

IL_012a:
	{
		int32_t L_48 = __this->___m_state_12;
		if ((!(((uint32_t)L_48) == ((uint32_t)3))))
		{
			goto IL_0158;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_49 = ___room0;
		NullCheck(L_49);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_50 = L_49->___OwnerOptional_13;
		if (!L_50)
		{
			goto IL_0158;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_51 = ___room0;
		NullCheck(L_51);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_52 = L_51->___OwnerOptional_13;
		NullCheck(L_52);
		uint64_t L_53 = L_52->___ID_1;
		uint64_t L_54;
		L_54 = PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C(NULL);
		if ((!(((uint64_t)L_53) == ((uint64_t)L_54))))
		{
			goto IL_0158;
		}
	}
	{
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_55 = __this->___m_gameController_4;
		NullCheck(L_55);
		GameController_MarkRemoteTurnComplete_mE983E9EF3600AFECC378220D93D1CEBFFB3B4069(L_55, NULL);
	}

IL_0158:
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_56 = ___room0;
		NullCheck(L_56);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_57 = L_56->___UsersOptional_18;
		if (!L_57)
		{
			goto IL_0176;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_58 = ___room0;
		NullCheck(L_58);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_59 = L_58->___UsersOptional_18;
		if (!L_59)
		{
			goto IL_018b;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_60 = ___room0;
		NullCheck(L_60);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_61 = L_60->___UsersOptional_18;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_61, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		if ((((int32_t)L_62) == ((int32_t)2)))
		{
			goto IL_018b;
		}
	}

IL_0176:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD1DA7B058D04F30E090B0FB85E3B9BC7BB8D582F, NULL);
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_63 = __this->___m_gameController_4;
		NullCheck(L_63);
		GameController_RemoteMatchEnded_mB273946F8DD29362CE3D79AEBE8CE1A0141A2A6A(L_63, NULL);
	}

IL_018b:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::ProcessRemoteMove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_ProcessRemoteMove_m44C0F2EF64888809B04398D5832817EFCD6852D4 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, String_t* ___moveString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEFA624EF2B98CBD83AD9BED3C5BD3EF73F1507A);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___moveString0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEEFA624EF2B98CBD83AD9BED3C5BD3EF73F1507A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		String_t* L_2 = ___moveString0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)58), 0, NULL);
		V_0 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_5, L_8, NULL);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_il2cpp_TypeInfo_var))));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13;
		L_13 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_12, NULL);
		V_2 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17;
		L_17 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_16, NULL);
		V_3 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(2, L_18));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(2, L_19));
		GameController_tD5904736CDF8FE24810C9703CACB7749B207377F* L_20 = __this->___m_gameController_4;
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		NullCheck(L_20);
		GameController_MakeRemoteMove_m1F41AE124BC529E1F4BA67446A359A581F8B48BF(L_20, L_21, L_22, L_23, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::SendLocalMove(Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_SendLocalMove_m8BA1D500F113939069C8EF569B84B327D2FDF6B7 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, int32_t ___piece0, int32_t ___boardX1, int32_t ___boardY2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchmakingManager_UpdateDataStoreCallback_mB8DD9D1665DE526E4D0BF516D8E681E333BA5866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17490F55601C1F90A7803263837FE3F21E759D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE29B7CBB4F1931A6EC35BF086F4E6327176AA947);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		Il2CppFakeBox<int32_t> L_0(Piece_tF4D9BCBEE75A3E80A22AFC8587935ACE86D7FE38_il2cpp_TypeInfo_var, (&___piece0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		int32_t L_2 = ___boardX1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___boardY2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral17490F55601C1F90A7803263837FE3F21E759D69, L_1, L_4, L_7, NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE29B7CBB4F1931A6EC35BF086F4E6327176AA947, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_11, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_1 = L_11;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = V_1;
		String_t* L_13;
		L_13 = PlatformManager_get_MyOculusID_mD5DB1A9E395C35707FE46E7C3DB3D3D5D625486D(NULL);
		String_t* L_14 = V_0;
		NullCheck(L_12);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_12, L_13, L_14, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_1;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_16 = __this->___m_remotePlayer_9;
		NullCheck(L_16);
		String_t* L_17 = L_16->___OculusID_4;
		NullCheck(L_15);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_15, L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		uint64_t L_18 = __this->___m_matchRoom_8;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = V_1;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_20;
		L_20 = Rooms_UpdateDataStore_mECD4F3F3392C36B29316009C2E5E313A63E2E637(L_18, L_19, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_21 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_21, __this, (intptr_t)((void*)MatchmakingManager_UpdateDataStoreCallback_mB8DD9D1665DE526E4D0BF516D8E681E333BA5866_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_22;
		L_22 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_20, L_21, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 4, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::UpdateDataStoreCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_UpdateDataStoreCallback_mB8DD9D1665DE526E4D0BF516D8E681E333BA5866 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_state_12;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		uint64_t L_1 = __this->___m_matchRoom_8;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_2 = __this->___m_remotePlayer_9;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___ID_1;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_4;
		L_4 = Rooms_UpdateOwner_m0C5FF7EF83D691AF89D45CAC53872579F0368EE2(L_1, L_3, NULL);
		return;
	}
}
// System.Boolean Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::DoesLocalUserGoFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatchmakingManager_DoesLocalUserGoFirst_mDFE3E2157F9C17DAD7068E5407E6F170246869E1 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_matchRoom_8;
		if (((int64_t)((uint64_t)(int64_t)L_0%(uint64_t)(int64_t)((int64_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		uint64_t L_1;
		L_1 = PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C(NULL);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_2 = __this->___m_remotePlayer_9;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___ID_1;
		return (bool)((!(((uint64_t)L_1) >= ((uint64_t)L_3)))? 1 : 0);
	}

IL_001e:
	{
		uint64_t L_4;
		L_4 = PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C(NULL);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_5 = __this->___m_remotePlayer_9;
		NullCheck(L_5);
		uint64_t L_6 = L_5->___ID_1;
		return (bool)((!(((uint64_t)L_4) <= ((uint64_t)L_6)))? 1 : 0);
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::GenericErrorCheckCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager_GenericErrorCheckCallback_m40466B72DD095BD70C7784E42678E700E881EB11 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		MatchmakingManager_TransitionToState_m257402D1C447AC6B0597C1BEC40BF0B9A48A9C2D(__this, 0, NULL);
		return;
	}

IL_0020:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.MatchmakingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakingManager__ctor_m55346A35D2E0C8D84EE8FBF5C40028BE495FB0A1 (MatchmakingManager_tF817B6AFD3C4EC74694039EB987CCABCC3AF3BEB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_Awake_m99697160236000E8BDB630031E07F9125219FD37 (PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* L_0 = ((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		return;
	}

IL_0019:
	{
		((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4), (void*)__this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A((String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_Start_m7E48911948FD98D198215DED996A51F92470AC48 (PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_IsEntitledCallback_m35CDEDDD7C57FD0376922EAFC90058125996E304_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_0;
		L_0 = Entitlements_IsUserEntitledToApplication_m12DD5469C7A81F00804FC5BD2C3E75157F3BA309(NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_1 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_1, __this, (intptr_t)((void*)PlatformManager_IsEntitledCallback_m35CDEDDD7C57FD0376922EAFC90058125996E304_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_2;
		L_2 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_0, L_1, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::IsEntitledCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_IsEntitledCallback_m35CDEDDD7C57FD0376922EAFC90058125996E304 (PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_GetLoggedInUserCallback_mF77527368A61FF05688585AF3E5F3DB428E686EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9(L_2, NULL);
		return;
	}

IL_000f:
	{
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_3;
		L_3 = Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_4 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_4, __this, (intptr_t)((void*)PlatformManager_GetLoggedInUserCallback_mF77527368A61FF05688585AF3E5F3DB428E686EF_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_5;
		L_5 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_3, L_4, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::GetLoggedInUserCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.User>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_GetLoggedInUserCallback_mF77527368A61FF05688585AF3E5F3DB428E686EF (PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* __this, Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85018765AA90E069768AE2702E4A54398205B131);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_2 = ___msg0;
		PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9(L_2, NULL);
		return;
	}

IL_000f:
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_3 = ___msg0;
		NullCheck(L_3);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_4;
		L_4 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline(L_3, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		NullCheck(L_4);
		uint64_t L_5 = L_4->___ID_1;
		__this->___m_myID_5 = L_5;
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_6 = ___msg0;
		NullCheck(L_6);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_7;
		L_7 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline(L_6, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = L_7->___OculusID_4;
		__this->___m_myOculusID_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_myOculusID_6), (void*)L_8);
		String_t* L_9 = __this->___m_myOculusID_6;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral85018765AA90E069768AE2702E4A54398205B131, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::TerminateWithError(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TerminateWithError_mC2BE3410377A3A812F11B9B347CE7725288794F9 (Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_1;
		L_1 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = L_1->___Message_2;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.UInt64 Oculus.Platform.Samples.VrBoardGame.PlatformManager::get_MyID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PlatformManager_get_MyID_mEAE9B1B033FF4AFC6490FA687589D8AAFF268D3C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* L_0 = ((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* L_2 = ((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___m_myID_5;
		return L_3;
	}

IL_0018:
	{
		return ((int64_t)0);
	}
}
// System.String Oculus.Platform.Samples.VrBoardGame.PlatformManager::get_MyOculusID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformManager_get_MyOculusID_mD5DB1A9E395C35707FE46E7C3DB3D3D5D625486D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* L_0 = ((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* L_2 = ((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_2);
		String_t* L_3 = L_2->___m_myOculusID_6;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* L_4 = ((PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_StaticFields*)il2cpp_codegen_static_fields_for(PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE_il2cpp_TypeInfo_var))->___s_instance_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___m_myOculusID_6;
		return L_5;
	}

IL_0024:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_6;
	}
}
// System.Void Oculus.Platform.Samples.VrBoardGame.PlatformManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager__ctor_mE06CE5BB2ABBB6D722FF51990EC2CCE31CADFAC5 (PlatformManager_tAFEBEB8544F6B9054DB80F06A2739244F6F962FE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_Start_mF4DEE357ECB16EF0D861FA3BE4BF3CFE8EDA6C59 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A((String_t*)NULL, NULL);
		DataEntry_checkEntitlement_m04534284B09D66C2A2599E1CE1B68D95BBBB3F58(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_Update_m1690F3379D1EC94B9841036DC61D5137600CDC92 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0;
		L_0 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = V_0;
		DataEntry_SubmitCommand_mEC792665C0698CB7B2169C9AFECEE7451D16ADC3(__this, L_5, NULL);
	}

IL_0029:
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6;
		L_6 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		NullCheck(L_6);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0039:
	{
		Request_RunCallbacks_mB86BB1543FDEF582E537265EF3BC2DCAACB86939(0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::SubmitCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_SubmitCommand_mEC792665C0698CB7B2169C9AFECEE7451D16ADC3 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___command0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A50091974FE11FAC57C870272F76245820AA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5745313695BB32A7BE264930411F75CE40EF69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		String_t* L_0 = ___command0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)32), 0, NULL);
		V_0 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		String_t* L_6 = V_1;
		uint32_t L_7;
		L_7 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7046F41E3D6045F7CFC5B2BBB4F295967F6FA9D8(L_6, NULL);
		V_2 = L_7;
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-418632219)))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)923577301)))))
		{
			goto IL_0078;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)822911587)))))
		{
			goto IL_0052;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)806133968))))
		{
			goto IL_02fa;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)822911587))))
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_0499;
	}

IL_0052:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)873244444))))
		{
			goto IL_030f;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)906799682))))
		{
			goto IL_02d0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)923577301))))
		{
			goto IL_0324;
		}
	}
	{
		goto IL_0499;
	}

IL_0078:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-502520314)))))
		{
			goto IL_00a6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-536075552))))
		{
			goto IL_0291;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-519297933))))
		{
			goto IL_0213;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-502520314))))
		{
			goto IL_0195;
		}
	}
	{
		goto IL_0499;
	}

IL_00a6:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-468965076))))
		{
			goto IL_02a6;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-435409838))))
		{
			goto IL_0180;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-418632219))))
		{
			goto IL_02bb;
		}
	}
	{
		goto IL_0499;
	}

IL_00cc:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-334744124)))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-385076981)))))
		{
			goto IL_00f7;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-401854600))))
		{
			goto IL_01e9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-385076981))))
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_0499;
	}

IL_00f7:
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-368299362))))
		{
			goto IL_023d;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-351521743))))
		{
			goto IL_027c;
		}
	}
	{
		uint32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-334744124))))
		{
			goto IL_0228;
		}
	}
	{
		goto IL_0499;
	}

IL_011d:
	{
		uint32_t L_30 = V_2;
		if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)-267633648)))))
		{
			goto IL_0148;
		}
	}
	{
		uint32_t L_31 = V_2;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-301188886))))
		{
			goto IL_01d4;
		}
	}
	{
		uint32_t L_32 = V_2;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-284411267))))
		{
			goto IL_01aa;
		}
	}
	{
		uint32_t L_33 = V_2;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)-267633648))))
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_0499;
	}

IL_0148:
	{
		uint32_t L_34 = V_2;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-234078410))))
		{
			goto IL_0267;
		}
	}
	{
		uint32_t L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-183745553))))
		{
			goto IL_016b;
		}
	}
	{
		uint32_t L_36 = V_2;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-166967934))))
		{
			goto IL_0252;
		}
	}
	{
		goto IL_0499;
	}

IL_016b:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B, NULL);
		if (L_38)
		{
			goto IL_0339;
		}
	}
	{
		goto IL_0499;
	}

IL_0180:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (L_40)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_0499;
	}

IL_0195:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, NULL);
		if (L_42)
		{
			goto IL_0356;
		}
	}
	{
		goto IL_0499;
	}

IL_01aa:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral4D5745313695BB32A7BE264930411F75CE40EF69, NULL);
		if (L_44)
		{
			goto IL_0369;
		}
	}
	{
		goto IL_0499;
	}

IL_01bf:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (L_46)
		{
			goto IL_037c;
		}
	}
	{
		goto IL_0499;
	}

IL_01d4:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral37A50091974FE11FAC57C870272F76245820AA18, NULL);
		if (L_48)
		{
			goto IL_038f;
		}
	}
	{
		goto IL_0499;
	}

IL_01e9:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		if (L_50)
		{
			goto IL_03a5;
		}
	}
	{
		goto IL_0499;
	}

IL_01fe:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B, NULL);
		if (L_52)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_0499;
	}

IL_0213:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_54)
		{
			goto IL_03bf;
		}
	}
	{
		goto IL_0499;
	}

IL_0228:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, NULL);
		if (L_56)
		{
			goto IL_03c6;
		}
	}
	{
		goto IL_0499;
	}

IL_023d:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA, NULL);
		if (L_58)
		{
			goto IL_03cd;
		}
	}
	{
		goto IL_0499;
	}

IL_0252:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		if (L_60)
		{
			goto IL_03e3;
		}
	}
	{
		goto IL_0499;
	}

IL_0267:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		if (L_62)
		{
			goto IL_03f9;
		}
	}
	{
		goto IL_0499;
	}

IL_027c:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, NULL);
		if (L_64)
		{
			goto IL_0412;
		}
	}
	{
		goto IL_0499;
	}

IL_0291:
	{
		String_t* L_65 = V_1;
		bool L_66;
		L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, NULL);
		if (L_66)
		{
			goto IL_0419;
		}
	}
	{
		goto IL_0499;
	}

IL_02a6:
	{
		String_t* L_67 = V_1;
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_68)
		{
			goto IL_0420;
		}
	}
	{
		goto IL_0499;
	}

IL_02bb:
	{
		String_t* L_69 = V_1;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		if (L_70)
		{
			goto IL_0430;
		}
	}
	{
		goto IL_0499;
	}

IL_02d0:
	{
		String_t* L_71 = V_1;
		bool L_72;
		L_72 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_71, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, NULL);
		if (L_72)
		{
			goto IL_0440;
		}
	}
	{
		goto IL_0499;
	}

IL_02e5:
	{
		String_t* L_73 = V_1;
		bool L_74;
		L_74 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_73, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, NULL);
		if (L_74)
		{
			goto IL_0450;
		}
	}
	{
		goto IL_0499;
	}

IL_02fa:
	{
		String_t* L_75 = V_1;
		bool L_76;
		L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE, NULL);
		if (L_76)
		{
			goto IL_0463;
		}
	}
	{
		goto IL_0499;
	}

IL_030f:
	{
		String_t* L_77 = V_1;
		bool L_78;
		L_78 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_77, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (L_78)
		{
			goto IL_0476;
		}
	}
	{
		goto IL_0499;
	}

IL_0324:
	{
		String_t* L_79 = V_1;
		bool L_80;
		L_80 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_79, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		if (L_80)
		{
			goto IL_0489;
		}
	}
	{
		goto IL_0499;
	}

IL_0339:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = V_0;
		NullCheck(L_81);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = V_0;
		NullCheck(L_82);
		int32_t L_83 = 1;
		String_t* L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 2;
		String_t* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		DataEntry_createAndJoinPrivateRoom_m027DA24A2B7EB7A8CCBFE929469CCBCEE970840D(__this, L_84, L_87, NULL);
		return;
	}

IL_034f:
	{
		DataEntry_getCurrentRoom_m5A3CC80D51C3128F3409ACA8349CC9E38FAD4954(__this, NULL);
		return;
	}

IL_0356:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = V_0;
		NullCheck(L_88);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 1;
		String_t* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		DataEntry_getRoom_m052D5B788F8F3A82FDD31510B5ADFB1C8CAC830A(__this, L_91, NULL);
		return;
	}

IL_0369:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = V_0;
		NullCheck(L_92);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94 = 1;
		String_t* L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		DataEntry_joinRoom_mB6BA1A6D16C78F525D639183ED857DCBC3413F52(__this, L_95, NULL);
		return;
	}

IL_037c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = V_0;
		NullCheck(L_96);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = 1;
		String_t* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		DataEntry_leaveRoom_mDB68BE054CEC25A12ECDAF1F90547D2BFB59EB4E(__this, L_99, NULL);
		return;
	}

IL_038f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = 1;
		String_t* L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105 = 2;
		String_t* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		DataEntry_kickUser_m21DEA1A7589CC461E9AC745A12DC914AF72F3432(__this, L_103, L_106, NULL);
		return;
	}

IL_03a5:
	{
		DataEntry_getLoggedInUser_m59ACED4D6203AC059B94CF7D584439E26260C540(__this, NULL);
		return;
	}

IL_03ac:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = V_0;
		NullCheck(L_107);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = V_0;
		NullCheck(L_108);
		int32_t L_109 = 1;
		String_t* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		DataEntry_getUser_m624A6CA6E4898FFE4AF9883DED5BF1EB3F78A204(__this, L_110, NULL);
		return;
	}

IL_03bf:
	{
		DataEntry_getLoggedInFriends_mB6869715887978481B2DFD67EFC582AE3A143B92(__this, NULL);
		return;
	}

IL_03c6:
	{
		DataEntry_getInvitableUsers_mCABE5F4F4F7A89CA7E63C6B75D611E4ABCA9EBB5(__this, NULL);
		return;
	}

IL_03cd:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_111 = V_0;
		NullCheck(L_111);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_112 = V_0;
		NullCheck(L_112);
		int32_t L_113 = 1;
		String_t* L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_115 = V_0;
		NullCheck(L_115);
		int32_t L_116 = 2;
		String_t* L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		DataEntry_inviteUser_m5F72BB146929D51D1BCE0F0E471960326221FC3C(__this, L_114, L_117, NULL);
		return;
	}

IL_03e3:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = V_0;
		NullCheck(L_118);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = V_0;
		NullCheck(L_119);
		int32_t L_120 = 1;
		String_t* L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = 2;
		String_t* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		DataEntry_setRoomDescription_m13B492F45364D2F98401BD917CC4C05C4FFC130A(__this, L_121, L_124, NULL);
		return;
	}

IL_03f9:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_125 = V_0;
		NullCheck(L_125);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length))) <= ((int32_t)3)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_126 = V_0;
		NullCheck(L_126);
		int32_t L_127 = 1;
		String_t* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = V_0;
		NullCheck(L_129);
		int32_t L_130 = 2;
		String_t* L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_132 = V_0;
		NullCheck(L_132);
		int32_t L_133 = 3;
		String_t* L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		DataEntry_updateRoomDataStore_mBCB0D5F140344A104D25223F561825DD02294E51(__this, L_128, L_131, L_134, NULL);
		return;
	}

IL_0412:
	{
		DataEntry_getUserNonce_m286B72252C2A6F9F0C494C5CCC130AF308D519AC(__this, NULL);
		return;
	}

IL_0419:
	{
		DataEntry_checkEntitlement_m04534284B09D66C2A2599E1CE1B68D95BBBB3F58(__this, NULL);
		return;
	}

IL_0420:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_135 = V_0;
		NullCheck(L_135);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_135)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_136 = V_0;
		NullCheck(L_136);
		int32_t L_137 = 1;
		String_t* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		DataEntry_getAchievementDefinition_m7D3FB177225B02FDC870A12817721AED1F8DF522(__this, L_138, NULL);
		return;
	}

IL_0430:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_139 = V_0;
		NullCheck(L_139);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_140 = V_0;
		NullCheck(L_140);
		int32_t L_141 = 1;
		String_t* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		DataEntry_getAchievementProgress_m3361B1C5718951AFFAABC70546D294E112985285(__this, L_142, NULL);
		return;
	}

IL_0440:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_143 = V_0;
		NullCheck(L_143);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_143)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_144 = V_0;
		NullCheck(L_144);
		int32_t L_145 = 1;
		String_t* L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		DataEntry_unlockAchievement_m311D4F3E7862463761D5B1DAF09892D3A98EE96B(__this, L_146, NULL);
		return;
	}

IL_0450:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_147 = V_0;
		NullCheck(L_147);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_147)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_148 = V_0;
		NullCheck(L_148);
		int32_t L_149 = 1;
		String_t* L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_151 = V_0;
		NullCheck(L_151);
		int32_t L_152 = 2;
		String_t* L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		DataEntry_addCountAchievement_m1DEE34463703A3CC5F8EE030E8BDAAA25DE4711B(__this, L_150, L_153, NULL);
		return;
	}

IL_0463:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_154 = V_0;
		NullCheck(L_154);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_155 = V_0;
		NullCheck(L_155);
		int32_t L_156 = 1;
		String_t* L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_158 = V_0;
		NullCheck(L_158);
		int32_t L_159 = 2;
		String_t* L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		DataEntry_addFieldsAchievement_m7A9DE2C67D96B006B87AF997E0F25A1E9E614EC2(__this, L_157, L_160, NULL);
		return;
	}

IL_0476:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = V_0;
		NullCheck(L_161);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_161)->max_length))) <= ((int32_t)2)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_162 = V_0;
		NullCheck(L_162);
		int32_t L_163 = 1;
		String_t* L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_165 = V_0;
		NullCheck(L_165);
		int32_t L_166 = 2;
		String_t* L_167 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		DataEntry_writeLeaderboardEntry_m099FB5010519C049740AFCEE0FA861DE002B8451(__this, L_164, L_167, NULL);
		return;
	}

IL_0489:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_168 = V_0;
		NullCheck(L_168);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_168)->max_length))) <= ((int32_t)1)))
		{
			goto IL_04a4;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = 1;
		String_t* L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		DataEntry_getLeaderboardEntries_m97A824DCB596F201282CEA7FA872A89CBD9C64C1(__this, L_171, NULL);
		return;
	}

IL_0499:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A, NULL);
	}

IL_04a4:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getLeaderboardEntries(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getLeaderboardEntries_m97A824DCB596F201282CEA7FA872A89CBD9C64C1 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___leaderboardName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_leaderboardGetCallback_mA1DE4462B4F26D1A6C01DE2DA407F9F689ED6435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mA1680CDE78012F90AEF2FA8555DB35E11542DA4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardName0;
		Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB* L_1;
		L_1 = Leaderboards_GetEntries_m561C56F0D404DA9265BA6A7B3AE759B1FBA049E1(L_0, ((int32_t)10), 0, 0, NULL);
		Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16* L_2 = (Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16*)il2cpp_codegen_object_new(Callback_t704AFC6DBD0B7A462C7CDF3147C6A8100F88FF16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Callback__ctor_mA57F8BFF347EF4FA57AC28F86EEEDF3284C7F55E(L_2, __this, (intptr_t)((void*)DataEntry_leaderboardGetCallback_mA1DE4462B4F26D1A6C01DE2DA407F9F689ED6435_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB* L_3;
		L_3 = Request_1_OnComplete_mA1680CDE78012F90AEF2FA8555DB35E11542DA4D(L_1, L_2, Request_1_OnComplete_mA1680CDE78012F90AEF2FA8555DB35E11542DA4D_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::writeLeaderboardEntry(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_writeLeaderboardEntry_m099FB5010519C049740AFCEE0FA861DE002B8451 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___leaderboardName0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_leaderboardWriteCallback_m98DB146A413D15CE4BCD9AE109A68FFE7E7AA84F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC____532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC____532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		V_0 = L_1;
		String_t* L_3 = ___leaderboardName0;
		String_t* L_4 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* L_7;
		L_7 = Leaderboards_WriteEntry_mA3D86734EC13FEBB516A83EA7CFB36B36AD6DB74(L_3, ((int64_t)L_5), L_6, (bool)0, NULL);
		Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD* L_8 = (Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD*)il2cpp_codegen_object_new(Callback_t1F7280244800BBF07ED6B73751D41AA1ADACF4AD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Callback__ctor_mC88E93F26E40F52AB779EEFD0BD3A3C056D8330B(L_8, __this, (intptr_t)((void*)DataEntry_leaderboardWriteCallback_m98DB146A413D15CE4BCD9AE109A68FFE7E7AA84F_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7* L_9;
		L_9 = Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE(L_7, L_8, Request_1_OnComplete_m5A0EBE5731578402F14391613FDD60BA7A4D49CE_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::addFieldsAchievement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_addFieldsAchievement_m7A9DE2C67D96B006B87AF997E0F25A1E9E614EC2 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, String_t* ___fields1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_achievementFieldsCallback_m7904FB75E758011C8B9F52DD093D4AF1B7154977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___achievementName0;
		String_t* L_1 = ___fields1;
		Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* L_2;
		L_2 = Achievements_AddFields_m1A35634A7F7DC978C9FB584360F33B62444D98F1(L_0, L_1, NULL);
		Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463* L_3 = (Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463*)il2cpp_codegen_object_new(Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_m4896EA57C01F759E7FC5DDDDBCCD56C96AD9909D(L_3, __this, (intptr_t)((void*)DataEntry_achievementFieldsCallback_m7904FB75E758011C8B9F52DD093D4AF1B7154977_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* L_4;
		L_4 = Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D(L_2, L_3, Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::addCountAchievement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_addCountAchievement_m1DEE34463703A3CC5F8EE030E8BDAAA25DE4711B (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, String_t* ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_achievementCountCallback_m6D044F1DEAAFD0A26C41A14EFA1971507FC66FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___achievementName0;
		String_t* L_1 = ___count1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_1, NULL);
		Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* L_3;
		L_3 = Achievements_AddCount_m691EA5043D0514BE618E03AFA61B1081E839192F(L_0, L_2, NULL);
		Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463* L_4 = (Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463*)il2cpp_codegen_object_new(Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_m4896EA57C01F759E7FC5DDDDBCCD56C96AD9909D(L_4, __this, (intptr_t)((void*)DataEntry_achievementCountCallback_m6D044F1DEAAFD0A26C41A14EFA1971507FC66FBD_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* L_5;
		L_5 = Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D(L_3, L_4, Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::unlockAchievement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_unlockAchievement_m311D4F3E7862463761D5B1DAF09892D3A98EE96B (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_achievementUnlockCallback_m96CF052655F582B3DF7EB23CF4CCE943762AA112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___achievementName0;
		Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* L_1;
		L_1 = Achievements_Unlock_m676D0D1402F1F964F90288CA30C38AC64C72ECFA(L_0, NULL);
		Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463* L_2 = (Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463*)il2cpp_codegen_object_new(Callback_tAD6BE0CF5DD6642AA64EB9C20D46B7CD8AF64463_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Callback__ctor_m4896EA57C01F759E7FC5DDDDBCCD56C96AD9909D(L_2, __this, (intptr_t)((void*)DataEntry_achievementUnlockCallback_m96CF052655F582B3DF7EB23CF4CCE943762AA112_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Request_1_t7E78C8655CE2AC6F75BB6CC741440CBD56A246A3* L_3;
		L_3 = Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D(L_1, L_2, Request_1_OnComplete_m44C70EB266880F67845AB2549DE72A0670F4AA3D_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getAchievementProgress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getAchievementProgress_m3361B1C5718951AFFAABC70546D294E112985285 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_achievementProgressCallback_m9D415118A5CBD6CCB5887CEFF799361EAB5F1B1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mE92A72BF377F9BA7E0900A7BC0D2AEB0265511D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = ___achievementName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215* L_3;
		L_3 = Achievements_GetProgressByName_m2B165F6E9A23E899654283B5E645830B957A720E(L_1, NULL);
		Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD* L_4 = (Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD*)il2cpp_codegen_object_new(Callback_t348F28096BB6359770E4003D3F3A6D645E9974BD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_mC79D274A845DD174C23148392331D0C2601C1576(L_4, __this, (intptr_t)((void*)DataEntry_achievementProgressCallback_m9D415118A5CBD6CCB5887CEFF799361EAB5F1B1E_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_tBA40613AEDD4560090FBAF26CA57F69C1A31A215* L_5;
		L_5 = Request_1_OnComplete_mE92A72BF377F9BA7E0900A7BC0D2AEB0265511D4(L_3, L_4, Request_1_OnComplete_mE92A72BF377F9BA7E0900A7BC0D2AEB0265511D4_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getAchievementDefinition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getAchievementDefinition_m7D3FB177225B02FDC870A12817721AED1F8DF522 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___achievementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_achievementDefinitionCallback_m8AF19523A41A17A0CC78EAE465843131C9A3BB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m13A85C5716534C581895C7CDE9C611D7BCD57F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = ___achievementName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7* L_3;
		L_3 = Achievements_GetDefinitionsByName_m3C40F8BD86E8D1464E4079B6443A667495AAA08C(L_1, NULL);
		Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5* L_4 = (Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5*)il2cpp_codegen_object_new(Callback_t12F198E9A76CB73A3F4DEFF820E6DF249F07E9E5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_m1AF836A78AEEC14D7BBF567F3C733CEE8EB79B49(L_4, __this, (intptr_t)((void*)DataEntry_achievementDefinitionCallback_m8AF19523A41A17A0CC78EAE465843131C9A3BB2F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_t390C544B30F4BC339992D242B3A6637DA7C97EA7* L_5;
		L_5 = Request_1_OnComplete_m13A85C5716534C581895C7CDE9C611D7BCD57F93(L_3, L_4, Request_1_OnComplete_m13A85C5716534C581895C7CDE9C611D7BCD57F93_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::checkEntitlement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_checkEntitlement_m04534284B09D66C2A2599E1CE1B68D95BBBB3F58 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getEntitlementCallback_mCAEE44A099357BE4F68CBD5D4782FF86A80F35C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_0;
		L_0 = Entitlements_IsUserEntitledToApplication_m12DD5469C7A81F00804FC5BD2C3E75157F3BA309(NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_1 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_1, __this, (intptr_t)((void*)DataEntry_getEntitlementCallback_mCAEE44A099357BE4F68CBD5D4782FF86A80F35C1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_2;
		L_2 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_0, L_1, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getUserNonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getUserNonce_m286B72252C2A6F9F0C494C5CCC130AF308D519AC (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_userProofCallback_m4CEEF34E7D7776F7F4C278696B5AF65570B82179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m3F50A33107EA0C6A77B46389951975C23FEEC6D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A5F46F9B593D71657AFF50E12009120980D7B15);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral8A5F46F9B593D71657AFF50E12009120980D7B15, NULL);
		Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C* L_0;
		L_0 = Users_GetUserProof_mFBAE7BC2918F0C81D510EC39C540F22F28700E28(NULL);
		Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA* L_1 = (Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA*)il2cpp_codegen_object_new(Callback_t0A5B859EEEB752556533BF9B6C7AD9AB9CBC06FA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_m52B40AED4A7F4080C0578B5C06EB49AA866EBA4F(L_1, __this, (intptr_t)((void*)DataEntry_userProofCallback_m4CEEF34E7D7776F7F4C278696B5AF65570B82179_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_tB774BFF663D8B08A599321246DD0E753AEE6C23C* L_2;
		L_2 = Request_1_OnComplete_m3F50A33107EA0C6A77B46389951975C23FEEC6D0(L_0, L_1, Request_1_OnComplete_m3F50A33107EA0C6A77B46389951975C23FEEC6D0_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::createAndJoinPrivateRoom(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_createAndJoinPrivateRoom_m027DA24A2B7EB7A8CCBFE929469CCBCEE970840D (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___joinPolicy0, String_t* ___maxUsers1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_createAndJoinPrivateRoomCallback_m2C6FB69E84726917D91756FCEB22B461E2F9B6DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53C31FD88FC45491206A97B3BA92809927395D84);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral53C31FD88FC45491206A97B3BA92809927395D84, NULL);
		String_t* L_0 = ___joinPolicy0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m7D758DA8A9CBB62661D2DB83937F7779CFB4453D(L_0, NULL);
		String_t* L_2 = ___maxUsers1;
		uint32_t L_3;
		L_3 = Convert_ToUInt32_m7D758DA8A9CBB62661D2DB83937F7779CFB4453D(L_2, NULL);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_4;
		L_4 = Rooms_CreateAndJoinPrivate_m3E7902B29C4D52D904CF59456C3B818E578159B2(L_1, L_3, (bool)0, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_5 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_5, __this, (intptr_t)((void*)DataEntry_createAndJoinPrivateRoomCallback_m2C6FB69E84726917D91756FCEB22B461E2F9B6DB_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_4, L_5, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getCurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getCurrentRoom_m5A3CC80D51C3128F3409ACA8349CC9E38FAD4954 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C82539476EBA2361ED4DCBDA020B419A348AEED);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral7C82539476EBA2361ED4DCBDA020B419A348AEED, NULL);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_0;
		L_0 = Rooms_GetCurrent_m34B0FA210CD645E50C2A7B29087E76D339757C8E(NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_1 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_1, __this, (intptr_t)((void*)DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_2;
		L_2 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_0, L_1, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getRoom_m052D5B788F8F3A82FDD31510B5ADFB1C8CAC830A (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4DEAD6C25FCA9E16FBD435817E4F6429A8D4451);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___roomID0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE4DEAD6C25FCA9E16FBD435817E4F6429A8D4451, L_0, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_1, NULL);
		String_t* L_2 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_2, NULL);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_4;
		L_4 = Rooms_Get_m5BD3B00447E38D661328C512EAA267FAB3CBF390(L_3, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_5 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_5, __this, (intptr_t)((void*)DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_4, L_5, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::joinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_joinRoom_mB6BA1A6D16C78F525D639183ED857DCBC3413F52 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_joinRoomCallback_mF0888856238BA8A1D66DAC7456E8C1A49E34A37F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4446267B0ADB09CEAD5B3B11746EBA22DF2E3915);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___roomID0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4446267B0ADB09CEAD5B3B11746EBA22DF2E3915, L_0, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_1, NULL);
		String_t* L_2 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_2, NULL);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_4;
		L_4 = Rooms_Join_m4D5EF33AC82309B4A8DE9F00D95FA12E66AFCE8D(L_3, (bool)1, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_5 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_5, __this, (intptr_t)((void*)DataEntry_joinRoomCallback_mF0888856238BA8A1D66DAC7456E8C1A49E34A37F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_4, L_5, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::leaveRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaveRoom_mDB68BE054CEC25A12ECDAF1F90547D2BFB59EB4E (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_leaveRoomCallback_mB0C104974995470334E5CC094DEF68D216A5B6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61955C32E6B7E67BA49805D7A3F33E999EF4189F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___roomID0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral61955C32E6B7E67BA49805D7A3F33E999EF4189F, L_0, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_1, NULL);
		String_t* L_2 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_2, NULL);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_4;
		L_4 = Rooms_Leave_mA3D120D16515D494AB8146DB8C03F639A2CECC77(L_3, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_5 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_5, __this, (intptr_t)((void*)DataEntry_leaveRoomCallback_mB0C104974995470334E5CC094DEF68D216A5B6B0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_4, L_5, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::kickUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_kickUser_m21DEA1A7589CC461E9AC745A12DC914AF72F3432 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___userID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1390C763341D99E40AB8A6BA2ABDD6E54A4CE5B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABF9398EEFD6ECA47C416C7BF1927883C858D16D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___userID1;
		String_t* L_1 = ___roomID0;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1390C763341D99E40AB8A6BA2ABDD6E54A4CE5B5, L_0, _stringLiteralABF9398EEFD6ECA47C416C7BF1927883C858D16D, L_1, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_2, NULL);
		String_t* L_3 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_3, NULL);
		String_t* L_5 = ___userID1;
		uint64_t L_6;
		L_6 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_5, NULL);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_7;
		L_7 = Rooms_KickUser_m562457C772E119A3C7E5E62F32016777A33DF8CB(L_4, L_6, ((int32_t)10), NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_8 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_8, __this, (intptr_t)((void*)DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_9;
		L_9 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_7, L_8, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getLoggedInUser_m59ACED4D6203AC059B94CF7D584439E26260C540 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getUserCallback_mD0E8EE956C42AC047F6DE819F07E55ACCE849F97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAB37D9C199667058CA8B43F9AC3B24069EC4B1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralFAB37D9C199667058CA8B43F9AC3B24069EC4B1B, NULL);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_0;
		L_0 = Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_1 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_1, __this, (intptr_t)((void*)DataEntry_getUserCallback_mD0E8EE956C42AC047F6DE819F07E55ACCE849F97_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_2;
		L_2 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_0, L_1, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getUser_m624A6CA6E4898FFE4AF9883DED5BF1EB3F78A204 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___userID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getUserCallback_mD0E8EE956C42AC047F6DE819F07E55ACCE849F97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DADAF53A242F347691A36533ED107041D677B0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___userID0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6DADAF53A242F347691A36533ED107041D677B0C, L_0, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_1, NULL);
		String_t* L_2 = ___userID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_2, NULL);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_4;
		L_4 = Users_Get_m1D73F64C0CD11B8B6A8066425893940D351493A0(L_3, NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_5 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_5, __this, (intptr_t)((void*)DataEntry_getUserCallback_mD0E8EE956C42AC047F6DE819F07E55ACCE849F97_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_6;
		L_6 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_4, L_5, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getLoggedInFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getLoggedInFriends_mB6869715887978481B2DFD67EFC582AE3A143B92 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getFriendsCallback_m61D1F63EC13F53B37599C52B192046935A498865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B1B0E5FAEC96BE9A7969FE0ED275C8AD3545277);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral7B1B0E5FAEC96BE9A7969FE0ED275C8AD3545277, NULL);
		Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* L_0;
		L_0 = Users_GetLoggedInUserFriends_mB34BA2A578306FA8E3684D4097544AC2DC8F627F(NULL);
		Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E* L_1 = (Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E*)il2cpp_codegen_object_new(Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mB6BF3366635F92400E69587BD7369928D2C7B5B0(L_1, __this, (intptr_t)((void*)DataEntry_getFriendsCallback_m61D1F63EC13F53B37599C52B192046935A498865_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* L_2;
		L_2 = Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215(L_0, L_1, Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getInvitableUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getInvitableUsers_mCABE5F4F4F7A89CA7E63C6B75D611E4ABCA9EBB5 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getInvitableUsersCallback_m7AA6207A4C863A74016701298D74E4B0E4DC633C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E758227CF5C8EA8D2743CCA1C5E890C11026D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralB5E758227CF5C8EA8D2743CCA1C5E890C11026D3, NULL);
		Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* L_0;
		L_0 = Rooms_GetInvitableUsers_m36054AA18B319AA97A1E8F71CFCFFE502528BD9F(NULL);
		Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E* L_1 = (Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E*)il2cpp_codegen_object_new(Callback_t48BA0579E8C6EA7E7CFA38266E0C194358EE616E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mB6BF3366635F92400E69587BD7369928D2C7B5B0(L_1, __this, (intptr_t)((void*)DataEntry_getInvitableUsersCallback_m7AA6207A4C863A74016701298D74E4B0E4DC633C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8* L_2;
		L_2 = Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215(L_0, L_1, Request_1_OnComplete_m81A4231A0C551190923CEB4C9EA3C6584631B215_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::inviteUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_inviteUser_m5F72BB146929D51D1BCE0F0E471960326221FC3C (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___inviteToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_inviteUserCallback_m5F17E487EF50EB30C38BE22D0A54E1E52D8A67D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F789C7015EDCD8428BEEF2627D0CE6FC3D2161C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6B4381464714B4E20BF34C7BBB7C55921BE8523);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___inviteToken1;
		String_t* L_1 = ___roomID0;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral9F789C7015EDCD8428BEEF2627D0CE6FC3D2161C, L_0, _stringLiteralD6B4381464714B4E20BF34C7BBB7C55921BE8523, L_1, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_2, NULL);
		String_t* L_3 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_3, NULL);
		String_t* L_5 = ___inviteToken1;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Rooms_InviteUser_m3A095A2BCC4AA643EC105D163B9C4B621A2C69AC(L_4, L_5, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_7 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_7, __this, (intptr_t)((void*)DataEntry_inviteUserCallback_m5F17E487EF50EB30C38BE22D0A54E1E52D8A67D9_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_8;
		L_8 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_6, L_7, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::setRoomDescription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_setRoomDescription_m13B492F45364D2F98401BD917CC4C05C4FFC130A (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___description1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CFCFDAA6866F9B581D29C31DCF56A4FE1D2A97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6B4381464714B4E20BF34C7BBB7C55921BE8523);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___description1;
		String_t* L_1 = ___roomID0;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralA5CFCFDAA6866F9B581D29C31DCF56A4FE1D2A97, L_0, _stringLiteralD6B4381464714B4E20BF34C7BBB7C55921BE8523, L_1, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_2, NULL);
		String_t* L_3 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_3, NULL);
		String_t* L_5 = ___description1;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Rooms_SetDescription_mB3F47E463006005DD14E3C0483709FA8AFCE17D1(L_4, L_5, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_7 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_7, __this, (intptr_t)((void*)DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_8;
		L_8 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_6, L_7, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::updateRoomDataStore(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_updateRoomDataStore_mBCB0D5F140344A104D25223F561825DD02294E51 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___roomID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09BE46CFC570E852E7D7F8966E8A962FCCD4FFE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10612B607F62D4956B44212696B4D1E5D5F37023);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90708ED394FEE14162EE26AF32C50B47073934C1);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, L_2, L_3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral09BE46CFC570E852E7D7F8966E8A962FCCD4FFE2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral09BE46CFC570E852E7D7F8966E8A962FCCD4FFE2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___key1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral90708ED394FEE14162EE26AF32C50B47073934C1);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral90708ED394FEE14162EE26AF32C50B47073934C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___value2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral10612B607F62D4956B44212696B4D1E5D5F37023);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral10612B607F62D4956B44212696B4D1E5D5F37023);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___roomID0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_12, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_14, NULL);
		String_t* L_15 = ___roomID0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_16;
		L_16 = Convert_ToUInt64_m9348B83E10B3F4C3F9E8C03B37CDF5F09FBE267E(L_15, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = V_0;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_18;
		L_18 = Rooms_UpdateDataStore_mECD4F3F3392C36B29316009C2E5E313A63E2E637(L_16, L_17, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_19 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_19, __this, (intptr_t)((void*)DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_20;
		L_20 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_18, L_19, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::printOutputLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, String_t* ___newLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___dataOutput_4;
		String_t* L_1 = ___newLine0;
		String_t* L_2;
		L_2 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___dataOutput_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, L_1, L_2, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::outputRoomDetails(Oculus.Platform.Models.Room)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_outputRoomDetails_mFBC32E83BA0B0F4C5EA980A9CF5FD142827D4396 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___room0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomJoinPolicy_tFE64945B2883F6122D2E158EAD2EE58F99A58A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomType_t3568C36CAB5E355168F9A2B08D8045BD5E9C25A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCB5BA4C133B7E5BA7CA4ADE89029A9DB7C7198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF65C57E50C6B89F46AD08E017CDC95CC32E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37177F94F58631A946E38C26D526F41643C36133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FBE1E4876E6FC3B6024EB2A991D8CC78B87140D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50283DD864F30ADAF61600086976BA0AD6FFDBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62FDA796EAA8D4A32E366505CF6A9958A6B70C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA34D6EF1E2362FDF218C3F66A14BD063BD368435);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB18BADDEE7C309125D66FB0DAD563A86A1269891);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral0CCB5BA4C133B7E5BA7CA4ADE89029A9DB7C7198);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0CCB5BA4C133B7E5BA7CA4ADE89029A9DB7C7198);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3 = ___room0;
		NullCheck(L_3);
		uint64_t* L_4 = (&L_3->___ID_3);
		String_t* L_5;
		L_5 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral62FDA796EAA8D4A32E366505CF6A9958A6B70C99);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral62FDA796EAA8D4A32E366505CF6A9958A6B70C99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_8 = ___room0;
		NullCheck(L_8);
		uint64_t* L_9 = (&L_8->___ApplicationID_0);
		String_t* L_10;
		L_10 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB18BADDEE7C309125D66FB0DAD563A86A1269891);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB18BADDEE7C309125D66FB0DAD563A86A1269891);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_13 = ___room0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Description_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_12, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_15, NULL);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_16 = ___room0;
		NullCheck(L_16);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_17 = L_16->___UsersOptional_18;
		if (L_17)
		{
			goto IL_0059;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0064;
	}

IL_0059:
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_18 = ___room0;
		NullCheck(L_18);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_19 = L_18->___UsersOptional_18;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_19, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		G_B3_0 = L_20;
	}

IL_0064:
	{
		V_0 = G_B3_0;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_21 = ___room0;
		NullCheck(L_21);
		uint32_t* L_22 = (&L_21->___MaxUsers_11);
		String_t* L_23;
		L_23 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_22, NULL);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral50283DD864F30ADAF61600086976BA0AD6FFDBB0, L_23, _stringLiteralA34D6EF1E2362FDF218C3F66A14BD063BD368435, L_24, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_25, NULL);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_26 = ___room0;
		NullCheck(L_26);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_27 = L_26->___OwnerOptional_13;
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_28 = ___room0;
		NullCheck(L_28);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_29 = L_28->___OwnerOptional_13;
		NullCheck(L_29);
		uint64_t* L_30 = (&L_29->___ID_1);
		String_t* L_31;
		L_31 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_30, NULL);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_32 = ___room0;
		NullCheck(L_32);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_33 = L_32->___OwnerOptional_13;
		NullCheck(L_33);
		String_t* L_34 = L_33->___OculusID_4;
		String_t* L_35;
		L_35 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral4FBE1E4876E6FC3B6024EB2A991D8CC78B87140D, L_31, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_34, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_35, NULL);
	}

IL_00c4:
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_36 = ___room0;
		NullCheck(L_36);
		int32_t* L_37 = (&L_36->___JoinPolicy_7);
		Il2CppFakeBox<int32_t> L_38(RoomJoinPolicy_tFE64945B2883F6122D2E158EAD2EE58F99A58A12_il2cpp_TypeInfo_var, L_37);
		String_t* L_39;
		L_39 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_38), NULL);
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0DF65C57E50C6B89F46AD08E017CDC95CC32E1AA, L_39, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_40, NULL);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_41 = ___room0;
		NullCheck(L_41);
		int32_t* L_42 = (&L_41->___Type_17);
		Il2CppFakeBox<int32_t> L_43(RoomType_t3568C36CAB5E355168F9A2B08D8045BD5E9C25A5_il2cpp_TypeInfo_var, L_42);
		String_t* L_44;
		L_44 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_43), NULL);
		String_t* L_45;
		L_45 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral37177F94F58631A946E38C26D526F41643C36133, L_44, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_45, NULL);
		V_1 = ((int32_t)1086418033);
		int32_t L_46;
		L_46 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((uint32_t*)(&V_1), NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::outputUserArray(Oculus.Platform.Models.UserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_outputUserArray_m13BC48533E02E08B8AF56CA68259BAC4B870378F (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___users0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_1 = NULL;
	{
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_0 = ___users0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93(L_0, DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_007d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006a_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_5;
				L_5 = InterfaceFuncInvoker0< User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, _stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_9 = V_1;
				NullCheck(L_9);
				uint64_t* L_10 = (&L_9->___ID_1);
				String_t* L_11;
				L_11 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_10, NULL);
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_11);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_14 = V_1;
				NullCheck(L_14);
				String_t* L_15 = L_14->___OculusID_4;
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_15);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_18 = V_1;
				NullCheck(L_18);
				String_t* L_19 = L_18->___Presence_5;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_19);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_19);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_22 = V_1;
				NullCheck(L_22);
				String_t* L_23 = L_22->___InviteToken_3;
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_23);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_23);
				String_t* L_24;
				L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_24, NULL);
			}

IL_006a_1:
			{
				RuntimeObject* L_25 = V_0;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::userProofCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_userProofCallback_m4CEEF34E7D7776F7F4C278696B5AF65570B82179 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mA4DB507B5FD1A5847074AE28B9910E4686150828_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral225849BE345A969B0BF7C08FE1826D5A43D3B40F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57561F5366EB5F6DCBABA97949CE1870AB5A416F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB1BACBF4BC66DE384EB416D9B721AD93A0848C7);
		s_Il2CppMethodInitialized = true;
	}
	UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19* V_0 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral225849BE345A969B0BF7C08FE1826D5A43D3B40F, NULL);
		Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716* L_2 = ___msg0;
		NullCheck(L_2);
		UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19* L_3;
		L_3 = Message_1_get_Data_mA4DB507B5FD1A5847074AE28B9910E4686150828_inline(L_2, Message_1_get_Data_mA4DB507B5FD1A5847074AE28B9910E4686150828_RuntimeMethod_var);
		V_0 = L_3;
		UserProof_tAA63D177B100084A245768933EAC5A014AF5FB19* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Value_0;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCB1BACBF4BC66DE384EB416D9B721AD93A0848C7, L_5, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_6, NULL);
		return;
	}

IL_0031:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral57561F5366EB5F6DCBABA97949CE1870AB5A416F, NULL);
		Message_1_t15C5DF9B852042C451F94FB06AE4A42646671716* L_7 = ___msg0;
		NullCheck(L_7);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_8;
		L_8 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_7);
		V_1 = L_8;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = L_9->___Message_2;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_10, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_11, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getEntitlementCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getEntitlementCallback_mCAEE44A099357BE4F68CBD5D4782FF86A80F35C1 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8, NULL);
		return;
	}

IL_0014:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::leaderboardGetCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaderboardGetCallback_mA1DE4462B4F26D1A6C01DE2DA407F9F689ED6435 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m735A4209EB116B9D0B8289C227DC5023F6C7DEC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7D15C6788F45D32BF5415ECEA787D7992A22AAC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m5C8C2B4824B5DDF54637962C6989189204572630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CCA8B878B39779FD375578FCB5CAF19070686ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADADF3C8B28503740B195E491FCD48B7DBC501F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* V_1 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_2 = NULL;
	{
		Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_00a0;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral8CCA8B878B39779FD375578FCB5CAF19070686ED, NULL);
		Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6* L_2 = ___msg0;
		NullCheck(L_2);
		LeaderboardEntryList_tB421181A99FE7D44EF4C5D8A5846753CA4BB0EA1* L_3;
		L_3 = Message_1_get_Data_m5C8C2B4824B5DDF54637962C6989189204572630_inline(L_2, Message_1_get_Data_m5C8C2B4824B5DDF54637962C6989189204572630_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DeserializableList_1_GetEnumerator_m735A4209EB116B9D0B8289C227DC5023F6C7DEC6(L_3, DeserializableList_1_GetEnumerator_m735A4209EB116B9D0B8289C227DC5023F6C7DEC6_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_009f;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_009f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_0024_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* L_8;
				L_8 = InterfaceFuncInvoker0< LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.LeaderboardEntry>::get_Current() */, IEnumerator_1_t7D15C6788F45D32BF5415ECEA787D7992A22AAC7_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
				LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* L_11 = V_1;
				NullCheck(L_11);
				int32_t* L_12 = (&L_11->___Rank_3);
				String_t* L_13;
				L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, L_13);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_10;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
				LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* L_16 = V_1;
				NullCheck(L_16);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_17 = L_16->___User_8;
				NullCheck(L_17);
				String_t* L_18 = L_17->___OculusID_4;
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_18);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_15;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* L_21 = V_1;
				NullCheck(L_21);
				int64_t* L_22 = (&L_21->___Score_4);
				String_t* L_23;
				L_23 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B(L_22, NULL);
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_23);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_23);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_20;
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
				LeaderboardEntry_tE5A52F816FDEDC157326C99911A5537C5BFE5060* L_26 = V_1;
				NullCheck(L_26);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_27 = (&L_26->___Timestamp_7);
				String_t* L_28;
				L_28 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_27, NULL);
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, L_28);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_28);
				String_t* L_29;
				L_29 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_29, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_30 = V_0;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_00c8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralADADF3C8B28503740B195E491FCD48B7DBC501F8, NULL);
		Message_1_tA6E9BF51F3F5181AACE5075E613D69AC7CDBA1A6* L_32 = ___msg0;
		NullCheck(L_32);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_33;
		L_33 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_32);
		V_2 = L_33;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_34 = V_2;
		NullCheck(L_34);
		String_t* L_35 = L_34->___Message_2;
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_35, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_36, NULL);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::leaderboardWriteCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaderboardWriteCallback_m98DB146A413D15CE4BCD9AE109A68FFE7E7AA84F (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4A4FC27000B98F3A3B69BF24E1A684E926745E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A75A62BB1FEC2FFEABF54296BF555C078B48AF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73C9F749635A0D75A8E196B77CB94A0F35BFCFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEF57C9991ABE2C7C59473A48FB3D8C1B77BC19B);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralE73C9F749635A0D75A8E196B77CB94A0F35BFCFB, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(((Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A*)CastclassClass((RuntimeObject*)L_2, Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A_il2cpp_TypeInfo_var)));
		bool L_3;
		L_3 = Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_inline(((Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A*)CastclassClass((RuntimeObject*)L_2, Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A_il2cpp_TypeInfo_var)), Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralFEF57C9991ABE2C7C59473A48FB3D8C1B77BC19B, NULL);
		return;
	}

IL_002c:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral4F4A4FC27000B98F3A3B69BF24E1A684E926745E, NULL);
		return;
	}

IL_0038:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral8A75A62BB1FEC2FFEABF54296BF555C078B48AF3, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_4 = ___msg0;
		NullCheck(L_4);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5;
		L_5 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_4);
		V_0 = L_5;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Message_2;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_7, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_8, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::achievementFieldsCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_achievementFieldsCallback_m7904FB75E758011C8B9F52DD093D4AF1B7154977 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12576603FD0BF68450852DD71E03966A14C67CD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8868EE439C093EFE6227936162EBFE1B6A9B54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral4E8868EE439C093EFE6227936162EBFE1B6A9B54, NULL);
		return;
	}

IL_0014:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral12576603FD0BF68450852DD71E03966A14C67CD1, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::achievementCountCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_achievementCountCallback_m6D044F1DEAAFD0A26C41A14EFA1971507FC66FBD (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral191F166329A46D024FFB3D9E9D20933BCF2C9006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC80E2483D866C3CBCBA0E8A81A05FB50E5D79936);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral191F166329A46D024FFB3D9E9D20933BCF2C9006, NULL);
		return;
	}

IL_0014:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralC80E2483D866C3CBCBA0E8A81A05FB50E5D79936, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::achievementUnlockCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_achievementUnlockCallback_m96CF052655F582B3DF7EB23CF4CCE943762AA112 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B15C3156FB9A3410CA04089DB592EFAF713F8DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB88CE824F615CA983E62FF4E871CCF638D6C05AE);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralB88CE824F615CA983E62FF4E871CCF638D6C05AE, NULL);
		return;
	}

IL_0014:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral5B15C3156FB9A3410CA04089DB592EFAF713F8DF, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::achievementProgressCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_achievementProgressCallback_m9D415118A5CBD6CCB5887CEFF799361EAB5F1B1E (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_t3399BBEE644D14520DE73725A4F098F45E1D2589* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_mD1538F698A5EC6DCD33D41EEA655474C5CE213AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02B3DF1F509825EAC1EC1386600666B7F3A0D19A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E24CEDCF34D9304DEA90F7B6CCFC5DE658F9D04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FBF510CEC3C051838F753E8E3804AC73FA94ADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FD0C74C87095054668B74B9A9D318BBA886E9D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D99629508594497A9A2B2D1038916726E8B6D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7221CF7C464DEECEE0E28DCD6217EDE3B068304F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B8986E15C0F7C222FF9FCD6B48A64E3899A31B0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE* V_1 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_2 = NULL;
	{
		Message_1_t3399BBEE644D14520DE73725A4F098F45E1D2589* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0095;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral5FBF510CEC3C051838F753E8E3804AC73FA94ADE, NULL);
		Message_1_t3399BBEE644D14520DE73725A4F098F45E1D2589* L_2 = ___msg0;
		NullCheck(L_2);
		AchievementProgressList_t6B759119872D99D481D2F305A0849799D9E44E6F* L_3;
		L_3 = VirtualFuncInvoker0< AchievementProgressList_t6B759119872D99D481D2F305A0849799D9E44E6F* >::Invoke(11 /* Oculus.Platform.Models.AchievementProgressList Oculus.Platform.Message::GetAchievementProgressList() */, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DeserializableList_1_GetEnumerator_mD1538F698A5EC6DCD33D41EEA655474C5CE213AC(L_3, DeserializableList_1_GetEnumerator_mD1538F698A5EC6DCD33D41EEA655474C5CE213AC_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0094:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0081_1;
			}

IL_0024_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE* L_8;
				L_8 = InterfaceFuncInvoker0< AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.AchievementProgress>::get_Current() */, IEnumerator_1_t02B3DF1F509825EAC1EC1386600666B7F3A0D19A_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE* L_9 = V_1;
				NullCheck(L_9);
				bool L_10 = L_9->___IsUnlocked_2;
				if (!L_10)
				{
					goto IL_0040_1;
				}
			}
			{
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral7B8986E15C0F7C222FF9FCD6B48A64E3899A31B0, NULL);
				goto IL_004b_1;
			}

IL_0040_1:
			{
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral3E24CEDCF34D9304DEA90F7B6CCFC5DE658F9D04, NULL);
			}

IL_004b_1:
			{
				AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE* L_11 = V_1;
				NullCheck(L_11);
				String_t* L_12 = L_11->___Bitfield_0;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
				String_t* L_14;
				L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral67D99629508594497A9A2B2D1038916726E8B6D7, L_13, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_14, NULL);
				AchievementProgress_t4E3196B933910D3BFB3A0DB29996C15FE26561AE* L_15 = V_1;
				NullCheck(L_15);
				uint64_t* L_16 = (&L_15->___Count_1);
				String_t* L_17;
				L_17 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_16, NULL);
				String_t* L_18;
				L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5FD0C74C87095054668B74B9A9D318BBA886E9D4, L_17, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_18, NULL);
			}

IL_0081_1:
			{
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_00bd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral7221CF7C464DEECEE0E28DCD6217EDE3B068304F, NULL);
		Message_1_t3399BBEE644D14520DE73725A4F098F45E1D2589* L_21 = ___msg0;
		NullCheck(L_21);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_22;
		L_22 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_21);
		V_2 = L_22;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_23 = V_2;
		NullCheck(L_23);
		String_t* L_24 = L_23->___Message_2;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_24, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_25, NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::achievementDefinitionCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementDefinitionList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_achievementDefinitionCallback_m8AF19523A41A17A0CC78EAE465843131C9A3BB2F (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_tBD474C7F30EF588F32F3721FB47791C61A43A3F1* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_mAC083D84F92906EF099482B15D8BC6E3195E0E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD08E06D3764707017BF3E8E491EE17F76A670D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0755B7E364B77D9BB3BEFC3EF4FFB862E9570DB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2518FEF899597D3DC2CD4DB72A6EBBFF5A39BE23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB64132DD8FC0CEDB01DF37CF525BEB99914CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E43D0FA0B142E3F3C3C80B28B7FB598DF5C4680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE9F33A231D8F3251F9FD7D72877E80BF62510CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA458F7132B2BCD5C74464DA66636E5F863CB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2D93D73EFB98C82E58AC126525A3CCD82365940);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC35A1A1D733D0A11D65543BC6D22D5A8C62ECF6);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* V_1 = NULL;
	int32_t V_2 = 0;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_3 = NULL;
	{
		Message_1_tBD474C7F30EF588F32F3721FB47791C61A43A3F1* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_00e7;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral2518FEF899597D3DC2CD4DB72A6EBBFF5A39BE23, NULL);
		Message_1_tBD474C7F30EF588F32F3721FB47791C61A43A3F1* L_2 = ___msg0;
		NullCheck(L_2);
		AchievementDefinitionList_t86268A10B1135620D1EF1258E43228A17FDD9F39* L_3;
		L_3 = VirtualFuncInvoker0< AchievementDefinitionList_t86268A10B1135620D1EF1258E43228A17FDD9F39* >::Invoke(10 /* Oculus.Platform.Models.AchievementDefinitionList Oculus.Platform.Message::GetAchievementDefinitions() */, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DeserializableList_1_GetEnumerator_mAC083D84F92906EF099482B15D8BC6E3195E0E57(L_3, DeserializableList_1_GetEnumerator_mAC083D84F92906EF099482B15D8BC6E3195E0E57_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_00e6;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00e6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d0_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* L_8;
				L_8 = InterfaceFuncInvoker0< AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.AchievementDefinition>::get_Current() */, IEnumerator_1_tD08E06D3764707017BF3E8E491EE17F76A670D03_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10 = L_9->___Type_0;
				V_2 = L_10;
				int32_t L_11 = V_2;
				switch (L_11)
				{
					case 0:
					{
						goto IL_00c5_1;
					}
					case 1:
					{
						goto IL_004d_1;
					}
					case 2:
					{
						goto IL_005a_1;
					}
					case 3:
					{
						goto IL_009d_1;
					}
				}
			}
			{
				goto IL_00c5_1;
			}

IL_004d_1:
			{
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral0755B7E364B77D9BB3BEFC3EF4FFB862E9570DB1, NULL);
				goto IL_00d0_1;
			}

IL_005a_1:
			{
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralBE9F33A231D8F3251F9FD7D72877E80BF62510CA, NULL);
				AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* L_12 = V_1;
				NullCheck(L_12);
				uint32_t* L_13 = (&L_12->___BitfieldLength_2);
				String_t* L_14;
				L_14 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_13, NULL);
				String_t* L_15;
				L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDBA458F7132B2BCD5C74464DA66636E5F863CB01, L_14, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_15, NULL);
				AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* L_16 = V_1;
				NullCheck(L_16);
				uint64_t* L_17 = (&L_16->___Target_3);
				String_t* L_18;
				L_18 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_17, NULL);
				String_t* L_19;
				L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8E43D0FA0B142E3F3C3C80B28B7FB598DF5C4680, L_18, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_19, NULL);
				goto IL_00d0_1;
			}

IL_009d_1:
			{
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralFC35A1A1D733D0A11D65543BC6D22D5A8C62ECF6, NULL);
				AchievementDefinition_tC9D6BFC1A0580F2BB0DD5B93D809403E2741A8AB* L_20 = V_1;
				NullCheck(L_20);
				uint64_t* L_21 = (&L_20->___Target_3);
				String_t* L_22;
				L_22 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_21, NULL);
				String_t* L_23;
				L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8E43D0FA0B142E3F3C3C80B28B7FB598DF5C4680, L_22, NULL);
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_23, NULL);
				goto IL_00d0_1;
			}

IL_00c5_1:
			{
				DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral2FB64132DD8FC0CEDB01DF37CF525BEB99914CC7, NULL);
			}

IL_00d0_1:
			{
				RuntimeObject* L_24 = V_0;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_010f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e7:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralF2D93D73EFB98C82E58AC126525A3CCD82365940, NULL);
		Message_1_tBD474C7F30EF588F32F3721FB47791C61A43A3F1* L_26 = ___msg0;
		NullCheck(L_26);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_27;
		L_27 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_26);
		V_3 = L_27;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_28 = V_3;
		NullCheck(L_28);
		String_t* L_29 = L_28->___Message_2;
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_29, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_30, NULL);
	}

IL_010f:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::createAndJoinPrivateRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_createAndJoinPrivateRoomCallback_m2C6FB69E84726917D91756FCEB22B461E2F9B6DB (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268D77D9A0B2E8B0B84ADC12E445064E2D76171D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A97C7A9CE08269358528A5B41256A4DA81D2F32);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral268D77D9A0B2E8B0B84ADC12E445064E2D76171D, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		DataEntry_outputRoomDetails_mFBC32E83BA0B0F4C5EA980A9CF5FD142827D4396(__this, L_3, NULL);
		return;
	}

IL_0020:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral7A97C7A9CE08269358528A5B41256A4DA81D2F32, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_4 = ___msg0;
		NullCheck(L_4);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5;
		L_5 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_4);
		V_0 = L_5;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Message_2;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_7, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_8, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getCurrentRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getCurrentRoomCallback_mD929100AD5A35769C326FB85E6DDAF4DF0EAD4E5 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E1C976F60244B115100EC190008B33BF33964D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F756C9D78C754A456A25655842D949FD3A24198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral5F756C9D78C754A456A25655842D949FD3A24198, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		DataEntry_outputRoomDetails_mFBC32E83BA0B0F4C5EA980A9CF5FD142827D4396(__this, L_3, NULL);
		return;
	}

IL_0020:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral5E1C976F60244B115100EC190008B33BF33964D8, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_4 = ___msg0;
		NullCheck(L_4);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5;
		L_5 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_4);
		V_0 = L_5;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Message_2;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_7, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_8, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::joinRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_joinRoomCallback_mF0888856238BA8A1D66DAC7456E8C1A49E34A37F (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB6ACFDF2C1A5B35A8941FD5B4879B24F494485);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral7CB6ACFDF2C1A5B35A8941FD5B4879B24F494485, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		DataEntry_outputRoomDetails_mFBC32E83BA0B0F4C5EA980A9CF5FD142827D4396(__this, L_3, NULL);
		return;
	}

IL_0020:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_4 = ___msg0;
		NullCheck(L_4);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5;
		L_5 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_4);
		V_0 = L_5;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Message_2;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_7, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_8, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::leaveRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaveRoomCallback_mB0C104974995470334E5CC094DEF68D216A5B6B0 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8382F4AC14DA5B2B80FF9294DD4E60F6DB2932D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA15FFC56B7874938C2A6A24E1F97FBEC2836EE9);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralF8382F4AC14DA5B2B80FF9294DD4E60F6DB2932D, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		DataEntry_outputRoomDetails_mFBC32E83BA0B0F4C5EA980A9CF5FD142827D4396(__this, L_3, NULL);
		return;
	}

IL_0020:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralFA15FFC56B7874938C2A6A24E1F97FBEC2836EE9, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_4 = ___msg0;
		NullCheck(L_4);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5;
		L_5 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_4);
		V_0 = L_5;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Message_2;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_7, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_8, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getUserCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.User>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getUserCallback_mD0E8EE956C42AC047F6DE819F07E55ACCE849F97 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1940EA0E4417CCD58675D987C883CCDF53A5ADAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D2DCD03432CB51587635B17FD0A347EFAC77EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_0 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0075;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral52D2DCD03432CB51587635B17FD0A347EFAC77EB, NULL);
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_2 = ___msg0;
		NullCheck(L_2);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_3;
		L_3 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline(L_2, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0E30123A1B84E85EE03B2B747FB0AB8084019B48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_7 = V_0;
		NullCheck(L_7);
		uint64_t* L_8 = (&L_7->___ID_1);
		String_t* L_9;
		L_9 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___OculusID_4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->___Presence_5;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___InviteToken_3;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_21);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_19, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_22, NULL);
		return;
	}

IL_0075:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral1940EA0E4417CCD58675D987C883CCDF53A5ADAA, NULL);
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_23 = ___msg0;
		NullCheck(L_23);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_24;
		L_24 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_23);
		V_1 = L_24;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26 = L_25->___Message_2;
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_26, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_27, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getFriendsCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getFriendsCallback_m61D1F63EC13F53B37599C52B192046935A498865 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84E7AC6981B27F44D8763F2DFC717C2C203BAEC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939181588842FF7F98CC1212E170637F4EEA8773);
		s_Il2CppMethodInitialized = true;
	}
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* V_0 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral84E7AC6981B27F44D8763F2DFC717C2C203BAEC6, NULL);
		Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* L_2 = ___msg0;
		NullCheck(L_2);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_3;
		L_3 = Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_inline(L_2, Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_RuntimeMethod_var);
		V_0 = L_3;
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_4 = V_0;
		DataEntry_outputUserArray_m13BC48533E02E08B8AF56CA68259BAC4B870378F(__this, L_4, NULL);
		return;
	}

IL_0022:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral939181588842FF7F98CC1212E170637F4EEA8773, NULL);
		Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* L_5 = ___msg0;
		NullCheck(L_5);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6;
		L_6 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_5);
		V_1 = L_6;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___Message_2;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_8, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_9, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::getInvitableUsersCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getInvitableUsersCallback_m7AA6207A4C863A74016701298D74E4B0E4DC633C (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323C2A5A31249381ACFBC419E6172995B7A7A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD901F99CE5B7BDAD4DAC96D048448BD8C887EB53);
		s_Il2CppMethodInitialized = true;
	}
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* V_0 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralD901F99CE5B7BDAD4DAC96D048448BD8C887EB53, NULL);
		Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* L_2 = ___msg0;
		NullCheck(L_2);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_3;
		L_3 = Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_inline(L_2, Message_1_get_Data_m717238A958768B8393487B5456D7D005AB8CE6B6_RuntimeMethod_var);
		V_0 = L_3;
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_4 = V_0;
		DataEntry_outputUserArray_m13BC48533E02E08B8AF56CA68259BAC4B870378F(__this, L_4, NULL);
		return;
	}

IL_0022:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral1323C2A5A31249381ACFBC419E6172995B7A7A26, NULL);
		Message_1_tAC26FE696ABCA231BB85A57FA1E4832FAFE4A015* L_5 = ___msg0;
		NullCheck(L_5);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6;
		L_6 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_5);
		V_1 = L_6;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___Message_2;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_8, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_9, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::inviteUserCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_inviteUserCallback_m5F17E487EF50EB30C38BE22D0A54E1E52D8A67D9 (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55220B98676243DE016C9A22A5D76B19AEFC0819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABE124DF0BF0B371251482CC6E27224B47406782);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteral55220B98676243DE016C9A22A5D76B19AEFC0819, NULL);
		return;
	}

IL_0014:
	{
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, _stringLiteralABE124DF0BF0B371251482CC6E27224B47406782, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		DataEntry_printOutputLine_m45AFBECA57ED2F0D49720639B11E7D77696F81C3(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.SimplePlatformSample.DataEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry__ctor_m70179404CDE1C1034959EEBEEED630C4259B326E (DataEntry_t52201AA541F537C955253A871AC6A7B123ECBDB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::get_packetID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpacketIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_packetID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CpacketIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Oculus.Platform.Samples.NetChat.chatPacket::get_textString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CtextStringU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_textString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CtextStringU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextStringU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Oculus.Platform.Samples.NetChat.chatPacket::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* chatPacket_Serialize_mFE298B3EE45E1CC24F9239D336CC32F19F5C19DA (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0078;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0078:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_4, L_3, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005c_1:
					{// begin finally (depth: 2)
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0065_1;
							}
						}
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0065_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_7;
						L_7 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(__this, NULL);
						NullCheck(L_7);
						int32_t L_8;
						L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
						if ((((int32_t)L_8) <= ((int32_t)((int32_t)512))))
						{
							goto IL_0036_2;
						}
					}
					{
						String_t* L_9;
						L_9 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(__this, NULL);
						NullCheck(L_9);
						String_t* L_10;
						L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 0, ((int32_t)511), NULL);
						chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline(__this, L_10, NULL);
					}

IL_0036_2:
					{
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_11 = V_1;
						int32_t L_12;
						L_12 = chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline(__this, NULL);
						NullCheck(L_11);
						VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_11, L_12);
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = V_1;
						String_t* L_14;
						L_14 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(__this, NULL);
						NullCheck(L_14);
						CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15;
						L_15 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_14, NULL);
						NullCheck(L_13);
						VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_13, L_15);
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = V_1;
						NullCheck(L_16);
						VirtualActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Char) */, L_16, 0);
						goto IL_0066_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0066_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
				NullCheck(L_17);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
				L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(39 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_17);
				V_2 = L_18;
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		return L_19;
	}
}
// Oculus.Platform.Samples.NetChat.chatPacket Oculus.Platform.Samples.NetChat.chatPacket::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* chatPacket_Deserialize_m969626B07732033FC28420D60574BFB94B0D35E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_2 = NULL;
	{
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_0 = (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296*)il2cpp_codegen_object_new(chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_2, L_1, NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0050;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_1;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_6, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003d_1:
					{// begin finally (depth: 2)
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = V_2;
							if (!L_7)
							{
								goto IL_0046_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = V_2;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_0046_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_9 = V_0;
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = V_2;
					NullCheck(L_10);
					int32_t L_11;
					L_11 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_10);
					NullCheck(L_9);
					chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline(L_9, L_11, NULL);
					chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_12 = V_0;
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
					L_13 = Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C(NULL);
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_2;
					NullCheck(L_14);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
					L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_14, ((int32_t)512));
					NullCheck(L_13);
					String_t* L_16;
					L_16 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_13, L_15);
					NullCheck(L_12);
					chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline(L_12, L_16, NULL);
					goto IL_0051;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_17 = V_0;
		return L_17;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_Start_m7A8EF727847729453750E6EEDB46F7CA106755BB (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___currentState_5 = 0;
		__this->___localUser_6 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localUser_6), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		__this->___remoteUser_7 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		__this->___currentRoom_8 = (Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)(Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL);
		__this->___lastPacketID_9 = 0;
		__this->___ratedMatchStarted_10 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A((String_t*)NULL, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_0 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_0, __this, (intptr_t)((void*)DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90_RuntimeMethod_var), NULL);
		Rooms_SetUpdateNotificationCallback_m91DAA806DCBE29A0DE31EB9C324F66DA9DD8BCEF(L_0, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_1 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_1, __this, (intptr_t)((void*)DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86_RuntimeMethod_var), NULL);
		Matchmaking_SetMatchFoundNotificationCallback_m5FD84AC9FE2986FB827DE7F6240848C127B36A80(L_1, NULL);
		DataEntry_checkEntitlement_mEB4952576422487933805C610570A96F9C9725B7(__this, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_Update_m36259A65AB37D5B8CA7C6B9DCF81B5511E2A65DA (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0;
		L_0 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = V_0;
		DataEntry_SubmitCommand_m2B2273D85F0E6C2B26BC3E291A5FA9A0AC98CBCF(__this, L_5, NULL);
	}

IL_0029:
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6;
		L_6 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		NullCheck(L_6);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0039:
	{
		DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A(__this, NULL);
		Request_RunCallbacks_mB86BB1543FDEF582E537265EF3BC2DCAACB86939(0, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::SubmitCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_SubmitCommand_m2B2273D85F0E6C2B26BC3E291A5FA9A0AC98CBCF (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___command0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		String_t* L_0 = ___command0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)33), 0, NULL);
		V_0 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0185;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		String_t* L_6 = V_1;
		uint32_t L_7;
		L_7 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7046F41E3D6045F7CFC5B2BBB4F295967F6FA9D8(L_6, NULL);
		V_2 = L_7;
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-502520314)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)923577301)))))
		{
			goto IL_0047;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)873244444))))
		{
			goto IL_0114;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923577301))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_017a;
	}

IL_0047:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-519297933))))
		{
			goto IL_00ae;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-502520314))))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_017a;
	}

IL_005c:
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-435409838)))))
		{
			goto IL_0079;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-485742695))))
		{
			goto IL_00c0;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-435409838))))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_017a;
	}

IL_0079:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-385076981))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-334744124))))
		{
			goto IL_00e4;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-166967934))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_017a;
	}

IL_0099:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (L_21)
		{
			goto IL_0132;
		}
	}
	{
		goto IL_017a;
	}

IL_00ae:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_23)
		{
			goto IL_0139;
		}
	}
	{
		goto IL_017a;
	}

IL_00c0:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
		if (L_25)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_017a;
	}

IL_00d2:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, NULL);
		if (L_27)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_017a;
	}

IL_00e4:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, NULL);
		if (L_29)
		{
			goto IL_014e;
		}
	}
	{
		goto IL_017a;
	}

IL_00f6:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		if (L_31)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_017a;
	}

IL_0105:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (L_33)
		{
			goto IL_0165;
		}
	}
	{
		goto IL_017a;
	}

IL_0114:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (L_35)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_017a;
	}

IL_0123:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		if (L_37)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_017a;
	}

IL_0132:
	{
		DataEntry_requestCreateRoom_mE16812155228F93592F74725FB237F358E05AD15(__this, NULL);
		return;
	}

IL_0139:
	{
		DataEntry_requestCreateFilterRoom_m070D6EFA28EE0839F92BBFEBDA1C84AE548F0992(__this, NULL);
		return;
	}

IL_0140:
	{
		DataEntry_requestFindMatch_m0EBABDA92E1917BB705978CD57833BC8795CC9EE(__this, NULL);
		return;
	}

IL_0147:
	{
		DataEntry_requestFindRoom_mFEBC2B3471414AA6ADE9DB27417783499794AE1E(__this, NULL);
		return;
	}

IL_014e:
	{
		DataEntry_requestFindFilteredRoom_mEBDEE9D663FCF12E5A767EDFDD4AE2EF48B9A946(__this, NULL);
		return;
	}

IL_0155:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_0;
		NullCheck(L_38);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 1;
		String_t* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		DataEntry_sendChat_m3CC704504D6548B5CD1FECE9247561891850EE04(__this, L_41, NULL);
		return;
	}

IL_0165:
	{
		DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1(__this, NULL);
		return;
	}

IL_016c:
	{
		DataEntry_requestStartRatedMatch_mC165EA843F2170E0440D796522EE872D7903E05A(__this, NULL);
		return;
	}

IL_0173:
	{
		DataEntry_requestReportResults_m7B9359AF8DC1E8DE209237856CFC304FC468A721(__this, NULL);
		return;
	}

IL_017a:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A, NULL);
	}

IL_0185:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::printOutputLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___newLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___dataOutput_4;
		String_t* L_1 = ___newLine0;
		String_t* L_2;
		L_2 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___dataOutput_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, L_1, L_2, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::checkEntitlement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_checkEntitlement_mEB4952576422487933805C610570A96F9C9725B7 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_0;
		L_0 = Entitlements_IsUserEntitledToApplication_m12DD5469C7A81F00804FC5BD2C3E75157F3BA309(NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_1 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_1, __this, (intptr_t)((void*)DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_2;
		L_2 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_0, L_1, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::getEntitlementCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8, NULL);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_2;
		L_2 = Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_3 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_3, __this, (intptr_t)((void*)DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_4;
		L_4 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_2, L_3, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		return;
	}

IL_002b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::init(Oculus.Platform.Message`1<Oculus.Platform.Models.User>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral264036AC47852FD60740287CA60085B23C6659EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_0 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_2 = ___msg0;
		NullCheck(L_2);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_3;
		L_3 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_inline(L_2, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		V_0 = L_3;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_4 = V_0;
		__this->___localUser_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localUser_6), (void*)L_4);
		__this->___currentState_5 = 1;
		return;
	}

IL_001e:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral264036AC47852FD60740287CA60085B23C6659EA, NULL);
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_5 = ___msg0;
		NullCheck(L_5);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_6;
		L_6 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_5);
		V_1 = L_6;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___Message_2;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_8, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_9, NULL);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_10;
		L_10 = Users_GetLoggedInUser_mD53B3D47CE30559128E164EB5BB1E4293B40B955(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_11 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_11, __this, (intptr_t)((void*)DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_12;
		L_12 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_10, L_11, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		__this->___currentState_5 = 0;
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateRoom_mE16812155228F93592F74725FB237F358E05AD15 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0074;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_008c;
			}
			case 6:
			{
				goto IL_0098;
			}
			case 7:
			{
				goto IL_00b0;
			}
			case 8:
			{
				goto IL_00bc;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0036:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_0042:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB, NULL);
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_2;
		L_2 = Matchmaking_CreateAndEnqueueRoom_m78B3EA8E5C8BC2DCE16F0F63A6D97B9CD64E7E6A(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, 8, (bool)1, (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)NULL, NULL);
		Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* L_3 = (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*)il2cpp_codegen_object_new(Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_m42FB3BC4C5F799AAB256CA92E9D85BC0F64FF1E4(L_3, __this, (intptr_t)((void*)DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_4;
		L_4 = Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED(L_2, L_3, Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		__this->___currentState_5 = 4;
		return;
	}

IL_0074:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		return;
	}

IL_0080:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		return;
	}

IL_008c:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		return;
	}

IL_0098:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		return;
	}

IL_00a4:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		return;
	}

IL_00b0:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		return;
	}

IL_00bc:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		return;
	}

IL_00c8:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::createRoomResponse(Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B89F5C37122339EE4665AEF418ED056BB476AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AADDB51D004EA589EB4E9DD5703135A929256F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E48DAB075275DC16F091D91060501E276CBB001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877D0194FF556ABDE79FFD3AEFFED01B977F695B);
		s_Il2CppMethodInitialized = true;
	}
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* V_0 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral73B89F5C37122339EE4665AEF418ED056BB476AF, NULL);
		Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* L_2 = ___msg0;
		NullCheck(L_2);
		MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* L_3;
		L_3 = Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_inline(L_2, Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_RuntimeMethod_var);
		NullCheck(L_3);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_4 = L_3->___Room_1;
		V_0 = L_4;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_5 = V_0;
		__this->___currentRoom_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)L_5);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_6 = V_0;
		NullCheck(L_6);
		uint64_t* L_7 = (&L_6->___ID_3);
		String_t* L_8;
		L_8 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7E48DAB075275DC16F091D91060501E276CBB001, L_8, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_9, NULL);
		__this->___currentState_5 = 7;
		return;
	}

IL_0049:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral7AADDB51D004EA589EB4E9DD5703135A929256F9, NULL);
		Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* L_10 = ___msg0;
		NullCheck(L_10);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_11;
		L_11 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_10);
		V_1 = L_11;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = L_12->___Message_2;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_13, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_14, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral877D0194FF556ABDE79FFD3AEFFED01B977F695B, NULL);
		__this->___currentState_5 = 1;
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateFilterRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateFilterRoom_m070D6EFA28EE0839F92BBFEBDA1C84AE548F0992 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C392FDC40D4EE69177DB44E9470131CC933247D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CCD6204E1DE64F7D2BE6C2D8D4013154B2B101);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461198D6A0E2DD2E1B416DF92C78033184D0D12D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F75D76EF22085FECDB6F6F2B5C17354F406FD43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8868BF62138D40BF2F806A9E8A0F634747FCCB1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9731D7A1BCEAEBE1BFF036F15143DD1BADF4CB50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB349CA9BF27A5CB77BB09D3F1567AC751691CE68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6910AD2A7F96FD67D641FF04075BA360893D7B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DAC14B7F3B7BF497E2310312C1186653CCAAC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE43D4A7AF952C74D904C9FF52239662FAA7039A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFB1CFA78FC529C4D6B26E2366F57FC652AB29AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB);
		s_Il2CppMethodInitialized = true;
	}
	CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00c2;
			}
			case 4:
			{
				goto IL_00e6;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00da;
			}
			case 7:
			{
				goto IL_00f2;
			}
			case 8:
			{
				goto IL_00fe;
			}
		}
	}
	{
		goto IL_010a;
	}

IL_0036:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralEFB1CFA78FC529C4D6B26E2366F57FC652AB29AD, NULL);
		return;
	}

IL_0042:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB, NULL);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_2 = (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)il2cpp_codegen_object_new(CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CustomQuery__ctor_m42DA97765E8CCC9AEDB5DEAC71C4B57642987ED5(L_2, NULL);
		V_0 = L_2;
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_3 = V_0;
		NullCheck(L_3);
		L_3->___criteria_1 = (CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___criteria_1), (void*)(CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)NULL);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_4 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_5, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___data_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___data_0), (void*)L_5);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = L_6->___data_0;
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, _stringLiteralB349CA9BF27A5CB77BB09D3F1567AC751691CE68, _stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_8 = V_0;
		NullCheck(L_8);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = L_8->___data_0;
		NullCheck(L_9);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_9, _stringLiteral22CCD6204E1DE64F7D2BE6C2D8D4013154B2B101, _stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_10 = V_0;
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_11;
		L_11 = Matchmaking_CreateAndEnqueueRoom_m78B3EA8E5C8BC2DCE16F0F63A6D97B9CD64E7E6A(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, 8, (bool)1, L_10, NULL);
		Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* L_12 = (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*)il2cpp_codegen_object_new(Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Callback__ctor_m42FB3BC4C5F799AAB256CA92E9D85BC0F64FF1E4(L_12, __this, (intptr_t)((void*)DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_13;
		L_13 = Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED(L_11, L_12, Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		__this->___currentState_5 = 4;
		return;
	}

IL_00b6:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral0C392FDC40D4EE69177DB44E9470131CC933247D, NULL);
		return;
	}

IL_00c2:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral461198D6A0E2DD2E1B416DF92C78033184D0D12D, NULL);
		return;
	}

IL_00ce:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral9731D7A1BCEAEBE1BFF036F15143DD1BADF4CB50, NULL);
		return;
	}

IL_00da:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8868BF62138D40BF2F806A9E8A0F634747FCCB1E, NULL);
		return;
	}

IL_00e6:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5F75D76EF22085FECDB6F6F2B5C17354F406FD43, NULL);
		return;
	}

IL_00f2:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralC6910AD2A7F96FD67D641FF04075BA360893D7B9, NULL);
		return;
	}

IL_00fe:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralE3DAC14B7F3B7BF497E2310312C1186653CCAAC8, NULL);
		return;
	}

IL_010a:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralE43D4A7AF952C74D904C9FF52239662FAA7039A8, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindRoom_mFEBC2B3471414AA6ADE9DB27417783499794AE1E (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791AEA70C83F9E51DF9CA11386F4F76F508F903E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_00a2;
			}
			case 5:
			{
				goto IL_008a;
			}
			case 6:
			{
				goto IL_0096;
			}
			case 7:
			{
				goto IL_00ae;
			}
			case 8:
			{
				goto IL_00ba;
			}
		}
	}
	{
		goto IL_00c6;
	}

IL_0036:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_0042:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral791AEA70C83F9E51DF9CA11386F4F76F508F903E, NULL);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_2;
		L_2 = Matchmaking_Enqueue_m27942904DAB9818122976C0D1C5339162DBA327F(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)NULL, NULL);
		Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* L_3 = (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*)il2cpp_codegen_object_new(Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6(L_3, __this, (intptr_t)((void*)DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_4;
		L_4 = Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993(L_2, L_3, Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		__this->___currentState_5 = 2;
		return;
	}

IL_0072:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		return;
	}

IL_007e:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		return;
	}

IL_008a:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		return;
	}

IL_0096:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		return;
	}

IL_00a2:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		return;
	}

IL_00ae:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		return;
	}

IL_00ba:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		return;
	}

IL_00c6:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindFilteredRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindFilteredRoom_mEBDEE9D663FCF12E5A767EDFDD4AE2EF48B9A946 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11AA1E19A60EAA84D99B1B63B0042B44D0231529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B195F37DD1176ECD61AC9E3DC377068C974FABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF841B88E21DACCF207C50AC522C0FE9DD847454);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1C3DDA293E6E804ED02479C52960A53EC491F5);
		s_Il2CppMethodInitialized = true;
	}
	CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* V_0 = NULL;
	CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_0137;
			}
			case 4:
			{
				goto IL_015b;
			}
			case 5:
			{
				goto IL_0143;
			}
			case 6:
			{
				goto IL_014f;
			}
			case 7:
			{
				goto IL_0167;
			}
			case 8:
			{
				goto IL_0173;
			}
		}
	}
	{
		goto IL_017f;
	}

IL_0036:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_0042:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0, NULL);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_2 = (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)il2cpp_codegen_object_new(CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CustomQuery__ctor_m42DA97765E8CCC9AEDB5DEAC71C4B57642987ED5(L_2, NULL);
		V_0 = L_2;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_3 = (CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)(CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)SZArrayNew(CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_3;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_4 = V_1;
		NullCheck(L_4);
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___key_0 = _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A;
		Il2CppCodeGenWriteBarrier((void**)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___key_0), (void*)_stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A);
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_5 = V_1;
		NullCheck(L_5);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___importance_1 = 0;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_7, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2), (void*)L_7);
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_8 = V_1;
		NullCheck(L_8);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2;
		NullCheck(L_9);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_9, _stringLiteral6B195F37DD1176ECD61AC9E3DC377068C974FABF, _stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_10 = V_1;
		NullCheck(L_10);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2;
		NullCheck(L_11);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_11, _stringLiteral11AA1E19A60EAA84D99B1B63B0042B44D0231529, _stringLiteralFA1C3DDA293E6E804ED02479C52960A53EC491F5, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_12 = V_1;
		NullCheck(L_12);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___key_0 = _stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C;
		Il2CppCodeGenWriteBarrier((void**)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___key_0), (void*)_stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C);
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_13 = V_1;
		NullCheck(L_13);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___importance_1 = 0;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_14 = V_1;
		NullCheck(L_14);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_15, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___parameters_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___parameters_2), (void*)L_15);
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_16 = V_1;
		NullCheck(L_16);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___parameters_2;
		NullCheck(L_17);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_17, _stringLiteralAF841B88E21DACCF207C50AC522C0FE9DD847454, _stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_18 = V_0;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_19 = V_1;
		NullCheck(L_18);
		L_18->___criteria_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___criteria_1), (void*)L_19);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_20 = V_0;
		NullCheck(L_20);
		L_20->___data_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___data_0), (void*)(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_21 = V_0;
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_22;
		L_22 = Matchmaking_Enqueue_m27942904DAB9818122976C0D1C5339162DBA327F(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, L_21, NULL);
		__this->___currentState_5 = 2;
		return;
	}

IL_012b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		return;
	}

IL_0137:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		return;
	}

IL_0143:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		return;
	}

IL_014f:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		return;
	}

IL_015b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		return;
	}

IL_0167:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		return;
	}

IL_0173:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		return;
	}

IL_017f:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::foundMatch(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F5BA1C82DA8DAC6463BA85C1A8BC81E3461E6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2086D64681BE7D3EF06FECF7AB0D3C66A19EE71);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral37F5BA1C82DA8DAC6463BA85C1A8BC81E3461E6B, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		NullCheck(L_3);
		uint64_t L_4 = L_3->___ID_3;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_5;
		L_5 = Rooms_Join_m4D5EF33AC82309B4A8DE9F00D95FA12E66AFCE8D(L_4, (bool)1, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_6 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_6, __this, (intptr_t)((void*)DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_7;
		L_7 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_5, L_6, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		__this->___currentState_5 = 5;
		return;
	}

IL_003e:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralC2086D64681BE7D3EF06FECF7AB0D3C66A19EE71, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_8 = ___msg0;
		NullCheck(L_8);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_9;
		L_9 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_8);
		V_0 = L_9;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___Message_2;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_11, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_12, NULL);
		__this->___currentState_5 = 1;
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::joinRoomResponse(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17D0E550A67F8059F0FE5BCD905A402E97D9A6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4E3F628F25B19F1771C4E6CE4C83EC8BE0F1DF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_1 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_2 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0085;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralB17D0E550A67F8059F0FE5BCD905A402E97D9A6A, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		__this->___currentRoom_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)L_3);
		__this->___currentState_5 = 7;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_4 = __this->___currentRoom_8;
		NullCheck(L_4);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_5 = L_4->___UsersOptional_18;
		if (!L_5)
		{
			goto IL_00bf;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_6 = __this->___currentRoom_8;
		NullCheck(L_6);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_7 = L_6->___UsersOptional_18;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93(L_7, DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					if (!L_9)
					{
						goto IL_0084;
					}
				}
				{
					RuntimeObject* L_10 = V_0;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0071_1;
			}

IL_0049_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_12;
				L_12 = InterfaceFuncInvoker0< User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var, L_11);
				V_1 = L_12;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_13 = V_1;
				NullCheck(L_13);
				uint64_t L_14 = L_13->___ID_1;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_15 = __this->___localUser_6;
				NullCheck(L_15);
				uint64_t L_16 = L_15->___ID_1;
				if ((((int64_t)L_14) == ((int64_t)L_16)))
				{
					goto IL_0071_1;
				}
			}
			{
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_17 = V_1;
				__this->___remoteUser_7 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)L_17);
				__this->___currentState_5 = 8;
			}

IL_0071_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCE4E3F628F25B19F1771C4E6CE4C83EC8BE0F1DF, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_20 = ___msg0;
		NullCheck(L_20);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_21;
		L_21 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_20);
		V_2 = L_21;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_22 = V_2;
		NullCheck(L_22);
		String_t* L_23 = L_22->___Message_2;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_23, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_24, NULL);
		__this->___currentState_5 = 1;
	}

IL_00bf:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindMatch_m0EBABDA92E1917BB705978CD57833BC8795CC9EE (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D51CC9D87AEDB20388919750B0D8FB1F3138F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_00a2;
			}
			case 5:
			{
				goto IL_008a;
			}
			case 6:
			{
				goto IL_0096;
			}
			case 7:
			{
				goto IL_00ae;
			}
			case 8:
			{
				goto IL_00ba;
			}
		}
	}
	{
		goto IL_00c6;
	}

IL_0036:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_0042:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0, NULL);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_2;
		L_2 = Matchmaking_Enqueue_m27942904DAB9818122976C0D1C5339162DBA327F(_stringLiteral25D51CC9D87AEDB20388919750B0D8FB1F3138F6, (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)NULL, NULL);
		Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* L_3 = (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*)il2cpp_codegen_object_new(Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6(L_3, __this, (intptr_t)((void*)DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_4;
		L_4 = Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993(L_2, L_3, Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		__this->___currentState_5 = 2;
		return;
	}

IL_0072:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		return;
	}

IL_007e:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		return;
	}

IL_008a:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		return;
	}

IL_0096:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		return;
	}

IL_00a2:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		return;
	}

IL_00ae:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		return;
	}

IL_00ba:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		return;
	}

IL_00c6:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::searchingStarted(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C299BF5107D7E0629D16837F4C97C929EFE5861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF6137FE4C5927013C087EE74D84C2501852BED4);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF6137FE4C5927013C087EE74D84C2501852BED4, NULL);
		__this->___currentState_5 = 2;
		return;
	}

IL_001b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral1C299BF5107D7E0629D16837F4C97C929EFE5861, NULL);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::updateRoom(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B6ADD9BA4A2596DA37C86818DBB1FA5543BC90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CF80100A176C5ABF31BAD31E39091BF9F7C6F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BC8523900AE414198EA2E4D09442768E577938B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66302616BC1BDF9D2409AB2485FCF016D5D6CDEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_2 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_3 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_00c5;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5BC8523900AE414198EA2E4D09442768E577938B, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3;
		L_3 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_inline(L_2, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4 = __this->___currentState_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)7))))
		{
			goto IL_007b;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_5 = V_0;
		NullCheck(L_5);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_6 = L_5->___UsersOptional_18;
		if (!L_6)
		{
			goto IL_00ed;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_7 = V_0;
		NullCheck(L_7);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_8 = L_7->___UsersOptional_18;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93(L_8, DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_007a;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_007a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0067_1;
			}

IL_003f_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_13;
				L_13 = InterfaceFuncInvoker0< User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var, L_12);
				V_2 = L_13;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_14 = V_2;
				NullCheck(L_14);
				uint64_t L_15 = L_14->___ID_1;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_16 = __this->___localUser_6;
				NullCheck(L_16);
				uint64_t L_17 = L_16->___ID_1;
				if ((((int64_t)L_15) == ((int64_t)L_17)))
				{
					goto IL_0067_1;
				}
			}
			{
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_18 = V_2;
				__this->___remoteUser_7 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)L_18);
				__this->___currentState_5 = 8;
			}

IL_0067_1:
			{
				RuntimeObject* L_19 = V_1;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_00ed;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_21 = V_0;
		NullCheck(L_21);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_22 = L_21->___UsersOptional_18;
		if (!L_22)
		{
			goto IL_00ed;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_23 = V_0;
		NullCheck(L_23);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_24 = L_23->___UsersOptional_18;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_24, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00ed;
		}
	}
	{
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_26 = __this->___remoteUser_7;
		NullCheck(L_26);
		uint64_t* L_27 = (&L_26->___ID_1);
		String_t* L_28;
		L_28 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral66302616BC1BDF9D2409AB2485FCF016D5D6CDEE, L_28, _stringLiteral21CF80100A176C5ABF31BAD31E39091BF9F7C6F0, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_29, NULL);
		__this->___remoteUser_7 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		__this->___currentState_5 = 7;
		return;
	}

IL_00c5:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral00B6ADD9BA4A2596DA37C86818DBB1FA5543BC90, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_30 = ___msg0;
		NullCheck(L_30);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_31;
		L_31 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_30);
		V_3 = L_31;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_32 = V_3;
		NullCheck(L_32);
		String_t* L_33 = L_32->___Message_2;
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_33, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_34, NULL);
	}

IL_00ed:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_sendChat_m3CC704504D6548B5CD1FECE9247561891850EE04 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___chatMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral500CF30CCABB715DBF03EE4B03FFF7C1539DF0B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_1 = NULL;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_003f;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0033:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_003f:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral500CF30CCABB715DBF03EE4B03FFF7C1539DF0B1, NULL);
		return;
	}

IL_004b:
	{
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_2 = (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296*)il2cpp_codegen_object_new(chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088(L_2, NULL);
		V_1 = L_2;
		int32_t L_3 = __this->___lastPacketID_9;
		__this->___lastPacketID_9 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_4 = V_1;
		int32_t L_5 = __this->___lastPacketID_9;
		NullCheck(L_4);
		chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline(L_4, L_5, NULL);
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_6 = V_1;
		String_t* L_7 = ___chatMessage0;
		NullCheck(L_6);
		chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline(L_6, L_7, NULL);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_8 = __this->___remoteUser_7;
		NullCheck(L_8);
		uint64_t L_9 = L_8->___ID_1;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = chatPacket_Serialize_mFE298B3EE45E1CC24F9239D336CC32F19F5C19DA(L_10, NULL);
		bool L_12;
		L_12 = Net_SendPacket_mF57EF337932A33440DD11ED75B8DC0C4D831227F(L_9, L_11, 1, NULL);
		return;
	}

IL_008b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::processNetPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75685E145E5A73B802A53F0E146332038B24E134);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83035F9759A79E53CE6C6BE65BBD4A7A6484F128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF661C314CFE8F42EF8E01B97E23F30BC0B7CDFFE);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_2 = NULL;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_0;
		L_0 = Net_ReadPacket_mEC534D761EE3A23708F6B4112D0E12FCDE96AEA3(NULL);
		V_0 = L_0;
		goto IL_0082;
	}

IL_0008:
	{
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_1 = V_0;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = Packet_get_Size_m1F2BE120F25A9738C6E6EEF99329E0816B358FA9_inline(L_1, NULL);
		if ((uint64_t)(L_2) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_2));
		V_1 = L_3;
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_4);
		uint64_t L_6;
		L_6 = Packet_ReadBytes_m63FC14879AE9EF7BAA377A0856FC58BFAA95135C(L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_8;
		L_8 = chatPacket_Deserialize_m969626B07732033FC28420D60574BFB94B0D35E5(L_7, NULL);
		V_2 = L_8;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral83035F9759A79E53CE6C6BE65BBD4A7A6484F128, L_11, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_12, NULL);
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_13 = V_0;
		NullCheck(L_13);
		uint64_t L_14;
		L_14 = Packet_get_SenderID_m5628E47F8EBF4A796EB145DF0CAC97FBE240C410(L_13, NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F((&V_3), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral75685E145E5A73B802A53F0E146332038B24E134, L_15, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_16, NULL);
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline(L_17, NULL);
		V_4 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF661C314CFE8F42EF8E01B97E23F30BC0B7CDFFE, L_19, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_20, NULL);
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_21;
		L_21 = Net_ReadPacket_mEC534D761EE3A23708F6B4112D0E12FCDE96AEA3(NULL);
		V_0 = L_21;
	}

IL_0082:
	{
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_22 = V_0;
		if (L_22)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestLeaveRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0BE7F36A753120388756ADC31357DF565C6C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7423CA6FD92EF3F3989043A87E2B8793080DF03);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_004b;
			}
			case 7:
			{
				goto IL_0057;
			}
			case 8:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_0033:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_003f:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralBD0BE7F36A753120388756ADC31357DF565C6C89, NULL);
		return;
	}

IL_004b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		return;
	}

IL_0057:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralF7423CA6FD92EF3F3989043A87E2B8793080DF03, NULL);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_2 = __this->___currentRoom_8;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___ID_3;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_4;
		L_4 = Rooms_Leave_mA3D120D16515D494AB8146DB8C03F639A2CECC77(L_3, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_5 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_5, __this, (intptr_t)((void*)DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_6;
		L_6 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_4, L_5, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		return;
	}

IL_0085:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::leaveRoomResponse(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral920D0134A13224A01963C8D399951D7365029ACF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3501744B0773A50D3BF8BAEFE01A55DC50D5C50);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralA3501744B0773A50D3BF8BAEFE01A55DC50D5C50, NULL);
		__this->___currentRoom_8 = (Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)(Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL);
		__this->___remoteUser_7 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		__this->___currentState_5 = 1;
		return;
	}

IL_0029:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral920D0134A13224A01963C8D399951D7365029ACF, NULL);
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestStartRatedMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestStartRatedMatch_mC165EA843F2170E0440D796522EE872D7903E05A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F0057598B4E8BEF6162B8E3305326C0F1A20E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB5E996F4F3C7E6CCBB98C6CEC9328DF294F5C19);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_003f;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_0033:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_003f:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral4F0057598B4E8BEF6162B8E3305326C0F1A20E84, NULL);
		return;
	}

IL_004b:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralFB5E996F4F3C7E6CCBB98C6CEC9328DF294F5C19, NULL);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_2 = __this->___currentRoom_8;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___ID_3;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_4;
		L_4 = Matchmaking_StartMatch_mA0D9B2868918B1D405B2D2907F9D4C6F8F8BC9A7(L_3, NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_5 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_5, __this, (intptr_t)((void*)DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_6;
		L_6 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_4, L_5, NULL);
		return;
	}

IL_0079:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::startRatedMatchResponse(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B7A48F6B660564BD9FEF1C21619340A1F10F2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7970A9EAFF2C28894F04C4600209CBA65BE905B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD038D81FB9093934C691608A0A2F41B350086FBD);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral7970A9EAFF2C28894F04C4600209CBA65BE905B8, NULL);
		__this->___ratedMatchStarted_10 = (bool)1;
		return;
	}

IL_001b:
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral39B7A48F6B660564BD9FEF1C21619340A1F10F2F, L_5, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_6, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD038D81FB9093934C691608A0A2F41B350086FBD, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestReportResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestReportResults_m7B9359AF8DC1E8DE209237856CFC304FC468A721 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48BADE6D41DD866A40A32C651C57B716AE37416F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DFA8638FC7431EA5D6B04A7BF5D3C988A9C5639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD906C38E3D05EEE8C2F94A7E5F33BC8BDCC843E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* V_1 = NULL;
	{
		int32_t L_0 = __this->___currentState_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_0042;
			}
			case 6:
			{
				goto IL_0042;
			}
			case 7:
			{
				goto IL_004e;
			}
			case 8:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_00c5;
	}

IL_0036:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		return;
	}

IL_0042:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8DFA8638FC7431EA5D6B04A7BF5D3C988A9C5639, NULL);
		return;
	}

IL_004e:
	{
		bool L_2 = __this->___ratedMatchStarted_10;
		if (!L_2)
		{
			goto IL_00b9;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral48BADE6D41DD866A40A32C651C57B716AE37416F, NULL);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_3 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_3, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_1 = L_3;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = V_1;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_5 = __this->___localUser_6;
		NullCheck(L_5);
		uint64_t* L_6 = (&L_5->___ID_1);
		String_t* L_7;
		L_7 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_6, NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_4, L_7, 1, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_8 = V_1;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_9 = __this->___remoteUser_7;
		NullCheck(L_9);
		uint64_t* L_10 = (&L_9->___ID_1);
		String_t* L_11;
		L_11 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_10, NULL);
		NullCheck(L_8);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_8, L_11, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_12 = __this->___currentRoom_8;
		NullCheck(L_12);
		uint64_t L_13 = L_12->___ID_3;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_14 = V_1;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_15;
		L_15 = Matchmaking_ReportResultsInsecure_mC8F1B5BD784967EE51FA85362F2AFE14D00D6D2D(L_13, L_14, NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_16 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_16, __this, (intptr_t)((void*)DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_17;
		L_17 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_15, L_16, NULL);
		return;
	}

IL_00b9:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD906C38E3D05EEE8C2F94A7E5F33BC8BDCC843E2, NULL);
		return;
	}

IL_00c5:
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::reportResultsResponse(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral959F4946E1BD750ACC2F8E6E3D57BA81F1674691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62E59118528817075980A32FDB5E9FE2406C285);
		s_Il2CppMethodInitialized = true;
	}
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_0 = NULL;
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD62E59118528817075980A32FDB5E9FE2406C285, NULL);
		__this->___ratedMatchStarted_10 = (bool)0;
		DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1(__this, NULL);
		return;
	}

IL_0021:
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_2 = ___msg0;
		NullCheck(L_2);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_3;
		L_3 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		V_0 = L_3;
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Message_2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral959F4946E1BD750ACC2F8E6E3D57BA81F1674691, L_5, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_6, NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry__ctor_mE0BA4DE25380A3E1B9589FC55F07D9B2BACB149E (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::add_UserFailedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_add_UserFailedEntitlementCheck_m69EEDB75B539B6F4A3BBF14EAEABB2785DA0B073 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::remove_UserFailedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_remove_UserFailedEntitlementCheck_m6220FE32C717583C59DD68887B666BBA90812E88 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::add_UserPassedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_add_UserPassedEntitlementCheck_m7EABA489C75BC245B32EF48533C57D298B95094D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::remove_UserPassedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_remove_UserPassedEntitlementCheck_m28721FF59FD48FE6E49BB796EE85205571F0722A (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_Start_mF8533B057EF2F20C6C514FF0ECB047BD4CA3FDD4 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
			bool L_0;
			L_0 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline(NULL);
			if (L_0)
			{
				goto IL_000d_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
			Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A((String_t*)NULL, NULL);
		}

IL_000d_1:
		{
			Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_1;
			L_1 = Entitlements_IsUserEntitledToApplication_m12DD5469C7A81F00804FC5BD2C3E75157F3BA309(NULL);
			Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_2 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_2, __this, (intptr_t)((void*)EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0_RuntimeMethod_var), NULL);
			NullCheck(L_1);
			Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_3;
			L_3 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_1, L_2, NULL);
			goto IL_0030;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Object)
		EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919(__this, (bool)0, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0030;
	}// end catch (depth: 1)

IL_0030:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::EntitlementCheckCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	{
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::HandleEntitlementCheckResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, bool ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C17994972DD214893B82640E0D675E392FC185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD3F1ADDCE85E66879EDA556C862F4E45829F83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBD08B18CC99B6FD20FDD9215C61B731F93C76A);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = ___result0;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4EBD08B18CC99B6FD20FDD9215C61B731F93C76A, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
			if (!L_1)
			{
				goto IL_001e_1;
			}
		}
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
			NullCheck(L_2);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		}

IL_001e_1:
		{
			goto IL_0070;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Object)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4AFF14AE5157F3A41CA32B8CAA514AC80B16DA0)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0070;
	}// end catch (depth: 1)

IL_002d:
	{
	}
	try
	{// begin try (depth: 1)
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
			if (!L_3)
			{
				goto IL_003f_1;
			}
		}
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
			NullCheck(L_4);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		}

IL_003f_1:
		{
			goto IL_004e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Object)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE188B7082D61178A7D9F7C1D16955F8CCC096ED4)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004e;
	}// end catch (depth: 1)

IL_004e:
	{
		bool L_5 = __this->___exitAppOnFailure_4;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2CD3F1ADDCE85E66879EDA556C862F4E45829F83, NULL);
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral21C17994972DD214893B82640E0D675E392FC185, NULL);
	}

IL_0070:
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck__ctor_m489DC2C35D364E52A2B9FA5361A084C34C9D660D (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, const RuntimeMethod* method) 
{
	{
		__this->___exitAppOnFailure_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7046F41E3D6045F7CFC5B2BBB4F295967F6FA9D8 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GoalMover_get_MoveDirection_mF88D514D395761AC26D6C15D717E7DC3E6FD5078_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_moveDirection_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GoalMover_get_NextMoveDirection_m01B000F150B9A082139944E05806D5519061A181_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_nextMoveDirection_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoalMover_set_ExpectedPosition_m60F1FE20BD3651F98085BA1D9CE311EB91DC7DAC_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_expectedPosition_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoalMover_set_MoveDirection_m5F6AAE7BBC7C397DB066FBB989C5C7FFA7D2C666_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_moveDirection_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoalMover_set_NextMoveDirection_m04D654D7259DE7FEC945F83B0930ECE19D5B105A_inline (GoalMover_tC3DAA2D53256BA0445CDA141F60422563915D324* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_nextMoveDirection_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DetectBasket_set_Player_m74FABECCFAFE6E8A50F73EBE345F312799227121_inline (DetectBasket_tF154610D12163F3FB003B9E03F1FAF9A9E25B045* __this, Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* ___value0, const RuntimeMethod* method) 
{
	{
		Player_tCCA93288D258E225DD8C604DCC59E755FAE79044* L_0 = ___value0;
		__this->___m_owningPlayer_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_owningPlayer_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_Position_m425D2AD280F38D594B0E0252623A42D0C98A75AA_inline (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* ___value0, const RuntimeMethod* method) 
{
	{
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_0 = ___value0;
		__this->___m_position_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_position_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* GamePiece_get_Position_mC6F65B75035DB03E989F36D76BCE1919905DA131_inline (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) 
{
	{
		BoardPosition_tAD8E0D34E62016BF68E013EA70EE23830EF4EFB7* L_0 = __this->___m_position_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePiece_get_Type_m72EC9DE3B781426D864BF8F185FF4148D4D170A1_inline (GamePiece_t65CE41E6A86DB3ADBBB49A8B219B8C22BBC1280B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_type_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CtextStringU3Ek__BackingField_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CtextStringU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextStringU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpacketIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CpacketIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Packet_get_Size_m1F2BE120F25A9738C6E6EEF99329E0816B358FA9_inline (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___size_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		bool L_0 = ((Core_t272580A990CA827C27F3116C5420EB2F87FE290C_StaticFields*)il2cpp_codegen_static_fields_for(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var))->___IsPlatformInitialized_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared_inline (Message_1_tC4674D49302BAB6183CEF95D099A5F93211019CB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___data_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Message_1_get_Data_mD3919529D63BA60F282FFDFD8BFB71C711D755F3_gshared_inline (Message_1_t6EF0E94E11FCC46D1F0485A5CE3AF6ED69DFDC0A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___data_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
