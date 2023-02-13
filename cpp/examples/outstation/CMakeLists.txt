add_executable(dnp3-outstation ./main.cpp)
target_link_libraries (dnp3-outstation PRIVATE opendnp3)
set_target_properties(dnp3-outstation PROPERTIES FOLDER cpp/examples)
install(TARGETS dnp3-outstation RUNTIME DESTINATION bin)
