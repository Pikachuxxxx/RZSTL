#ifndef RZSTL_UNORDERED_MAP_H
#define RZSTL_UNORDERED_MAP_H

#include "RZSTL/config.h"

namespace Razix {
    // Namespace to switch C++ STL with other STLs
    namespace rzstl {

#if USE_EASTL
        template<typename T>
        using unordered_map = eastl::unordered_map<T>;
#elif

        class unordered_map
        {
        };
#endif

    }    // namespace rzstl
}    // namespace Razix
#endif
