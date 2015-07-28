CXX = g++
CXXFLAGS = -std=c++11 -g -Wall
SOURCES := $(wildcard src/*.cpp src/nodes/*.cpp)
EXECUTABLE = menu

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(SOURCES)

clean:
	rm $(EXECUTABLE)