#include "PersonajeFactory.hpp"
#include <stdexcept>
#include <string>

shared_ptr<Mago> PersonajeFactory::crearMago(string tipoMago){
	if (tipoMago == "hechicero"){
		return make_shared<Hechicero>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoMago == "brujo"){
		return make_shared<Brujo>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoMago == "nigromante"){
		return make_shared<Nigromante>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoMago == "conjurador"){
		return make_shared<Conjurador>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else{ throw invalid_argument("Tipo de mago inválido: " + tipoMago); }
}

shared_ptr<ArmaMagica> PersonajeFactory::crearArmaMagica(string armaM){
	if (armaM == "amuleto"){
		return make_shared<Amuleto>(rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaM == "baston"){
		return make_shared<Baston>(rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaM == "librohechizos"){
		return make_shared<LibroHechizos>(rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaM == "pocion"){
		return make_shared<Pocion>(rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else{ throw invalid_argument("Tipo de arma magica inválida: " + armaM); }
}

shared_ptr<Guerrero> PersonajeFactory::crearGuerrero(string tipoGuerrero){
	if (tipoGuerrero == "barbaro"){
		return make_shared<Barbaro>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoGuerrero == "caballero"){
		return make_shared<Caballero>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoGuerrero == "gladiador"){
		return make_shared<Gladiador>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoGuerrero == "mercenario"){
		return make_shared<Mercenario>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoGuerrero == "paladin"){
		return make_shared<Paladin>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else{ throw invalid_argument("Tipo de guerrero inválido: " + tipoGuerrero); }
}

shared_ptr<ArmaCombate> PersonajeFactory::crearArmaCombate(string armaC){
	if (armaC == "espada"){
		return make_shared<Espada>(rand() % 100 + 1,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaC == "garrote"){
		return make_shared<Garrote>(rand() % 100 + 1,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaC == "hachadoble"){
		return make_shared<HachaDoble>(rand() % 100 + 1,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaC == "hachasimple"){
		return make_shared<HachaSimple>(rand() % 100 + 1,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (armaC == "lanza"){
		return make_shared<Lanza>(rand() % 100 + 1,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else{ throw invalid_argument("Tipo de arma de combate inválida: " + armaC); }
}