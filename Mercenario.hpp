#include "Guerrero.hpp"
#pragma once

class Mercenario : public Guerrero {
	private:
		bool ataquePersonal;
	public:
		Mercenario(int niv, int vid, int res, bool ataqueP);
		bool HabilidadEspecial() const override;
};