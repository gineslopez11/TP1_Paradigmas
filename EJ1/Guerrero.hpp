#include "IPersonaje.hpp"
#include "ArmaCombate.hpp"
#include <memory>
#pragma once

class Guerrero : public IPersonaje {
	protected:
		string nombre;
		int nivel;
		int vida;
		int resistencia;
		vector<shared_ptr<ArmaCombate>> armasGuerrero;
	public:
		void usar() override;
		void atacar() override;
		void defender() override;
		virtual bool HabilidadEspecial() const = 0;
		int getNivel() const override;
		int getVida() const override;
		void setVida(int nuevaV) override;
		string getNombre() const override;
		int getResistencia();
		void agregarArma(shared_ptr<ArmaCombate> arma);
		void mostrarInfo() const override;
};