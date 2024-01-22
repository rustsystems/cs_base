cmake_minimum_required(VERSION 3.27)

project(cs_base_c2 C)

set(CMAKE_C_STANDARD 23)
INCLUDE( FindPkgConfig )
INCLUDE( FindCheck.cmake )

include_directories(./src)
include_directories(${LIBUUID_INCLUDE_DIR})
include_directories(${CHECK_INCLUDE_DIR})


add_executable(
    cs_base_c2
    src/main.c
    src/data_structures/lists/linked_lists/doubly_linked_list/DoublyLinkedList.h
    src/utils/IDGenerator.h
        src/data_structures/lists/linked_lists/singly_linked_list/LinkedList.h
)
# Take care about check.pc settings
find_package(json-c CONFIG)

find_path(LIBUUID_INCLUDE_DIR uuid.h PATH_SUFFIXES uuid)
find_library(LIBUUID_LIBRARY libuuid.a)

find_package(Check CONFIG)
include_directories(${CHECK_INCLUDE_DIRS})
include_directories(${CHECK_INCLUDE_DIR})
link_directories(${CHECK_LIBRARY_DIRS})

## ===================================================
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
set(TEST_SOURCES
        test/data_structures/lists/linked_lists/singly_linked_list/check_linkedlist.c
        src/data_structures/lists/linked_lists/circular_linked_list/CircularLinkedList.h
        src/data_structures/lists/linked_lists/singly_linked_list/LinkedListOperations.h
        src/data_structures/lists/linked_lists/circular_doubly_linked_list/CircularDoublyLinkedList.h
        src/data_structures/lists/linked_lists/singly_linked_list/LinkedList.h
        test/data_structures/lists/linked_lists/doubly_linked_list/check_doublylinkedlist.c
        test/checker_main.c
)
add_executable(cs_base_c2_test ${TEST_SOURCES}
        src/data_structures/lists/linked_lists/singly_linked_list/LinkedList.h)
target_link_libraries(${PROJECT_NAME} PRIVATE json-c::json-c)
target_link_libraries(cs_base_c2_test ${CHECK_LIBRARIES})