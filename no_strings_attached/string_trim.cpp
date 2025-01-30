#include "string_trim.h"

namespace no_strings_attached
{
    std::string Trim(const std::string &str, char char_to_trim, Side side)
    {
        int begin = 0;
        int end = str.size() - 1;

        if (side == Side::kLeft || side == Side::kBoth)
        {
            while (str[begin] == char_to_trim)
            {
                begin++;
            }
        }

        if (side == Side::kRight || side == Side::kBoth)
        {
            while (str[end] == char_to_trim)
            {
                end--;
            }
        }

        return str.substr(begin, end - begin + 1);
    }

    std::string Trim(const std::string &str)
    {
        return Trim(str, ' ', Side::kBoth);
    }
} // namespace no_strings_attached