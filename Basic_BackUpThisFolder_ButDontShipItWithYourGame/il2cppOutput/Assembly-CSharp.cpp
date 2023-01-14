#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Monster>
struct List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>[]
struct KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Monster[]
struct MonsterU5BU5D_t09714B1538850C9D34D40FF75497F2BD17C37BF8;
// MonsterObject[]
struct MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Card
struct Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A;
// CardHandler
struct CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259;
// CardHolderSlot
struct CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494;
// CardManager
struct CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203;
// CardSizer
struct CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D;
// CardSlot
struct CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE;
// MonsterChild
struct MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF;
// MonsterObject
struct MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8;
// MonsterSlot
struct MonsterSlot_tEE5225B68812F1FF2F482EB544D0A9BB63B90017;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// cards
struct cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5;
// Card/<awaitSetter>d__15
struct U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336;
// CardHandler/BeingDragDelegate
struct BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393;
// CardHandler/DragDelegate
struct DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2;
// CardHandler/EndDragDelegate
struct EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209;
// CardHolderSlot/<LeaderBehaviour>d__16
struct U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC;
// CardManager/CheckDelegate
struct CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6;
// CardManager/CreateMonsterDelegate
struct CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843;
// CardManager/DeleteMonsterDelegate
struct DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA;
// CardManager/SwapMonstersDelegate
struct SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_BeingDrag_m5EC385B1778E5AA0F8DD39169E78AE17EFB537B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_Drag_m5CF8E07D78982677991EE05446E5499AC91AAA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_EndDrag_mCCC6EC1EF278B1AEEE91DFFA7548E30610718832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_Hand_mAF6171FB81E716BECB3BA347E3C21506DC217EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_SetParent_m308DABF313CECAF337B596ABE36BD9182DA08E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_SetPreviousParent_m2D1B46148B8263BC22F6560B5B4B82AA7027E529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardHandler_Swap_m1D23EBA222944F3520F716F59D45225EB4651123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardManager_Check_m2E43F31252A84C9B0D1421E30CACAEA34BEB1390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardManager_CreateMonster_mC47774A9BA0723FFE9F66F6E51755C6A35EF0E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardManager_DeleteMonster_m52A3ABD569BD0C1CE45758E6047D67648639B59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CardManager_Swap_mF5273F3807953B448CF8F1837BA5C264D2B9F716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Card_U3CawaitSetterU3Eb__15_0_m003739B57F12C7ECC866CB663C5309113C180D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m525D12DB40D2B4C21488100565ACF7608B85F430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D_m7476CFB626E574486EAF729B37F2287346667BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8_m8E682B0AEA41C4390DB5792C7AF3568EE5403648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_m65FFD2F1D4EACA61A052C09C2B71406D616A2923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m8CDFFF278FCB4EE86AC46888B714381A0BC0FAD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_m2AEA8174A34693DE0AFCBA5DB2722A09D7EE75B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m03C50A2ECA72C6131CF1E5EAC0C7D79DD7311B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA99B38B910EF987A3EF5A38F9EED1FDF18ABC8A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLeaderBehaviourU3Ed__16_System_Collections_IEnumerator_Reset_mABD55FD2F9F37B1C3D02F052E924D4833B1D756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CawaitSetterU3Ed__15_System_Collections_IEnumerator_Reset_m751A6000FF6F9A3A681567F9689F54CE55803A86_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Monster>
struct List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MonsterU5BU5D_t09714B1538850C9D34D40FF75497F2BD17C37BF8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Helpers
struct Helpers_t335105E0294771821FAF6F2FE8A79B628014BD94  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Card/<awaitSetter>d__15
struct U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336  : public RuntimeObject
{
	// System.Int32 Card/<awaitSetter>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Card/<awaitSetter>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Card Card/<awaitSetter>d__15::<>4__this
	Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___U3CU3E4__this_2;
};

// CardHolderSlot/<LeaderBehaviour>d__16
struct U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC  : public RuntimeObject
{
	// System.Int32 CardHolderSlot/<LeaderBehaviour>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CardHolderSlot/<LeaderBehaviour>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single CardHolderSlot/<LeaderBehaviour>d__16::time
	float ___time_2;
	// CardHolderSlot CardHolderSlot/<LeaderBehaviour>d__16::<>4__this
	CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* ___U3CU3E4__this_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>
struct KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493  : public RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254
{
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* ___OnOverrideControllerDirty_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// MonsterObject
struct MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String MonsterObject::name
	String_t* ___name_4;
	// UnityEngine.Vector3 MonsterObject::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_5;
	// UnityEngine.Vector3 MonsterObject::canvasPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___canvasPos_6;
	// UnityEngine.Vector3 MonsterObject::spritePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spritePos_7;
	// System.Int32 MonsterObject::heal
	int32_t ___heal_8;
	// UnityEngine.AnimationClip MonsterObject::clip
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip_9;
	// UnityEngine.Sprite MonsterObject::cardImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___cardImage_10;
	// System.Boolean MonsterObject::isLeader
	bool ___isLeader_11;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// CardHandler/BeingDragDelegate
struct BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393  : public MulticastDelegate_t
{
};

// CardHandler/DragDelegate
struct DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2  : public MulticastDelegate_t
{
};

// CardHandler/EndDragDelegate
struct EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209  : public MulticastDelegate_t
{
};

// CardManager/CheckDelegate
struct CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6  : public MulticastDelegate_t
{
};

// CardManager/CreateMonsterDelegate
struct CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843  : public MulticastDelegate_t
{
};

// CardManager/DeleteMonsterDelegate
struct DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA  : public MulticastDelegate_t
{
};

// CardManager/SwapMonstersDelegate
struct SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Card
struct Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Card::isEnemy
	bool ___isEnemy_4;
	// MonsterObject[] Card::dataList
	MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8* ___dataList_5;
	// MonsterObject Card::data
	MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* ___data_6;
	// UnityEngine.UI.Image Card::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_7;
	// System.Boolean Card::<isLeader>k__BackingField
	bool ___U3CisLeaderU3Ek__BackingField_8;
	// System.Boolean Card::<isFieldLeader>k__BackingField
	bool ___U3CisFieldLeaderU3Ek__BackingField_9;
};

// CardHandler
struct CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardHandler/BeingDragDelegate CardHandler::OnBeingDrag
	BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* ___OnBeingDrag_4;
	// CardHandler/DragDelegate CardHandler::OnDragDelegate
	DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* ___OnDragDelegate_5;
	// CardHandler/EndDragDelegate CardHandler::OnEndDrag
	EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* ___OnEndDrag_6;
	// System.EventHandler CardHandler::setParentHandler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___setParentHandler_7;
	// System.EventHandler CardHandler::setPreviousParentHandler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___setPreviousParentHandler_8;
	// System.EventHandler CardHandler::swapHandler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___swapHandler_9;
	// System.EventHandler CardHandler::handHandler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___handHandler_10;
	// UnityEngine.Transform CardHandler::<parentAfterDrag>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CparentAfterDragU3Ek__BackingField_11;
	// UnityEngine.Transform CardHandler::previousParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___previousParent_12;
	// UnityEngine.Transform CardHandler::swappedParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___swappedParent_13;
	// UnityEngine.UI.Image CardHandler::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_14;
	// UnityEngine.GameObject CardHandler::monster
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___monster_15;
	// UnityEngine.Transform CardHandler::temp1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___temp1_16;
	// CardSlot CardHandler::thisSlot
	CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* ___thisSlot_17;
	// CardHandler CardHandler::thisHandler
	CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* ___thisHandler_18;
	// CardHolderSlot CardHandler::cardHolderSlotBefore
	CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* ___cardHolderSlotBefore_19;
	// CardHolderSlot CardHandler::cardHolderSlotAfter
	CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* ___cardHolderSlotAfter_20;
	// System.Boolean CardHandler::flag
	bool ___flag_21;
	// System.Int32 CardHandler::previousSlotPos
	int32_t ___previousSlotPos_22;
	// System.Int32 CardHandler::slotPos
	int32_t ___slotPos_23;
	// System.Int32 CardHandler::<cardPlacedCounter>k__BackingField
	int32_t ___U3CcardPlacedCounterU3Ek__BackingField_24;
};

// CardHolderSlot
struct CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CardHolderSlot::slotPos
	int32_t ___slotPos_4;
	// UnityEngine.Sprite CardHolderSlot::leaderImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___leaderImage_5;
	// UnityEngine.UI.GridLayoutGroup CardHolderSlot::grid
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___grid_6;
	// System.Boolean CardHolderSlot::isFront
	bool ___isFront_7;
	// System.Boolean CardHolderSlot::isLeader
	bool ___isLeader_8;
	// System.Boolean CardHolderSlot::isEnemy
	bool ___isEnemy_9;
	// UnityEngine.Transform CardHolderSlot::cardTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cardTransform_10;
	// UnityEngine.UI.Image CardHolderSlot::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_11;
	// System.Int32 CardHolderSlot::MonsterCount
	int32_t ___MonsterCount_12;
	// CardHandler CardHolderSlot::draggableItem
	CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* ___draggableItem_13;
	// UnityEngine.GameObject CardHolderSlot::dropped
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dropped_14;
	// UnityEngine.GameObject CardHolderSlot::monster
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___monster_15;
};

// CardManager
struct CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] CardManager::cardHolderSlots
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___cardHolderSlots_5;
	// Monster[] CardManager::monsters
	MonsterU5BU5D_t09714B1538850C9D34D40FF75497F2BD17C37BF8* ___monsters_6;
	// CardManager/CheckDelegate CardManager::checkHandlerDelegate
	CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* ___checkHandlerDelegate_7;
	// CardManager/CreateMonsterDelegate CardManager::createMonsterDelegate
	CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* ___createMonsterDelegate_8;
	// CardManager/DeleteMonsterDelegate CardManager::deleteMonsterDelegate
	DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* ___deleteMonsterDelegate_9;
	// CardManager/SwapMonstersDelegate CardManager::swapMonstersDelegate
	SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* ___swapMonstersDelegate_10;
};

// CardSizer
struct CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CardSlot
struct CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardHandler CardSlot::handler
	CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* ___handler_4;
	// Card CardSlot::card
	Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___card_5;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MonsterChild GameManager::monsters
	MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF* ___monsters_5;
	// System.Collections.Generic.List`1<Monster> GameManager::monstersChildren
	List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3* ___monstersChildren_6;
	// UnityEngine.Transform[] GameManager::monsterFields
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___monsterFields_8;
	// UnityEngine.GameObject GameManager::monsterPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___monsterPrefab_9;
	// UnityEngine.GameObject GameManager::cardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cardPrefab_10;
	// TMPro.TextMeshProUGUI GameManager::cardTXT
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___cardTXT_11;
	// TMPro.TextMeshProUGUI GameManager::DropTXT
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___DropTXT_12;
	// UnityEngine.Transform GameManager::cardParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cardParent_13;
	// UnityEngine.Transform[] GameManager::monsterParents
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___monsterParents_14;
	// UnityEngine.Transform[] GameManager::hideParents
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___hideParents_15;
	// System.Int32 GameManager::<cardDropZone>k__BackingField
	int32_t ___U3CcardDropZoneU3Ek__BackingField_16;
};

// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MonsterObject[] Monster::dataList
	MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8* ___dataList_4;
	// MonsterObject Monster::data
	MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* ___data_5;
	// Card Monster::card_data
	Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___card_data_6;
	// UnityEngine.AnimatorOverrideController Monster::aoc
	AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___aoc_7;
	// UnityEngine.Animator Monster::monsterAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___monsterAnimator_8;
	// TMPro.TextMeshProUGUI Monster::textMesh
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textMesh_9;
	// UnityEngine.RectTransform Monster::canvas
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvas_10;
	// System.Boolean Monster::isEnemy
	bool ___isEnemy_11;
	// System.Int32 Monster::MonsterCount
	int32_t ___MonsterCount_12;
	// System.Int32 Monster::RandomData
	int32_t ___RandomData_13;
};

// MonsterSlot
struct MonsterSlot_tEE5225B68812F1FF2F482EB544D0A9BB63B90017  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// MonsterChild
struct MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF  : public GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6
{
};

