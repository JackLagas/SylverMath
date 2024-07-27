set_project("SylverMath")
set_version("0.3.0")
add_rules("mode.debug", "mode.release")

option("kind")
    set_default("static")
    set_showmenu(true)
    set_category("build-options")
    set_values("static", "shared")
    set_description("What kind of library to build",
        " - static",
        " - shared"
    )
option_end()

set_warnings("all", "error")

if is_mode("debug") then
    add_defines("DEBUG")
    set_symbols("debug")
    set_optimize("none")
end
if is_mode("release") then
    set_symbols("hidden")
    set_strip("all")
    set_optimize("fastest")
    add_vectorexts("sse2", "sse3", "ssse3")
end

target("SylverMath")
    set_languages("cxx20")
    set_basename("SylverMath")
    set_targetdir("$(projectdir)/lib/$(os)/")
    set_objectdir("$(projectdir)/build/")
    set_kind("$(kind)")
    add_files("$(projectdir)/src/**.cpp")
    add_includedirs("$(projectdir)/include")
target_end()

includes("tests")
