/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: Core_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_InvAspectRatio16x9                                    0.56249
#define CONST_InvAspectRatio5x4                                     0.8
#define CONST_InvAspectRatio4x3                                     0.75
#define CONST_AspectRatio16x9                                       1.77778
#define CONST_AspectRatio5x4                                        1.25
#define CONST_AspectRatio4x3                                        1.33333
#define CONST_INDEX_NONE                                            -1
#define CONST_UnrRotToDeg                                           0.00549316540360483
#define CONST_DegToUnrRot                                           182.0444
#define CONST_RadToUnrRot                                           10430.3783504704527
#define CONST_UnrRotToRad                                           0.00009587379924285
#define CONST_DegToRad                                              0.017453292519943296
#define CONST_RadToDeg                                              57.295779513082321600
#define CONST_Pi                                                    3.1415926535897932
#define CONST_MaxInt                                                0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_END                                       = 3
};

// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_END                                            = 3
};

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_END                                             = 5
};

// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_END                                            = 6
};

// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_END                                            = 3
};

// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_END                                           = 5
};

// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_PreAsyncWork_JustBeforeProceduralAnim           = 5,
	TG_END                                             = 6
};

// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_END                                            = 7
};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_END                                          = 5
};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_END                                          = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0038
class UClass;
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                 // 0x0000 (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            ObjectInternalInteger;                         // 0x0004 (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FQWord                                      ObjectFlags;                                   // 0x0008 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    HashNext;                                      // 0x0010 (0x0004) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    HashOuterNext;                                 // 0x0014 (0x0004) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    StateFrame;                                    // 0x0018 (0x0004) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     Linker;                                        // 0x001C (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    LinkerIndex;                                   // 0x0020 (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	class UObject*                                     Outer;                                         // 0x0024 (0x0004) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class FName                                        Name;                                          // 0x0028 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)
	class UClass*                                     Class;                                         // 0x0030 (0x0004) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     ObjectArchetype;                               // 0x0034 (0x0004) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Object");
		}

		return uClassPointer;
	};

	static class TArray<class UObject*>* GObjObjects();

	std::string GetName();
	std::string GetNameCPP();
	std::string GetFullName();
	class UObject* GetPackageObj();
	template<typename T> static T* FindObject(const std::string& objectFullName)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA<T>())
			{
				if (uObject->GetFullName() == objectFullName)
				{
					return static_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}
	template<typename T> static uint32_t CountObject(const std::string& objectName)
	{
		static std::map<std::string, int32_t> countCache;

		if (!countCache.contains(objectName))
		{
			countCache[objectName] = 0;

			for (UObject* uObject : *UObject::GObjObjects())
			{
				if (uObject && uObject->IsA<T>())
				{
					if (uObject->GetName() == objectName)
					{
						countCache[uObject->GetName()]++;
					}
				}
			}
		}

		return countCache[objectName];
	}
	static class UClass* FindClass(const std::string& classFullName);
	template<typename T> bool IsA()
	{
		if (std::is_base_of<UObject, T>::value)
		{
			return IsA(T::StaticClass());
		}
	}
	bool IsA(class UClass* uClass);
	bool IsA(int32_t objInternalInteger);

	int32_t GetBuildChangelistNumber();
	int32_t GetEngineVersion();
	void GetSystemTime(int32_t& outYear, int32_t& outMonth, int32_t& outDayOfWeek, int32_t& outDay, int32_t& outHour, int32_t& outMin, int32_t& outSec, int32_t& outMSec);
	class FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool optionalBInverse);
	class FName GetPackageName();
	bool IsPendingKill();
	static void GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D& outOutAngDist);
	static bool GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D& outOutAngularDist);
	static bool GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D& outOutDotDist);
	static struct FVector PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector& outOutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector& outOutClosestPoint);
	static bool GetPerObjectConfigSections(class UObject* SearchClass, class UObject* optionalObjectOuter, int32_t optionalMaxResults, class TArray<class FString>& outOut_SectionNames);
	static void StaticSaveConfig();
	void SaveConfig();
	static class UObject* FindObject(const class FString& ObjectName, class UObject* ObjectClass);
	static class UObject* DynamicLoadObject(const class FString& ObjectName, class UObject* ObjectClass, bool optionalMayFail);
	static class FName GetEnum(class UObject* E, int32_t I);
	void Disable(const class FName& ProbeFunc);
	void Enable(const class FName& ProbeFunc);
	void eventContinuedState();
	void eventPausedState();
	void eventPoppedState();
	void eventPushedState();
	void eventEndState(const class FName& NextStateName);
	void eventBeginState(const class FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool optionalBPopAll);
	void PushState(const class FName& NewState, const class FName& optionalNewLabel);
	class FName GetStateName();
	bool IsChildState(const class FName& TestState, const class FName& TestParentState);
	bool IsInState(const class FName& TestState, bool optionalBTestStateStack);
	void GotoState(const class FName& optionalNewState, const class FName& optionalLabel, bool optionalBForceEvents, bool optionalBKeepStack);
	static bool IsUTracing();
	static void SetUTracing(bool bShouldUTrace);
	static class FName GetFuncName();
	static void DebugBreak(int32_t optionalUserFlags, EDebugBreakType optionalDebuggerType);
	static void ScriptTrace();
	static class FString Localize(const class FString& SectionName, const class FString& KeyName, const class FString& PackageName);
	static void WarnInternal(const class FString& S);
	static void LogInternal(const class FString& S, const class FName& optionalTag);
	static struct FLinearColor Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	static struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	static struct FLinearColor ColorToLinearColor(const struct FColor& OldColor);
	static struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	static struct FColor MakeColor(uint8_t R, uint8_t G, uint8_t B, uint8_t optionalA);
	static struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	static struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	static struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	static struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D EvalInterpCurveVector2D(const struct FInterpCurveVector2D& Vector2DCurve, float InVal);
	struct FVector EvalInterpCurveVector(const struct FInterpCurveVector& VectorCurve, float InVal);
	float EvalInterpCurveFloat(const struct FInterpCurveFloat& FloatCurve, float InVal);
	static float GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	static float GetRangePctByValue(const struct FVector2D& Range, float Value);
	static float GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	static struct FVector2D SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D& outA);
	static struct FVector2D AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D& outA);
	static struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D& outA);
	static struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D& outA);
	static struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	static struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	static struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool optionalBShortestPath);
	static struct FRotator QuatToRotator(const struct FQuat& A);
	static struct FQuat QuatFromRotator(const struct FRotator& A);
	static struct FQuat QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	static struct FQuat QuatFindBetween(const struct FVector& A, const struct FVector& B);
	static struct FVector QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	static struct FQuat QuatInvert(const struct FQuat& A);
	static float QuatDot(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat QuatProduct(const struct FQuat& A, const struct FQuat& B);
	static struct FVector MatrixGetAxis(const struct FMatrix& TM, EAxis Axis);
	static struct FVector MatrixGetOrigin(const struct FMatrix& TM);
	static struct FRotator MatrixGetRotator(const struct FMatrix& TM);
	static struct FMatrix MakeRotationMatrix(const struct FRotator& Rotation);
	static struct FMatrix MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	static struct FVector InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector TransformVector(const struct FMatrix& TM, const struct FVector& A);
	static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	static bool NotEqual_NameName(const class FName& A, const class FName& B);
	static bool EqualEqual_NameName(const class FName& A, const class FName& B);
	bool IsA(const class FName& ClassName);
	static bool ClassIsChildOf(class UObject* TestClass, class UObject* ParentClass);
	static bool NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	static bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	static class FString PathName(class UObject* CheckObject);
	static void ParseStringIntoArray(const class FString& BaseString, const class FString& Delim, bool bCullEmpty, class TArray<class FString>& outPieces);
	static class FString Split(const class FString& Text, const class FString& SplitStr, bool optionalBOmitSplitStr);
	static class FString Repl(const class FString& Src, const class FString& Match, const class FString& With, bool optionalBCaseSensitive);
	static int32_t Asc(const class FString& S);
	static class FString Chr(int32_t I);
	static class FString Locs(const class FString& S);
	static class FString Caps(const class FString& S);
	static class FString Right(const class FString& S, int32_t I);
	static class FString Left(const class FString& S, int32_t I);
	static class FString Mid(const class FString& S, int32_t I, int32_t optionalJ);
	static int32_t InStr(const class FString& S, const class FString& T, bool optionalBSearchFromRight, bool optionalBIgnoreCase, int32_t optionalStartPos);
	static int32_t Len(const class FString& S);
	static class FString SubtractEqual_StrStr(const class FString& B, class FString& outA);
	static class FString AtEqual_StrStr(const class FString& B, class FString& outA);
	static class FString ConcatEqual_StrStr(const class FString& B, class FString& outA);
	static bool ComplementEqual_StrStr(const class FString& A, const class FString& B);
	static bool NotEqual_StrStr(const class FString& A, const class FString& B);
	static bool EqualEqual_StrStr(const class FString& A, const class FString& B);
	static bool GreaterEqual_StrStr(const class FString& A, const class FString& B);
	static bool LessEqual_StrStr(const class FString& A, const class FString& B);
	static bool Greater_StrStr(const class FString& A, const class FString& B);
	static bool Less_StrStr(const class FString& A, const class FString& B);
	static class FString At_StrStr(const class FString& A, const class FString& B);
	static class FString Concat_StrStr(const class FString& A, const class FString& B);
	static float RSize(const struct FRotator& R);
	static float RDiff(const struct FRotator& A, const struct FRotator& B);
	static int32_t NormalizeRotAxis(int32_t Angle);
	static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool optionalBConstantInterpSpeed);
	static struct FRotator RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	static struct FRotator RSmerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool optionalBShortestPath);
	static struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool optionalBShortestPath);
	static struct FRotator Normalize(const struct FRotator& Rot);
	static struct FRotator OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	static struct FRotator RotRand(bool optionalBRoll);
	static void GetUnAxes(const struct FRotator& A, struct FVector& outX, struct FVector& outY, struct FVector& outZ);
	static void GetAxes(const struct FRotator& A, struct FVector& outX, struct FVector& outY, struct FVector& outZ);
	static bool ClockwiseFrom_IntInt(int32_t A, int32_t B);
	static struct FRotator SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator& outA);
	static struct FRotator AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator& outA);
	static struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator& outA);
	static struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator& outA);
	static struct FRotator Divide_RotatorFloat(const struct FRotator& A, float B);
	static struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	static struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	static bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static float NoZDot(const struct FVector& A, const struct FVector& B);
	static struct FVector ClampLength(const struct FVector& V, float MaxLength);
	static struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	static bool IsZero(const struct FVector& A);
	static struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	static struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	static struct FVector VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	static struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	static struct FVector VRand();
	static struct FVector VSmerp(const struct FVector& A, const struct FVector& B, float Alpha);
	static struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	static struct FVector Normal(const struct FVector& A);
	static float VSizeSq2D(const struct FVector& A);
	static float VSizeSq(const struct FVector& A);
	static float VSize2D(const struct FVector& A);
	static float VSize(const struct FVector& A);
	static struct FVector SubtractEqual_VectorVector(const struct FVector& B, struct FVector& outA);
	static struct FVector AddEqual_VectorVector(const struct FVector& B, struct FVector& outA);
	static struct FVector DivideEqual_VectorFloat(float B, struct FVector& outA);
	static struct FVector MultiplyEqual_VectorVector(const struct FVector& B, struct FVector& outA);
	static struct FVector MultiplyEqual_VectorFloat(float B, struct FVector& outA);
	static struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	static float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	static bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	static bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	static struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	static struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	static struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	static struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	static struct FVector Subtract_PreVector(const struct FVector& A);
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	static float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	static int32_t FCeil(float A);
	static int32_t FFloor(float A);
	static int32_t Round(float A);
	static float Lerp(float A, float B, float Alpha);
	static float FClamp(float V, float A, float B);
	static float FMax(float A, float B);
	static float FMin(float A, float B);
	static float FRand();
	static float Square(float A);
	static float Sqrt(float A);
	static float Loge(float A);
	static float Exp(float A);
	static float Atan2(float A, float B);
	static float Atan(float A);
	static float Tan(float A);
	static float Acos(float A);
	static float Cos(float A);
	static float Asin(float A);
	static float Sin(float A);
	static float Abs(float A);
	static float SubtractEqual_FloatFloat(float B, float& outA);
	static float AddEqual_FloatFloat(float B, float& outA);
	static float DivideEqual_FloatFloat(float B, float& outA);
	static float MultiplyEqual_FloatFloat(float B, float& outA);
	static bool NotEqual_FloatFloat(float A, float B);
	static bool ComplementEqual_FloatFloat(float A, float B);
	static bool EqualEqual_FloatFloat(float A, float B);
	static bool GreaterEqual_FloatFloat(float A, float B);
	static bool LessEqual_FloatFloat(float A, float B);
	static bool Greater_FloatFloat(float A, float B);
	static bool Less_FloatFloat(float A, float B);
	static float Subtract_FloatFloat(float A, float B);
	static float Add_FloatFloat(float A, float B);
	static float Percent_FloatFloat(float A, float B);
	static float Divide_FloatFloat(float A, float B);
	static float Multiply_FloatFloat(float A, float B);
	static float MultiplyMultiply_FloatFloat(float Base, float Exp);
	static float Subtract_PreFloat(float A);
	static class FString ToHex(int32_t A);
	static int32_t Clamp(int32_t V, int32_t A, int32_t B);
	static int32_t Max(int32_t A, int32_t B);
	static int32_t Min(int32_t A, int32_t B);
	static int32_t Rand(int32_t Max);
	static int32_t SubtractSubtract_Int(int32_t& outA);
	static int32_t AddAdd_Int(int32_t& outA);
	static int32_t SubtractSubtract_PreInt(int32_t& outA);
	static int32_t AddAdd_PreInt(int32_t& outA);
	static int32_t SubtractEqual_IntInt(int32_t B, int32_t& outA);
	static int32_t AddEqual_IntInt(int32_t B, int32_t& outA);
	static int32_t DivideEqual_IntFloat(float B, int32_t& outA);
	static int32_t MultiplyEqual_IntFloat(float B, int32_t& outA);
	static int32_t Or_IntInt(int32_t A, int32_t B);
	static int32_t Xor_IntInt(int32_t A, int32_t B);
	static int32_t And_IntInt(int32_t A, int32_t B);
	static bool NotEqual_IntInt(int32_t A, int32_t B);
	static bool EqualEqual_IntInt(int32_t A, int32_t B);
	static bool GreaterEqual_IntInt(int32_t A, int32_t B);
	static bool LessEqual_IntInt(int32_t A, int32_t B);
	static bool Greater_IntInt(int32_t A, int32_t B);
	static bool Less_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t LessLess_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_IntInt(int32_t A, int32_t B);
	static int32_t Add_IntInt(int32_t A, int32_t B);
	static int32_t Percent_IntInt(int32_t A, int32_t B);
	static int32_t Divide_IntInt(int32_t A, int32_t B);
	static int32_t Multiply_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_PreInt(int32_t A);
	static int32_t Complement_PreInt(int32_t A);
	static uint8_t SubtractSubtract_Byte(uint8_t& outA);
	static uint8_t AddAdd_Byte(uint8_t& outA);
	static uint8_t SubtractSubtract_PreByte(uint8_t& outA);
	static uint8_t AddAdd_PreByte(uint8_t& outA);
	static uint8_t SubtractEqual_ByteByte(uint8_t B, uint8_t& outA);
	static uint8_t AddEqual_ByteByte(uint8_t B, uint8_t& outA);
	static uint8_t DivideEqual_ByteByte(uint8_t B, uint8_t& outA);
	static uint8_t MultiplyEqual_ByteFloat(float B, uint8_t& outA);
	static uint8_t MultiplyEqual_ByteByte(uint8_t B, uint8_t& outA);
	static bool OrOr_BoolBool(bool A, bool B);
	static bool XorXor_BoolBool(bool A, bool B);
	static bool AndAnd_BoolBool(bool A, bool B);
	static bool NotEqual_BoolBool(bool A, bool B);
	static bool EqualEqual_BoolBool(bool A, bool B);
	static bool Not_PreBool(bool A);
	void ProcessEvent(class UFunction* uFunction, void* uParams, void* uResult = nullptr);
};

