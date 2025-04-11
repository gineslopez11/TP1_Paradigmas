#include "ArmaMagica.hpp"

class Pocion : public ArmaMagica {
	private:
		bool curacionInstantanea;

	public:
		Pocion(string poderM, bool prot, int niverlR,string rangoE,bool curacionI);
		bool tieneHabilidadEspecial() const override;

};