// cards
struct cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6  : public GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6
{
	// System.Int32 cards::index
	int32_t ___index_17;
	// System.Int32 cards::cardInTheGame
	int32_t ___cardInTheGame_18;
	// System.Int32 cards::<cardSlot>k__BackingField
	int32_t ___U3CcardSlotU3Ek__BackingField_19;
	// System.Int32 cards::<cardAmount>k__BackingField
	int32_t ___U3CcardAmountU3Ek__BackingField_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1<Monster>
struct List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MonsterU5BU5D_t09714B1538850C9D34D40FF75497F2BD17C37BF8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Monster>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Helpers

// Helpers

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Card/<awaitSetter>d__15

// Card/<awaitSetter>d__15

// CardHolderSlot/<LeaderBehaviour>d__16

// CardHolderSlot/<LeaderBehaviour>d__16

// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.Touch

// UnityEngine.Touch

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Motion

// UnityEngine.Motion

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// UnityEngine.AnimationClip

// UnityEngine.AnimationClip

// UnityEngine.AnimatorOverrideController

// UnityEngine.AnimatorOverrideController

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.EventHandler

// System.EventHandler

// MonsterObject

// MonsterObject

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// CardHandler/BeingDragDelegate

// CardHandler/BeingDragDelegate

// CardHandler/DragDelegate

// CardHandler/DragDelegate

// CardHandler/EndDragDelegate

// CardHandler/EndDragDelegate

// CardManager/CheckDelegate

// CardManager/CheckDelegate

// CardManager/CreateMonsterDelegate

// CardManager/CreateMonsterDelegate

// CardManager/DeleteMonsterDelegate

// CardManager/DeleteMonsterDelegate

// CardManager/SwapMonstersDelegate

// CardManager/SwapMonstersDelegate

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Card

// Card

// CardHandler

// CardHandler

// CardHolderSlot

// CardHolderSlot

// CardManager
struct CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields
{
	// CardManager CardManager::instance
	CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* ___instance_4;
};

// CardManager

// CardSizer

// CardSizer

// CardSlot

// CardSlot

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// cards GameManager::cards
	cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* ___cards_4;
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_7;
};

// GameManager

// Monster

// Monster

// MonsterSlot

// MonsterSlot

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.LayoutGroup

// UnityEngine.UI.LayoutGroup

// MonsterChild

// MonsterChild

// cards

// cards

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MonsterObject[]
struct MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8  : public RuntimeArray
{
	ALIGN_FIELD (8) MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* m_Items[1];

