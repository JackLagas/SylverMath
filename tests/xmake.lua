
add_requires("catch2 3.x")

target("SylverMathTests")
    set_kind("binary")
    add_files("src/*.cpp")
    add_includedirs("src", "$(projectdir)/include") 
    add_packages("catch2")
    set_languages("c++20")
    add_deps("SylverMath")
