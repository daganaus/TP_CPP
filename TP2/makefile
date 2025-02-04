# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Target executable (décommenter l'exercice à tester)
TARGET = tp2.exo4.exe
# TARGET = tp2.exo1.exe 

# Source files (décommenter l'exercice à tester)
SRCS = tp2.exo1.func.cpp tp2.exo4.cpp
# SRCS = tp2.exo1.func.cpp tp2.exo1.main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile the source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean