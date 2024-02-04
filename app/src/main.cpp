import std;
import glvk;
import glm;
import vulkan_hpp;

import MainContext;
import Types;

#include <vulkan/vulkan_hpp_macros.hpp>

int main() {
  VULKAN_HPP_DEFAULT_DISPATCHER.init();
  auto vk_context = vk::raii::Context();

  const auto exts = vk_context.enumerateInstanceExtensionProperties();
  for(auto &&ext : exts)
      std::println("{}", std::string{ext.extensionName});

  return 0;
}