	inline MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Card::awaitSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_awaitSetter_mA4DB48430D9ED06F974A3741534A9EFB5BAABEA9 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void Card/<awaitSetter>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CawaitSetterU3Ed__15__ctor_mC8BC4337CF8EDF06334448D490D0134DEFA834AB (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void Card::Setter(System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Setter_m1373A8DA259793E65F987A066AABA0AFBEBDF317 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, String_t* ___0_name, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_cardImage, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void CardHandler::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_initialize_mB07EBBE4D358BC7A05C758D628821AB1BC068684 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CardSlot>()
inline CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* Component_GetComponent_TisCardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8_m8E682B0AEA41C4390DB5792C7AF3568EE5403648 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<CardHandler>()
inline CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CardHandler/BeingDragDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeingDragDelegate__ctor_mB518C1548E6BDBA04292264359944D555E815E42 (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void CardHandler/DragDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragDelegate__ctor_m814A5C46E0BB3ABF5994BD0113BEAB4FAC02E967 (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void CardHandler/EndDragDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndDragDelegate__ctor_mD5C2218F9DDF3D85B44F41D7831E7A34A435F7D9 (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void CardHandler::Activator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Activator_mB55D45D2ADA178AA61225DDA75452E61B8E6761E (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CardHolderSlot>()
inline CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CardHandler::set_parentAfterDrag(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardHandler_set_parentAfterDrag_mDAD89F7BBF2B5A6D4E0D6C92A2C777CFABA7A0FA_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform CardHandler::get_parentAfterDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void CardHandler::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Action_m588A102956BC2EC3DCDAA7759AFC8C709B660CF3 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// System.Void CardManager/CheckDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_inline (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method) ;
// System.Boolean CardHandler::Situation1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_Situation1_m3BE6F3D6BD445EA1506AAC2B31D1813905D8317C (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean CardHandler::Situation2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_Situation2_m90823915DA33304308BE2DB7E92AB0CDFB4BDA3F (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// System.Boolean CardHandler::Situation3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_Situation3_m7941BE8E4AD9C68E5D50D82BE4BC20E3625FD9BB (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// System.Void CardHandler::SwappedCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_SwappedCard_m845AC8D81C1B02855248DD299148CAAB17CCE461 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// System.Boolean CardHandler::IsHand(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsHand_mFFBD04FE525ED0248C45188105E56B68986CF17B (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 GameManager::get_cardDropZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_cardDropZone_mA312AD6D427310902815E695BF06211FB423544E_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::set_cardDropZone(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_cardDropZone_mAEF32E77B87F2945D1F681668A290411F98F2824_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::SetCardAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCardAmount_m4AE9FEF741124BE177936C46B0A8C2293389B470 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean CardHandler::IsFull(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsFull_mFA7A3D529CEEF4BBD386E9010326992826881392 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// System.Boolean CardHandler::IsLeader(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsLeader_m2C137DBD1ACB4BA449E9B61F0B5F38D8CB2EEA15 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// System.Boolean CardHandler::IsSlot(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsSlot_m1BF43388B57BBAD5AFDE36DC2E40FEB321B7DAA6 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CardSizer>()
inline CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D* Component_GetComponent_TisCardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D_m7476CFB626E574486EAF729B37F2287346667BA5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.GridLayoutGroup>()
inline GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* Component_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_m65FFD2F1D4EACA61A052C09C2B71406D616A2923 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CardHandler>()
inline CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* GameObject_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m8CDFFF278FCB4EE86AC46888B714381A0BC0FAD5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void CardHolderSlot::Setter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHolderSlot_Setter_m97DA7109057B57EEE4DCFD7DC05FE4CD6F863E7B (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CardHolderSlot::LeaderBehaviour(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CardHolderSlot_LeaderBehaviour_m024D17ECC28AF753B039F7FB66AE66313F3301EE (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Int32 CardHandler::get_cardPlacedCounter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CardHandler_get_cardPlacedCounter_mBC757C302DDB6514D7B84C86F1F6E3D97E52730C_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) ;
// System.Void CardHandler::set_cardPlacedCounter(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardHandler_set_cardPlacedCounter_m34421BBFB535F029C652F76F6E9E0DB67D4D1200_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void CardHolderSlot/<LeaderBehaviour>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeaderBehaviourU3Ed__16__ctor_mCC57AA63AE86CF465DF65210F7470DCF41875565 (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Card>()
inline Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* GameObject_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_m2AEA8174A34693DE0AFCBA5DB2722A09D7EE75B9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Card::set_isFieldLeader(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Card_set_isFieldLeader_mDF6D09AC7D506CB6EF44531B266035DF7F6F3FD8_inline (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Card>()
inline Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CardHandler/BeingDragDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_inline (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method) ;
// System.Void CardHandler/DragDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_inline (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method) ;
// System.Void CardHandler/EndDragDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_inline (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void CardManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Init_m3A8495E425CEB7BE85B04C3D9C8920EE2C71A93E (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) ;
// System.Void CardManager::Subscriber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Subscriber_mD02062228973B42F4F56A36414C69C0DBC68E2B6 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) ;
// System.Void CardManager/CheckDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDelegate__ctor_m80685A42C2FD0B99D814DC88BC86C5F3B1D0E3D0 (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void CardManager/CreateMonsterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateMonsterDelegate__ctor_m7EC110DE8E51436A35BD9ABC92A650C329E64F92 (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void CardManager/DeleteMonsterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteMonsterDelegate__ctor_m6F78DB1EEF63F86B71B98A1D04C166AF44B9684F (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void CardManager/SwapMonstersDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapMonstersDelegate__ctor_m78975A541D1A382D6887FCA5C7B3339968CCF31A (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<Monster>()
inline Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform CardManager::child(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CardManager_child_m4E5D300200B511A3AF3E72966D77068A86ECDA1C (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// Card CardManager::card(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* CardManager_card_mCF5F5BEFCF6707184B000E5084DC409977F3D4DB (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// System.Boolean CardManager::IsEmptyCardSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardManager_IsEmptyCardSlot_m3D9BD4C8A4F59F720DE7C1700338D4D694A08A2B (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Boolean CardManager::IsEmptyMonster(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardManager_IsEmptyMonster_m5536EE5F648AF3A10716541F76CC10578AC1BF99 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Boolean CardManager::IsTheSameEnemy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardManager_IsTheSameEnemy_m8128C82E505632996C93E6E9B1D4A8A9F224E690 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Void CardManager/SwapMonstersDelegate::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_inline (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void Helpers::Logger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_Logger_mE40AEBF98AF75F61D034535206F650BC95CF1A6D (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void CardManager/CreateMonsterDelegate::Invoke(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_inline (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method) ;
// System.Void CardManager/DeleteMonsterDelegate::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_inline (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method) ;
// CardHolderSlot CardManager::holderSlot(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* CardManager_holderSlot_m86924BE33A4676DD0AB60CC21FC3463BEC88659B (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// CardHandler CardManager::cardHandler(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* CardManager_cardHandler_mF771CF5E429433501571B0EDD51621E310B39A44 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// System.Void Monster::Setter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Setter_mDFF17EF03FF0E9A060CBA332D3DB4CF13C196DD2 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.Void GameManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Init_m370492C243DD3D2F7D0D0C7C19526979E0A6AD59 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void cards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards__ctor_mB1BD4512DC6B7B5E1B1A7615FB1E85BE2F0205E7 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) ;
// System.Void MonsterChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterChild__ctor_m8484CF4BA9B03E9CB47935AA0ED2A2D53A2B0321 (MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF* __this, const RuntimeMethod* method) ;
// System.Void cards::CardSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards_CardSetter_m93A4677245B26E4EC0F46E830E3B9D869F86EA1E (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) ;
// System.Int32 cards::get_cardSlot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t cards_get_cardSlot_mAD507B2B8BF37D649D1D2B531950E2A0C77FEB17_inline (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) ;
// System.Void cards::set_cardAmount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cards_set_cardAmount_m1E3CB6A5E6127F6B4D7932158EEF13DA96016246_inline (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// System.Void cards::set_cardSlot(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cards_set_cardSlot_m8264E70E9E6518E826721841682DDE75A4D891F8_inline (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean cards::get_canGenerateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cards_get_canGenerateCard_m22361148E706A034B8F6571D38E47BF9AED0F748 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) ;
// System.Int32 cards::get_cardRequire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cards_get_cardRequire_m46D28387F79BA5A181AFE8CF69FFBE4B9D972725 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) ;
// System.Int32 cards::get_cardInTheGameMaximum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cards_get_cardInTheGameMaximum_m2E9A317C117173714B37C398F65F00BE1A409451 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Monster>()
inline Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Monster>::Add(T)
inline void List_1_Add_m03C50A2ECA72C6131CF1E5EAC0C7D79DD7311B91_inline (List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3* __this, Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3*, Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponentInChildren_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m525D12DB40D2B4C21488100565ACF7608B85F430 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Monster::MonsterData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_MonsterData_m27C9A6822F4A9B0EFF9D419CE4A891AC36CBC040 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Monster::Setter(UnityEngine.AnimationClip,System.String,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Setter_m9FC89C78F5E88F295E113BE023194D9C03038E1F (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_img, String_t* ___1_name, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_spritePos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_canvasPos, int32_t ___5_heal, const RuntimeMethod* method) ;
// System.Void Monster::SetAnimationController(UnityEngine.AnimationClip&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_SetAnimationController_m925650CCE91F96F63867468CA4B51544DF2E9E62 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** ___0_clip, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController::.ctor(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController__ctor_mE9C4FCBE3FCAF3CE2601CF50D3B19CC683BC47F8 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_controller, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::.ctor()
inline void List_1__ctor_mA99B38B910EF987A3EF5A38F9EED1FDF18ABC8A7 (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, const RuntimeMethod*))List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared)(__this, method);
}
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49 (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_key, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::Add(T)
inline void List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_inline (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, const RuntimeMethod*))List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.AnimatorOverrideController::ApplyOverrides(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, RuntimeObject* ___0_overrides, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
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
// System.Void MonsterObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterObject__ctor_m8C0274518FBD57606D0CB2BD78EF83BC1A2EA803 (MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Boolean Card::get_isLeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_get_isLeader_mF0AD795CE4F9882E0F3A08782F098ECF209A55AF (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	{
		// public bool isLeader { get; set; } = false;
		bool L_0 = __this->___U3CisLeaderU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Card::set_isLeader(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_set_isLeader_mC9D1EB751F458C9CF6DA2A7F7AFBD2EF13FC0B30 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isLeader { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CisLeaderU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Boolean Card::get_isFieldLeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_get_isFieldLeader_mC870B4F5A19C8F14CD525563D13525462752F7A8 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFieldLeader { get; set; } = false;
		bool L_0 = __this->___U3CisFieldLeaderU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Card::set_isFieldLeader(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_set_isFieldLeader_mDF6D09AC7D506CB6EF44531B266035DF7F6F3FD8 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isFieldLeader { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CisFieldLeaderU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void Card::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Awake_m39569145B6FC8D829CD31A8B249FCC3E83E3166E (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___image_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_7), (void*)L_0);
		// if (!isEnemy) data = dataList[Random.Range(0, dataList.Length)]; // assign scriptable object
		bool L_1 = __this->___isEnemy_4;
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (!isEnemy) data = dataList[Random.Range(0, dataList.Length)]; // assign scriptable object
		MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8* L_2 = __this->___dataList_5;
		MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8* L_3 = __this->___dataList_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___data_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_6), (void*)L_6);
		return;
	}

IL_0030:
	{
		// transform.eulerAngles = new Vector3(0, 0, 180);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Card::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Start_m5A0228EA37CBEBDD97207C9F1840A9D3855A8953 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(awaitSetter());
		RuntimeObject* L_0;
		L_0 = Card_awaitSetter_mA4DB48430D9ED06F974A3741534A9EFB5BAABEA9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Card::Setter(System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Setter_m1373A8DA259793E65F987A066AABA0AFBEBDF317 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, String_t* ___0_name, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_cardImage, const RuntimeMethod* method) 
{
	{
		// gameObject.name = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_1, NULL);
		// image.sprite = cardImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___1_cardImage;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Card::awaitSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_awaitSetter_mA4DB48430D9ED06F974A3741534A9EFB5BAABEA9 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* L_0 = (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336*)il2cpp_codegen_object_new(U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CawaitSetterU3Ed__15__ctor_mC8BC4337CF8EDF06334448D490D0134DEFA834AB(L_0, 0, NULL);
		U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Card::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card__ctor_m3A8F4D1C5BFE66DC0F5392230C4E2AC3632648EF (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Card::<awaitSetter>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_U3CawaitSetterU3Eb__15_0_m003739B57F12C7ECC866CB663C5309113C180D29 (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(()=>data != null);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_0 = __this->___data_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
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
// System.Void Card/<awaitSetter>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CawaitSetterU3Ed__15__ctor_mC8BC4337CF8EDF06334448D490D0134DEFA834AB (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Card/<awaitSetter>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CawaitSetterU3Ed__15_System_IDisposable_Dispose_m2706AAF694D22DB7E6EF04535A8B34E094AB6B2B (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Card/<awaitSetter>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CawaitSetterU3Ed__15_MoveNext_m584FFD340814F7676506BAD5EE07353EB20B4B83 (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Card_U3CawaitSetterU3Eb__15_0_m003739B57F12C7ECC866CB663C5309113C180D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(()=>data != null);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)Card_U3CawaitSetterU3Eb__15_0_m003739B57F12C7ECC866CB663C5309113C180D29_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Setter(data.name, data.cardImage);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_7 = V_1;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_8 = V_1;
		NullCheck(L_8);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_9 = L_8->___data_6;
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_4;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_11 = V_1;
		NullCheck(L_11);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_12 = L_11->___data_6;
		NullCheck(L_12);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = L_12->___cardImage_10;
		NullCheck(L_7);
		Card_Setter_m1373A8DA259793E65F987A066AABA0AFBEBDF317(L_7, L_10, L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Card/<awaitSetter>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CawaitSetterU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3B760E0194EB4331E475F4863834AF5311B9D258 (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Card/<awaitSetter>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CawaitSetterU3Ed__15_System_Collections_IEnumerator_Reset_m751A6000FF6F9A3A681567F9689F54CE55803A86 (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CawaitSetterU3Ed__15_System_Collections_IEnumerator_Reset_m751A6000FF6F9A3A681567F9689F54CE55803A86_RuntimeMethod_var)));
	}
}
// System.Object Card/<awaitSetter>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CawaitSetterU3Ed__15_System_Collections_IEnumerator_get_Current_m19653EF9E2C6099998CDF19B1E94DCCB2BFBC23C (U3CawaitSetterU3Ed__15_tBDB090A3E9E2BE28E09392D40AB38728C48AC336* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// UnityEngine.Transform CardHandler::get_parentAfterDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CparentAfterDragU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void CardHandler::set_parentAfterDrag(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_set_parentAfterDrag_mDAD89F7BBF2B5A6D4E0D6C92A2C777CFABA7A0FA (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CparentAfterDragU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentAfterDragU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Int32 CardHandler::get_cardPlacedCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CardHandler_get_cardPlacedCounter_mBC757C302DDB6514D7B84C86F1F6E3D97E52730C (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// public int cardPlacedCounter { get; set; } //how many times the card placed on the card holder slot
		int32_t L_0 = __this->___U3CcardPlacedCounterU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void CardHandler::set_cardPlacedCounter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_set_cardPlacedCounter_m34421BBFB535F029C652F76F6E9E0DB67D4D1200 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int cardPlacedCounter { get; set; } //how many times the card placed on the card holder slot
		int32_t L_0 = ___0_value;
		__this->___U3CcardPlacedCounterU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.Void CardHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Awake_mA1042169A5875258A72104DA96A406FE8F576209 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// initialize();
		CardHandler_initialize_mB07EBBE4D358BC7A05C758D628821AB1BC068684(__this, NULL);
		// }
		return;
	}
}
// System.Void CardHandler::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_initialize_mB07EBBE4D358BC7A05C758D628821AB1BC068684 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_BeingDrag_m5EC385B1778E5AA0F8DD39169E78AE17EFB537B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_Drag_m5CF8E07D78982677991EE05446E5499AC91AAA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_EndDrag_mCCC6EC1EF278B1AEEE91DFFA7548E30610718832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8_m8E682B0AEA41C4390DB5792C7AF3568EE5403648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisSlot = GetComponent<CardSlot>();
		CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* L_0;
		L_0 = Component_GetComponent_TisCardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8_m8E682B0AEA41C4390DB5792C7AF3568EE5403648(__this, Component_GetComponent_TisCardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8_m8E682B0AEA41C4390DB5792C7AF3568EE5403648_RuntimeMethod_var);
		__this->___thisSlot_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisSlot_17), (void*)L_0);
		// thisHandler = GetComponent<CardHandler>();
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_1;
		L_1 = Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30(__this, Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		__this->___thisHandler_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisHandler_18), (void*)L_1);
		// OnBeingDrag += BeingDrag;
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* L_2 = __this->___OnBeingDrag_4;
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* L_3 = (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*)il2cpp_codegen_object_new(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BeingDragDelegate__ctor_mB518C1548E6BDBA04292264359944D555E815E42(L_3, __this, (intptr_t)((void*)CardHandler_BeingDrag_m5EC385B1778E5AA0F8DD39169E78AE17EFB537B3_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		__this->___OnBeingDrag_4 = ((BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*)CastclassSealed((RuntimeObject*)L_4, BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnBeingDrag_4), (void*)((BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*)CastclassSealed((RuntimeObject*)L_4, BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var)));
		// OnDragDelegate += Drag;
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* L_5 = __this->___OnDragDelegate_5;
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* L_6 = (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*)il2cpp_codegen_object_new(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DragDelegate__ctor_m814A5C46E0BB3ABF5994BD0113BEAB4FAC02E967(L_6, __this, (intptr_t)((void*)CardHandler_Drag_m5CF8E07D78982677991EE05446E5499AC91AAA51_RuntimeMethod_var), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___OnDragDelegate_5 = ((DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*)CastclassSealed((RuntimeObject*)L_7, DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDragDelegate_5), (void*)((DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*)CastclassSealed((RuntimeObject*)L_7, DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var)));
		// OnEndDrag += EndDrag;
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* L_8 = __this->___OnEndDrag_6;
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* L_9 = (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*)il2cpp_codegen_object_new(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EndDragDelegate__ctor_mD5C2218F9DDF3D85B44F41D7831E7A34A435F7D9(L_9, __this, (intptr_t)((void*)CardHandler_EndDrag_mCCC6EC1EF278B1AEEE91DFFA7548E30610718832_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		__this->___OnEndDrag_6 = ((EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*)CastclassSealed((RuntimeObject*)L_10, EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEndDrag_6), (void*)((EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*)CastclassSealed((RuntimeObject*)L_10, EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var)));
		// Activator();
		CardHandler_Activator_mB55D45D2ADA178AA61225DDA75452E61B8E6761E(__this, NULL);
		// }
		return;
	}
}
// System.Void CardHandler::BeingDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_BeingDrag_m5EC385B1778E5AA0F8DD39169E78AE17EFB537B3 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.parent.GetComponent<CardHolderSlot>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_2;
		L_2 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_1, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// cardHolderSlotBefore = transform.parent.GetComponent<CardHolderSlot>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_5);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_6;
		L_6 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_5, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		__this->___cardHolderSlotBefore_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cardHolderSlotBefore_19), (void*)L_6);
		// previousSlotPos = cardHolderSlotBefore.slotPos;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_7 = __this->___cardHolderSlotBefore_19;
		NullCheck(L_7);
		int32_t L_8 = L_7->___slotPos_4;
		__this->___previousSlotPos_22 = L_8;
	}

IL_003f:
	{
		// parentAfterDrag = transform.parent; //set the new grid to my transform parent
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		CardHandler_set_parentAfterDrag_mDAD89F7BBF2B5A6D4E0D6C92A2C777CFABA7A0FA_inline(__this, L_10, NULL);
		// transform.SetParent(transform.root); // put the transform at the top of the list
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_12, NULL);
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, L_13, NULL);
		// transform.SetAsLastSibling();//then make hte the last object
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_14, NULL);
		// previousParent = parentAfterDrag; // make the previous is my parentafterdrag
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		__this->___previousParent_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousParent_12), (void*)L_15);
		// }
		return;
	}
}
// System.Void CardHandler::Drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Drag_m5CF8E07D78982677991EE05446E5499AC91AAA51 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.position = Input.GetTouch(0).position; // get the positoin
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void CardHandler::EndDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_EndDrag_mCCC6EC1EF278B1AEEE91DFFA7548E30610718832 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action();
		CardHandler_Action_m588A102956BC2EC3DCDAA7759AFC8C709B660CF3(__this, NULL);
		// GameManager.instance.CreateCard();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void GameManager::CreateCard() */, L_0);
		// }
		return;
	}
}
// System.Void CardHandler::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Action_m588A102956BC2EC3DCDAA7759AFC8C709B660CF3 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B8_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B7_0 = NULL;
	CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* G_B11_0 = NULL;
	CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* G_B10_0 = NULL;
	{
		// swapHandler?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___swapHandler_9;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0017;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
	}

IL_0017:
	{
		// setParentHandler?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = __this->___setParentHandler_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0023;
		}
	}
	{
		goto IL_002e;
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_5 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B5_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B5_0, __this, L_5, NULL);
	}

IL_002e:
	{
		// setPreviousParentHandler?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = __this->___setPreviousParentHandler_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_003a;
		}
	}
	{
		goto IL_0045;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_8 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B8_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B8_0, __this, L_8, NULL);
	}

IL_0045:
	{
		// CardManager.instance.checkHandlerDelegate?.Invoke();
		CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* L_9 = ((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* L_10 = L_9->___checkHandlerDelegate_7;
		CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* L_11 = L_10;
		G_B10_0 = L_11;
		if (L_11)
		{
			G_B11_0 = L_11;
			goto IL_0055;
		}
	}
	{
		goto IL_005a;
	}

IL_0055:
	{
		NullCheck(G_B11_0);
		CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_inline(G_B11_0, NULL);
	}

IL_005a:
	{
		// Activator();
		CardHandler_Activator_mB55D45D2ADA178AA61225DDA75452E61B8E6761E(__this, NULL);
		// }
		return;
	}
}
// System.Void CardHandler::SetParent(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_SetParent_m308DABF313CECAF337B596ABE36BD9182DA08E34 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_SetPreviousParent_m2D1B46148B8263BC22F6560B5B4B82AA7027E529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Situation1()) return;
		bool L_0;
		L_0 = CardHandler_Situation1_m3BE6F3D6BD445EA1506AAC2B31D1813905D8317C(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Situation1()) return;
		return;
	}

IL_0009:
	{
		// transform.SetParent(parentAfterDrag); //change parent to parentafterdrag
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		NullCheck(L_1);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_1, L_2, NULL);
		// setPreviousParentHandler -= SetPreviousParent;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = __this->___setPreviousParentHandler_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_4, __this, (intptr_t)((void*)CardHandler_SetPreviousParent_m2D1B46148B8263BC22F6560B5B4B82AA7027E529_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		__this->___setPreviousParentHandler_8 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_5, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setPreviousParentHandler_8), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_5, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CardHandler::SetPreviousParent(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_SetPreviousParent_m2D1B46148B8263BC22F6560B5B4B82AA7027E529 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	{
		// if (Situation2())
		bool L_0;
		L_0 = CardHandler_Situation2_m90823915DA33304308BE2DB7E92AB0CDFB4BDA3F(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// transform.SetParent(previousParent); //change parent to parentafterdrag
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___previousParent_12;
		NullCheck(L_1);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void CardHandler::Swap(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Swap_m1D23EBA222944F3520F716F59D45225EB4651123 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B3_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	{
		// if (Situation3())
		bool L_0;
		L_0 = CardHandler_Situation3_m7941BE8E4AD9C68E5D50D82BE4BC20E3625FD9BB(__this, NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// SwappedCard();
		CardHandler_SwappedCard_m845AC8D81C1B02855248DD299148CAAB17CCE461(__this, NULL);
		// flag = false;
		__this->___flag_21 = (bool)0;
		// handHandler?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = __this->___handHandler_10;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B3_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B3_0, __this, L_3, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void CardHandler::Hand(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Hand_mAF6171FB81E716BECB3BA347E3C21506DC217EF8 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsHand(swappedParent))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___swappedParent_13;
		bool L_1;
		L_1 = CardHandler_IsHand_mFFBD04FE525ED0248C45188105E56B68986CF17B(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// Destroy(swappedParent.GetChild(swappedParent.childCount-1).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___swappedParent_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___swappedParent_13;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// GameManager.instance.cardDropZone++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameManager_get_cardDropZone_mA312AD6D427310902815E695BF06211FB423544E_inline(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		GameManager_set_cardDropZone_mAEF32E77B87F2945D1F681668A290411F98F2824_inline(L_8, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		// GameManager.instance.SetCardAmount();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_11);
		GameManager_SetCardAmount_m4AE9FEF741124BE177936C46B0A8C2293389B470(L_11, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Boolean CardHandler::Situation1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_Situation1_m3BE6F3D6BD445EA1506AAC2B31D1813905D8317C (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// private bool Situation1() => !IsFull(parentAfterDrag);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		bool L_1;
		L_1 = CardHandler_IsFull_mFA7A3D529CEEF4BBD386E9010326992826881392(__this, L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CardHandler::Situation2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_Situation2_m90823915DA33304308BE2DB7E92AB0CDFB4BDA3F (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// private bool Situation2() => IsLeader(parentAfterDrag) && IsFull(parentAfterDrag);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		bool L_1;
		L_1 = CardHandler_IsLeader_m2C137DBD1ACB4BA449E9B61F0B5F38D8CB2EEA15(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		bool L_3;
		L_3 = CardHandler_IsFull_mFA7A3D529CEEF4BBD386E9010326992826881392(__this, L_2, NULL);
		return L_3;
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.Boolean CardHandler::Situation3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_Situation3_m7941BE8E4AD9C68E5D50D82BE4BC20E3625FD9BB (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// private bool Situation3() => IsFull(parentAfterDrag) && !IsLeader(parentAfterDrag) && IsSlot(parentAfterDrag);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		bool L_1;
		L_1 = CardHandler_IsFull_mFA7A3D529CEEF4BBD386E9010326992826881392(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		bool L_3;
		L_3 = CardHandler_IsLeader_m2C137DBD1ACB4BA449E9B61F0B5F38D8CB2EEA15(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		bool L_5;
		L_5 = CardHandler_IsSlot_m1BF43388B57BBAD5AFDE36DC2E40FEB321B7DAA6(__this, L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Boolean CardHandler::IsFront(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsFront_mC34F95CECEFAA81E22C253DA773D6172766ED832 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool IsFront(Transform parent) => parent.GetComponent<CardHolderSlot>() != null && parent.GetComponent<CardHolderSlot>().isFront; // if this card is a front card (attackable)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		NullCheck(L_0);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_1;
		L_1 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_0, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_parent;
		NullCheck(L_3);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_4;
		L_4 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_3, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = L_4->___isFront_7;
		return L_5;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean CardHandler::IsFull(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsFull_mFA7A3D529CEEF4BBD386E9010326992826881392 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool IsFull(Transform transform) => transform.transform.childCount > 0 && transform.GetChild(0).transform != null && transform.GetComponent<CardHolderSlot>() != null; // if this card has  childrens
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___0_transform;
		NullCheck(L_7);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_8;
		L_8 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_7, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean CardHandler::IsHand(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsHand_mFFBD04FE525ED0248C45188105E56B68986CF17B (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D_m7476CFB626E574486EAF729B37F2287346667BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool IsHand(Transform transform) => transform.GetComponent<CardSizer>() != null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D* L_1;
		L_1 = Component_GetComponent_TisCardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D_m7476CFB626E574486EAF729B37F2287346667BA5(L_0, Component_GetComponent_TisCardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D_m7476CFB626E574486EAF729B37F2287346667BA5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean CardHandler::IsSlot(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsSlot_m1BF43388B57BBAD5AFDE36DC2E40FEB321B7DAA6 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool IsSlot(Transform transform) => transform.GetComponent<CardHolderSlot>() != null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_1;
		L_1 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_0, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean CardHandler::IsLeader(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardHandler_IsLeader_m2C137DBD1ACB4BA449E9B61F0B5F38D8CB2EEA15 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.GetComponent<CardHolderSlot>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_1;
		L_1 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_0, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return transform.GetComponent<CardHolderSlot>().isLeader;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		NullCheck(L_3);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_4;
		L_4 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_3, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = L_4->___isLeader_8;
		return L_5;
	}

IL_001a:
	{
		// else return false;
		return (bool)0;
	}
}
// System.Void CardHandler::SwappedCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_SwappedCard_m845AC8D81C1B02855248DD299148CAAB17CCE461 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// if (flag) return;
		bool L_0 = __this->___flag_21;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (flag) return;
		return;
	}

IL_0009:
	{
		// temp1 = previousParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___previousParent_12;
		__this->___temp1_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp1_16), (void*)L_1);
		// transform.SetParent(parentAfterDrag);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		// parentAfterDrag.GetChild(0).transform.SetParent(temp1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___temp1_16;
		NullCheck(L_6);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_7, NULL);
		// swappedParent = temp1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___temp1_16;
		__this->___swappedParent_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swappedParent_13), (void*)L_8);
		// flag = true;
		__this->___flag_21 = (bool)1;
		// }
		return;
	}
}
// System.Void CardHandler::Activator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler_Activator_mB55D45D2ADA178AA61225DDA75452E61B8E6761E (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_Hand_mAF6171FB81E716BECB3BA347E3C21506DC217EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_SetParent_m308DABF313CECAF337B596ABE36BD9182DA08E34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_SetPreviousParent_m2D1B46148B8263BC22F6560B5B4B82AA7027E529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_Swap_m1D23EBA222944F3520F716F59D45225EB4651123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setParentHandler += SetParent;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___setParentHandler_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)CardHandler_SetParent_m308DABF313CECAF337B596ABE36BD9182DA08E34_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___setParentHandler_7 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setParentHandler_7), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// setPreviousParentHandler += SetPreviousParent;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = __this->___setPreviousParentHandler_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_4, __this, (intptr_t)((void*)CardHandler_SetPreviousParent_m2D1B46148B8263BC22F6560B5B4B82AA7027E529_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		__this->___setPreviousParentHandler_8 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_5, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setPreviousParentHandler_8), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_5, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// swapHandler += Swap;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = __this->___swapHandler_9;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, __this, (intptr_t)((void*)CardHandler_Swap_m1D23EBA222944F3520F716F59D45225EB4651123_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_6, L_7, NULL);
		__this->___swapHandler_9 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_8, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swapHandler_9), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_8, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// handHandler += Hand;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = __this->___handHandler_10;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_10, __this, (intptr_t)((void*)CardHandler_Hand_mAF6171FB81E716BECB3BA347E3C21506DC217EF8_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		__this->___handHandler_10 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_11, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handHandler_10), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_11, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// flag = false;
		__this->___flag_21 = (bool)0;
		// }
		return;
	}
}
// System.Void CardHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHandler__ctor_m403521766C8C1AB29E51ABC4D44AF6632EECADB3 (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
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
void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_Multicast(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* currentDelegate = reinterpret_cast<BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_OpenInst(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_OpenStatic(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_OpenStaticInvoker(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_ClosedStaticInvoker(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393 (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CardHandler/BeingDragDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeingDragDelegate__ctor_mB518C1548E6BDBA04292264359944D555E815E42 (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_Multicast;
}
// System.Void CardHandler/BeingDragDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardHandler/BeingDragDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BeingDragDelegate_BeginInvoke_mE2AAC7DC84B5A15EF64F518D0E397EF41388FF45 (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void CardHandler/BeingDragDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeingDragDelegate_EndInvoke_mB55DD3E9017D141C6B4BC34FCDAAE95DB7AD8445 (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_Multicast(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* currentDelegate = reinterpret_cast<DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_OpenInst(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_OpenStatic(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_OpenStaticInvoker(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_ClosedStaticInvoker(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2 (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CardHandler/DragDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragDelegate__ctor_m814A5C46E0BB3ABF5994BD0113BEAB4FAC02E967 (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_Multicast;
}
// System.Void CardHandler/DragDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323 (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardHandler/DragDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DragDelegate_BeginInvoke_mF14D8F5DEC13FD3F3768B9BCAC2E922DB0C2D551 (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void CardHandler/DragDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragDelegate_EndInvoke_mDD52598CE13DC97E251B54B0C46CDACF6E673F0E (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_Multicast(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* currentDelegate = reinterpret_cast<EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_OpenInst(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_OpenStatic(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_OpenStaticInvoker(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_ClosedStaticInvoker(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209 (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CardHandler/EndDragDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndDragDelegate__ctor_mD5C2218F9DDF3D85B44F41D7831E7A34A435F7D9 (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_Multicast;
}
// System.Void CardHandler/EndDragDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7 (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardHandler/EndDragDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndDragDelegate_BeginInvoke_m4EF7EF8ED330024AEAFB357575A1C46864989B53 (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void CardHandler/EndDragDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndDragDelegate_EndInvoke_m4D6236915197DBDD352A0F1B11495D1E7D2B6F22 (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CardHolderSlot::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHolderSlot_Awake_m2F1C54E9BBB6CB75FB10B853ECE3F12ECDF8BD74 (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_m65FFD2F1D4EACA61A052C09C2B71406D616A2923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___image_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_11), (void*)L_0);
		// grid = GetComponent<GridLayoutGroup>();
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_1;
		L_1 = Component_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_m65FFD2F1D4EACA61A052C09C2B71406D616A2923(__this, Component_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_m65FFD2F1D4EACA61A052C09C2B71406D616A2923_RuntimeMethod_var);
		__this->___grid_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void CardHolderSlot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHolderSlot_Start_mD24D9ECB7D60FA68CF29D125A451D4570C883008 (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isLeader) image.sprite = leaderImage;
		bool L_0 = __this->___isLeader_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if (isLeader) image.sprite = leaderImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___image_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___leaderImage_5;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
	}

IL_0019:
	{
		// if (isEnemy)
		bool L_3 = __this->___isEnemy_9;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// grid.enabled = false;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_4 = __this->___grid_6;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void CardHolderSlot::OnDrop(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHolderSlot_OnDrop_mD6724EA54075C2F746787C8BE86400CC141895A8 (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m8CDFFF278FCB4EE86AC46888B714381A0BC0FAD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dropped = eventData.pointerDrag;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_0, NULL);
		__this->___dropped_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropped_14), (void*)L_1);
		// draggableItem = dropped.GetComponent<CardHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___dropped_14;
		NullCheck(L_2);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_3;
		L_3 = GameObject_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m8CDFFF278FCB4EE86AC46888B714381A0BC0FAD5(L_2, GameObject_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m8CDFFF278FCB4EE86AC46888B714381A0BC0FAD5_RuntimeMethod_var);
		__this->___draggableItem_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___draggableItem_13), (void*)L_3);
		// if (draggableItem == null) return;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_4 = __this->___draggableItem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// if (draggableItem == null) return;
		return;
	}

IL_002c:
	{
		// Setter();
		CardHolderSlot_Setter_m97DA7109057B57EEE4DCFD7DC05FE4CD6F863E7B(__this, NULL);
		// if (isLeader && transform.childCount <= 0)
		bool L_6 = __this->___isLeader_8;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_7, NULL);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// StartCoroutine(LeaderBehaviour(0.05f));
		RuntimeObject* L_9;
		L_9 = CardHolderSlot_LeaderBehaviour_m024D17ECC28AF753B039F7FB66AE66313F3301EE(__this, (0.0500000007f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void CardHolderSlot::Setter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHolderSlot_Setter_m97DA7109057B57EEE4DCFD7DC05FE4CD6F863E7B (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// draggableItem.parentAfterDrag = transform;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_0 = __this->___draggableItem_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		CardHandler_set_parentAfterDrag_mDAD89F7BBF2B5A6D4E0D6C92A2C777CFABA7A0FA_inline(L_0, L_1, NULL);
		// draggableItem.slotPos = slotPos;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_2 = __this->___draggableItem_13;
		int32_t L_3 = __this->___slotPos_4;
		NullCheck(L_2);
		L_2->___slotPos_23 = L_3;
		// draggableItem.cardHolderSlotAfter = this;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_4 = __this->___draggableItem_13;
		NullCheck(L_4);
		L_4->___cardHolderSlotAfter_20 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___cardHolderSlotAfter_20), (void*)__this);
		// monster = draggableItem.monster;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_5 = __this->___draggableItem_13;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___monster_15;
		__this->___monster_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monster_15), (void*)L_6);
		// draggableItem.cardPlacedCounter++;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_7 = __this->___draggableItem_13;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = CardHandler_get_cardPlacedCounter_mBC757C302DDB6514D7B84C86F1F6E3D97E52730C_inline(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		CardHandler_set_cardPlacedCounter_m34421BBFB535F029C652F76F6E9E0DB67D4D1200_inline(L_8, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CardHolderSlot::LeaderBehaviour(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CardHolderSlot_LeaderBehaviour_m024D17ECC28AF753B039F7FB66AE66313F3301EE (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* L_0 = (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC*)il2cpp_codegen_object_new(U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLeaderBehaviourU3Ed__16__ctor_mCC57AA63AE86CF465DF65210F7470DCF41875565(L_0, 0, NULL);
		U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* L_2 = L_1;
		float L_3 = ___0_time;
		NullCheck(L_2);
		L_2->___time_2 = L_3;
		return L_2;
	}
}
// System.Void CardHolderSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardHolderSlot__ctor_m1BC1CAF4DFA31CAB04759A7E052F2C2DE4D19C6F (CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* __this, const RuntimeMethod* method) 
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
// System.Void CardHolderSlot/<LeaderBehaviour>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeaderBehaviourU3Ed__16__ctor_mCC57AA63AE86CF465DF65210F7470DCF41875565 (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CardHolderSlot/<LeaderBehaviour>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeaderBehaviourU3Ed__16_System_IDisposable_Dispose_m7278C2ACAF4E9543D4F1F5765B210C9733588AF2 (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CardHolderSlot/<LeaderBehaviour>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLeaderBehaviourU3Ed__16_MoveNext_mB58FF19A8AAA41E124699B0499510983EB234A25 (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_BeingDrag_m5EC385B1778E5AA0F8DD39169E78AE17EFB537B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_Drag_m5CF8E07D78982677991EE05446E5499AC91AAA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardHandler_EndDrag_mCCC6EC1EF278B1AEEE91DFFA7548E30610718832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_m2AEA8174A34693DE0AFCBA5DB2722A09D7EE75B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(time);
		float L_4 = __this->___time_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// draggableItem.OnBeingDrag -= draggableItem.GetComponent<CardHandler>().BeingDrag;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_6 = V_1;
		NullCheck(L_6);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_7 = L_6->___draggableItem_13;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_8 = L_7;
		NullCheck(L_8);
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* L_9 = L_8->___OnBeingDrag_4;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_10 = V_1;
		NullCheck(L_10);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_11 = L_10->___draggableItem_13;
		NullCheck(L_11);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_12;
		L_12 = Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30(L_11, Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* L_13 = (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*)il2cpp_codegen_object_new(BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		BeingDragDelegate__ctor_mB518C1548E6BDBA04292264359944D555E815E42(L_13, L_12, (intptr_t)((void*)CardHandler_BeingDrag_m5EC385B1778E5AA0F8DD39169E78AE17EFB537B3_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_13, NULL);
		NullCheck(L_8);
		L_8->___OnBeingDrag_4 = ((BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*)CastclassSealed((RuntimeObject*)L_14, BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___OnBeingDrag_4), (void*)((BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393*)CastclassSealed((RuntimeObject*)L_14, BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393_il2cpp_TypeInfo_var)));
		// draggableItem.OnDragDelegate -= draggableItem.GetComponent<CardHandler>().Drag;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_15 = V_1;
		NullCheck(L_15);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_16 = L_15->___draggableItem_13;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_17 = L_16;
		NullCheck(L_17);
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* L_18 = L_17->___OnDragDelegate_5;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_19 = V_1;
		NullCheck(L_19);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_20 = L_19->___draggableItem_13;
		NullCheck(L_20);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_21;
		L_21 = Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30(L_20, Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* L_22 = (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*)il2cpp_codegen_object_new(DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		DragDelegate__ctor_m814A5C46E0BB3ABF5994BD0113BEAB4FAC02E967(L_22, L_21, (intptr_t)((void*)CardHandler_Drag_m5CF8E07D78982677991EE05446E5499AC91AAA51_RuntimeMethod_var), NULL);
		Delegate_t* L_23;
		L_23 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_18, L_22, NULL);
		NullCheck(L_17);
		L_17->___OnDragDelegate_5 = ((DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*)CastclassSealed((RuntimeObject*)L_23, DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___OnDragDelegate_5), (void*)((DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2*)CastclassSealed((RuntimeObject*)L_23, DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2_il2cpp_TypeInfo_var)));
		// draggableItem.OnEndDrag -= draggableItem.GetComponent<CardHandler>().EndDrag;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_24 = V_1;
		NullCheck(L_24);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_25 = L_24->___draggableItem_13;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_26 = L_25;
		NullCheck(L_26);
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* L_27 = L_26->___OnEndDrag_6;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_28 = V_1;
		NullCheck(L_28);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_29 = L_28->___draggableItem_13;
		NullCheck(L_29);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_30;
		L_30 = Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30(L_29, Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* L_31 = (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*)il2cpp_codegen_object_new(EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		EndDragDelegate__ctor_mD5C2218F9DDF3D85B44F41D7831E7A34A435F7D9(L_31, L_30, (intptr_t)((void*)CardHandler_EndDrag_mCCC6EC1EF278B1AEEE91DFFA7548E30610718832_RuntimeMethod_var), NULL);
		Delegate_t* L_32;
		L_32 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_27, L_31, NULL);
		NullCheck(L_26);
		L_26->___OnEndDrag_6 = ((EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*)CastclassSealed((RuntimeObject*)L_32, EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___OnEndDrag_6), (void*)((EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209*)CastclassSealed((RuntimeObject*)L_32, EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209_il2cpp_TypeInfo_var)));
		// draggableItem.gameObject.GetComponent<Card>().isFieldLeader = true;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_33 = V_1;
		NullCheck(L_33);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_34 = L_33->___draggableItem_13;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		NullCheck(L_35);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_36;
		L_36 = GameObject_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_m2AEA8174A34693DE0AFCBA5DB2722A09D7EE75B9(L_35, GameObject_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_m2AEA8174A34693DE0AFCBA5DB2722A09D7EE75B9_RuntimeMethod_var);
		NullCheck(L_36);
		Card_set_isFieldLeader_mDF6D09AC7D506CB6EF44531B266035DF7F6F3FD8_inline(L_36, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CardHolderSlot/<LeaderBehaviour>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLeaderBehaviourU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m059D609F93265F28B79A4F7D997FE6F0EB7A921B (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CardHolderSlot/<LeaderBehaviour>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeaderBehaviourU3Ed__16_System_Collections_IEnumerator_Reset_mABD55FD2F9F37B1C3D02F052E924D4833B1D756E (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLeaderBehaviourU3Ed__16_System_Collections_IEnumerator_Reset_mABD55FD2F9F37B1C3D02F052E924D4833B1D756E_RuntimeMethod_var)));
	}
}
// System.Object CardHolderSlot/<LeaderBehaviour>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLeaderBehaviourU3Ed__16_System_Collections_IEnumerator_get_Current_mF185E290B5701A966B1A58BF23B8E6635FBBD615 (U3CLeaderBehaviourU3Ed__16_tDE121601DF3D19F361EF3E60F6920976FC92D0DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CardSizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSizer_Start_m1E83F803B66A0405B2938A1AF36433AE6A176F3B (CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CardSizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSizer_Update_m3D1DCCC13DE4274BDAE7789C1C41D3C9A56D24F1 (CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CardSizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSizer__ctor_m2203B9360C170E134C972BCDC89CAA6EF600BD75 (CardSizer_t1F4E1E5C025D4A5FB84F9B4146F20DB73EA5289D* __this, const RuntimeMethod* method) 
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
// System.Void CardSlot::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSlot_Awake_mF46CAE3C21A77DEAC3584C49EB05C373EAEEBFFF (CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// card = GetComponent<Card>();
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_0;
		L_0 = Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD(__this, Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD_RuntimeMethod_var);
		__this->___card_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___card_5), (void*)L_0);
		// handler = GetComponent<CardHandler>();
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_1;
		L_1 = Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30(__this, Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		__this->___handler_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handler_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void CardSlot::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSlot_OnBeginDrag_m90823FF9A2BEBDABE06DB9807343A6A186415070 (CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* G_B2_0 = NULL;
	BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* G_B1_0 = NULL;
	{
		// handler.OnBeingDrag?.Invoke();
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_0 = __this->___handler_4;
		NullCheck(L_0);
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* L_1 = L_0->___OnBeingDrag_4;
		BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_inline(G_B2_0, NULL);
	}

IL_0016:
	{
		// handler.image.raycastTarget = false;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_3 = __this->___handler_4;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = L_3->___image_14;
		NullCheck(L_4);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_4, (bool)0);
		// }
		return;
	}
}
// System.Void CardSlot::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSlot_OnDrag_m971F695363F2C9D1AA3E74D066AD79510542833C (CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* G_B2_0 = NULL;
	DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* G_B1_0 = NULL;
	{
		// handler.OnDragDelegate?.Invoke();
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_0 = __this->___handler_4;
		NullCheck(L_0);
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* L_1 = L_0->___OnDragDelegate_5;
		DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void CardSlot::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSlot_OnEndDrag_m5E1D6C453314E657A02816C79DE03EC9A9B4AF3C (CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* G_B2_0 = NULL;
	EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* G_B1_0 = NULL;
	{
		// handler.OnEndDrag?.Invoke();
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_0 = __this->___handler_4;
		NullCheck(L_0);
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* L_1 = L_0->___OnEndDrag_6;
		EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_inline(G_B2_0, NULL);
	}

IL_0016:
	{
		// handler.image.raycastTarget = true;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_3 = __this->___handler_4;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = L_3->___image_14;
		NullCheck(L_4);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_4, (bool)1);
		// }
		return;
	}
}
// System.Void CardSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSlot__ctor_m4865C946F0B43D45703B51ECBA3EE483924199A8 (CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8* __this, const RuntimeMethod* method) 
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
// System.Void Helpers::Logger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_Logger_mE40AEBF98AF75F61D034535206F650BC95CF1A6D (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(message);
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
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
// System.Void CardManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Awake_m43F9F25286E41DB135D62C4F530FA8BD1911D91D (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		CardManager_Init_m3A8495E425CEB7BE85B04C3D9C8920EE2C71A93E(__this, NULL);
		// }
		return;
	}
}
// System.Void CardManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Start_m6F8A2538218756D945A3D7D32328AB9F7B4BBA75 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) 
{
	{
		// Subscriber();
		CardManager_Subscriber_mD02062228973B42F4F56A36414C69C0DBC68E2B6(__this, NULL);
		// }
		return;
	}
}
// System.Void CardManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Init_m3A8495E425CEB7BE85B04C3D9C8920EE2C71A93E (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* L_0 = ((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// if (instance != this)
		CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* L_2 = ((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(instance);
		CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* L_4 = ((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// instance = this;
		((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0032:
	{
		// instance = this;
		((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_StaticFields*)il2cpp_codegen_static_fields_for(CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void CardManager::Subscriber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Subscriber_mD02062228973B42F4F56A36414C69C0DBC68E2B6 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardManager_Check_m2E43F31252A84C9B0D1421E30CACAEA34BEB1390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardManager_CreateMonster_mC47774A9BA0723FFE9F66F6E51755C6A35EF0E6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardManager_DeleteMonster_m52A3ABD569BD0C1CE45758E6047D67648639B59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardManager_Swap_mF5273F3807953B448CF8F1837BA5C264D2B9F716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// checkHandlerDelegate = Check;
		CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* L_0 = (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6*)il2cpp_codegen_object_new(CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CheckDelegate__ctor_m80685A42C2FD0B99D814DC88BC86C5F3B1D0E3D0(L_0, __this, (intptr_t)((void*)CardManager_Check_m2E43F31252A84C9B0D1421E30CACAEA34BEB1390_RuntimeMethod_var), NULL);
		__this->___checkHandlerDelegate_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkHandlerDelegate_7), (void*)L_0);
		// createMonsterDelegate = CreateMonster;
		CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* L_1 = (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843*)il2cpp_codegen_object_new(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CreateMonsterDelegate__ctor_m7EC110DE8E51436A35BD9ABC92A650C329E64F92(L_1, __this, (intptr_t)((void*)CardManager_CreateMonster_mC47774A9BA0723FFE9F66F6E51755C6A35EF0E6C_RuntimeMethod_var), NULL);
		__this->___createMonsterDelegate_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___createMonsterDelegate_8), (void*)L_1);
		// deleteMonsterDelegate = DeleteMonster;
		DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* L_2 = (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA*)il2cpp_codegen_object_new(DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DeleteMonsterDelegate__ctor_m6F78DB1EEF63F86B71B98A1D04C166AF44B9684F(L_2, __this, (intptr_t)((void*)CardManager_DeleteMonster_m52A3ABD569BD0C1CE45758E6047D67648639B59B_RuntimeMethod_var), NULL);
		__this->___deleteMonsterDelegate_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deleteMonsterDelegate_9), (void*)L_2);
		// swapMonstersDelegate = Swap;
		SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* L_3 = (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3*)il2cpp_codegen_object_new(SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SwapMonstersDelegate__ctor_m78975A541D1A382D6887FCA5C7B3339968CCF31A(L_3, __this, (intptr_t)((void*)CardManager_Swap_mF5273F3807953B448CF8F1837BA5C264D2B9F716_RuntimeMethod_var), NULL);
		__this->___swapMonstersDelegate_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swapMonstersDelegate_10), (void*)L_3);
		// }
		return;
	}
}
// CardHolderSlot CardManager::holderSlot(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* CardManager_holderSlot_m86924BE33A4676DD0AB60CC21FC3463BEC88659B (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CardHolderSlot holderSlot(Transform parent) => parent.GetComponent<CardHolderSlot>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		NullCheck(L_0);
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_1;
		L_1 = Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6(L_0, Component_GetComponent_TisCardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494_m43C7723E98EE04844CD95D25CACEA206CF84A5C6_RuntimeMethod_var);
		return L_1;
	}
}
// Card CardManager::card(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* CardManager_card_mCF5F5BEFCF6707184B000E5084DC409977F3D4DB (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Card card(Transform parent) => parent.GetComponent<Card>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		NullCheck(L_0);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_1;
		L_1 = Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD(L_0, Component_GetComponent_TisCard_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A_mE2E1441720A66A9040AD19C13CB7392F62F671BD_RuntimeMethod_var);
		return L_1;
	}
}
// CardHandler CardManager::cardHandler(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* CardManager_cardHandler_mF771CF5E429433501571B0EDD51621E310B39A44 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CardHandler cardHandler (Transform parent) => parent.GetComponent<CardHandler>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		NullCheck(L_0);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_1;
		L_1 = Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30(L_0, Component_GetComponent_TisCardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259_m19472310145149471B16531E797820EF7233AD30_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Transform CardManager::child(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CardManager_child_m4E5D300200B511A3AF3E72966D77068A86ECDA1C (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	{
		// private Transform child(Transform parent) => parent.GetChild(0).transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		return L_2;
	}
}
// System.Boolean CardManager::IsEmptyMonster(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardManager_IsEmptyMonster_m5536EE5F648AF3A10716541F76CC10578AC1BF99 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool IsEmptyMonster(int count) => GameManager.instance.monsterParents[count].transform.childCount <= 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = L_0->___monsterParents_14;
		int32_t L_2 = ___0_count;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_5, NULL);
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CardManager::IsEmptyCardSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardManager_IsEmptyCardSlot_m3D9BD4C8A4F59F720DE7C1700338D4D694A08A2B (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		// bool IsEmptyCardSlot(int count) => cardHolderSlots[count].childCount <= 0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___cardHolderSlots_5;
		int32_t L_1 = ___0_count;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		return (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CardManager::IsTheSameEnemy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardManager_IsTheSameEnemy_m8128C82E505632996C93E6E9B1D4A8A9F224E690 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool IsTheSameEnemy(int count) => GameManager.instance.monsterParents[count].GetComponentInChildren<Monster>().data == card(child(cardHolderSlots[count])).data;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = L_0->___monsterParents_14;
		int32_t L_2 = ___0_count;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_5;
		L_5 = Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D(L_4, Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D_RuntimeMethod_var);
		NullCheck(L_5);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_6 = L_5->___data_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = __this->___cardHolderSlots_5;
		int32_t L_8 = ___0_count;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = CardManager_child_m4E5D300200B511A3AF3E72966D77068A86ECDA1C(__this, L_10, NULL);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_12;
		L_12 = CardManager_card_mCF5F5BEFCF6707184B000E5084DC409977F3D4DB(__this, L_11, NULL);
		NullCheck(L_12);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_13 = L_12->___data_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_13, NULL);
		return L_14;
	}
}
// System.Void CardManager::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Check_m2E43F31252A84C9B0D1421E30CACAEA34BEB1390 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* G_B6_0 = NULL;
	SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* G_B5_0 = NULL;
	CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* G_B11_0 = NULL;
	CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* G_B10_0 = NULL;
	DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* G_B16_0 = NULL;
	DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* G_B15_0 = NULL;
	{
		// for (int i = 0; i < cardHolderSlots.Length; i++)
		V_0 = 0;
		goto IL_00c4;
	}

IL_0007:
	{
		// if (!IsEmptyCardSlot(i)&&!IsEmptyMonster(i))
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = CardManager_IsEmptyCardSlot_m3D9BD4C8A4F59F720DE7C1700338D4D694A08A2B(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = CardManager_IsEmptyMonster_m5536EE5F648AF3A10716541F76CC10578AC1BF99(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		// if (!IsTheSameEnemy(i))
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = CardManager_IsTheSameEnemy_m8128C82E505632996C93E6E9B1D4A8A9F224E690(__this, L_4, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// swapMonstersDelegate?.Invoke(i);
		SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* L_6 = __this->___swapMonstersDelegate_10;
		SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0031;
		}
	}
	{
		goto IL_00c0;
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		NullCheck(G_B6_0);
		SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_inline(G_B6_0, L_8, NULL);
		// continue;
		goto IL_00c0;
	}

IL_003c:
	{
		// Helpers.Logger(IsEmptyMonster(i) + " " + i);
		int32_t L_9 = V_0;
		bool L_10;
		L_10 = CardManager_IsEmptyMonster_m5536EE5F648AF3A10716541F76CC10578AC1BF99(__this, L_9, NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_12, NULL);
		Helpers_Logger_mE40AEBF98AF75F61D034535206F650BC95CF1A6D(L_13, NULL);
		// if (!IsEmptyCardSlot(i) && IsEmptyMonster(i))
		int32_t L_14 = V_0;
		bool L_15;
		L_15 = CardManager_IsEmptyCardSlot_m3D9BD4C8A4F59F720DE7C1700338D4D694A08A2B(__this, L_14, NULL);
		if (L_15)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_16 = V_0;
		bool L_17;
		L_17 = CardManager_IsEmptyMonster_m5536EE5F648AF3A10716541F76CC10578AC1BF99(__this, L_16, NULL);
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		// createMonsterDelegate?.Invoke(cardHolderSlots[i], child(cardHolderSlots[i]));
		CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* L_18 = __this->___createMonsterDelegate_8;
		CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_007f;
		}
	}
	{
		goto IL_00c0;
	}

IL_007f:
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->___cardHolderSlots_5;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___cardHolderSlots_5;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = CardManager_child_m4E5D300200B511A3AF3E72966D77068A86ECDA1C(__this, L_27, NULL);
		NullCheck(G_B11_0);
		CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_inline(G_B11_0, L_23, L_28, NULL);
		// continue;
		goto IL_00c0;
	}

IL_009c:
	{
		// else if (IsEmptyCardSlot(i) && !IsEmptyMonster(i))
		int32_t L_29 = V_0;
		bool L_30;
		L_30 = CardManager_IsEmptyCardSlot_m3D9BD4C8A4F59F720DE7C1700338D4D694A08A2B(__this, L_29, NULL);
		if (!L_30)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_31 = V_0;
		bool L_32;
		L_32 = CardManager_IsEmptyMonster_m5536EE5F648AF3A10716541F76CC10578AC1BF99(__this, L_31, NULL);
		if (L_32)
		{
			goto IL_00c0;
		}
	}
	{
		// deleteMonsterDelegate?.Invoke(i);
		DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* L_33 = __this->___deleteMonsterDelegate_9;
		DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* L_34 = L_33;
		G_B15_0 = L_34;
		if (L_34)
		{
			G_B16_0 = L_34;
			goto IL_00ba;
		}
	}
	{
		goto IL_00c0;
	}

IL_00ba:
	{
		int32_t L_35 = V_0;
		NullCheck(G_B16_0);
		DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_inline(G_B16_0, L_35, NULL);
	}

IL_00c0:
	{
		// for (int i = 0; i < cardHolderSlots.Length; i++)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00c4:
	{
		// for (int i = 0; i < cardHolderSlots.Length; i++)
		int32_t L_37 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_38 = __this->___cardHolderSlots_5;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CardManager::CreateMonster(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_CreateMonster_mC47774A9BA0723FFE9F66F6E51755C6A35EF0E6C (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.CreateMonster(ref holderSlot(parent).cardTransform,
		//        ref card(data).data, holderSlot(parent).MonsterCount, ref cardHandler(data).thisHandler, ref cardHandler(data).thisSlot, cardHandler(data).slotPos); //create monster , what can I said
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_parent;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_2;
		L_2 = CardManager_holderSlot_m86924BE33A4676DD0AB60CC21FC3463BEC88659B(__this, L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_3 = (&L_2->___cardTransform_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_data;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_5;
		L_5 = CardManager_card_mCF5F5BEFCF6707184B000E5084DC409977F3D4DB(__this, L_4, NULL);
		NullCheck(L_5);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** L_6 = (&L_5->___data_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___0_parent;
		CardHolderSlot_tF1CA336256581FBEF3959713A4ED1CB31E8AF494* L_8;
		L_8 = CardManager_holderSlot_m86924BE33A4676DD0AB60CC21FC3463BEC88659B(__this, L_7, NULL);
		NullCheck(L_8);
		int32_t L_9 = L_8->___MonsterCount_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___1_data;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_11;
		L_11 = CardManager_cardHandler_mF771CF5E429433501571B0EDD51621E310B39A44(__this, L_10, NULL);
		NullCheck(L_11);
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259** L_12 = (&L_11->___thisHandler_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___1_data;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_14;
		L_14 = CardManager_cardHandler_mF771CF5E429433501571B0EDD51621E310B39A44(__this, L_13, NULL);
		NullCheck(L_14);
		CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8** L_15 = (&L_14->___thisSlot_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___1_data;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_17;
		L_17 = CardManager_cardHandler_mF771CF5E429433501571B0EDD51621E310B39A44(__this, L_16, NULL);
		NullCheck(L_17);
		int32_t L_18 = L_17->___slotPos_23;
		NullCheck(L_0);
		VirtualActionInvoker6< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**, MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8**, int32_t, CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259**, CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8**, int32_t >::Invoke(5 /* System.Void GameManager::CreateMonster(UnityEngine.Transform&,MonsterObject&,System.Int32,CardHandler&,CardSlot&,System.Int32) */, L_0, L_3, L_6, L_9, L_12, L_15, L_18);
		// }
		return;
	}
}
// System.Void CardManager::DeleteMonster(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_DeleteMonster_m52A3ABD569BD0C1CE45758E6047D67648639B59B (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_monsterCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(GameManager.instance.monsterParents[monsterCount].transform.GetChild(0).gameObject);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = L_0->___monsterParents_14;
		int32_t L_2 = ___0_monsterCount;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, 0, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// }
		return;
	}
}
// System.Void CardManager::Swap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager_Swap_mF5273F3807953B448CF8F1837BA5C264D2B9F716 (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Helpers.Logger("X");
		Helpers_Logger_mE40AEBF98AF75F61D034535206F650BC95CF1A6D(_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		// GameManager.instance.monsterParents[i].GetComponentInChildren<Monster>().data = card(child(cardHolderSlots[i])).data;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = L_0->___monsterParents_14;
		int32_t L_2 = ___0_i;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_5;
		L_5 = Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D(L_4, Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D_RuntimeMethod_var);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___cardHolderSlots_5;
		int32_t L_7 = ___0_i;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = CardManager_child_m4E5D300200B511A3AF3E72966D77068A86ECDA1C(__this, L_9, NULL);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_11;
		L_11 = CardManager_card_mCF5F5BEFCF6707184B000E5084DC409977F3D4DB(__this, L_10, NULL);
		NullCheck(L_11);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_12 = L_11->___data_6;
		NullCheck(L_5);
		L_5->___data_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___data_5), (void*)L_12);
		// GameManager.instance.monsterParents[i].GetComponentInChildren<Monster>().Setter();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_13);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = L_13->___monsterParents_14;
		int32_t L_15 = ___0_i;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_18;
		L_18 = Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D(L_17, Component_GetComponentInChildren_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_mA0502FEEFDF10850911477C46ADA7AAA26BCAC0D_RuntimeMethod_var);
		NullCheck(L_18);
		Monster_Setter_mDFF17EF03FF0E9A060CBA332D3DB4CF13C196DD2(L_18, NULL);
		// }
		return;
	}
}
// System.Void CardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardManager__ctor_mEAF4B560368DF13EA257B55B8074393E59B696CD (CardManager_t13D81CD3E2734FD058252E3965AAD55D6E87C203* __this, const RuntimeMethod* method) 
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
void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_Multicast(CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* currentDelegate = reinterpret_cast<CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_OpenInst(CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_OpenStatic(CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_OpenStaticInvoker(CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_ClosedStaticInvoker(CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6 (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CardManager/CheckDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDelegate__ctor_m80685A42C2FD0B99D814DC88BC86C5F3B1D0E3D0 (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_Multicast;
}
// System.Void CardManager/CheckDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754 (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardManager/CheckDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckDelegate_BeginInvoke_mF2B41CA35F47B0CC3BC41CBB5A73BA0BBE4EFE79 (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void CardManager/CheckDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckDelegate_EndInvoke_m11E62D65FF6AC45D387BF83806B899CEB1BAC0AF (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_Multicast(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* currentDelegate = reinterpret_cast<CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_parent, ___1_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenInst(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	typedef void (*FunctionPointerType) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_parent, ___1_data, method);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenStatic(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_parent, ___1_data, method);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenStaticInvoker(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_parent, ___1_data);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_ClosedStaticInvoker(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_parent, ___1_data);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenVirtual(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_parent, ___1_data);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenInterface(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	InterfaceActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_parent, ___1_data);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenGenericVirtual(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	GenericVirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(method, ___0_parent, ___1_data);
}
void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenGenericInterface(CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	GenericInterfaceActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(method, ___0_parent, ___1_data);
}
// System.Void CardManager/CreateMonsterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateMonsterDelegate__ctor_m7EC110DE8E51436A35BD9ABC92A650C329E64F92 (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenStatic;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_Multicast;
}
// System.Void CardManager/CreateMonsterDelegate::Invoke(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79 (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_parent, ___1_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardManager/CreateMonsterDelegate::BeginInvoke(UnityEngine.Transform,UnityEngine.Transform,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateMonsterDelegate_BeginInvoke_m231FF652949AA8BB26E601A6A59505FA2BFFBE8E (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_parent;
	__d_args[1] = ___1_data;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void CardManager/CreateMonsterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateMonsterDelegate_EndInvoke_mF51B94F3522188EE3E27D4AABF83607F69F2F6EC (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_Multicast(DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* currentDelegate = reinterpret_cast<DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_monster, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_OpenInst(DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_monster, method);
}
void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_OpenStatic(DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_monster, method);
}
void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_OpenStaticInvoker(DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_monster);
}
void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_ClosedStaticInvoker(DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_monster);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_monster);

}
// System.Void CardManager/DeleteMonsterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteMonsterDelegate__ctor_m6F78DB1EEF63F86B71B98A1D04C166AF44B9684F (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_Multicast;
}
// System.Void CardManager/DeleteMonsterDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_monster, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardManager/DeleteMonsterDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeleteMonsterDelegate_BeginInvoke_m38C9AFD5AAA8623AA5A879E0362D7AA12B9C0F03 (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_monster);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void CardManager/DeleteMonsterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteMonsterDelegate_EndInvoke_mC9D9273C10D0B9CF6A7916557691D3E5D854B4AD (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_Multicast(SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* currentDelegate = reinterpret_cast<SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_monster, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_OpenInst(SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_monster, method);
}
void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_OpenStatic(SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_monster, method);
}
void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_OpenStaticInvoker(SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_monster);
}
void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_ClosedStaticInvoker(SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_monster);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3 (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_monster);

}
// System.Void CardManager/SwapMonstersDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapMonstersDelegate__ctor_m78975A541D1A382D6887FCA5C7B3339968CCF31A (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_Multicast;
}
// System.Void CardManager/SwapMonstersDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6 (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_monster, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CardManager/SwapMonstersDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SwapMonstersDelegate_BeginInvoke_m6EF6947EE647A18C3FFFD6ED3FEE106C325E59DF (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_monster);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void CardManager/SwapMonstersDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapMonstersDelegate_EndInvoke_m452024084A46C28002C3FB841F45EE6F08F9E8CA (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameManager::get_cardDropZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_cardDropZone_mA312AD6D427310902815E695BF06211FB423544E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public int cardDropZone { get; set; } = 0; // card slot when we start
		int32_t L_0 = __this->___U3CcardDropZoneU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void GameManager::set_cardDropZone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_cardDropZone_mAEF32E77B87F2945D1F681668A290411F98F2824 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int cardDropZone { get; set; } = 0; // card slot when we start
		int32_t L_0 = ___0_value;
		__this->___U3CcardDropZoneU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		GameManager_Init_m370492C243DD3D2F7D0D0C7C19526979E0A6AD59(__this, NULL);
		// cards = new cards();
		cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* L_0 = (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6*)il2cpp_codegen_object_new(cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		cards__ctor_mB1BD4512DC6B7B5E1B1A7615FB1E85BE2F0205E7(L_0, NULL);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___cards_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___cards_4), (void*)L_0);
		// monsters = new MonsterChild();
		MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF* L_1 = (MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF*)il2cpp_codegen_object_new(MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MonsterChild__ctor_m8484CF4BA9B03E9CB47935AA0ED2A2D53A2B0321(L_1, NULL);
		__this->___monsters_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monsters_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void GameManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Init_m370492C243DD3D2F7D0D0C7C19526979E0A6AD59 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7), (void*)__this);
		return;
	}

IL_0014:
	{
		// if (instance != this)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(instance);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7), (void*)__this);
		return;
	}

IL_0032:
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cards.CardSetter();
		cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___cards_4;
		NullCheck(L_0);
		cards_CardSetter_m93A4677245B26E4EC0F46E830E3B9D869F86EA1E(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CreateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateCard_m0B007E62EE356781EA9517405A407FD0ADEA1DAB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual void CreateCard() => cards.CreateCard();
		cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___cards_4;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void GameManager::CreateCard() */, L_0);
		return;
	}
}
// System.Void GameManager::CreateMonster(UnityEngine.Transform&,MonsterObject&,System.Int32,CardHandler&,CardSlot&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateMonster_mA9741C6C2D9A68926F33AF6F7C2072FACA4FE035 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___0_transform, MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** ___1_card, int32_t ___2_Count, CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259** ___3_handler, CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8** ___4_slot, int32_t ___5_slotPos, const RuntimeMethod* method) 
{
	{
		// monsters.CreateMonster(ref transform,ref card,Count,ref handler,ref slot,slotPos);
		MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF* L_0 = __this->___monsters_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_1 = ___0_transform;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** L_2 = ___1_card;
		int32_t L_3 = ___2_Count;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259** L_4 = ___3_handler;
		CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8** L_5 = ___4_slot;
		int32_t L_6 = ___5_slotPos;
		NullCheck(L_0);
		VirtualActionInvoker6< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**, MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8**, int32_t, CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259**, CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8**, int32_t >::Invoke(5 /* System.Void GameManager::CreateMonster(UnityEngine.Transform&,MonsterObject&,System.Int32,CardHandler&,CardSlot&,System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Void GameManager::SetCardAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCardAmount_m4AE9FEF741124BE177936C46B0A8C2293389B470 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// instance.cardTXT.text = cards.cardSlot.ToString(); // set card text to card amount
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = L_0->___cardTXT_11;
		cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___cards_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = cards_get_cardSlot_mAD507B2B8BF37D649D1D2B531950E2A0C77FEB17_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// instance.DropTXT.text = instance.cardDropZone.ToString();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___DropTXT_12;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = GameManager_get_cardDropZone_mA312AD6D427310902815E695BF06211FB423544E_inline(L_7, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_9);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Int32 cards::get_cardSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cards_get_cardSlot_mAD507B2B8BF37D649D1D2B531950E2A0C77FEB17 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	{
		// public int cardSlot { get; set; } = 33; // card slot when we start
		int32_t L_0 = __this->___U3CcardSlotU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void cards::set_cardSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards_set_cardSlot_m8264E70E9E6518E826721841682DDE75A4D891F8 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int cardSlot { get; set; } = 33; // card slot when we start
		int32_t L_0 = ___0_value;
		__this->___U3CcardSlotU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Int32 cards::get_cardInTheGameMaximum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cards_get_cardInTheGameMaximum_m2E9A317C117173714B37C398F65F00BE1A409451 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	{
		// int cardInTheGameMaximum => 5; // the maximum card in your hand
		return 5;
	}
}
// System.Int32 cards::get_cardRequire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cards_get_cardRequire_m46D28387F79BA5A181AFE8CF69FFBE4B9D972725 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	{
		// int cardRequire => 3; // how many cards can you pick in your hand at the moment
		return 3;
	}
}
// System.Int32 cards::get_cardAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cards_get_cardAmount_m0131647FFC328E4702342FCE3B1A622C3D4CD89A (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	{
		// int cardAmount { get; set; } //current card amount in your hand
		int32_t L_0 = __this->___U3CcardAmountU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void cards::set_cardAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards_set_cardAmount_m1E3CB6A5E6127F6B4D7932158EEF13DA96016246 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// int cardAmount { get; set; } //current card amount in your hand
		int32_t L_0 = ___0_value;
		__this->___U3CcardAmountU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Void cards::CardSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards_CardSetter_m93A4677245B26E4EC0F46E830E3B9D869F86EA1E (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cardAmount = instance.cardParent.transform.childCount;//set the card amount
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___cardParent_13;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_2, NULL);
		cards_set_cardAmount_m1E3CB6A5E6127F6B4D7932158EEF13DA96016246_inline(__this, L_3, NULL);
		// instance.SetCardAmount();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_4);
		GameManager_SetCardAmount_m4AE9FEF741124BE177936C46B0A8C2293389B470(L_4, NULL);
		// CreateCard();
		VirtualActionInvoker0::Invoke(4 /* System.Void GameManager::CreateCard() */, __this);
		// }
		return;
	}
}
// System.Void cards::CreateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards_CreateCard_mE93B19AFF02DFE56FECA6C4F5C298E50590383F2 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_0066;
	}

