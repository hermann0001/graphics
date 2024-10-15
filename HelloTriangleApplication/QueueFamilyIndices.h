#pragma once

#include <optional>
#include <vulkan/vulkan.h>

struct QueueFamilyIndices {
    std::optional<uint32_t> graphicsFamily;

    bool isComplete() const;
};

// Declare a function that finds the queue families for a given physical device
QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);
