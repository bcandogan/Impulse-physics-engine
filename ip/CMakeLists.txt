add_library("${PROJECT_NAME}" "")
add_library(Imp::Imp ALIAS "${PROJECT_NAME}")

target_include_directories("${PROJECT_NAME}" PUBLIC 
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
	"$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
    "$<INSTALL_INTERFACE:include>"
) 

if(NOT BUILD_SHARED_LIBS)
    set(STATIC_POSTFIX "-s")
	set_target_properties("${PROJECT_NAME}" PROPERTIES
	COMPILE_FLAGS -DFOO_STATIC_DEFINE)
endif()

#Projeyi yeniden adlandır
set_target_properties("${PROJECT_NAME}" PROPERTIES 
DEBUG_POSTFIX "${STATIC_POSTFIX}-d" 
RELEASE_POSTFIX "${STATIC_POSTFIX}" 
MINSIZEREL_POSTFIX "${STATIC_POSTFIX}-mr" 
RELWITHDEBINFO_POSTFIX "${STATIC_POSTFIX}-rd"
)    

include("GenerateExportHeader")

generate_export_header("${PROJECT_NAME}")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/ip_export.h" DESTINATION "include")


add_subdirectory("include")
add_subdirectory("src")
