cmake_minimum_required(VERSION 3.14)
project(LeetCodeSolutions CXX)

# 设置 C++17 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 设置编译选项
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 包含通用头文件目录
include_directories(${CMAKE_SOURCE_DIR}/common)

# 使用 FetchContent 下载 Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)

# Windows 平台配置
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# 启用测试
enable_testing()

# 自动发现所有题目目录（格式：0XXX_problem_name）
file(GLOB PROBLEM_DIRS "${CMAKE_SOURCE_DIR}/[0-9][0-9][0-9][0-9]_*")

# 为每个题目创建可执行文件和测试
foreach(PROBLEM_DIR ${PROBLEM_DIRS})
    # 获取目录名称（不含路径）
    get_filename_component(PROBLEM_NAME ${PROBLEM_DIR} NAME)
    
    # 检查是否存在 solution.cpp 和 solution_test.cpp
    set(SOLUTION_FILE "${PROBLEM_DIR}/solution.cpp")
    set(TEST_FILE "${PROBLEM_DIR}/solution_test.cpp")
    
    if(EXISTS ${SOLUTION_FILE} AND EXISTS ${TEST_FILE})
        # 创建测试可执行文件
        set(TEST_TARGET "${PROBLEM_NAME}_test")
        add_executable(${TEST_TARGET} ${SOLUTION_FILE} ${TEST_FILE})
        
        # 链接 Google Test
        target_link_libraries(${TEST_TARGET} gtest_main)
        
        # 添加到 CTest
        add_test(NAME ${PROBLEM_NAME} COMMAND ${TEST_TARGET})
        
        message(STATUS "Added problem: ${PROBLEM_NAME}")
    endif()
endforeach()

# 如果没有找到任何题目，输出提示信息
list(LENGTH PROBLEM_DIRS NUM_PROBLEMS)
if(NUM_PROBLEMS EQUAL 0)
    message(WARNING "No problem directories found. Please create directories in format: 0XXX_problem_name")
endif()
