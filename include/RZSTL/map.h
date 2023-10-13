#ifndef RZSTL_MAP_H
#define RZSTL_MAP_H

#include "RZSTL/config.h"

namespace Razix {
    // Namespace to switch C++ STL with other STLs
    namespace rzstl {

#if USE_EASTL
        template<typename T>
        using map = eastl::map<T>;
#elif

        class map
        {
        };
#endif

    }    // namespace rzstl
}    // namespace Razix
#endif
