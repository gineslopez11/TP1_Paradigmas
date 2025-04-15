#include <iostream>
#include "Barbaro.hpp"
#include "Brujo.hpp"
#include "Caballero.hpp"
#include "Conjurador.hpp"
#include "Gladiador.hpp"
#include "Guerrero.hpp"
#include "Hechicero.hpp"
#include "Mago.hpp"
#include "Mercenario.hpp"
#include "Nigromante.hpp"
#include "Paladin.hpp"

#include "ArmaCombate.hpp"
#include "ArmaMagica.hpp"
#include "Baston.hpp"
#include "Espada.hpp"
#include "Garrote.hpp"
#include "HachaDoble.hpp"
#include "HachaSimple.hpp"
#include "Lanza.hpp"
#include "LibroHechizos.hpp"
#include "Pocion.hpp"
#include "Amuleto.hpp"

//Hago Main solo para comprobar que compila el ej1
int main() {
	cout <<"EJERCICIO 1\n"<<endl;

    Barbaro barbaro(10, 100, 50, true);
    Caballero caballero(12, 120, 60, true);
    Conjurador mago(8, 80, 40, true);

  
    Espada espada(10, true, 5, 2, true);
	Amuleto baston(15,true, 3, 10, true);

  
    barbaro.usar();
    caballero.atacar();
    mago.defender();

    espada.usar();
    baston.usar();

    return 0;
}