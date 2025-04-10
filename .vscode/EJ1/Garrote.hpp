#include "ArmaCombate.hpp"

class Garrote : public ArmaCombate {
	private:
		int peso;

	public:
		Garrote(int d, bool puedeB, int nivelR, string rar,int p);
		int getPeso();

};
