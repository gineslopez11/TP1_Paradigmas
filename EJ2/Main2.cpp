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
	vector<string> opcionesMago = {"hechicero", "brujo", "conjurador", "nigromante" };
	vector<string> opcionesGuerrero = {"barbaro", "caballero", "gladiador", "mercenario","paladin" };
	vector<string> opcionesArmaMagica = {"baston", "librohechizos", "amuleto", "pocion" };
	vector<string> opcionesArmaCombate = {"espada", "garrote", "hachadoble", "hachasimple","lanza"};

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
			shared_ptr<Mago> personajeAgregar = PersonajeFactory::crearMago(elegido);

			if (par.second >= 0){
				for (int k = 0; k < par.second; k++){
					int indice = rand() % opcionesArmaMagica.size();  
					string elegido = opcionesArmaMagica[indice];
					shared_ptr<ArmaMagica> armaAgregar = PersonajeFactory::crearArmaMagica(elegido);
					personajeAgregar->agregarArma(armaAgregar);
				}
			}
			personajesCreados.push_back (personajeAgregar);
		}
		else if (par.first == "Guerrero"){
			int indice = rand() % opcionesGuerrero.size();  
        	string elegido = opcionesGuerrero[indice];
			shared_ptr<Guerrero> personajeAgregar = PersonajeFactory::crearGuerrero(elegido);
			personajesCreados.push_back (personajeAgregar);
			if (par.second >= 0){
				for (int l = 0; l < par.second; l++){
					int indice = rand() % opcionesArmaCombate.size();  
					string elegido = opcionesArmaCombate[indice];
					shared_ptr<ArmaCombate> armaAgregar = PersonajeFactory::crearArmaCombate(elegido);
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