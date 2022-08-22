#set(-DCMAKE_TOOLCHAIN_FILE=D:/git/vcpkg/scripts/buildsystems/vcpkg.cmake)#指定工具路径


#target_link_libraries(UseLibevent PRIVATE libevent::core libevent::extra)#链接第三方库

add_executable(v8Test)


file(GLOB
	codesrc
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

set(headerPath "D:/git/v8/v8/include")

target_include_directories(v8Test PRIVATE ${headerPath})

set(v8libpaths "D:/git/v8lib/v8/d")
#link_directories(v8libpath)
file(GLOB
	v8libs
    # ${v8libpath}/*.lib
    # ${v8libpath}/*.dll.lib
   ${v8libpaths}/*
)
set(v8libpathd "D:/git/v8lib/v8/d2")
file(GLOB
	v8libd
    # ${v8libpath}/*.lib
    # ${v8libpath}/*.dll.lib
   ${v8libpathd}/*.dll
)



target_sources(v8Test 
    PRIVATE
    ${codesrc}
)





#include(D:/git/vcpkg/scripts/buildsystems/vcpkg.cmake)
find_package(cJSON CONFIG REQUIRED)

target_link_libraries(v8Test
    PRIVATE
    cjson
    ${v8libs}
)

target_link_libraries(v8Test
    PRIVATE
    ${v8libd}
)





#target_include_directories()
