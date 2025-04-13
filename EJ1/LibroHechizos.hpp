#include "ArmaMagica.hpp"
#pragma once

class LibroHechizos : public ArmaMagica {
	private:
		bool hechizoSecreto;

	public:
		LibroHechizos(int d, bool prot, int niverlR,int rangoE,bool hechizoS);
		bool tieneHabilidadEspecial() const override;

};