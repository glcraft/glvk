add_rules("mode.debug", "mode.release")

option("validation_layers")
option_end()

add_requires("vulkan-headers 1.3.268", "vulkan-hpp 1.3.268", "moltenvk", "glm")
if has_config("validation_layers") then 
    add_requires("vulkan-validationlayers")
end 

target("glvk")
    set_kind("$(kind)")
    set_languages("cxx23")
    add_files(
        "src/*.cpp", 
        "modules/**.mpp", 
        "stdmodules/std.cppm"
    )
    add_packages("vulkan-headers", "vulkan-hpp", "moltenvk", "glm")
    -- for std modules
    add_cxxflags("-stdlib=libc++", "-fexperimental-library")
    set_policy("build.c++.modules", true)
    set_policy("build.c++.clang.stdmodules", false)