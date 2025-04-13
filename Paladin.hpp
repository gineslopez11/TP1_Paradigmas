#include "Guerrero.hpp"
#pragma once

class Paladin : public Guerrero {
	private:
		bool escudoDivino;
	public:
		Paladin(int niv, int vid, int res, bool escudoD);
		bool HabilidadEspecial() const override;
};