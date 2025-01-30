// Must include the gtest header to use the testing library
#include <gtest/gtest.h>
#include <no_strings_attached/string_split.h>

// All tests must live within TEST* blocks
// Inside of the TEST block is a standard C++ scope
// TestTopic defines a topic of our test, e.g. NameOfFunctionTest
// TrivialEquality represents the name of this particular test
// It should be descriptive and readable to the user
// TEST is a macro, i.e., preprocessor replaces it with some code
TEST(SplitStrings, HelloWorldCase)
{
    // We can test for equality, inequality etc.
    // If the equality does not hold, the test fails.
    // EXPECT_* are macros, i.e., also replaced by the preprocessor.
    auto vecStrings = no_strings_attached::Split("Hello World", " ");

    ASSERT_EQ(vecStrings.size(), 2);
    EXPECT_STREQ(vecStrings[0].c_str(), "Hello");
    EXPECT_STREQ(vecStrings[1].c_str(), "World");
}

TEST(SplitStrings, AabbCase)
{
    // ASSERT_* is similar to EXPECT_* but stops the execution
    // of the test if fails.
    // EXPECT_* continues execution on failure too.
    auto vecStrings = no_strings_attached::Split("aaabaaba", "aa");

    ASSERT_EQ(vecStrings.size(), 3);
    EXPECT_STREQ(vecStrings[0].c_str(), "");
    EXPECT_STREQ(vecStrings[1].c_str(), "ab");
    EXPECT_STREQ(vecStrings[2].c_str(), "ba");
}

TEST(SplitStrings, HelloWorldWithChunksCase)
{
    auto vecStrings = no_strings_attached::Split("Hello World", " ", 1);

    ASSERT_EQ(vecStrings.size(), 1);
    EXPECT_STREQ(vecStrings[0].c_str(), "Hello");
}