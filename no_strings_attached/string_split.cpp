#include "string_split.h"

#include <algorithm>
#include <iterator>

namespace no_strings_attached
{
    std::vector<std::string> Split(const std::string &str, const std::string &delimiter)
    {
        std::vector<std::string> vecStrings;

        auto start = 0;
        auto end = str.find(delimiter);

        while (end != std::string::npos)
        {
            vecStrings.emplace_back(str.substr(start, end - start));
            start = end + delimiter.length();
            end = str.find(delimiter, start);
        }

        vecStrings.emplace_back(str.substr(start));

        return vecStrings;
    }

    std::vector<std::string> Split(const std::string &str, const std::string &delimiter, int number_of_chunks_to_keep)
    {
        auto vecTotalStrings = Split(str, delimiter);
        for (int i = 0; i < ((int)vecTotalStrings.size() - number_of_chunks_to_keep); i++)
        {
            vecTotalStrings.pop_back();
        }
        return vecTotalStrings;
    }
} // namespace no_strings_attached