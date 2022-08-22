cmake_minimum_required(VERSION 3.22.0)

# set(VCPKG_ROOT "D:/git/vcpkg/scripts/buildsystems/vcpkg.cmake)" CACHE PATH "")
# set(CMAKE_TOOLCHAIN_FILE ${VCPKG_ROOT})


#add_definitions("-std=c++11")
include(conf/building_output.cmake)

set(VCPKG_ROOT "D:\\git\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake" CACHE PATH "")
set(CMAKE_TOOLCHAIN_FILE ${VCPKG_ROOT})
#set(-DCMAKE_TOOLCHAIN_FILE=D:/git/vcpkg/scripts/buildsystems/vcpkg.cmake)#指定工具路径
#set(-DVCPKG_TARGET_TRIPLET=x64-windows-static)

#include(D:/git/vcpkg/scripts/buildsystems/vcpkg.cmake)
project(cmakeTestVcpkg)
add_compile_options(-std:c++17)
 #include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 #conan_basic_setup()



add_subdirectory(src)

