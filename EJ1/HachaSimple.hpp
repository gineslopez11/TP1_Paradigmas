#include "ArmaCombate.hpp"
#pragma once

class HachaSimple : public ArmaCombate {
	private:
		bool lanzable;

	public:
		HachaSimple(int d, bool puedeB, int nivelR, int rar,bool lan);
		bool tieneHabilidadEspecial() const override;

};
