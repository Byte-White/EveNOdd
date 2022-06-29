project("EveNOdd")
add_library(
${PROJECT_NAME}
STATIC
"src/is_even_impl.cpp"
"src/iseven.cpp"
"src/minmax.cpp"
)

target_include_directories( 
    ${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/src
)

add_library(EveNOdd::EveNOdd ALIAS ${PROJECT_NAME})