#include "IPersonaje.hpp"

class Mago : public IPersonaje {
	protected:
		string nombre;
		int nivel;
		int vida;
		int poderDisponible;

	public:
		void usar() override;
		void atacar();
		void defender();
		virtual bool HabilidadEspecial() const = 0;
		int getNivel() const override;
		int getVida();
		string getNombre() const override;
		int getPoderDisponible();

};