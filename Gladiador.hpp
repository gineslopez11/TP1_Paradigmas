#include "Guerrero.hpp"
#pragma once

class Gladiador : public Guerrero {
	private:
		bool reflejosRelampago;
	public:
		Gladiador(int niv, int vid, int res, bool reflejosR);
		bool HabilidadEspecial() const override;
};