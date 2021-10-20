# CMakeLists.txt file intended for bootstrapping packie

cmake_minimum_required(VERSION 3.16)
project(packie)

add_executable(${PROJECT_NAME}
    src/ArgumentParser.cpp
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)