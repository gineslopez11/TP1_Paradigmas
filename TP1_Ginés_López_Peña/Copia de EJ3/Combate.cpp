#include "Combate.hpp"

Combate::Combate (shared_ptr<IPersonaje> j1,shared_ptr<IPersonaje> j2){
	jugador1 = j1;
	jugador2 = j2;
}

Ataque Combate::elegirAtaqueJugador2(){ //el ataque del segundo jugador (oponente) se elige random
	int r = rand() % 3;
    return static_cast<Ataque>(r); //se convierte el entero a tipo ataque
}

int Combate::resolverRonda(Ataque a1, Ataque a2){ //se resuelve segun la logica propuesta
	if (a1 == a2) { return 0; } //empataron

	else if ((a1 == Ataque::GolpeFuerte && a2 == Ataque::GolpeRapido) ||
	(a1 == Ataque::GolpeRapido && a2 == Ataque::DefensaYGolpe) ||
	(a1 == Ataque::DefensaYGolpe && a2 == Ataque::GolpeFuerte)) { return 1; } // gana jugador 1

	return 2; //opuesto, gana jugador 2

}

void Combate::MostrarEstado(){
		if (jugador1->getVida() <= 0){ // si es menor a 0 o igual significa que murio 
			cout<<"Jugador 1: "<<jugador1->getNombre()<<" murió"<<endl;
			cout<<"Jugador 2: "<<jugador2->getNombre()<<" tiene "<<jugador2->getVida()<<" de vida"<<endl;

		}
		else if (jugador2->getVida() <= 0){
			cout<<"Jugador 1: "<<jugador1->getNombre()<<" tiene "<<jugador1->getVida()<<" de vida"<<endl;
			cout<<"Jugador 2: "<<jugador2->getNombre()<<" murió"<<endl;

		}
		else{ 
		cout<<"Jugador 1: "<<jugador1->getNombre()<<" tiene "<<jugador1->getVida()<<" de vida"<<endl;
		cout<<"Jugador 2: "<<jugador2->getNombre()<<" tiene "<<jugador2->getVida()<<" de vida"<<endl;
		}
}

