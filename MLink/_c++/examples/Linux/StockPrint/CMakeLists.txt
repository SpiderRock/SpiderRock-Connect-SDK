cmake_minimum_required(VERSION 3.5)
project(stkprt)


###############################################################################
## file globbing ##############################################################
###############################################################################

# these instructions search the directory tree when CMake is
# invoked and put all files that match the pattern in the variables
# `sources` and `data`
file(GLOB_RECURSE sources stkprt.cpp)

###############################################################################
## target definitions #########################################################
###############################################################################

# add the data to the target, so it becomes visible in some IDE
add_executable(stkprt ${sources})

set_property(TARGET stkprt PROPERTY CXX_STANDARD 17)

# just for example add some compiler flags
target_compile_options(stkprt PUBLIC -Wall)

# this lets me include files relative to the root source directory with a <> pair
target_include_directories(stkprt PUBLIC . ../../../../output ../../../../Codec/Codec)

###############################################################################
## dependencies ###############################################################
###############################################################################

# this defines the variables Boost_LIBRARIES that contain all library names
# that we need to link to
find_package(Boost 1.81.0 COMPONENTS url REQUIRED)

target_link_libraries(stkprt PUBLIC
  ${Boost_LIBRARIES}
  ssl
  crypto
  pthread
)
