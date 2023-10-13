#ifndef RZSTL_CONST_MAP_H
#define RZSTL_CONST_MAP_H

#include "RZSTL/config.h"

namespace Razix {
    namespace rzstl {

#if defined WIN32 || defined _WIN64
        typedef unsigned __int64 size_t;
        typedef __int64          ptrdiff_t;
        typedef __int64          intptr_t;
#endif

        template<typename Element, rzstl::size_t>
        class constexpr_map
        {
        };

    }    // namespace rzstl
}    // namespace Razix
#endif
