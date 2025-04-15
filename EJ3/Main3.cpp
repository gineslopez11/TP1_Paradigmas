#include "../EJ2/PersonajeFactory.hpp"
#include "Ataque.hpp"
#include "Combate.hpp"

using namespace std;


int main (){
	cout <<"EJERCICIO 3\n"<<endl;
	int a1;
	string a1String,a2String;
	vector<string> opcionesPersonaje = {"hechicero", "brujo", "conjurador", "nigromante","barbaro", "caballero", "gladiador", "mercenario","paladin"};
	vector<string> opcionesArmas = {"baston", "librohechizos", "amuleto", "pocion","espada", "garrote", "hachadoble", "hachasimple","lanza" };
	srand(time(nullptr)); 

	//elijo yo el personaje y el arma pero puede ser con cualquiera
	shared_ptr<IPersonaje> jugador1 = PersonajeFactory::crearPersonaje("hechicero");
	shared_ptr<IArma> arma1 = PersonajeFactory::crearArma("baston");
	jugador1->agregarArma(arma1);


	//creo un jugador 2 random (utilizo logica del ej 2)
	int indiceP = rand() % opcionesPersonaje.size();  
	string personajeElegido = opcionesPersonaje[indiceP];
	shared_ptr<IPersonaje> jugador2 = PersonajeFactory::crearPersonaje(personajeElegido);

	int indiceA = rand() % opcionesArmas.size();  
	string armaElegida = opcionesArmas[indiceA];
	shared_ptr<IArma> arma2 = PersonajeFactory::crearArma(armaElegida);

	jugador2->agregarArma(arma2);

	cout<<"COMIENZA LA PARTIDA"<<endl;
	jugador1->mostrarInfo();
	jugador2->mostrarInfo();

	Combate batalla (jugador1,jugador2);

	while (jugador1->getVida() >0 && jugador2->getVida() > 0){ //mientras los dos jugadores esten vivos, pelean
		cout<<"NUEVA RONDA"<<endl;
		batalla.MostrarEstado();
		cout<<"Elegir: Golpe Fuerte (0), Golpe Rapido (1), Defensa y Golpe (2)"<<endl;
		cin>>a1;
		while (a1 < 0 || a1 > 2) {
			cout << "Opción inválida. Elegir: Golpe Fuerte (0), Golpe Rapido (1), Defensa y Golpe (2)" << endl;
			cin >> a1;
		}
		Ataque ataqueJugador1 = static_cast<Ataque>(a1);
		Ataque ataqueJugador2 = batalla.elegirAtaqueJugador2();

		a1String = ataqueToString(ataqueJugador1); //uso funcion para convertir el ataque elegido a string para que sea entendible para el usuario
		a2String = ataqueToString(ataqueJugador2);

		int ganadorRonda = batalla.resolverRonda(ataqueJugador1,ataqueJugador2);

		switch(ganadorRonda){
			case 0:
				cout<< "EMPATARON: Los dos jugadores usaron "<<a1String<<endl;
				break;
			
			case 1:
				cout<< "Gano J1: el jugador1 uso "<<a1String<< " y el jugador2 uso "<< a2String<<endl;
				jugador2->setVida(jugador2->getVida() - arma1->getDaño());
				break;

			case 2:
				cout<< "Gano J2: el jugador2 uso "<<a2String<< " y el jugador1 uso "<<a1String<<endl;
				jugador1->setVida(jugador1->getVida() - arma2->getDaño());
				break;
		}
		cout<<"\n"<<endl;


	}

	batalla.MostrarEstado();

	if (jugador1->getVida() <= 0){
		cout<<"GANO EL JUGADOR 2"<<endl;
	}

	else{cout<<"GANO EL JUGADOR 1"<<endl; }

	return 0;
}