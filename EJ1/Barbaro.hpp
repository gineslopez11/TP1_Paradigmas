#include "Guerrero.hpp"
#pragma once

class Barbaro : public Guerrero {
	private:
		bool furia;
	public:
		Barbaro(int niv, int vid, int res, bool fur);
		bool HabilidadEspecial() const override;
};