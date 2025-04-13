#include "Ataque.hpp"

string ataqueToString(Ataque ataque){
	switch (ataque) {
		case Ataque::GolpeFuerte:
			return "Golpe Fuerte";
		case Ataque::GolpeRapido:
			return "Golpe Rapido";
		case Ataque::DefensaYGolpe:
			return "Defensa y Golpe";
		default:
			return "Accion desconocida";
	}
}