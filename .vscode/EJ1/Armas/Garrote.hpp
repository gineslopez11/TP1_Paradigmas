#include "ArmaCombate.hpp"

class Garrote : public ArmaCombate {
	private:
		bool pesoPesado;

	public:
		Garrote(int d, bool puedeB, int nivelR, string rar,bool pesoP);
		bool tieneHabilidadEspecial() const override;

};
