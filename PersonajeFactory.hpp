#include "PersonajesYArmas.hpp"
#include <memory>
#include <cstdlib>
#include <ctime>
#pragma once

using namespace std;

class PersonajeFactory {
	public:
		static shared_ptr<Mago>crearMago(string tipoMago);
		static shared_ptr<ArmaMagica>crearArmaMagica(string armaM);
		static shared_ptr<Guerrero>crearGuerrero(string tipoGuerrero);
		static shared_ptr<ArmaCombate>crearArmaCombate(string armaC);
};
