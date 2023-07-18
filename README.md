small transport.rest C++ REST API wrapper

Not fully implemented yet
Setup

```shell
git clone https://github.com/mrtuxa/transportpp.git libs/transportpp
```
add it to CMakeLists

EXAMPLE
```CMake
# minimum CMake version required
cmake_minimum_required(VERSION 3.15)

# Project name, version, and description
project(transportpp_client VERSION 1.0 DESCRIPTION "A discord bot")

# Add DPP as a dependency
add_subdirectory(libs/transportpp)

# Find libcurl and set up its include directories and linking information
find_package(CURL REQUIRED)

# Create an executable
add_executable(${PROJECT_NAME}
src/main.cpp
# your other files...
)

# Linking libraries
target_link_libraries(${PROJECT_NAME}
transportpp
# Add any other libs you want to use here
)

# Specify includes
target_include_directories(${PROJECT_NAME} PRIVATE
libs/transportpp/src/include # Include libcurl headers
# Remember to add the include directories of any other libraries too
)

# Set C++ version
set_target_properties(${PROJECT_NAME} PROPERTIES
CXX_STANDARD 23
CXX_STANDARD_REQUIRED ON
)
```