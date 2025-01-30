#include <no_strings_attached/string_split.h>
#include <iostream>

int main()
{
    auto vecStrings1 = no_strings_attached::Split("hello world", " ");
    auto vecStrings2 = no_strings_attached::Split("aaabaaba", "aa");
    auto vecStrings3 = no_strings_attached::Split("hello world", " ", 1);
    auto vecStrings4 = no_strings_attached::Split("hello world", " ", 2);
    auto vecStrings5 = no_strings_attached::Split("aaabaaba", "aa", 2);

    std::cout << "vecStrings1" << std::endl;
    for (auto var : vecStrings1)
    {
        std::cout << var << std::endl;
    }
    std::cout << std::endl;

    std::cout << "vecStrings2" << std::endl;
    for (auto var : vecStrings2)
    {
        std::cout << var << std::endl;
    }
    std::cout << std::endl;

    std::cout << "vecStrings3" << std::endl;
    for (auto var : vecStrings3)
    {
        std::cout << var << std::endl;
    }
    std::cout << std::endl;

    std::cout << "vecStrings4" << std::endl;
    for (auto var : vecStrings4)
    {
        std::cout << var << std::endl;
    }
    std::cout << std::endl;

    std::cout << "vecStrings5" << std::endl;
    for (auto var : vecStrings5)
    {
        std::cout << var << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
