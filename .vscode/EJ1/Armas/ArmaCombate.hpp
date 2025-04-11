#include "IArma.hpp"

class ArmaCombate : public IArma{
	protected:
		int daño;
		string nombre;
		bool puedeBloquear;
		int nivelRequerido;
		string rareza;

	public:
		virtual bool tieneHabilidadEspecial() const = 0;
		void usar() const override;
		string getNombre() const override;
		bool bloqueadora();
		int getNivelRequerido();
		string getRareza();
		int getDaño();

};

