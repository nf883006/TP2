# Nom de l'exécutable
TARGET = MOUSSA

# Compilateur et options
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Fichiers sources
SOURCES = main.cpp \
          reservation.cpp \
          hotel.cpp \
          client.cpp \
          chambre.cpp \
          date.cpp \

# Fichiers objets
OBJECTS = $(SOURCES:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Règle pour compiler les fichiers .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I. -c $< -o $@

# Règle de nettoyage
clean:
	rm -f $(OBJECTS) $(TARGET)

# Règle de nettoyage pour les fichiers temporaires
fclean: clean
	rm -f *~

# Règle pour recompiler tout depuis zéro
re: fclean all

