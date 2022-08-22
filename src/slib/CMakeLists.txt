add_library(slib STATIC)

file(GLOB
	codesrc
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)



target_sources(slib 
    PRIVATE
    ${codesrc}
)




target_include_directories(slib
	INTERFACE #让引用此库的工程包含 头文件
	${CMAKE_CURRENT_SOURCE_DIR}
)