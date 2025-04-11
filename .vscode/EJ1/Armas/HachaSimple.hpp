#include "ArmaCombate.hpp"

class HachaSimple : public ArmaCombate {
	private:
		bool lanzable;

	public:
		HachaSimple(int d, bool puedeB, int nivelR, string rar,bool lan);
		bool tieneHabilidadEspecial() const override;

};
