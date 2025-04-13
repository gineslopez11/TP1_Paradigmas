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

int main() {
    // Crear instancias de personajes
    Barbaro barbaro(10, 100, 50, true);
    Caballero caballero(12, 120, 60, true);
    Conjurador mago(8, 80, 40, true);

    // Crear instancias de armas
    Espada espada(50, true, 5, "Rara", true);
	Amuleto baston("Fuego",true, 3, "Amplio", true);

    // Usar personajes y armas
    barbaro.usar();
    caballero.usar();
    mago.usar();

    espada.usar();
    baston.usar();

    return 0;
}