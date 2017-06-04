
cmake_minimum_required (VERSION 3.6)

project (AUTOARGPARSE_EXAMPLES
         VERSION 1.0.0
         LANGUAGES CXX)

# Import auto-arg-parse.
# After this, `autoArgParse` and `autoArgParse-header-only` targets appears.
add_subdirectory (ext/auto-arg-parse)

add_subdirectory (ex-lib)
add_subdirectory (ex-headeronly)