IL_0002:
	{
		// GameObject newCard= Instantiate(instance.cardPrefab, instance.cardParent.position, Quaternion.identity, instance.cardParent);//create object
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___cardPrefab_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2->___cardParent_13;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___cardParent_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_1, L_4, L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// index++;
		int32_t L_9 = __this->___index_17;
		__this->___index_17 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// cardInTheGame++;
		int32_t L_10 = __this->___cardInTheGame_18;
		__this->___cardInTheGame_18 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// cardSlot--;
		int32_t L_11;
		L_11 = cards_get_cardSlot_mAD507B2B8BF37D649D1D2B531950E2A0C77FEB17_inline(__this, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		cards_set_cardSlot_m8264E70E9E6518E826721841682DDE75A4D891F8_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		// instance.SetCardAmount();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_13);
		GameManager_SetCardAmount_m4AE9FEF741124BE177936C46B0A8C2293389B470(L_13, NULL);
	}

IL_0066:
	{
		// while (canGenerateCard)
		bool L_14;
		L_14 = cards_get_canGenerateCard_m22361148E706A034B8F6571D38E47BF9AED0F748(__this, NULL);
		if (L_14)
		{
			goto IL_0002;
		}
	}
	{
		// index = 0; // reset index
		__this->___index_17 = 0;
		// }
		return;
	}
}
// System.Boolean cards::get_canGenerateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cards_get_canGenerateCard_m22361148E706A034B8F6571D38E47BF9AED0F748 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool canGenerateCard => index < cardRequire && instance.cardParent.transform.childCount < cardRequire && cardInTheGame < cardInTheGameMaximum && cardSlot > 0;
		int32_t L_0 = __this->___index_17;
		int32_t L_1;
		L_1 = cards_get_cardRequire_m46D28387F79BA5A181AFE8CF69FFBE4B9D972725(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2->___cardParent_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_4, NULL);
		int32_t L_6;
		L_6 = cards_get_cardRequire_m46D28387F79BA5A181AFE8CF69FFBE4B9D972725(__this, NULL);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->___cardInTheGame_18;
		int32_t L_8;
		L_8 = cards_get_cardInTheGameMaximum_m2E9A317C117173714B37C398F65F00BE1A409451(__this, NULL);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9;
		L_9 = cards_get_cardSlot_mAD507B2B8BF37D649D1D2B531950E2A0C77FEB17_inline(__this, NULL);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_0042:
	{
		return (bool)0;
	}
}
// System.Void cards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cards__ctor_mB1BD4512DC6B7B5E1B1A7615FB1E85BE2F0205E7 (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	{
		// public int cardSlot { get; set; } = 33; // card slot when we start
		__this->___U3CcardSlotU3Ek__BackingField_19 = ((int32_t)33);
		GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368(__this, NULL);
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
// System.Void MonsterChild::CreateMonster(UnityEngine.Transform&,MonsterObject&,System.Int32,CardHandler&,CardSlot&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterChild_CreateMonster_m8D5D8D919D132CE0DFB0987D27012958E5B1C8CA (MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___0_parent, MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** ___1_card, int32_t ___2_Count, CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259** ___3_handler, CardSlot_t90930DD9020F5A4F4CF8ABCF20245BFEAA0259F8** ___4_slot, int32_t ___5_slotPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03C50A2ECA72C6131CF1E5EAC0C7D79DD7311B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject newMonster = Instantiate(instance.monsterPrefab, parent.position, Quaternion.identity, instance.monsterParents[slotPos]);//create object
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___monsterPrefab_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_2 = ___0_parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = *((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**)L_2);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_6);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = L_6->___monsterParents_14;
		int32_t L_8 = ___5_slotPos;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_1, L_4, L_5, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_0 = L_11;
		// newMonster.GetComponent<Monster>().data = card; // the monster card depend on the card data
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_13;
		L_13 = GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E(L_12, GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8** L_14 = ___1_card;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_15 = *((MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8**)L_14);
		NullCheck(L_13);
		L_13->___data_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___data_5), (void*)L_15);
		// newMonster.GetComponent<Monster>().MonsterCount = Count;// the monster Count depend on the card Count
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_16);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_17;
		L_17 = GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E(L_16, GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var);
		int32_t L_18 = ___2_Count;
		NullCheck(L_17);
		L_17->___MonsterCount_12 = L_18;
		// instance.monstersChildren.Add(newMonster.GetComponent<Monster>()); // add the monster to
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_19);
		List_1_tBEDB6660DD4502A479F370D4BEA942FDF8F6B4A3* L_20 = L_19->___monstersChildren_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_22;
		L_22 = GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E(L_21, GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var);
		NullCheck(L_20);
		List_1_Add_m03C50A2ECA72C6131CF1E5EAC0C7D79DD7311B91_inline(L_20, L_22, List_1_Add_m03C50A2ECA72C6131CF1E5EAC0C7D79DD7311B91_RuntimeMethod_var);
		// handler.monster = newMonster;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259** L_23 = ___3_handler;
		CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* L_24 = *((CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259**)L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_24);
		L_24->___monster_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___monster_15), (void*)L_25);
		// }
		return;
	}
}
// System.Void MonsterChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterChild__ctor_m8484CF4BA9B03E9CB47935AA0ED2A2D53A2B0321 (MonsterChild_tC5ED1A5E0B633C008E55C903757A9544339EF5AF* __this, const RuntimeMethod* method) 
{
	{
		GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368(__this, NULL);
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
// System.Void Monster::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Awake_mDCAC2CA2BDC6479E32223D296EB7A314B63D49FC (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m525D12DB40D2B4C21488100565ACF7608B85F430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// monsterAnimator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___monsterAnimator_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monsterAnimator_8), (void*)L_0);
		// textMesh = GetComponentInChildren<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(__this, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textMesh_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMesh_9), (void*)L_1);
		// canvas = GetComponentInChildren<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponentInChildren_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m525D12DB40D2B4C21488100565ACF7608B85F430(__this, Component_GetComponentInChildren_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m525D12DB40D2B4C21488100565ACF7608B85F430_RuntimeMethod_var);
		__this->___canvas_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void Monster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Start_mC7CDE5F86FB91CC26962950A89794155B4210B85 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// RandomData = Random.Range(0, dataList.Length); // set the random intgeger for the data
		MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8* L_0 = __this->___dataList_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		__this->___RandomData_13 = L_1;
		// MonsterData();
		Monster_MonsterData_m27C9A6822F4A9B0EFF9D419CE4A891AC36CBC040(__this, NULL);
		// Setter();
		Monster_Setter_mDFF17EF03FF0E9A060CBA332D3DB4CF13C196DD2(__this, NULL);
		// if (isEnemy) return;
		bool L_2 = __this->___isEnemy_11;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (isEnemy) return;
		return;
	}

IL_0029:
	{
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Monster::MonsterData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_MonsterData_m27C9A6822F4A9B0EFF9D419CE4A891AC36CBC040 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isEnemy)
		bool L_0 = __this->___isEnemy_11;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// data = dataList[RandomData]; MonsterCount = 4; /* generate random enemy , make the monster count is 4 , which mean impossible to
		MonsterObjectU5BU5D_t01C637BED1D97110F04ACD4E2AD3C6C2567809B8* L_1 = __this->___dataList_4;
		int32_t L_2 = __this->___RandomData_13;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___data_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_5), (void*)L_4);
		// data = dataList[RandomData]; MonsterCount = 4; /* generate random enemy , make the monster count is 4 , which mean impossible to
		__this->___MonsterCount_12 = 4;
		// card_data.data = data;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_5 = __this->___card_data_6;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_6 = __this->___data_5;
		NullCheck(L_5);
		L_5->___data_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___data_6), (void*)L_6);
		return;
	}

