#include <string>
#include <vector>
#include "IArma.hpp"
using namespace std;
#pragma once

class IPersonaje {
	public:
		virtual void mostrarInfo() const = 0;
		virtual void atacar() = 0;
		virtual void defender() = 0;
		virtual void usar() = 0;
		virtual int getNivel() const = 0;
		virtual string getNombre() const = 0;
		virtual int getVida() const = 0;
		virtual void setVida(int nuevaV) = 0;
		virtual void agregarArma(shared_ptr<IArma> arma) = 0;
		virtual ~IPersonaje() = default;
	};