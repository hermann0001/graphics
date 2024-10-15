#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>   
#include "VulkanUtils.h"
#include "QueueFamilyIndices.h"
#include <vector>

class HelloTriangleApplication {
public:
    void run();
private:
    GLFWwindow* window;
    VkInstance instance;
    VkDebugUtilsMessengerEXT debugMessenger;

    void initWindow();
    void initVulkan();
    void createInstance();
    void setupDebugMessenger();
    void pickPhysicalDevice();
    void mainLoop();
    void cleanup();

    bool isDeviceSuitable(VkPhysicalDevice device);
    QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

    std::vector<const char*> getRequiredExtensions();

};