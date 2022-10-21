# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(TrianglesTests LANGUAGES CXX)

# ---- Tests ----

add_executable(Triangles_test source/Triangles_test.cpp)
target_link_libraries(Triangles_test PRIVATE Triangles_lib)
target_compile_features(Triangles_test PRIVATE cxx_std_17)

add_test(NAME Triangles_test COMMAND Triangles_test)

# ---- End-of-file commands ----

add_folders(Test)
