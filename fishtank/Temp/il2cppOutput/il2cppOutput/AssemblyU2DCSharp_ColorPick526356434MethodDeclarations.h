#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ColorPick
struct ColorPick_t526356434;
// ColorPickClick
struct ColorPickClick_t3954914514;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ColorPickClick3954914514.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void ColorPick::.ctor()
extern "C"  void ColorPick__ctor_m1639185655 (ColorPick_t526356434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorPick::UpdateStauration()
extern "C"  void ColorPick_UpdateStauration_m2349318858 (ColorPick_t526356434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorPick::OnStaurationClick(ColorPickClick)
extern "C"  void ColorPick_OnStaurationClick_m3508171574 (ColorPick_t526356434 * __this, ColorPickClick_t3954914514 * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorPick::UpdateColor()
extern "C"  void ColorPick_UpdateColor_m1244396063 (ColorPick_t526356434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorPick::OnHueClick(ColorPickClick)
extern "C"  void ColorPick_OnHueClick_m1118211256 (ColorPick_t526356434 * __this, ColorPickClick_t3954914514 * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ColorPick::GetSaturation(UnityEngine.Color,System.Single,System.Single)
extern "C"  Color_t2020392075  ColorPick_GetSaturation_m2693755994 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___color0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ColorPick::GetHue(System.Single)
extern "C"  Color_t2020392075  ColorPick_GetHue_m3571984605 (Il2CppObject * __this /* static, unused */, float ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorPick::.cctor()
extern "C"  void ColorPick__cctor_m3692030248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
