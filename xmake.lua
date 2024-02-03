add_rules("mode.debug", "mode.release")


add_requires("vulkan-headers 1.3.268", "glm")
if is_plat("macosx") then 
    add_requires("moltenvk")
end

target("glvk")
    set_kind("$(kind)")
    set_languages("cxx23")
    -- add_files("src/**.cpp")
    add_files("modules/**.mpp", {public = true})
    if is_plat("macosx") then 
        add_packages("moltenvk")
    end
    add_packages("vulkan-headers", "glm")
    -- for std modules
    add_cxxflags("-fexperimental-library")