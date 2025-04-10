#include "IArma.hpp"

class ArmaMagica : public IArma{
	protected:
		string poderMagico;
		string nombre;
		bool proteccion;
		int nivelRequerido;
		string rangoEfecto;

	public:
		void usar();
		string getNombre();
		bool proteje();
		int getNivelRequerido();
		string getRango();
		string getPoderMagico();

};
