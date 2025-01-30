add_library(string_split STATIC ${PROJECT_SOURCE_DIR}/no_strings_attached/string_split.cpp)
target_link_libraries(string_split PUBLIC cxx_setup)

if (BUILD_TESTING)
    add_executable(string_split_test string_split_test.cpp)
    target_link_libraries(string_split_test PRIVATE string_split)
    target_link_libraries(string_split_test PRIVATE GTest::gtest_main)
    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(string_split_test)
endif()

add_library(string_trim  STATIC ${PROJECT_SOURCE_DIR}/no_strings_attached/string_trim.cpp)
target_link_libraries(string_trim PUBLIC cxx_setup)

if (BUILD_TESTING)
    add_executable(string_trim_test string_trim_test.cpp)
    target_link_libraries(string_trim_test PRIVATE string_trim)
    target_link_libraries(string_trim_test PRIVATE GTest::gtest_main)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(string_trim_test)
endif()