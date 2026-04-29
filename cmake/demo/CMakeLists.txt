# 指定CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 定义项目名称和版本
project(demo VERSION 1.0)

# 设置C++标准为C++17，并且要求必须使用该标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加库和可执行文件
add_library(demoLib src/demolib.cpp)
add_executable(demo src/main.cpp)

# 将demo可执行文件连接到demoLib库
target_link_libraries(demo demoLib)