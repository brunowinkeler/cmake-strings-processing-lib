#include <no_strings_attached/string_trim.h>
#include <iostream>

using namespace no_strings_attached;

int main()
{
    auto resStr1 = Trim("aahelloa", 'a', Side::kLeft);
    auto resStr2 = Trim("aahelloa", 'a', Side::kRight);
    auto resStr3 = Trim("aahelloa", 'a', Side::kBoth);
    auto resStr4 = Trim("hello", 'h', Side::kLeft);
    auto resStr5 = Trim("  hello ");

    std::cout << "resStr1: " << resStr1 << std::endl;
    std::cout << "resStr2: " << resStr2 << std::endl;
    std::cout << "resStr3: " << resStr3 << std::endl;
    std::cout << "resStr4: " << resStr4 << std::endl;
    std::cout << "resStr5: " << resStr5 << std::endl;

    return 0;
}
