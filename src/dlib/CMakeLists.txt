add_library(dlib SHARED)

file(GLOB
	codesrc
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

target_sources(dlib 
    PRIVATE
    ${codesrc}
)


target_include_directories(dlib
	INTERFACE #让引用此库的工程包含 头文件
	${CMAKE_CURRENT_SOURCE_DIR}
)