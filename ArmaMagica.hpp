#include "IArma.hpp"
#pragma once

class ArmaMagica : public IArma{
	protected:
		string nombre;
		bool proteccion;
		int nivelRequerido;
		int rangoEfecto;

	public:
		virtual bool tieneHabilidadEspecial() const = 0;
		void usar() const override;
		string getNombre() const override;
		bool proteje();
		int getNivelRequerido();
		int getRango();

};
