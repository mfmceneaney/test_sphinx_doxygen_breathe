cmake_minimum_required(VERSION 3.8)
project(test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#----------------------------------------------------------------------#
# Add the cmake folder so the FindSphinx module is found
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

#----------------------------------------------------------------------#
# Actual Project
add_subdirectory ("test")

#----------------------------------------------------------------------#
# Doxygen documentation
add_subdirectory ("docs")