// Class Core.TextBuffer
// 0x0024 (0x0038 - 0x005C)
class UTextBuffer : public UObject
{
public:
	uint8_t                                            UnknownData00[0x24];                          // 0x0038 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBuffer");
		}

		return uClassPointer;
	};

};

// Class Core.Subsystem
// 0x0004 (0x0038 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                 // 0x0038 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Subsystem");
		}

		return uClassPointer;
	};

};

// Class Core.System
// 0x00C8 (0x003C - 0x0104)
class USystem : public USubsystem
{
public:
	int32_t                                            StaleCacheDays;                                // 0x003C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxStaleCacheSize;                             // 0x0040 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxOverallCacheSize;                           // 0x0044 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PackageSizeSoftLimit;                          // 0x0048 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AsyncIOBandwidthLimit;                         // 0x004C (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      SavePath;                                      // 0x0050 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CachePath;                                     // 0x005C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CacheExt;                                      // 0x0068 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ScreenShotPath;                                // 0x0074 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        Paths;                                         // 0x0080 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        SeekFreePCPaths;                               // 0x008C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        ScriptPaths;                                   // 0x0098 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        FRScriptPaths;                                 // 0x00A4 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        MobileScriptPaths;                             // 0x00B0 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        CutdownPaths;                                  // 0x00BC (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FName>                          Suppress;                                      // 0x00C8 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        Extensions;                                    // 0x00D4 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        SeekFreePCExtensions;                          // 0x00E0 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        LocalizationPaths;                             // 0x00EC (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      TextureFileCacheExtension;                     // 0x00F8 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.System");
		}

		return uClassPointer;
	};

};

