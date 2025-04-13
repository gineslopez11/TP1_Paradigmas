#include "ArmaMagica.hpp"
#pragma once

class Pocion : public ArmaMagica {
	private:
		bool curacionInstantanea;

	public:
		Pocion(bool prot, int niverlR,int rangoE,bool curacionI);
		bool tieneHabilidadEspecial() const override;

};