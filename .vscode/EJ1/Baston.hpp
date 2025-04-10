#include "ArmaMagica.hpp"

class Baston : public ArmaMagica {
	private:
		bool golpea;

	public:
		Baston(string poderM, bool prot, int niverlR,string rangoE,bool gol);
		bool puedeGolpear();

};