
cmake_minimum_required (VERSION 3.6)

add_executable (ex-lib main.cpp)
target_link_libraries (ex-lib PRIVATE autoArgParse)
