#include "ArmaMagica.hpp"

class LibroHechizos : public ArmaMagica {
	private:
		bool hechizoSecreto;

	public:
		LibroHechizos(string poderM, bool prot, int niverlR,string rangoE,bool hechizoS);
		bool tieneHabilidadEspecial() const override;

};