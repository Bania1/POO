add_library(client client.cc client.h)
target_link_libraries(client PUBLIC person basket)

target_include_directories(client PUBLIC 
				${CMAKE_CURRENT_LIST_DIR}
		${PROJECT_SOURCE_DIR}/src/person
		${PROJECT_SOURCE_DIR}/src/basket)

add_executable(client_main client_main.cc)
target_link_libraries(client_main PUBLIC client person basket)
