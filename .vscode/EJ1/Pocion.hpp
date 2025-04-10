#include "ArmaMagica.hpp"

class Pocion : public ArmaMagica {
	private:
		int duracion;

	public:
		Pocion(string poderM, bool prot, int niverlR,string rangoE,int dur);
		int getDuracionEfecto();

};