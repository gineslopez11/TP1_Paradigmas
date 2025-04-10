#include "ArmaMagica.hpp"

class Amuleto : public ArmaMagica {
	private:
		bool malaSuerte;

	public:
		Amuleto(string poderM, bool prot, int niverlR,string rangoE,bool malaS);
		void tieneMalaSuerte();

};
