#include "../EJ2/PersonajeFactory.hpp"
#include "Ataque.hpp"
#include "Combate.hpp"

using namespace std;


int main (){
	int a1;
	string a1String,a2String;
	srand(time(nullptr)); 

	shared_ptr<Mago> jugador1 = PersonajeFactory::crearMago("hechicero");
	shared_ptr<ArmaMagica> arma1 = PersonajeFactory::crearArmaMagica("baston");
	jugador1->agregarArma(arma1);

	shared_ptr<Guerrero> jugador2 = PersonajeFactory::crearGuerrero("barbaro");
	shared_ptr<ArmaCombate> arma2 = PersonajeFactory::crearArmaCombate("lanza");
	jugador2->agregarArma(arma2);

	jugador1->mostrarInfo();
	jugador2->mostrarInfo();

	Combate batalla (jugador1,jugador2);

	while (jugador1->getVida() >0 && jugador2->getVida() > 0){
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

		a1String = ataqueToString(ataqueJugador1);
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