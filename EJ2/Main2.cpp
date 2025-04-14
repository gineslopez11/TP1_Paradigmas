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
	vector<shared_ptr<IPersonaje>> personajesCreados;
	vector<string> opcionesMago = {"hechicero", "brujo", "conjurador", "nigromante"};
	vector<string> opcionesGuerrero {"barbaro", "caballero", "gladiador", "mercenario","paladin" };
	vector<string> opcionesArmas = {"baston", "librohechizos", "amuleto", "pocion","espada", "garrote", "hachadoble", "hachasimple","lanza" };

	srand(time(nullptr)); 

    int cantMagos = rand() % 5 + 3; 
	int cantGuerreros = rand() % 5 + 3; 
    
	for (int i = 0; i < cantMagos; i++){
		int cantArmasM = rand() % 3;
		personajesPorCrear.push_back({"Mago", cantArmasM});
	} 

	for (int j = 0; j < cantGuerreros; j++){
		int cantArmasC = rand() % 3;
		personajesPorCrear.push_back({"Guerrero", cantArmasC});
	} 

	for (const auto& par : personajesPorCrear){
		if (par.first == "Mago"){
			int indice = rand() % opcionesMago.size();  
        	string elegido = opcionesMago[indice];
			shared_ptr<IPersonaje> personajeAgregar = PersonajeFactory::crearPersonaje(elegido);

			if (par.second >= 0){
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