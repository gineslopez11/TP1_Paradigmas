#include "ArmaMagica.hpp"
#pragma once

class Amuleto : public ArmaMagica {
	private:
		bool malaSuerte;

	public:
		Amuleto(int d, bool prot, int niverlR,int rangoE,bool malaS);
		bool tieneHabilidadEspecial() const override;

};
