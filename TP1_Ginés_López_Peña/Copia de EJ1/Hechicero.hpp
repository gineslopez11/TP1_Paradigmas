#include "Mago.hpp"
#pragma once

class Hechicero : public Mago {
	private:
		bool invisibilidad;
	public:
		Hechicero(int niv, int vid, int poderD, bool inv);
		bool HabilidadEspecial() const override;
};