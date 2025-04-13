#include "ArmaCombate.hpp"
#pragma once

class Garrote : public ArmaCombate {
	private:
		bool pesoPesado;

	public:
		Garrote(int d, bool puedeB, int nivelR, int rar,bool pesoP);
		bool tieneHabilidadEspecial() const override;

};
