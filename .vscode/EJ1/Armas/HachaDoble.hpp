#include "ArmaCombate.hpp"

class HachaDoble : public ArmaCombate {
	private:
		bool conFuego;

	public:
		HachaDoble(int d, bool puedeB, int nivelR, string rar,bool conF);
		bool tieneHabilidadEspecial() const override;

};
