#pragma once

// Thanks to my colleague and friend CybernetHacker14 (Ujjwal Raut) https://github.com/CybernetHacker14 for this switch mechanism b/w EASTL and RZSTL/std STL
// From https://github.com/CybernetHacker14/Sentinel/blob/e4e6325e3a3e3e0b98f446917506798c86c4f26e/Engine/Source/Sentinel/Common/Core/STL.h

// Preprocessor directive defined here, because then it needs to be
// entered in all premake and cmake scripts for the definition to get evaluated
#define USE_EASTL 0

#if USE_EASTL == 1
    #undef EASTL_EASTDC_VSNPRINTF
    #define EASTL_EASTDC_VSNPRINTF 0
#endif  // USE_EASTL == 1

#if USE_EASTL == 1
    #include <EASTL/vector.h>
    #include <EASTL/string.h>
    #include <EASTL/unordered_map.h>
    #include <EASTL/algorithm.h>
    #include <EASTL/array.h>
    #include <EASTL/shared_ptr.h>
    #include <EASTL/unique_ptr.h>
    #include <EASTL/list.h>
    #include <EASTL/unordered_set.h>
    #include <EASTL/deque.h>
    #include <EASTL/algorithm.h>
    #include <EASTL/type_traits.h>
    #include <EASTL/utility.h>
    #include <EASTL/functional.h>
    #include <EASTL/array.h>
#endif

// TODO: Add compiler options to disable std STL using --no-stl to be used in all the projects
