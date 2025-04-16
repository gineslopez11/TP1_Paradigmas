#include "PersonajesYArmas.hpp"
#include "PersonajeFactory.hpp"
#include "Combate.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	cout <<"EJERCICIO 2\n"<<endl;
	vector<pair<string, int>> personajesPorCrear;
	vector<shared_ptr<IPersonaje>> personajesCreados; //Con Shared ptrs puedo agregar personajes de los dos tipos que hay en el juego.
	vector<string> opcionesMago = {"hechicero", "brujo", "conjurador", "nigromante"};
	vector<string> opcionesGuerrero {"barbaro", "caballero", "gladiador", "mercenario","paladin" };
	vector<string> opcionesArmas = {"baston", "librohechizos", "amuleto", "pocion","espada", "garrote", "hachadoble", "hachasimple","lanza" };

	srand(time(nullptr)); 

    int cantMagos = rand() % 5 + 3; //cantidad random entre 3 y 7
	int cantGuerreros = rand() % 5 + 3; 
    
	//uso el vector de pares (magos, cantidad de armas) para luego recorrerlo y crear los personajes que salieron aleatoriamente
	for (int i = 0; i < cantMagos; i++){
		int cantArmasM = rand() % 3; // cantidad random entre 0 y 2
		personajesPorCrear.push_back({"Mago", cantArmasM});
	} 

	for (int j = 0; j < cantGuerreros; j++){
		int cantArmasC = rand() % 3;
		personajesPorCrear.push_back({"Guerrero", cantArmasC});
	} 

	for (const auto& par : personajesPorCrear){
		if (par.first == "Mago"){
			int indice = rand() % opcionesMago.size(); //sale un indice random (del vector de strings de tipos de mago) para elegir el Mago que se va a crear 
        	string elegido = opcionesMago[indice];
			shared_ptr<IPersonaje> personajeAgregar = PersonajeFactory::crearPersonaje(elegido);

			if (par.second > 0){ // si tiene armas se crea un arma (o cuantas tenga) y se las agrega al personaje
				for (int k = 0; k < par.second; k++){
					int indice = rand() % opcionesArmas.size();  
					string elegido = opcionesArmas[indice];
					shared_ptr<IArma> armaAgregar = PersonajeFactory::crearArma(elegido);
					personajeAgregar->agregarArma(armaAgregar);
				}
			}
			personajesCreados.push_back (personajeAgregar);
		}
		else if (par.first == "Guerrero"){
			int indice = rand() % opcionesGuerrero.size();  
        	string elegido = opcionesGuerrero[indice];
			shared_ptr<IPersonaje> personajeAgregar = PersonajeFactory::crearPersonaje(elegido);
			personajesCreados.push_back (personajeAgregar);
			if (par.second >= 0){
				for (int l = 0; l < par.second; l++){
					int indice = rand() % opcionesArmas.size();  
					string elegido = opcionesArmas[indice];
					shared_ptr<IArma> armaAgregar = PersonajeFactory::crearArma(elegido);
					personajeAgregar->agregarArma(armaAgregar);
				}
			}
		}
	}

	for (auto p : personajesCreados){
		p->mostrarInfo();
	}

	return 0;
}