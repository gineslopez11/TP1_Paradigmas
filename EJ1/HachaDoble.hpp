#include "ArmaCombate.hpp"
#pragma once

class HachaDoble : public ArmaCombate {
	private:
		bool conFuego;

	public:
		HachaDoble(int d, bool puedeB, int nivelR, int rar,bool conF);
		bool tieneHabilidadEspecial() const override;

};
