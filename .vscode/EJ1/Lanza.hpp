#include "ArmaCombate.hpp"

class Lanza : public ArmaCombate {
	private:
		bool veneno;

	public:
	Lanza(int d, bool puedeB, int nivelR, string rar,bool ven);
		bool tieneVeneno();

};
