#include "ArmaMagica.hpp"
#pragma once

class Baston : public ArmaMagica {
	private:
		bool golpea;

	public:
		Baston(int d, bool prot, int niverlR,int rangoE,bool gol);
		bool tieneHabilidadEspecial() const override;

};