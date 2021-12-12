cmake_minimum_required(VERSION 3.16)
project(lab9)

find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 17)

set(MAIN_SOURCE ${lab9_SOURCE_DIR}/src/lab9.cpp)
set(TEST_SOURCE ${lab9_SOURCE_DIR}/src/lab9_tests.cpp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${lab9_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${lab9_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${lab9_SOURCE_DIR}/bin)



enable_testing()

add_executable(lab9 ${MAIN_SOURCE})

install(TARGETS lab9)

add_subdirectory(3rdparty/googletest)

add_executable(lab9_tests ${TEST_SOURCE})

target_link_libraries(lab9_tests GTest::GTest GTest::Main)

install(TARGETS lab9_tests)

add_test(all_tests lab9_tests)
