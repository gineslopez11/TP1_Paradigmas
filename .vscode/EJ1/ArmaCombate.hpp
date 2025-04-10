#include "IArma.hpp"

class ArmaCombate : public IArma{
	protected:
		int daño;
		string nombre;
		bool puedeBloquear;
		int nivelRequerido;
		string rareza;

	public:
		void usar();
		bool bloqueadora();
		string getNombre();
		int getNivelRequerido();
		string getRareza();
		int getDaño();

};

