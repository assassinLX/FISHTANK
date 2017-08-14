#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// fishTankData
struct fishTankData_t1186419338;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_fishTankData1186419338.h"

#pragma once
// fishTankData[]
struct fishTankDataU5BU5D_t869462031  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) fishTankData_t1186419338 * m_Items[1];

public:
	inline fishTankData_t1186419338 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline fishTankData_t1186419338 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, fishTankData_t1186419338 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline fishTankData_t1186419338 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline fishTankData_t1186419338 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, fishTankData_t1186419338 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
