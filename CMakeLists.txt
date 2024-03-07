cmake_minimum_required(VERSION 3.26)
project(100problems)

set(CMAKE_CXX_STANDARD 14)

include_directories(217.contains_duplicate)
include_directories(9.palindrome)
include_directories(OOP)
include_directories(parallel_tasks)

add_executable(100problems
        217.contains_duplicate/contains_duplicate.h
        9.palindrome/palindrome.h
        OOP/class.h
        OOP/coffeegrinder.h
        OOP/copyrighter.h
        OOP/destructor.h
        OOP/getter_setter.h
        OOP/initializer.h
        OOP/this.h
        parallel_tasks/2_ranged_array.h
        parallel_tasks/dynamic_arr_operations.h
        parallel_tasks/linked_list.cpp
        parallel_tasks/links_hometask.h
        parallel_tasks/links_to_func.h
        parallel_tasks/multiplication_table.h
        parallel_tasks/pointer_in_func.h
        parallel_tasks/pointer_to_function.h
        parallel_tasks/pointers_begin.h
        main
        main.cpp
        README.md)
