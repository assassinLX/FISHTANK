#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPick
struct  ColorPick_t526356434  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image ColorPick::Saturation
	Image_t2042527209 * ___Saturation_2;
	// UnityEngine.UI.Image ColorPick::Hue
	Image_t2042527209 * ___Hue_3;
	// UnityEngine.UI.Image ColorPick::Paint
	Image_t2042527209 * ___Paint_4;
	// UnityEngine.RectTransform ColorPick::Point_Stauration
	RectTransform_t3349966182 * ___Point_Stauration_5;
	// UnityEngine.RectTransform ColorPick::Point_Hue
	RectTransform_t3349966182 * ___Point_Hue_6;
	// UnityEngine.Sprite ColorPick::Saturation_Sprite
	Sprite_t309593783 * ___Saturation_Sprite_7;
	// UnityEngine.Sprite ColorPick::Hue_Sprite
	Sprite_t309593783 * ___Hue_Sprite_8;
	// UnityEngine.Color32 ColorPick::currentHue
	Color32_t874517518  ___currentHue_9;
	// System.Single ColorPick::sWidth
	float ___sWidth_10;
	// System.Single ColorPick::sHeight
	float ___sHeight_11;
	// UnityEngine.Vector2 ColorPick::clickPoint
	Vector2_t2243707579  ___clickPoint_12;

public:
	inline static int32_t get_offset_of_Saturation_2() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Saturation_2)); }
	inline Image_t2042527209 * get_Saturation_2() const { return ___Saturation_2; }
	inline Image_t2042527209 ** get_address_of_Saturation_2() { return &___Saturation_2; }
	inline void set_Saturation_2(Image_t2042527209 * value)
	{
		___Saturation_2 = value;
		Il2CppCodeGenWriteBarrier(&___Saturation_2, value);
	}

	inline static int32_t get_offset_of_Hue_3() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Hue_3)); }
	inline Image_t2042527209 * get_Hue_3() const { return ___Hue_3; }
	inline Image_t2042527209 ** get_address_of_Hue_3() { return &___Hue_3; }
	inline void set_Hue_3(Image_t2042527209 * value)
	{
		___Hue_3 = value;
		Il2CppCodeGenWriteBarrier(&___Hue_3, value);
	}

	inline static int32_t get_offset_of_Paint_4() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Paint_4)); }
	inline Image_t2042527209 * get_Paint_4() const { return ___Paint_4; }
	inline Image_t2042527209 ** get_address_of_Paint_4() { return &___Paint_4; }
	inline void set_Paint_4(Image_t2042527209 * value)
	{
		___Paint_4 = value;
		Il2CppCodeGenWriteBarrier(&___Paint_4, value);
	}

	inline static int32_t get_offset_of_Point_Stauration_5() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Point_Stauration_5)); }
	inline RectTransform_t3349966182 * get_Point_Stauration_5() const { return ___Point_Stauration_5; }
	inline RectTransform_t3349966182 ** get_address_of_Point_Stauration_5() { return &___Point_Stauration_5; }
	inline void set_Point_Stauration_5(RectTransform_t3349966182 * value)
	{
		___Point_Stauration_5 = value;
		Il2CppCodeGenWriteBarrier(&___Point_Stauration_5, value);
	}

	inline static int32_t get_offset_of_Point_Hue_6() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Point_Hue_6)); }
	inline RectTransform_t3349966182 * get_Point_Hue_6() const { return ___Point_Hue_6; }
	inline RectTransform_t3349966182 ** get_address_of_Point_Hue_6() { return &___Point_Hue_6; }
	inline void set_Point_Hue_6(RectTransform_t3349966182 * value)
	{
		___Point_Hue_6 = value;
		Il2CppCodeGenWriteBarrier(&___Point_Hue_6, value);
	}

	inline static int32_t get_offset_of_Saturation_Sprite_7() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Saturation_Sprite_7)); }
	inline Sprite_t309593783 * get_Saturation_Sprite_7() const { return ___Saturation_Sprite_7; }
	inline Sprite_t309593783 ** get_address_of_Saturation_Sprite_7() { return &___Saturation_Sprite_7; }
	inline void set_Saturation_Sprite_7(Sprite_t309593783 * value)
	{
		___Saturation_Sprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___Saturation_Sprite_7, value);
	}

	inline static int32_t get_offset_of_Hue_Sprite_8() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___Hue_Sprite_8)); }
	inline Sprite_t309593783 * get_Hue_Sprite_8() const { return ___Hue_Sprite_8; }
	inline Sprite_t309593783 ** get_address_of_Hue_Sprite_8() { return &___Hue_Sprite_8; }
	inline void set_Hue_Sprite_8(Sprite_t309593783 * value)
	{
		___Hue_Sprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___Hue_Sprite_8, value);
	}

	inline static int32_t get_offset_of_currentHue_9() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___currentHue_9)); }
	inline Color32_t874517518  get_currentHue_9() const { return ___currentHue_9; }
	inline Color32_t874517518 * get_address_of_currentHue_9() { return &___currentHue_9; }
	inline void set_currentHue_9(Color32_t874517518  value)
	{
		___currentHue_9 = value;
	}

	inline static int32_t get_offset_of_sWidth_10() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___sWidth_10)); }
	inline float get_sWidth_10() const { return ___sWidth_10; }
	inline float* get_address_of_sWidth_10() { return &___sWidth_10; }
	inline void set_sWidth_10(float value)
	{
		___sWidth_10 = value;
	}

	inline static int32_t get_offset_of_sHeight_11() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___sHeight_11)); }
	inline float get_sHeight_11() const { return ___sHeight_11; }
	inline float* get_address_of_sHeight_11() { return &___sHeight_11; }
	inline void set_sHeight_11(float value)
	{
		___sHeight_11 = value;
	}

	inline static int32_t get_offset_of_clickPoint_12() { return static_cast<int32_t>(offsetof(ColorPick_t526356434, ___clickPoint_12)); }
	inline Vector2_t2243707579  get_clickPoint_12() const { return ___clickPoint_12; }
	inline Vector2_t2243707579 * get_address_of_clickPoint_12() { return &___clickPoint_12; }
	inline void set_clickPoint_12(Vector2_t2243707579  value)
	{
		___clickPoint_12 = value;
	}
};

