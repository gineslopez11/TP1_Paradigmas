#include "IPersonaje.hpp"
#include "ArmaMagica.hpp"
#pragma once

class Mago : public IPersonaje {
	protected:
		string nombre;
		int nivel;
		int vida;
		int poderDisponible;
		vector<shared_ptr<IArma>> armasMago;

	public:
		void usar() override;
		void atacar() override;
		void defender() override;
		virtual bool HabilidadEspecial() const = 0;
		int getNivel() const override;
		int getVida() const override;
		void setVida(int nuevaV) override;
		string getNombre() const override;
		int getPoderDisponible();
		void agregarArma(shared_ptr<IArma> arma) override;
		void mostrarInfo() const override;

};