CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Target executable (décommenter l'exercice à tester)
#TARGET = point_test.exe
TARGET = test_amis.exe


# Source files (décommenter l'exercice à tester)
#SRCS = Point.cpp point_test.cpp
SRCS = test_amis.cpp vecteur.cpp #vecteur_test.cpp

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