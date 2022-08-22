add_executable(conantest)

file(GLOB
	codesrc
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

target_sources(conantest 
    PRIVATE
    ${codesrc}
)



target_link_libraries(conantest
    PRIVATE
    ${CONAN_LIBS}
)

#target_include_directories()
