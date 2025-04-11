#include "Mago.hpp"

class Nigromante : public Mago {
	private:
		bool clon;
	public:
		Nigromante(int niv, int vid, int poderD, bool cl);
		bool HabilidadEspecial() const override;
};