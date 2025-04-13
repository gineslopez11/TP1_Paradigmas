#include "Mago.hpp"
#pragma once

class Conjurador : public Mago {
	private:
		bool invocacion;
	public:
		Conjurador(int niv, int vid, int poderD, bool inv);
		bool HabilidadEspecial() const override;
};