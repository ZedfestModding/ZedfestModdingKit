// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryBPLibrary/Public/TKMathFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTKMathFunctionLibrary() {}
// Cross Module References
	VICTORYBPLIBRARY_API UEnum* Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UTKMathFunctionLibrary_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UTKMathFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees();
// End Cross Module References
	static UEnum* ESpeedUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("ESpeedUnit"));
		}
		return Singleton;
	}
	template<> VICTORYBPLIBRARY_API UEnum* StaticEnum<ESpeedUnit>()
	{
		return ESpeedUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedUnit(ESpeedUnit_StaticEnum, TEXT("/Script/VictoryBPLibrary"), TEXT("ESpeedUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_Hash() { return 3258022299U; }
	UEnum* Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedUnit"), 0, Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CentimeterPerSecond", (int64)CentimeterPerSecond },
				{ "FootPerSecond", (int64)FootPerSecond },
				{ "MeterPerSecond", (int64)MeterPerSecond },
				{ "MeterPerMinute", (int64)MeterPerMinute },
				{ "KilometerPerSecond", (int64)KilometerPerSecond },
				{ "KilometerPerMinute", (int64)KilometerPerMinute },
				{ "KilometerPerHour", (int64)KilometerPerHour },
				{ "MilePerHour", (int64)MilePerHour },
				{ "Knot", (int64)Knot },
				{ "Mach", (int64)Mach },
				{ "SpeedOfLight", (int64)SpeedOfLight },
				{ "YardPerSecond", (int64)YardPerSecond },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CentimeterPerSecond.ToolTip", "Centimeter / second (cm/s). This is default unreal velocity unit." },
				{ "FootPerSecond.ToolTip", "Foot / second (ft/s)." },
				{ "KilometerPerHour.ToolTip", "Kilometer / hour (km/h)." },
				{ "KilometerPerMinute.ToolTip", "Kilometer / minute (km/min)." },
				{ "KilometerPerSecond.ToolTip", "Kilometer / second (km/s)." },
				{ "Knot.ToolTip", "Knot (kn). Nautical mile per hour." },
				{ "Mach.ToolTip", "Mach (speed of sound) (M) at standard atm." },
				{ "MeterPerMinute.ToolTip", "Meter / minute (m/min)." },
				{ "MeterPerSecond.ToolTip", "Meter / second (m/s)." },
				{ "MilePerHour.ToolTip", "Mile / hour (mph)." },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "SpeedOfLight.ToolTip", "Speed of light." },
				{ "ToolTip", "Speed Units Enum." },
				{ "YardPerSecond.ToolTip", "Yard / second." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
				nullptr,
				"ESpeedUnit",
				"ESpeedUnit",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTKMathFunctionLibrary::StaticRegisterNativesUTKMathFunctionLibrary()
	{
		UClass* Class = UTKMathFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreLineSegmentsCrossing", &UTKMathFunctionLibrary::execAreLineSegmentsCrossing },
			{ "ClosestPointOnLineSeqment", &UTKMathFunctionLibrary::execClosestPointOnLineSeqment },
			{ "ClosestPointOnSphereToLine", &UTKMathFunctionLibrary::execClosestPointOnSphereToLine },
			{ "ClosestPointsOfLineSegments", &UTKMathFunctionLibrary::execClosestPointsOfLineSegments },
			{ "ClosestPointsOnTwoLines", &UTKMathFunctionLibrary::execClosestPointsOnTwoLines },
			{ "ConvertAnchorToAnchor", &UTKMathFunctionLibrary::execConvertAnchorToAnchor },
			{ "ConvertPhysicsLinearVelocity", &UTKMathFunctionLibrary::execConvertPhysicsLinearVelocity },
			{ "GetConsoleVariableFloat", &UTKMathFunctionLibrary::execGetConsoleVariableFloat },
			{ "GetConsoleVariableInt", &UTKMathFunctionLibrary::execGetConsoleVariableInt },
			{ "GetVelocityAtPoint", &UTKMathFunctionLibrary::execGetVelocityAtPoint },
			{ "GridSnap", &UTKMathFunctionLibrary::execGridSnap },
			{ "IsEvenNumber", &UTKMathFunctionLibrary::execIsEvenNumber },
			{ "IsLineInsideSphere", &UTKMathFunctionLibrary::execIsLineInsideSphere },
			{ "IsMultipleOf", &UTKMathFunctionLibrary::execIsMultipleOf },
			{ "IsPointInsideBox", &UTKMathFunctionLibrary::execIsPointInsideBox },
			{ "IsPowerOfTwo", &UTKMathFunctionLibrary::execIsPowerOfTwo },
			{ "LineExtentBoxIntersection", &UTKMathFunctionLibrary::execLineExtentBoxIntersection },
			{ "LineToLineIntersection", &UTKMathFunctionLibrary::execLineToLineIntersection },
			{ "NegateFloat", &UTKMathFunctionLibrary::execNegateFloat },
			{ "NegateInt", &UTKMathFunctionLibrary::execNegateInt },
			{ "NegateVector2D", &UTKMathFunctionLibrary::execNegateVector2D },
			{ "PointOnWhichSideOfLineSegment", &UTKMathFunctionLibrary::execPointOnWhichSideOfLineSegment },
			{ "ProjectPointOnLine", &UTKMathFunctionLibrary::execProjectPointOnLine },
			{ "RoundToLowerMultiple", &UTKMathFunctionLibrary::execRoundToLowerMultiple },
			{ "RoundToNearestMultiple", &UTKMathFunctionLibrary::execRoundToNearestMultiple },
			{ "RoundToUpperMultiple", &UTKMathFunctionLibrary::execRoundToUpperMultiple },
			{ "SetCenterOfMassOffset", &UTKMathFunctionLibrary::execSetCenterOfMassOffset },
			{ "SetVectorLength", &UTKMathFunctionLibrary::execSetVectorLength },
			{ "SignedDistancePlanePoint", &UTKMathFunctionLibrary::execSignedDistancePlanePoint },
			{ "SphereBoxIntersection", &UTKMathFunctionLibrary::execSphereBoxIntersection },
			{ "VectorDegreesToRadians", &UTKMathFunctionLibrary::execVectorDegreesToRadians },
			{ "VectorRadiansToDegrees", &UTKMathFunctionLibrary::execVectorRadiansToDegrees },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics
	{
		struct TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms
		{
			FVector pointA1;
			FVector pointA2;
			FVector pointB1;
			FVector pointB2;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointB2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointB1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointA2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointA1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointB2 = { "pointB2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointB2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointB1 = { "pointB1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointB1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointA2 = { "pointA2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointA2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointA1 = { "pointA1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointA1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointB2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointB1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointA2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::NewProp_pointA1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "* Returns true if the two line segments are intersecting and not parallel.\n* If you need the intersection point, use Closest Points On Two Lines." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "AreLineSegmentsCrossing", sizeof(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics
	{
		struct TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms
		{
			FVector Point;
			FVector LineStart;
			FVector LineEnd;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_LineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Find the point on line segment from LineStart to LineEnd which is closest to Point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ClosestPointOnLineSeqment", sizeof(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics
	{
		struct TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms
		{
			FVector SphereOrigin;
			float SphereRadius;
			FVector LineOrigin;
			FVector LineDir;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineOrigin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_LineDir = { "LineDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, LineDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_LineOrigin = { "LineOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, LineOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_SphereOrigin = { "SphereOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_LineDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_LineOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::NewProp_SphereOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Find closest point on a Sphere to a Line.\nWhen line intersects Sphere, then closest point to LineOrigin is returned.\n@param SphereOrigin           Origin of Sphere\n@param SphereRadius           Radius of Sphere\n@param LineOrigin             Origin of line\n@param LineDir                        Direction of line.\n@return Closest point on sphere to given line." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ClosestPointOnSphereToLine", sizeof(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics
	{
		struct TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms
		{
			FVector Line1Start;
			FVector Line1End;
			FVector Line2Start;
			FVector Line2End;
			FVector LinePoint1;
			FVector LinePoint2;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line2End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line2Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line1End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line1Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint2 = { "LinePoint2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, LinePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint1 = { "LinePoint1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, LinePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2End = { "Line2End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line2End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2Start = { "Line2Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line2Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1End = { "Line1End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line1End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1Start = { "Line1Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line1Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Find closest points between 2 line segments.\n@param        (Line1Start, Line1End)  defines the first line segment.\n@param        (Line2Start, Line2End)  defines the second line segment.\n@param        LinePoint1              Closest point on segment 1 to segment 2.\n@param        LinePoint2              Closest point on segment 2 to segment 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ClosestPointsOfLineSegments", sizeof(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics
	{
		struct TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms
		{
			FVector closestPointLine1;
			FVector closestPointLine2;
			FVector linePoint1;
			FVector lineVec1;
			FVector linePoint2;
			FVector lineVec2;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lineVec2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lineVec1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_closestPointLine2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_closestPointLine1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec2 = { "lineVec2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, lineVec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint2 = { "linePoint2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, linePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec1 = { "lineVec1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, lineVec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint1 = { "linePoint1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, linePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine2 = { "closestPointLine2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, closestPointLine2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine1 = { "closestPointLine1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, closestPointLine1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "* Calculate the closest points between two infinitely long lines.\n* If lines are intersecting (not parallel) it will return false! Use Line To Line Intersection instead.\n* @param closestPointLine1 The closest point of line1 to line2. Returns zero if the lines intersect.\n* @param closestPointLine2 The closest point of line2 to line1. Returns zero if the lines intersect.\n* @param linePoint1 Line point of the first line.\n* @param lineVec1 Line direction (normal) of the first line. Should be a normalized vector.\n* @param linePoint2 Line point of the second line.\n* @param lineVec2 Line direction (normal) of the second line. Should be a normalized vector.\n* @return true if lines are parallel, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ClosestPointsOnTwoLines", sizeof(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics
	{
		struct TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms
		{
			UObject* WorldContextObject;
			FAnchors CurrentAnchor;
			FMargin Offsets;
			FAnchors TargetAnchor;
			FMargin ConvertedOffsets;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvertedOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAnchor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_ConvertedOffsets = { "ConvertedOffsets", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, ConvertedOffsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_TargetAnchor = { "TargetAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, TargetAnchor), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_CurrentAnchor = { "CurrentAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, CurrentAnchor), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_ConvertedOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_TargetAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_Offsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_CurrentAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Anchor" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Converts UMG layout offsets to another anchor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ConvertAnchorToAnchor", sizeof(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics
	{
		struct TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms
		{
			FVector Velocity;
			TEnumAsByte<ESpeedUnit> SpeedUnit;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeedUnit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::NewProp_SpeedUnit = { "SpeedUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms, SpeedUnit), Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::NewProp_SpeedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Converts Physics Linear Velocity to a more useful speed unit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ConvertPhysicsLinearVelocity", sizeof(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics
	{
		struct TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms
		{
			FString VariableName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::NewProp_VariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Console" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "GetConsoleVariableFloat", sizeof(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics
	{
		struct TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms
		{
			FString VariableName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::NewProp_VariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Console" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "GetConsoleVariableInt", sizeof(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics
	{
		struct TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms
		{
			UPrimitiveComponent* Target;
			FVector Point;
			FName BoneName;
			bool DrawDebugInfo;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_DrawDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugInfo;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_DrawDebugInfo_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms*)Obj)->DrawDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_DrawDebugInfo = { "DrawDebugInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_DrawDebugInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_DrawDebugInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "CPP_Default_BoneName", "None" },
		{ "CPP_Default_DrawDebugInfo", "false" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Get the current world velocity of a point on a physics-enabled component.\n@param Point - Point in world space.\n@param DrawDebugInfo - Draw debug point & string.\n@param BoneName - If a SkeletalMeshComponent, name of body to get velocity of. 'None' indicates root body.\n@return The velocity of the point in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "GetVelocityAtPoint", sizeof(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics
	{
		struct TKMathFunctionLibrary_eventGridSnap_Parms
		{
			FVector A;
			float Grid;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGridSnap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGridSnap_Parms, Grid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventGridSnap_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::NewProp_Grid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Snaps vector to nearest grid multiple." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "GridSnap", sizeof(TKMathFunctionLibrary_eventGridSnap_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics
	{
		struct TKMathFunctionLibrary_eventIsEvenNumber_Parms
		{
			float A;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventIsEvenNumber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventIsEvenNumber_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsEvenNumber_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Float" },
		{ "CompactNodeTitle", "isEven" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the number is even (false if it's odd)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "IsEvenNumber", sizeof(TKMathFunctionLibrary_eventIsEvenNumber_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics
	{
		struct TKMathFunctionLibrary_eventIsLineInsideSphere_Parms
		{
			FVector LineStart;
			FVector LineDir;
			float LineLength;
			FVector SphereOrigin;
			float SphereRadius;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereOrigin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventIsLineInsideSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_SphereOrigin = { "SphereOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, LineLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_LineDir = { "LineDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, LineDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_SphereOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_LineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_LineDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::NewProp_LineStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Determines whether a line intersects a sphere." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "IsLineInsideSphere", sizeof(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics
	{
		struct TKMathFunctionLibrary_eventIsMultipleOf_Parms
		{
			int32 A;
			int32 Multiple;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventIsMultipleOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventIsMultipleOf_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_Multiple = { "Multiple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsMultipleOf_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsMultipleOf_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_Multiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Integer" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the integer is a multiple of the given number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "IsMultipleOf", sizeof(TKMathFunctionLibrary_eventIsMultipleOf_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics
	{
		struct TKMathFunctionLibrary_eventIsPointInsideBox_Parms
		{
			FVector Point;
			FVector BoxOrigin;
			FVector BoxExtent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventIsPointInsideBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventIsPointInsideBox_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPointInsideBox_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_BoxOrigin = { "BoxOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPointInsideBox_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPointInsideBox_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_BoxOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the given Point vector is within a box (defined by BoxOrigin and BoxExtent)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "IsPointInsideBox", sizeof(TKMathFunctionLibrary_eventIsPointInsideBox_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics
	{
		struct TKMathFunctionLibrary_eventIsPowerOfTwo_Parms
		{
			int32 x;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventIsPowerOfTwo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Integer" },
		{ "CompactNodeTitle", "PwrOf2" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the integer is a power of two number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "IsPowerOfTwo", sizeof(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics
	{
		struct TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms
		{
			FBox inBox;
			FVector Start;
			FVector End;
			FVector Extent;
			FVector HitLocation;
			FVector HitNormal;
			float HitTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_inBox = { "inBox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, inBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_HitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::NewProp_inBox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Swept-Box vs Box test.\nSweps a box defined by Extend from Start to End points and returns whether it hit a box or not plus the hit location and hit normal if successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "LineExtentBoxIntersection", sizeof(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics
	{
		struct TKMathFunctionLibrary_eventLineToLineIntersection_Parms
		{
			FVector IntersectionPoint;
			FVector LinePoint1;
			FVector LineDir1;
			FVector LinePoint2;
			FVector LineDir2;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntersectionPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventLineToLineIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventLineToLineIntersection_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LineDir2 = { "LineDir2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LineDir2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LinePoint2 = { "LinePoint2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LinePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LineDir1 = { "LineDir1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LineDir1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LinePoint1 = { "LinePoint1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LinePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_IntersectionPoint = { "IntersectionPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, IntersectionPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LineDir2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LinePoint2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LineDir1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_LinePoint1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::NewProp_IntersectionPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Calculate the intersection point of two infinitely long lines. Returns true if lines intersect, otherwise false.\nNote that in 3d, two lines do not intersect most of the time.\nSo if the two lines are not in the same plane, use Closest Points On Two Lines instead.\n@param IntersectionPoint The intersection point of the lines. Returns zero if the lines do not intersect or the operation fails.\n@param LinePoint1 Line point of the first line.\n@param LineDir1 Line direction (normal) of the first line. Should be a normalized vector.\n@param LinePoint2 Line point of the second line.\n@param LineDir2 Line direction (normal) of the second line. Should be a normalized vector.\n@return true if lines intersect, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "LineToLineIntersection", sizeof(TKMathFunctionLibrary_eventLineToLineIntersection_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics
	{
		struct TKMathFunctionLibrary_eventNegateFloat_Parms
		{
			float A;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateFloat_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Float" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Reverses the sign (- or +) of a float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "NegateFloat", sizeof(TKMathFunctionLibrary_eventNegateFloat_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics
	{
		struct TKMathFunctionLibrary_eventNegateInt_Parms
		{
			int32 A;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateInt_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Integer" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Reverses the sign (- or +) of an integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "NegateInt", sizeof(TKMathFunctionLibrary_eventNegateInt_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics
	{
		struct TKMathFunctionLibrary_eventNegateVector2D_Parms
		{
			FVector2D A;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector2D" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Reverses the sign (- or +) of a Vector2D." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "NegateVector2D", sizeof(TKMathFunctionLibrary_eventNegateVector2D_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics
	{
		struct TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms
		{
			FVector linePoint1;
			FVector linePoint2;
			FVector point;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_linePoint2 = { "linePoint2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, linePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_linePoint1 = { "linePoint1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, linePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_linePoint2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::NewProp_linePoint1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "* Returns 0 if point is on the line segment.\n* Returns 1 if point is not on the line segment and it is on the side of linePoint1.\n* Returns 2 if point is not on the line segment and it is on the side of linePoint2." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "PointOnWhichSideOfLineSegment", sizeof(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics
	{
		struct TKMathFunctionLibrary_eventProjectPointOnLine_Parms
		{
			FVector LineOrigin;
			FVector LineDirection;
			FVector Point;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_LineDirection = { "LineDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, LineDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_LineOrigin = { "LineOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, LineOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_LineDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::NewProp_LineOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Returns a vector point which is a projection from a point to a line (defined by the vector couple LineOrigin, LineDirection).\nThe line is infinite (in both directions)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "ProjectPointOnLine", sizeof(TKMathFunctionLibrary_eventProjectPointOnLine_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics
	{
		struct TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			bool skipSelf;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_skipSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_skipSelf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_skipSelf_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms*)Obj)->skipSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_skipSelf = { "skipSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_skipSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_Multiple = { "Multiple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_skipSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_Multiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Integer" },
		{ "CPP_Default_Multiple", "32" },
		{ "CPP_Default_skipSelf", "false" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Rounds an integer to the lower multiple of the given number.\nIf Skip Self is set to True it will skip to the previous multiple if the integer rounds to itself.\n@param Multiple - The multiple number to round to.\n@param skipSelf - Skip to the previous multiple if the integer rounds to itself." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "RoundToLowerMultiple", sizeof(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics
	{
		struct TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::NewProp_Multiple = { "Multiple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::NewProp_Multiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Integer" },
		{ "CPP_Default_Multiple", "32" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Rounds an integer to the nearest multiple of the given number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "RoundToNearestMultiple", sizeof(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics
	{
		struct TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			bool skipSelf;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_skipSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_skipSelf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_skipSelf_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms*)Obj)->skipSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_skipSelf = { "skipSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_skipSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_Multiple = { "Multiple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_skipSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_Multiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Integer" },
		{ "CPP_Default_Multiple", "32" },
		{ "CPP_Default_skipSelf", "false" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Rounds an integer to the upper multiple of the given number.\nIf Skip Self is set to True it will skip to the next multiple if the integer rounds to itself.\n@param Multiple - The multiple number to round to.\n@param skipSelf - Skip to the next multiple if the integer rounds to itself." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "RoundToUpperMultiple", sizeof(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics
	{
		struct TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms
		{
			UPrimitiveComponent* Target;
			FVector Offset;
			FName BoneName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "* Set the physx center of mass offset.\n* Note: this offsets the physx-calculated center of mass (it is not an offset from the pivot point)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "SetCenterOfMassOffset", sizeof(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics
	{
		struct TKMathFunctionLibrary_eventSetVectorLength_Parms
		{
			FVector A;
			float size;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetVectorLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetVectorLength_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetVectorLength_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Changes the size (length) of a Vector to the given size (normalized vector * size)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "SetVectorLength", sizeof(TKMathFunctionLibrary_eventSetVectorLength_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics
	{
		struct TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms
		{
			FVector planeNormal;
			FVector planePoint;
			FVector point;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_planePoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_planeNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_planePoint = { "planePoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, planePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_planeNormal = { "planeNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, planeNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_planePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::NewProp_planeNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Get the shortest distance between a point and a plane.\nThe output is signed so it holds information as to which side of the plane normal the point is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "SignedDistancePlanePoint", sizeof(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics
	{
		struct TKMathFunctionLibrary_eventSphereBoxIntersection_Parms
		{
			FVector SphereOrigin;
			float SphereRadius;
			FVector BoxOrigin;
			FVector BoxExtent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxOrigin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TKMathFunctionLibrary_eventSphereBoxIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), &Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_BoxOrigin = { "BoxOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_SphereOrigin = { "SphereOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_BoxOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::NewProp_SphereOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Performs a sphere vs box intersection test.\n@param SphereOrigin the center of the sphere being tested against the box.\n@param SphereRadius the size of the sphere being tested.\n@param BoxOrigin the box origin being tested against.\n@param BoxExtent the box extend (width, depth, height).\n@return Whether the sphere/box intersect or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "SphereBoxIntersection", sizeof(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics
	{
		struct TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms
		{
			FVector DegVector;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DegVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::NewProp_DegVector = { "DegVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms, DegVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::NewProp_DegVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Converts degrees to radians." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "VectorDegreesToRadians", sizeof(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics
	{
		struct TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms
		{
			FVector RadVector;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::NewProp_RadVector = { "RadVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms, RadVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::NewProp_RadVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
		{ "ToolTip", "Converts radians to degrees." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, nullptr, "VectorRadiansToDegrees", sizeof(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms), Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTKMathFunctionLibrary_NoRegister()
	{
		return UTKMathFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTKMathFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTKMathFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTKMathFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing, "AreLineSegmentsCrossing" }, // 3814329002
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment, "ClosestPointOnLineSeqment" }, // 3893353564
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine, "ClosestPointOnSphereToLine" }, // 478890837
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments, "ClosestPointsOfLineSegments" }, // 766766734
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines, "ClosestPointsOnTwoLines" }, // 3826270925
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor, "ConvertAnchorToAnchor" }, // 672039362
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity, "ConvertPhysicsLinearVelocity" }, // 1392269221
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat, "GetConsoleVariableFloat" }, // 3690071123
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt, "GetConsoleVariableInt" }, // 3064368977
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint, "GetVelocityAtPoint" }, // 4206728976
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap, "GridSnap" }, // 2198263964
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber, "IsEvenNumber" }, // 1661120207
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere, "IsLineInsideSphere" }, // 136268358
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf, "IsMultipleOf" }, // 3963393681
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox, "IsPointInsideBox" }, // 1970232322
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo, "IsPowerOfTwo" }, // 1898738665
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection, "LineExtentBoxIntersection" }, // 41601899
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection, "LineToLineIntersection" }, // 1254941816
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat, "NegateFloat" }, // 3495677112
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt, "NegateInt" }, // 3825504554
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D, "NegateVector2D" }, // 2385962436
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment, "PointOnWhichSideOfLineSegment" }, // 1407425046
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine, "ProjectPointOnLine" }, // 1826316917
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple, "RoundToLowerMultiple" }, // 1868072957
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple, "RoundToNearestMultiple" }, // 3097755246
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple, "RoundToUpperMultiple" }, // 1346213904
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset, "SetCenterOfMassOffset" }, // 1280238644
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength, "SetVectorLength" }, // 1057247885
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint, "SignedDistancePlanePoint" }, // 512391269
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection, "SphereBoxIntersection" }, // 1156023734
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians, "VectorDegreesToRadians" }, // 3574600459
		{ &Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees, "VectorRadiansToDegrees" }, // 331726165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTKMathFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TKMathFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTKMathFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTKMathFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTKMathFunctionLibrary_Statics::ClassParams = {
		&UTKMathFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTKMathFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTKMathFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTKMathFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTKMathFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTKMathFunctionLibrary, 3385970493);
	template<> VICTORYBPLIBRARY_API UClass* StaticClass<UTKMathFunctionLibrary>()
	{
		return UTKMathFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTKMathFunctionLibrary(Z_Construct_UClass_UTKMathFunctionLibrary, &UTKMathFunctionLibrary::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UTKMathFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTKMathFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
