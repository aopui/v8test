add_executable(hello)

file(GLOB
	codesrc
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

target_sources(hello 
    PRIVATE
    ${codesrc}
)

target_link_libraries(hello
    PRIVATE
    dlib
    slib
)

#target_include_directories()
