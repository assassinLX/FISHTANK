#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t2455055323;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPickClick
struct  ColorPickClick_t3954914514  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent ColorPickClick::Click
	ButtonClickedEvent_t2455055323 * ___Click_2;
	// UnityEngine.Vector3 ColorPickClick::<ClickPoint>k__BackingField
	Vector3_t2243707580  ___U3CClickPointU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_Click_2() { return static_cast<int32_t>(offsetof(ColorPickClick_t3954914514, ___Click_2)); }
	inline ButtonClickedEvent_t2455055323 * get_Click_2() const { return ___Click_2; }
	inline ButtonClickedEvent_t2455055323 ** get_address_of_Click_2() { return &___Click_2; }
	inline void set_Click_2(ButtonClickedEvent_t2455055323 * value)
	{
		___Click_2 = value;
		Il2CppCodeGenWriteBarrier(&___Click_2, value);
	}

	inline static int32_t get_offset_of_U3CClickPointU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ColorPickClick_t3954914514, ___U3CClickPointU3Ek__BackingField_3)); }
	inline Vector3_t2243707580  get_U3CClickPointU3Ek__BackingField_3() const { return ___U3CClickPointU3Ek__BackingField_3; }
	inline Vector3_t2243707580 * get_address_of_U3CClickPointU3Ek__BackingField_3() { return &___U3CClickPointU3Ek__BackingField_3; }
	inline void set_U3CClickPointU3Ek__BackingField_3(Vector3_t2243707580  value)
	{
		___U3CClickPointU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
