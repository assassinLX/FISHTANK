#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<fishTankData>
struct List_1_t555540470;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fishTank
struct  fishTank_t1854520250  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<fishTankData> fishTank::_fishdata
	List_1_t555540470 * ____fishdata_2;
	// UnityEngine.RectTransform fishTank::pencil
	RectTransform_t3349966182 * ___pencil_3;
	// UnityEngine.Canvas fishTank::_canvas
	Canvas_t209405766 * ____canvas_4;
	// UnityEngine.RectTransform fishTank::_rectTransform
	RectTransform_t3349966182 * ____rectTransform_5;
	// System.Single fishTank::_size
	float ____size_6;
	// UnityEngine.Color fishTank::_color
	Color_t2020392075  ____color_7;

public:
	inline static int32_t get_offset_of__fishdata_2() { return static_cast<int32_t>(offsetof(fishTank_t1854520250, ____fishdata_2)); }
	inline List_1_t555540470 * get__fishdata_2() const { return ____fishdata_2; }
	inline List_1_t555540470 ** get_address_of__fishdata_2() { return &____fishdata_2; }
	inline void set__fishdata_2(List_1_t555540470 * value)
	{
		____fishdata_2 = value;
		Il2CppCodeGenWriteBarrier(&____fishdata_2, value);
	}

	inline static int32_t get_offset_of_pencil_3() { return static_cast<int32_t>(offsetof(fishTank_t1854520250, ___pencil_3)); }
	inline RectTransform_t3349966182 * get_pencil_3() const { return ___pencil_3; }
	inline RectTransform_t3349966182 ** get_address_of_pencil_3() { return &___pencil_3; }
	inline void set_pencil_3(RectTransform_t3349966182 * value)
	{
		___pencil_3 = value;
		Il2CppCodeGenWriteBarrier(&___pencil_3, value);
	}

	inline static int32_t get_offset_of__canvas_4() { return static_cast<int32_t>(offsetof(fishTank_t1854520250, ____canvas_4)); }
	inline Canvas_t209405766 * get__canvas_4() const { return ____canvas_4; }
	inline Canvas_t209405766 ** get_address_of__canvas_4() { return &____canvas_4; }
	inline void set__canvas_4(Canvas_t209405766 * value)
	{
		____canvas_4 = value;
		Il2CppCodeGenWriteBarrier(&____canvas_4, value);
	}

	inline static int32_t get_offset_of__rectTransform_5() { return static_cast<int32_t>(offsetof(fishTank_t1854520250, ____rectTransform_5)); }
	inline RectTransform_t3349966182 * get__rectTransform_5() const { return ____rectTransform_5; }
	inline RectTransform_t3349966182 ** get_address_of__rectTransform_5() { return &____rectTransform_5; }
	inline void set__rectTransform_5(RectTransform_t3349966182 * value)
	{
		____rectTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&____rectTransform_5, value);
	}

	inline static int32_t get_offset_of__size_6() { return static_cast<int32_t>(offsetof(fishTank_t1854520250, ____size_6)); }
	inline float get__size_6() const { return ____size_6; }
	inline float* get_address_of__size_6() { return &____size_6; }
	inline void set__size_6(float value)
	{
		____size_6 = value;
	}

	inline static int32_t get_offset_of__color_7() { return static_cast<int32_t>(offsetof(fishTank_t1854520250, ____color_7)); }
	inline Color_t2020392075  get__color_7() const { return ____color_7; }
	inline Color_t2020392075 * get_address_of__color_7() { return &____color_7; }
	inline void set__color_7(Color_t2020392075  value)
	{
		____color_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
