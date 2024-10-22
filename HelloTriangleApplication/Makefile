CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
TARGET = triangle

$(TARGET): *.cpp *.h
	g++ $(CFLAGS) -o $(TARGET) *.cpp $(LDFLAGS)

clean:
	rm -f $(TARGET)

test: 
	./triangle

.PHONY: clean test