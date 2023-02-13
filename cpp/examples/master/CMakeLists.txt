add_executable(dnp3-master ./main.cpp)
target_link_libraries (dnp3-master PRIVATE
    opendnp3
    $<BUILD_INTERFACE:cli11cpp>
)
target_include_directories(opendnp3
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
)
set_target_properties(dnp3-master PROPERTIES FOLDER cpp/examples)
install(TARGETS dnp3-master RUNTIME DESTINATION bin)
