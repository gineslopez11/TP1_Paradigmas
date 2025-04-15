#include "PersonajesYArmas.hpp"
#include <memory>
#include <cstdlib>
#include <ctime>
#pragma once

using namespace std;

class PersonajeFactory {
	public:
		static shared_ptr<IPersonaje>crearPersonaje(string tipoPersonaje);
		static shared_ptr<IArma>crearArma(string arma);
};
