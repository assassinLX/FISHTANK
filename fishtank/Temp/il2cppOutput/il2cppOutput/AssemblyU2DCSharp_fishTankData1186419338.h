#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fishTankData
struct  fishTankData_t1186419338  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 fishTankData::position
	Vector2_t2243707579  ___position_0;
	// UnityEngine.Color fishTankData::Color
	Color_t2020392075  ___Color_1;
	// System.Single fishTankData::Size
	float ___Size_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(fishTankData_t1186419338, ___position_0)); }
	inline Vector2_t2243707579  get_position_0() const { return ___position_0; }
	inline Vector2_t2243707579 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector2_t2243707579  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_Color_1() { return static_cast<int32_t>(offsetof(fishTankData_t1186419338, ___Color_1)); }
	inline Color_t2020392075  get_Color_1() const { return ___Color_1; }
	inline Color_t2020392075 * get_address_of_Color_1() { return &___Color_1; }
	inline void set_Color_1(Color_t2020392075  value)
	{
		___Color_1 = value;
	}

	inline static int32_t get_offset_of_Size_2() { return static_cast<int32_t>(offsetof(fishTankData_t1186419338, ___Size_2)); }
	inline float get_Size_2() const { return ___Size_2; }
	inline float* get_address_of_Size_2() { return &___Size_2; }
	inline void set_Size_2(float value)
	{
		___Size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
