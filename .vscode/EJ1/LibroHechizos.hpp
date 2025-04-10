#include "ArmaMagica.hpp"

class LibroHechizos : public ArmaMagica {
	private:
		int cantidadPaginas;

	public:
		LibroHechizos(string poderM, bool prot, int niverlR,string rangoE,bool cantP);
		int getCantidadPaginas();

};