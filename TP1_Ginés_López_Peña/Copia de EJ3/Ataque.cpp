#include "Ataque.hpp"

string ataqueToString(Ataque ataque){ // creo funcion para pasar del enum ataque a un string para luego poder imprimir mas facil en el main
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

