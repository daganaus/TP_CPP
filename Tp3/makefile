CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Nom de l'exécutable
TARGET = point_test.exe

# Fichiers sources
SRCS = point.cpp point_test.cpp

# Fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Règle pour créer les fichiers objets
%.o: %.cpp point.hpp
	$(CXX) $(CXXFLAGS) -c $<

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean