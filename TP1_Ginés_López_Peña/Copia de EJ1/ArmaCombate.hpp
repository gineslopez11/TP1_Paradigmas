#include "IArma.hpp"
#pragma once

class ArmaCombate : public IArma{
	protected:
		int daño;
		string nombre;
		bool puedeBloquear;
		int nivelRequerido;
		int rareza;

	public:
		virtual bool tieneHabilidadEspecial() const = 0;
		void usar() const override;
		string getNombre() const override;
		bool bloqueadora();
		int getNivelRequerido();
		int getRareza();
		int getDaño() const override;

};

