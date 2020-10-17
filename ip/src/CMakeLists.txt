 set(FILES "")
 set(SUBDIRECTORIES "Math")
 set(RELATIVE_PATH "src")
 
 
 foreach(VAR ${SUBDIRECTORIES})
 
    add_subdirectory(${VAR})
	
endforeach()


if(FILES)
   
   target_sources("${PROJECT_NAME}" PRIVATE ${FILES})
   
   install(FILES ${FILES} DESTINATION ${RELATIVE_PATH})

endif()