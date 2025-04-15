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
		vector<shared_ptr<IArma>> armasGuerrero; //Usando este vector puedo tener objetos de tipos personaje que contengan objetos de tipo Arma (haciendo una composicion)
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
		void agregarArma(shared_ptr<IArma> arma) override;
		void mostrarInfo() const override;
};