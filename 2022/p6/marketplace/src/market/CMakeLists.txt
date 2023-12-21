add_library(market market.cc market.h)
target_link_libraries(market PUBLIC)

target_include_directories(market PUBLIC 
				${CMAKE_CURRENT_LIST_DIR}
		${PROJECT_SOURCE_DIR}/src/product
		${PROJECT_SOURCE_DIR}/src/client
		${PROJECT_SOURCE_DIR}/src/seller)

add_executable(market-main market-main.cc)
target_link_libraries(market-main PUBLIC market product)