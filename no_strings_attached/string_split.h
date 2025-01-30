#pragma once

#include <vector>
#include <string>

namespace no_strings_attached
{
    std::vector<std::string> Split(const std::string &str, const std::string &delimiter);
    std::vector<std::string> Split(const std::string &str, const std::string &delimiter, int number_of_chunks_to_keep);
} // namespace no_strings_attached
