#pragma once

#include "RZSTL/config.h"

#include "RZMemoryFunctions.h"

namespace Razix {
    // Namespace to switch C++ STL with other STLs
    namespace rzstl {
        //template<typename T>
        //using initializer_list = std::initializer_list<T>;
    }
}    // namespace Razix

#if USE_EASTL == 1

int Vsnprintf8(char8_t* p, size_t n, const char8_t* pFormat, va_list arguments);

void* RAZIX_CALLING_CONVENTION operator new(size_t size, const char* name, int flags, unsigned int debugFlags, const char* file, int line);
void* RAZIX_CALLING_CONVENTION operator new(size_t size, size_t alignment, size_t alignmentOffset, const char* pName, int flags, unsigned int debugFlags, const char* file, int line);
void* RAZIX_CALLING_CONVENTION operator new[](size_t size, const char* name, int flags, unsigned int debugFlags, const char* file, int line);
void* RAZIX_CALLING_CONVENTION operator new[](size_t size, size_t alignment, size_t alignmentOffset, const char* pName, int flags, unsigned int debugFlags, const char* file, int line);

void RAZIX_CALLING_CONVENTION operator delete(void* addr);
void RAZIX_CALLING_CONVENTION operator delete[](void* addr);

#endif