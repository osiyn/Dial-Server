cmake_minimum_required(VERSION 3.14)
project(Dial-Server
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(spdlog CONFIG REQUIRED)

add_executable(${CMAKE_PROJECT_NAME} src/server/main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE spdlog::spdlog_header_only)