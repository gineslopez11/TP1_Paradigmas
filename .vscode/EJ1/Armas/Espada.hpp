#include "ArmaCombate.hpp"

class Espada : public ArmaCombate {
	private:
		bool filoDoble;

	public:
		Espada(int d, bool puedeB, int nivelR, string rar,bool filoD);
		bool tieneHabilidadEspecial() const override;

};