// Class Core.PackageMap
// 0x0084 (0x0038 - 0x00BC)
class UPackageMap : public UObject
{
public:
	uint8_t                                            UnknownData00[0x84];                          // 0x0038 (0x0084) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.PackageMap");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectSerializer
// 0x000C (0x0038 - 0x0044)
class UObjectSerializer : public UObject
{
public:
	uint8_t                                            UnknownData00[0xC];                            // 0x0038 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectSerializer");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectRedirector
// 0x0004 (0x0038 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	uint8_t                                            UnknownData00[0x4];                            // 0x0038 (0x0004) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectRedirector");
		}

		return uClassPointer;
	};

};

// Class Core.MetaData
// 0x003C (0x0038 - 0x0074)
class UMetaData : public UObject
{
public:
	uint8_t                                            UnknownData00[0x3C];                          // 0x0038 (0x003C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MetaData");
		}

		return uClassPointer;
	};

};

// Class Core.Linker
// 0x012C (0x0038 - 0x0164)
class ULinker : public UObject
{
public:
	uint8_t                                            UnknownData00[0x12C];                        // 0x0038 (0x012C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Linker");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerSave
// 0x00A8 (0x0164 - 0x020C)
class ULinkerSave : public ULinker
{
public:
	uint8_t                                            UnknownData00[0xA8];                          // 0x0164 (0x00A8) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerSave");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerLoad
// 0x05C4 (0x0164 - 0x0728)
class ULinkerLoad : public ULinker
{
public:
	uint8_t                                            UnknownData00[0x5C4];                        // 0x0164 (0x05C4) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerLoad");
		}

