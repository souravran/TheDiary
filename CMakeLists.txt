cmake_minimum_required (VERSION 2.6)
project (TheDiary)

#add_executable(TheDiary MainApp.cpp)

#TARGET_LINK_LIBRARIES(CArray ${CARRAY_LIBRARIES})
# Or, for built-in httpd deployment:
# TARGET_LINK_LIBRARIES(myprog.wt
#   wthttp wt someotherlib
# )



########################## Gtkmm ########################
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})


##########################################################



include_directories(/usr/include)
include_directories(/home/sourav/git/TheDiary/src)

set(SOURCE
   ${SOURCE}
   ${CMAKE_CURRENT_SOURCE_DIR}/MainApp.cpp
#   PARENT_SCOPE
)
set(HEADERS
   ${HEADERS}
   ${CMAKE_CURRENT_SOURCE_DIR}/MainApp.h
#   PARENT_SCOPE
)

#add_subdirectory("${PROJECT_SOURCE_DIR}")
add_executable(TheDiary ${SOURCE} ${HEADERS})
target_link_libraries(TheDiary ${GTKMM_LIBRARIES})