IL_0034:
	{
		// else { textMesh.text = string.Empty; /*delete health from them*/}
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___textMesh_9;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void Monster::Setter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Setter_mDFF17EF03FF0E9A060CBA332D3DB4CF13C196DD2 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// public void Setter()=> Setter(data.clip, data.name, data.pos, data.spritePos, data.canvasPos, data.heal);
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_0 = __this->___data_5;
		NullCheck(L_0);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = L_0->___clip_9;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_2 = __this->___data_5;
		NullCheck(L_2);
		String_t* L_3 = L_2->___name_4;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_4 = __this->___data_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___pos_5;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_6 = __this->___data_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___spritePos_7;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_8 = __this->___data_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___canvasPos_6;
		MonsterObject_tE995903919736885DD75F7EE4B1DAC982C1554E8* L_10 = __this->___data_5;
		NullCheck(L_10);
		int32_t L_11 = L_10->___heal_8;
		Monster_Setter_m9FC89C78F5E88F295E113BE023194D9C03038E1F(__this, L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		return;
	}
}
// System.Void Monster::Setter(UnityEngine.AnimationClip,System.String,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Setter_m9FC89C78F5E88F295E113BE023194D9C03038E1F (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_img, String_t* ___1_name, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_spritePos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_canvasPos, int32_t ___5_heal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetAnimationController(ref img);
		Monster_SetAnimationController_m925650CCE91F96F63867468CA4B51544DF2E9E62(__this, (&___0_img), NULL);
		// gameObject.name = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___1_name;
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_1, NULL);
		// transform.position = transform.position + pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_6, NULL);
		// textMesh.text = $"{heal}/{heal}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___textMesh_9;
		int32_t L_8 = ___5_heal;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = ___5_heal;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_10, L_13, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_14);
		// monsterAnimator.transform.localPosition = spritePos;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___monsterAnimator_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___3_spritePos;
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// canvas.anchoredPosition = canvasPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___canvas_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___4_canvasPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_19, NULL);
		NullCheck(L_18);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_18, L_20, NULL);
		// transform.localScale = new Vector3(1, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_22, NULL);
		// if(!isEnemy) textMesh.text = string.Empty;
		bool L_23 = __this->___isEnemy_11;
		if (L_23)
		{
			goto IL_00ae;
		}
	}
	{
		// if(!isEnemy) textMesh.text = string.Empty;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___textMesh_9;
		String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_25);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Monster::SetAnimationController(UnityEngine.AnimationClip&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_SetAnimationController_m925650CCE91F96F63867468CA4B51544DF2E9E62 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** ___0_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA99B38B910EF987A3EF5A38F9EED1FDF18ABC8A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* V_0 = NULL;
	{
		// aoc = new AnimatorOverrideController(monsterAnimator.runtimeAnimatorController);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___monsterAnimator_8;
		NullCheck(L_0);
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_1;
		L_1 = Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8(L_0, NULL);
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_2 = (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*)il2cpp_codegen_object_new(AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimatorOverrideController__ctor_mE9C4FCBE3FCAF3CE2601CF50D3B19CC683BC47F8(L_2, L_1, NULL);
		__this->___aoc_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aoc_7), (void*)L_2);
		// var anims = new List<KeyValuePair<AnimationClip, AnimationClip>>();
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_3 = (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*)il2cpp_codegen_object_new(List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mA99B38B910EF987A3EF5A38F9EED1FDF18ABC8A7(L_3, List_1__ctor_mA99B38B910EF987A3EF5A38F9EED1FDF18ABC8A7_RuntimeMethod_var);
		V_0 = L_3;
		// anims.Add(new KeyValuePair<AnimationClip, AnimationClip>(aoc.animationClips[0], clip));
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_4 = V_0;
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_5 = __this->___aoc_7;
		NullCheck(L_5);
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_6;
		L_6 = RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** L_9 = ___0_clip;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_10 = *((AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712**)L_9);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_11;
		memset((&L_11), 0, sizeof(L_11));
		KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49((&L_11), L_8, L_10, /*hidden argument*/KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_inline(L_4, L_11, List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var);
		// aoc.ApplyOverrides(anims);
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_12 = __this->___aoc_7;
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_13 = V_0;
		NullCheck(L_12);
		AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90(L_12, L_13, NULL);
		// monsterAnimator.runtimeAnimatorController = aoc;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___monsterAnimator_8;
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_15 = __this->___aoc_7;
		NullCheck(L_14);
		Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Monster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster__ctor_m4E10FC18FF41A1D3156A7AC924B06AD7F3882E04 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
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
// System.Void MonsterSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSlot__ctor_mC2C6E0EA93EFC3A9D9DBBA23FF073EE2572C9CEF (MonsterSlot_tEE5225B68812F1FF2F482EB544D0A9BB63B90017* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardHandler_set_parentAfterDrag_mDAD89F7BBF2B5A6D4E0D6C92A2C777CFABA7A0FA_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CparentAfterDragU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentAfterDragU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CardHandler_get_parentAfterDrag_m9233601CAC0776A3DC075AD212A87F757F308B0F_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CparentAfterDragU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckDelegate_Invoke_m87BDA666480BD73F08C8FCDE1A61B5ECFDE40754_inline (CheckDelegate_t345A1EEFB0AB73E5D1FB1F757712638DD550D8A6* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_cardDropZone_mA312AD6D427310902815E695BF06211FB423544E_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public int cardDropZone { get; set; } = 0; // card slot when we start
		int32_t L_0 = __this->___U3CcardDropZoneU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_cardDropZone_mAEF32E77B87F2945D1F681668A290411F98F2824_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int cardDropZone { get; set; } = 0; // card slot when we start
		int32_t L_0 = ___0_value;
		__this->___U3CcardDropZoneU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerDragU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CardHandler_get_cardPlacedCounter_mBC757C302DDB6514D7B84C86F1F6E3D97E52730C_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, const RuntimeMethod* method) 
{
	{
		// public int cardPlacedCounter { get; set; } //how many times the card placed on the card holder slot
		int32_t L_0 = __this->___U3CcardPlacedCounterU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardHandler_set_cardPlacedCounter_m34421BBFB535F029C652F76F6E9E0DB67D4D1200_inline (CardHandler_tA13B14F0E9EC972DBC1E479C662A522ADFB1B259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int cardPlacedCounter { get; set; } //how many times the card placed on the card holder slot
		int32_t L_0 = ___0_value;
		__this->___U3CcardPlacedCounterU3Ek__BackingField_24 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Card_set_isFieldLeader_mDF6D09AC7D506CB6EF44531B266035DF7F6F3FD8_inline (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isFieldLeader { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CisFieldLeaderU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BeingDragDelegate_Invoke_m1AC6705248E43BD9D0730F1EE07382CC662C6A5B_inline (BeingDragDelegate_t746C077FDA2FC30808D02726AF0D2E5D80B02393* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DragDelegate_Invoke_m94582A4304D515D9138618D913663E7F9700D323_inline (DragDelegate_t2F506B19F18F9114DC47B5FA1331C0ECCE02FCA2* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EndDragDelegate_Invoke_m7C9066DA1B698914C48333A8651C71B1449F26F7_inline (EndDragDelegate_t47B39E5DBD62658CA3313A9E8753C684765C1209* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwapMonstersDelegate_Invoke_mA62FF5005B9D84435345CC14AF59484A39463AF6_inline (SwapMonstersDelegate_t23D0D24EB7C5D892778BB126F5049311DBD9DCF3* __this, int32_t ___0_monster, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_monster, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateMonsterDelegate_Invoke_m4A77D6C3068B44E14F7CE13AE223CFD5A7729D79_inline (CreateMonsterDelegate_t1C3C849D9FA146E58727E2B483757ACCD0429843* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_parent, ___1_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeleteMonsterDelegate_Invoke_m9B500BE0C0AA4542214022719F4812900EFCB50A_inline (DeleteMonsterDelegate_tE15BD96B177C7B11384B7ED7DDEE7D3BBB8EB8BA* __this, int32_t ___0_monster, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_monster, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t cards_get_cardSlot_mAD507B2B8BF37D649D1D2B531950E2A0C77FEB17_inline (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, const RuntimeMethod* method) 
{
	{
		// public int cardSlot { get; set; } = 33; // card slot when we start
		int32_t L_0 = __this->___U3CcardSlotU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cards_set_cardAmount_m1E3CB6A5E6127F6B4D7932158EEF13DA96016246_inline (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// int cardAmount { get; set; } //current card amount in your hand
		int32_t L_0 = ___0_value;
		__this->___U3CcardAmountU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cards_set_cardSlot_m8264E70E9E6518E826721841682DDE75A4D891F8_inline (cards_tD158883BF613CDF4B35C8A474C90A43F2E18C6D6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int cardSlot { get; set; } = 33; // card slot when we start
		int32_t L_0 = ___0_value;
		__this->___U3CcardSlotU3Ek__BackingField_19 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = ___0_item;
		((  void (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