		return uClassPointer;
	};

};

// Class Core.Interface
// 0x0000 (0x0038 - 0x0038)
class UInterface : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Interface");
		}

		return uClassPointer;
	};

};

// Class Core.Field
// 0x0004 (0x0038 - 0x003C)
class UField : public UObject
{
public:
	class UField* Next; // 0x0038 (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Field");
		}

		return uClassPointer;
	};

};

// Class Core.Struct
// 0x0044 (0x003C - 0x0080)
class UStruct : public UField
{
public:
	uint8_t UnknownData00[0x8];// 0x003C (0x0008) DYNAMIC FIELD PADDING
	class UField* SuperField; // 0x0044 (0x0004)
	class UField* Children; // 0x0048 (0x0004)
	int32_t PropertySize; // 0x004C (0x0004)
	uint8_t UnknownData01[0x30];// 0x0050 (0x0030) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Struct");
		}

		return uClassPointer;
	};

};

// Class Core.ScriptStruct
// 0x001C (0x0080 - 0x009C)
class UScriptStruct : public UStruct
{
public:
	uint8_t                                            UnknownData00[0x1C];                          // 0x0080 (0x001C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ScriptStruct");
		}

		return uClassPointer;
	};

};

// Class Core.Function
// 0x0020 (0x0080 - 0x00A0)
class UFunction : public UStruct
{
public:
	uint64_t FunctionFlags; // 0x0080 (0x0008)
	uint16_t iNative; // 0x0088 (0x0002)
	uint8_t UnknownData00[0x16];// 0x008A (0x0016) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Function");
		}

		return uClassPointer;
	};

	static UFunction* FindFunction(const std::string& functionFullName);
};

