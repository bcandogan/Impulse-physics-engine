 set(FILES "")
 set(SUBDIRECTORIES "impulse")
 set(RELATIVE_PATH "include")
 
 
 foreach(VAR ${SUBDIRECTORIES})
 
    add_subdirectory(${VAR})
	
endforeach()


if(FILES)
   
   target_sources("${PROJECT_NAME}" PRIVATE ${FILES})
   
   install(FILES ${FILES} DESTINATION ${RELATIVE_PATH})

endif()