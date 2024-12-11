#----------------------------------------------------------------------#
# CERN ROOT DEPENDENCY
find_package(ROOT CONFIG COMPONENTS RIO Net RooStats RooFit ROOTDataFrame)
include_directories(${ROOT_INCLUDE_DIRS})

#----------------------------------------------------------------------#
# PROJECT DEPENDENCY
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#----------------------------------------------------------------------#
# ADD LIBRARIES
add_library (testlib "test.h" "test.cpp") #NOTE: Need both header and src files here even if empty.
#target_include_directories(test PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/)

#----------------------------------------------------------------------#
# ADD EXECUTABLES
add_executable(test test.cpp)
target_link_libraries(test PUBLIC ROOT::RIO ROOT::Net ROOT::RooFit ROOT::RooStats ROOT::ROOTDataFrame)
