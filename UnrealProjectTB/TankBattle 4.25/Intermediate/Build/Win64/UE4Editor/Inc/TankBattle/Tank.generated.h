// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKBATTLE_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TANKBATTLE_Tank_generated_h

#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_SPARSE_DATA
#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_RPC_WRAPPERS
#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankBattle"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankBattle"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET
#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_9_PROLOG
#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_SPARSE_DATA \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_RPC_WRAPPERS \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_INCLASS \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_SPARSE_DATA \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_INCLASS_NO_PURE_DECLS \
	TankBattle_4_25_Source_TankBattle_Public_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKBATTLE_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankBattle_4_25_Source_TankBattle_Public_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
