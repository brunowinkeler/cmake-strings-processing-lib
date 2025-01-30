#include <gtest/gtest.h>
#include <no_strings_attached/string_trim.h>

TEST(TrimStrings, HelloWorldKLeftCase)
{
    auto resStr = no_strings_attached::Trim("  Hello World ", ' ', no_strings_attached::Side::kLeft);

    ASSERT_STREQ(resStr.c_str(), "Hello World ");
}

TEST(TrimStrings, HelloWorldKRightCase)
{
    auto resStr = no_strings_attached::Trim("  Hello World ", ' ', no_strings_attached::Side::kRight);

    ASSERT_STREQ(resStr.c_str(), "  Hello World");
}

TEST(TrimStrings, HelloWorldKBothCase)
{
    auto resStr = no_strings_attached::Trim("  Hello World ", ' ', no_strings_attached::Side::kBoth);

    ASSERT_STREQ(resStr.c_str(), "Hello World");
}

TEST(TrimStrings, HelloWorldNoArgsCase)
{
    auto resStr = no_strings_attached::Trim("  Hello World ");

    ASSERT_STREQ(resStr.c_str(), "Hello World");
}