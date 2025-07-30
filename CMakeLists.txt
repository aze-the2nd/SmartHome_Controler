cmake_minimum_required(VERSION 3.10)

project(SmartHomeController)
 
set(CMAKE_CXX_STANDARD 17)

# define include-directory
include_directories(include)

# find all .cpp-files in src/ directory
file(GLOB SOURCES "src/*.cpp")

# create executable file
add_executable(SmartHome ${SOURCES})