// Class Core.Property
// 0x0030 (0x003C - 0x006C)
class UProperty : public UField
{
public:
	int32_t ArrayDim; // 0x003C (0x0004)
	int32_t ElementSize; // 0x0040 (0x0004)
	uint64_t PropertyFlags; // 0x0044 (0x0008)
	uint8_t UnknownData00[0x10];// 0x004C (0x0010) DYNAMIC FIELD PADDING
	int32_t Offset; // 0x005C (0x0004)
	uint8_t UnknownData01[0xC];// 0x0060 (0x000C) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Property");
		}

		return uClassPointer;
	};

};

// Class Core.StructProperty
// 0x0004 (0x006C - 0x0070)
class UStructProperty : public UProperty
{
public:
	class UStruct* Struct; // 0x006C (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StructProperty");
		}

		return uClassPointer;
	};

};

// Class Core.StrProperty
// 0x0000 (0x006C - 0x006C)
class UStrProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StrProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectProperty
// 0x0004 (0x006C - 0x0070)
class UObjectProperty : public UProperty
{
public:
	class UClass* PropertyClass; // 0x006C (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ComponentProperty
// 0x0000 (0x0070 - 0x0070)
class UComponentProperty : public UObjectProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ComponentProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ClassProperty
// 0x0004 (0x0070 - 0x0074)
class UClassProperty : public UObjectProperty
{
public:
	class UClass* MetaClass; // 0x0070 (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassProperty");
		}

