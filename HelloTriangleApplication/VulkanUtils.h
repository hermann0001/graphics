#pragma once

#include <vulkan/vulkan.h>
#include <iostream>
#include <vector>
#include <cstring>

VkResult CreateDebugUtilsMessengerEXT(
    VkInstance instance, 
    const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDebugUtilsMessengerEXT* pDebugMessenger);
void DestroyDebugUtilsMessengerEXT(
    VkInstance instance, 
    VkDebugUtilsMessengerEXT debugMessenger, 
    const VkAllocationCallbacks* pAllocator);
bool checkValidationLayerSupport();
void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(
        VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,    // Diagnostic message | Informational message |  "Maybe a bug" message | Error message
        VkDebugUtilsMessageTypeFlagsEXT messageType,               // Unrelated event to specification or performance | Event violates specification | Non optimal use of Vulkan
        const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, // struct containing -debug message -array of vulkan objects to handle message -number of objects in array
        void* pUserData);

extern const std::vector<const char*> validationLayers;
