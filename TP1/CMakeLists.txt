cmake_minimum_required( VERSION 3.0 )
project( TP_1)
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main.out src/main.cpp 
	src/Fibonacci.cpp 
	src/Vecteur3.cpp)
target_link_libraries( main.out ${PKG_LIBRARIES} )

add_executable(test.out src/main_test.cpp 
	src/test_Fibonacci
	src/Fibonacci.cpp)
target_link_libraries(test.out ${PKG_LIBRARIES} )