		return uClassPointer;
	};

};

// Class Core.NameProperty
// 0x0000 (0x006C - 0x006C)
class UNameProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.NameProperty");
		}

		return uClassPointer;
	};

};

// Class Core.MapProperty
// 0x0008 (0x006C - 0x0074)
class UMapProperty : public UProperty
{
public:
	class UProperty* Key; // 0x006C (0x0004)
	class UProperty* Value; // 0x0070 (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MapProperty");
		}

		return uClassPointer;
	};

};

// Class Core.IntProperty
// 0x0000 (0x006C - 0x006C)
class UIntProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.IntProperty");
		}

		return uClassPointer;
	};

};

// Class Core.InterfaceProperty
// 0x0004 (0x006C - 0x0070)
class UInterfaceProperty : public UProperty
{
public:
	class UClass* InterfaceClass; // 0x006C (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.InterfaceProperty");
		}

		return uClassPointer;
	};

};

// Class Core.FloatProperty
// 0x0000 (0x006C - 0x006C)
class UFloatProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FloatProperty");
		}

		return uClassPointer;
	};

};

// Class Core.DelegateProperty
// 0x0008 (0x006C - 0x0074)
class UDelegateProperty : public UProperty
{
public:
	uint8_t                                            UnknownData00[0x8];                            // 0x006C (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DelegateProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ByteProperty
// 0x0004 (0x006C - 0x0070)
class UByteProperty : public UProperty
{
public:
	class UEnum* Enum; // 0x006C (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ByteProperty");
		}

		return uClassPointer;
	};

};

// Class Core.BoolProperty
// 0x0004 (0x006C - 0x0070)
class UBoolProperty : public UProperty
{
public:
	uint32_t BitMask; // 0x006C (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.BoolProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ArrayProperty
// 0x0004 (0x006C - 0x0070)
class UArrayProperty : public UProperty
{
public:
	class UProperty* Inner; // 0x006C (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ArrayProperty");
		}

		return uClassPointer;
	};

};

// Class Core.Enum
// 0x000C (0x003C - 0x0048)
class UEnum : public UField
{
public:
	class TArray<class FName> Names; // 0x003C (0x000C)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Enum");
		}

		return uClassPointer;
	};

};

