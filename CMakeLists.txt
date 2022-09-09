cmake_minimum_required(VERSION 3.23)
project(runtime-checker C)

set(CMAKE_C_STANDARD 23)


set(INCLUDE_DIR /include)
include_directories (${INCLUDE_DIR})


add_library(MSI Lib/Msi.Lib Lib/ShLwApi.Lib)  # MSI added
add_library(SHLWAPI Lib/ShLwApi.Lib)  # SHLWAPI added
add_library(DBGHELP Lib/DbgHelp.Lib)  # DBGHELP added

set_target_properties(MSI PROPERTIES LINKER_LANGUAGE C)
set_target_properties(SHLWAPI PROPERTIES LINKER_LANGUAGE C)
set_target_properties(DBGHELP PROPERTIES LINKER_LANGUAGE C)

add_executable(runtime-checker main.c vcdetector.c)

target_link_libraries(runtime-checker MSI SHLWAPI DBGHELP)
