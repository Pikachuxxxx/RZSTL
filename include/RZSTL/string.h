#ifndef RZSTL_STRING_H
#define RZSTL_STRING_H

#include "RZSTL/config.h"

namespace Razix {
    // Namespace to switch C++ STL with other STLs
    namespace rzstl {

#if USE_EASTL
        using string = eastl::string;
#else

        static constexpr bool str_less(const char* lhs, const char* rhs) noexcept
        {
            return *lhs && *rhs && *lhs == *rhs ? str_less(lhs + 1, rhs + 1) : *lhs < *rhs;
        }

        static constexpr bool str_equal(const char* lhs, const char* rhs) noexcept
        {
            return *lhs == *rhs && (*lhs == '\0' || str_equal(lhs + 1, rhs + 1));
        }

        class string
        {
        private:
            const char* data;

        public:
            constexpr string(char const* data) noexcept
                : data(data)
            {
            }

            constexpr string(const string&) noexcept            = default;
            constexpr string(string&&) noexcept                 = default;
            constexpr string& operator=(const string&) noexcept = default;
            constexpr string& operator=(string&&) noexcept      = default;

            constexpr bool operator<(const string& rhs) const noexcept
            {
                return str_less(data_, rhs.data_);
            }

            constexpr bool operator==(const string& rhs) const noexcept
            {
                return str_equal(data_, rhs.data_);
            }

            constexpr const char* data() const noexcept
            {
                return data;
            }

            constexpr const char* c_str() const noexcept
            {
                return data;
            }
        };
#endif
    }    // namespace rzstl
}    // namespace Razix

#endif