// Class Core.Const
// 0x000C (0x003C - 0x0048)
class UConst : public UField
{
public:
	class FString Value; // 0x003C (0x000C)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Const");
		}

		return uClassPointer;
	};

};

// Class Core.Factory
// 0x0034 (0x0038 - 0x006C)
class UFactory : public UObject
{
public:
	class UObject*                                     SupportedClass;                                // 0x0038 (0x0004) [0x0000000000000000]               
	class UObject*                                     ContextClass;                                  // 0x003C (0x0004) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Formats;                                       // 0x004C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCreateNew : 1;                                // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEditAfterNew : 1;                             // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEditorImport : 1;                             // 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bText : 1;                                     // 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            AutoPriority;                                  // 0x005C (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        ValidGameNames;                                // 0x0060 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Factory");
		}

		return uClassPointer;
	};

};

// Class Core.TextBufferFactory
// 0x0000 (0x006C - 0x006C)
class UTextBufferFactory : public UFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBufferFactory");
		}

		return uClassPointer;
	};

};

// Class Core.Exporter
// 0x0028 (0x0038 - 0x0060)
class UExporter : public UObject
{
public:
	uint8_t                                            UnknownData00[0x4];                            // 0x0038 (0x0004) MISSED OFFSET
	class TArray<class FString>                        FormatExtension;                               // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        FormatDescription;                             // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            UnknownData01[0xC];                            // 0x0054 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Exporter");
		}

		return uClassPointer;
	};

};

// Class Core.Component
// 0x000C (0x0038 - 0x0044)
class UComponent : public UObject
{
public:
	class UObject*                                     TemplateOwnerClass;                            // 0x0038 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FName                                        TemplateName;                                  // 0x003C (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Component");
		}

		return uClassPointer;
	};

};

// Class Core.DistributionVector
// 0x0008 (0x0044 - 0x004C)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0044 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bCanBeBaked : 1;                               // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsDirty : 1;                                  // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionVector");
		}

		return uClassPointer;
	};

	struct FVector GetVectorValue(float optionalF, int32_t optionalLastExtreme);
};

// Class Core.DistributionFloat
// 0x0008 (0x0044 - 0x004C)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0044 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bCanBeBaked : 1;                               // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsDirty : 1;                                  // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionFloat");
		}

		return uClassPointer;
	};

	float GetFloatValue(float optionalF);
};

// Class Core.Commandlet
// 0x0040 (0x0038 - 0x0078)
class UCommandlet : public UObject
{
public:
	class FString                                      HelpDescription;                               // 0x0038 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HelpUsage;                                     // 0x0044 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HelpWebLink;                                   // 0x0050 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<class FString>                        HelpParamNames;                                // 0x005C (0x000C) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<class FString>                        HelpParamDescriptions;                         // 0x0068 (0x000C) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           IsServer : 1;                                  // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsClient : 1;                                  // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsEditor : 1;                                  // 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           LogToConsole : 1;                              // 0x0074 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           ShowErrorCount : 1;                            // 0x0074 (0x0004) [0x0000000000000000] [0x00000010] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Commandlet");
		}

		return uClassPointer;
	};

	int32_t eventMain(const class FString& Params);
};

// Class Core.HelpCommandlet
// 0x0000 (0x0078 - 0x0078)
class UHelpCommandlet : public UCommandlet
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.HelpCommandlet");
		}

		return uClassPointer;
	};

	int32_t eventMain(const class FString& Params);
};

// Class Core.State
// 0x0048 (0x0080 - 0x00C8)
class UState : public UStruct
{
public:
	uint8_t                                            UnknownData00[0x48];                          // 0x0080 (0x0048) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.State");
		}

		return uClassPointer;
	};

};

// Class Core.Package
// 0x00AC (0x0038 - 0x00E4)
class UPackage : public UObject
{
public:
	uint8_t                                            UnknownData00[0xAC];                          // 0x0038 (0x00AC) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Package");
		}

		return uClassPointer;
	};

};

// Class Core.Class
// 0x00EC (0x00C8 - 0x01B4)
class UClass : public UState
{
public:
	uint8_t                                            UnknownData00[0xEC];                          // 0x00C8 (0x00EC) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Class");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
