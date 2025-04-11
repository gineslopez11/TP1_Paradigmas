#include "IPersonaje.hpp"

class Guerrero : public IPersonaje {
	protected:
		string nombre;
		int nivel;
		int vida;
		int resistencia;
	public:
		void usar() override;
		void atacar();
		void defender();
		virtual bool HabilidadEspecial() const = 0;
		int getNivel() const override;
		int getVida();
		string getNombre() const override;
		int getResistencia();
};