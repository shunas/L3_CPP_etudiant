cmake_minimum_required( VERSION 3.0 )
project( Name)
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main.out src/main.cpp
	src/location.cpp
	src/client.cpp
	src/produit.cpp
	src/magasin.cpp
)
target_link_libraries( main.out ${PKG_LIBRARIES} )

add_executable(test.out src/main_test.cpp
	src/testCP.cpp
	src/testM.cpp
	src/client.cpp
	src/produit.cpp
	src/magasin.cpp
)
target_link_libraries(test.out ${PKG_LIBRARIES} )
