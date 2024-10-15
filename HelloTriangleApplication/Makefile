CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
SOURCES = main.cpp HelloTriangleApplication.cpp VulkanUtils.cpp QueueFamilyIndices.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = triangle

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	g++ $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.PHONY: all clean