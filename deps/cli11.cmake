include(FetchContent)

FetchContent_Declare(
    cli11cpp
    GIT_REPOSITORY https://github.com/CLIUtils/CLI11
    GIT_TAG        v2.3.2
)

FetchContent_GetProperties(cli11cpp)
if(NOT cli11cpp_POPULATED)
    FetchContent_Populate(cli11cpp)

    add_library(cli11cpp INTERFACE)
    target_include_directories(cli11cpp INTERFACE ${cli11cpp_SOURCE_DIR}/include)
    target_compile_features(cli11cpp INTERFACE cxx_std_14)
endif()
