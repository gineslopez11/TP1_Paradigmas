# Variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./EJ1 -I./EJ2 -I./EJ3

# Archivos fuente y objetos para EJ1
EJ1_SRC = EJ1/Main1.cpp EJ1/ImplementacionesArmas.cpp EJ1/ImplementacionesPersonajes.cpp
EJ1_OBJ = $(EJ1_SRC:.cpp=.o)
EJ1_TARGET = ej1_output

# Archivos fuente y objetos para EJ2
EJ2_SRC = EJ2/Main2.cpp EJ2/PersonajeFactory.cpp EJ1/ImplementacionesArmas.cpp EJ1/ImplementacionesPersonajes.cpp
EJ2_OBJ = $(EJ2_SRC:.cpp=.o)
EJ2_TARGET = ej2_output

# Archivos fuente y objetos para EJ3
EJ3_SRC = EJ3/Main3.cpp EJ3/Combate.cpp EJ3/Ataque.cpp EJ2/PersonajeFactory.cpp EJ1/ImplementacionesArmas.cpp EJ1/ImplementacionesPersonajes.cpp
EJ3_OBJ = $(EJ3_SRC:.cpp=.o)
EJ3_TARGET = ej3_output

# Regla principal
all: $(EJ1_TARGET) $(EJ2_TARGET) $(EJ3_TARGET)

# Regla para compilar el ejecutable de EJ1
$(EJ1_TARGET): $(EJ1_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar el ejecutable de EJ2
$(EJ2_TARGET): $(EJ2_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar el ejecutable de EJ3
$(EJ3_TARGET): $(EJ3_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Reglas para compilar los archivos .o de EJ1
EJ1/%.o: EJ1/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Reglas para compilar los archivos .o de EJ2
EJ2/%.o: EJ2/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Reglas para compilar los archivos .o de EJ3
EJ3/%.o: EJ3/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(EJ1_OBJ) $(EJ2_OBJ) $(EJ3_OBJ) $(EJ1_TARGET) $(EJ2_TARGET) $(EJ3_TARGET)