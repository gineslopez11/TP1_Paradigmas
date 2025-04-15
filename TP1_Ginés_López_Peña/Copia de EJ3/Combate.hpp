#pragma once
#include "../EJ1/IPersonaje.hpp"
#include "Ataque.hpp"
#include "../EJ2/PersonajesYArmas.hpp"
#include <cstdlib> 
#include <ctime>
#include <memory>
#include <iostream>

class Combate {
	private:
		shared_ptr<IPersonaje> jugador1;
		shared_ptr<IPersonaje> jugador2;	

	public:
		Combate (shared_ptr<IPersonaje> j1,shared_ptr<IPersonaje> j2);
		Ataque elegirAtaqueJugador2(); 
		int resolverRonda(Ataque a1, Ataque a2); 
		void MostrarEstado ();
};
