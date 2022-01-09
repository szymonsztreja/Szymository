cmake_minimum_required(VERSION 3.8)

if (DEFINED ENV_WX_CONFIG)
    set (ENV{WX_CONFIG} ${ENV_WX_CONFIG})
endif()

set(SOURCE_FILES main2.cpp Moja_Apka.h Frame.h Frame.cpp)

find_package(wxWidgets REQUIRED)

include( "${wxWidgets_USE_FILE}" )

add_executable( main2 ${SOURCE_FILES})

target_include_directories( main2 PRIVATE ${wxWidgets_INCLUDE_DIRS})

target_link_libraries( main2 ${wxWidgets_LIBRARIES})