cmake_minimum_required(VERSION 3.10)

project(elon_sort VERSION 1.0 LANGUAGES CXX)

include_directories("./include")

set(SOURCES 
	"src/elon_sort.cpp"
)

# create shared lib
add_library(elon_sort_shared SHARED ${SOURCES})
set_target_properties(elon_sort_shared PROPERTIES OUTPUT_NAME "elon_sort")

# create static lib
add_library(elon_sort_static STATIC ${SOURCES})
set_target_properties(elon_sort_static PROPERTIES OUTPUT_NAME "elon_sort")

install(DIRECTORY "./include/" DESTINATION "./include")
install(TARGETS elon_sort_shared elon_sort_static
        LIBRARY DESTINATION "./lib"
        ARCHIVE DESTINATION "./lib")

add_executable(elon_sort_test test/test.cpp)

target_link_libraries(elon_sort_test PRIVATE elon_sort_static)
target_include_directories(elon_sort_test PRIVATE ../include)

# add ctest support
enable_testing()
add_test(NAME elon_sort_test COMMAND elon_sort_test)
