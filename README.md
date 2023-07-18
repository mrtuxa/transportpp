transportpp - C++ REST API Wrapper

transportpp is a lightweight C++ REST API wrapper designed to simplify HTTP requests and responses. It aims to provide a user-friendly interface while offering essential functionalities for interacting with RESTful APIs. Although the library is not fully implemented yet, it is actively developed, and contributions are welcome.
Setup

To start using transportpp in your C++ project, follow these steps:

Clone the transportpp repository from GitHub into a subdirectory named `libs/transportpp` in your project:

```bash
git clone https://github.com/mrtuxa/transportpp.git libs/transportpp
```

```cmake
# minimum CMake version required
cmake_minimum_required(VERSION 3.15)

# Project name, version, and description
project(transportpp_client VERSION 1.0 DESCRIPTION "A discord bot")

# Add transportpp as a dependency
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