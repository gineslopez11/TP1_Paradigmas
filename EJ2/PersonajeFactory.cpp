#include "PersonajeFactory.hpp"
#include <stdexcept>
#include <string>

shared_ptr<IPersonaje> PersonajeFactory::crearPersonaje(string tipoPersonaje){
	if (tipoPersonaje == "hechicero"){
		return make_shared<Hechicero>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "brujo"){
		return make_shared<Brujo>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "nigromante"){
		return make_shared<Nigromante>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "conjurador"){
		return make_shared<Conjurador>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "barbaro"){
		return make_shared<Barbaro>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "caballero"){
		return make_shared<Caballero>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "gladiador"){
		return make_shared<Gladiador>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "mercenario"){
		return make_shared<Mercenario>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (tipoPersonaje == "paladin"){
		return make_shared<Paladin>(rand() % 100 + 1,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else{ throw invalid_argument("Tipo de mago inválido: " + tipoPersonaje); }
}

shared_ptr<IArma> PersonajeFactory::crearArma(string arma){
	if (arma == "amuleto"){
		return make_shared<Amuleto>(30,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "baston"){
		return make_shared<Baston>(20,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "librohechizos"){
		return make_shared<LibroHechizos>(10,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "pocion"){
		return make_shared<Pocion>(20,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "espada"){
		return make_shared<Espada>(20,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "garrote"){
		return make_shared<Garrote>(30,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "hachadoble"){
		return make_shared<HachaDoble>(20,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "hachasimple"){
		return make_shared<HachaSimple>(10,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else if (arma == "lanza"){
		return make_shared<Lanza>(10,rand() % 2 == 0,100,rand() % 100 + 1,rand() % 2 == 0);
	}
	else{ throw invalid_argument("Tipo de arma magica inválida: " + arma); }
}
