#include "Guerrero.hpp"
#pragma once

class Caballero : public Guerrero {
	private:
		bool guardia;
	public:
		Caballero(int niv, int vid, int res, bool guar);
		bool HabilidadEspecial() const override;
};