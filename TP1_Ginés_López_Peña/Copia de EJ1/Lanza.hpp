#include "ArmaCombate.hpp"
#pragma once

class Lanza : public ArmaCombate {
	private:
		bool veneno;

	public:
		Lanza(int d, bool puedeB, int nivelR, int rar,bool ven);
		bool tieneHabilidadEspecial() const override;

};
