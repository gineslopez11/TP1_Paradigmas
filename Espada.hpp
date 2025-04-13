#include "ArmaCombate.hpp"
#pragma once

class Espada : public ArmaCombate {
	private:
		bool filoDoble;

	public:
		Espada(int d, bool puedeB, int nivelR, int rar,bool filoD);
		bool tieneHabilidadEspecial() const override;

};
