add_rules("plugin.vsxmake.autoupdate")
add_rules("plugin.compile_commands.autoupdate", { outputdir = "build", lsp = "clangd" })
add_rules(
  "mode.debug",
  "mode.release",
  "mode.releasedbg",
  "mode.check",
  "mode.coverage",
  "mode.profile",
  "mode.minsizerel"
)

add_requires("vulkan-headers", "glm")
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
    add_defines(
        "VK_NO_PROTOTYPES",
        "VULKAN_HPP_DISPATCH_LOADER_DYNAMIC=1",
        "VULKAN_HPP_STORAGE_SHARED",
        {public = true}
    )