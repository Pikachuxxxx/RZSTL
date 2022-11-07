#ifndef RZSTL_STRING_H
#define RZSTL_STRING_H

#include "RZSTL/config.h"

namespace Razix {
    // Namespace to switch C++ STL with other STLs
    namespace rzstl {
#if USE_EASTL
        using string = eastl::string;
#elif

        class string
        {

        };
#endif

    }    // namespace rzstl
}    // namespace Razix

#endif
