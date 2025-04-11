#include "Mago.hpp"

class Brujo : public Mago {
	private:
		bool maldicion;
	public:
		Brujo(int niv, int vid, int poderD, bool mal);
		bool HabilidadEspecial() const override;
};