struct ColorPick_t526356434_StaticFields
{
public:
	// System.Int32[] ColorPick::hues
	Int32U5BU5D_t3030399641* ___hues_13;
	// UnityEngine.Color[] ColorPick::colors
	ColorU5BU5D_t672350442* ___colors_14;
	// System.Single ColorPick::c
	float ___c_15;

public:
	inline static int32_t get_offset_of_hues_13() { return static_cast<int32_t>(offsetof(ColorPick_t526356434_StaticFields, ___hues_13)); }
	inline Int32U5BU5D_t3030399641* get_hues_13() const { return ___hues_13; }
	inline Int32U5BU5D_t3030399641** get_address_of_hues_13() { return &___hues_13; }
	inline void set_hues_13(Int32U5BU5D_t3030399641* value)
	{
		___hues_13 = value;
		Il2CppCodeGenWriteBarrier(&___hues_13, value);
	}

	inline static int32_t get_offset_of_colors_14() { return static_cast<int32_t>(offsetof(ColorPick_t526356434_StaticFields, ___colors_14)); }
	inline ColorU5BU5D_t672350442* get_colors_14() const { return ___colors_14; }
	inline ColorU5BU5D_t672350442** get_address_of_colors_14() { return &___colors_14; }
	inline void set_colors_14(ColorU5BU5D_t672350442* value)
	{
		___colors_14 = value;
		Il2CppCodeGenWriteBarrier(&___colors_14, value);
	}

	inline static int32_t get_offset_of_c_15() { return static_cast<int32_t>(offsetof(ColorPick_t526356434_StaticFields, ___c_15)); }
	inline float get_c_15() const { return ___c_15; }
	inline float* get_address_of_c_15() { return &___c_15; }
	inline void set_c_15(float value)
	{
		___c_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
