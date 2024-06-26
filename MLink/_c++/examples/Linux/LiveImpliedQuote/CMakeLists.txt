cmake_minimum_required(VERSION 3.5)
project(LiveImpliedQuoteMultipleStripes)


###############################################################################
## file globbing ##############################################################
###############################################################################

# these instructions search the directory tree when CMake is
# invoked and put all files that match the pattern in the variables
# `sources` and `data`
file(GLOB_RECURSE sources LiveImpliedQuoteMultipleStripes.cpp)

###############################################################################
## target definitions #########################################################
###############################################################################

# add the data to the target, so it becomes visible in some IDE
add_executable(LiveImpliedQuoteMultipleStripes ${sources})

set_property(TARGET LiveImpliedQuoteMultipleStripes PROPERTY CXX_STANDARD 17)

# just for example add some compiler flags
target_compile_options(LiveImpliedQuoteMultipleStripes PUBLIC -Wall)

# this lets me include files relative to the root source directory with a <> pair
target_include_directories(LiveImpliedQuoteMultipleStripes PUBLIC . ../../../headers/Codec ../../../headers/Messages)

###############################################################################
## dependencies ###############################################################
###############################################################################

# this defines the variables Boost_LIBRARIES that contain all library names
# that we need to link to
find_package(Boost 1.81.0 COMPONENTS url REQUIRED)

target_link_libraries(LiveImpliedQuoteMultipleStripes PUBLIC
  ${Boost_LIBRARIES}
  ssl
  crypto
  pthread
)
