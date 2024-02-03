add_rules("mode.debug", "mode.release")


add_requires("vulkan-headers 1.3.268", "glm")
if is_plat("macosx") then 
    add_requires("moltenvk")
end

target("glvk")
    set_kind("$(kind)")
    set_languages("cxx23")
    for _, paths in ipairs({"src/*.cpp", "modules/**.mpp"}) do
        for _, file in ipairs(os.files(paths)) do
            add_files(file)
        end
    end
    if is_plat("macosx") then 
        add_packages("moltenvk")
    end
    add_packages("vulkan-headers", "glm")
    -- for std modules
    add_cxxflags("-fexperimental-library")