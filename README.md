# EveNOdd
Even And Odd Numbers Library


## How to use:

### How to add the repository:
```
git clone --recursive https://github.com/FunhuninjaStudio/Appazoid
```
If the repository was cloned non-recursively previously, use `git submodule update --init` to clone the necessary submodules.
### CMake:
```CMAKE
add_subdirectory(EveNOdd)
target_link_libraries(${PROJECT_NAME} EveNOdd::EveNOdd)
```