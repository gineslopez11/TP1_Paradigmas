#pragma once
#include "Combate.hpp"

Combate::Combate (shared_ptr<IPersonaje> j1,shared_ptr<IPersonaje> j2){
	jugador1 = j1;
	jugador2 = j2;
}

Ataque Combate::elegirAtaqueJugador2(){
	int r = rand() % 3;
    return static_cast<Ataque>(r);
}

int Combate::resolverRonda(Ataque a1, Ataque a2){
	if (a1 == a2) { return 0; }

	else if ((a1 == Ataque::GolpeFuerte && a2 == Ataque::GolpeRapido) ||
	(a1 == Ataque::GolpeRapido && a2 == Ataque::DefensaYGolpe) ||
	(a1 == Ataque::DefensaYGolpe && a2 == Ataque::GolpeFuerte)) { return 1; }

	return 2;

}

void Combate::MostrarEstado(){
		cout<<"Jugador 1: "<<jugador1->getNombre()<<" tiene "<<jugador1->getVida()<<" de vida"<<endl;
		cout<<"Jugador 2: "<<jugador2->getNombre()<<" tiene "<<jugador2->getVida()<<" de vida"<<endl;
	}

