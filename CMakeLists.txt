cmake_minimum_required(VERSION 3.25)
project(transportpp)

set(CMAKE_CXX_STANDARD 23)

add_library(transportpp src/library.cpp src/include/http.h src/include/transport.hpp)
find_package(CURL REQUIRED)

target_link_libraries(${PROJECT_NAME} ${CURL_LIBRARIES})

target_include_directories(${PROJECT_NAME} PRIVATE
        ${CURL_INCLUDE_DIRS} # Include libcurl headers
        # Remember to add the include directories of any other libraries too
)