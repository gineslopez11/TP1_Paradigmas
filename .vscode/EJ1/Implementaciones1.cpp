#include "ArmaCombate.hpp"
#include "ArmaMagica.hpp"
#include "Espada.hpp"
#include "HachaDoble.hpp"
#include "HachaSimple.hpp"
#include "Lanza.hpp"
#include "Garrote.hpp"
#include "Baston.hpp"
#include "Pocion.hpp"
#include "LibroHechizos.hpp"
#include "Amuleto.hpp"
#include <iostream>

void ArmaCombate::usar() {
    cout << "Se ataca con el arma de combate: "<< nombre << ", haciendo: "<< daño <<" daño"<<endl;
}

bool ArmaCombate::bloqueadora() { return puedeBloquear;}

string ArmaCombate::getNombre() { return nombre;}

int ArmaCombate::getNivelRequerido () { return nivelRequerido;}

string ArmaCombate::getRareza() { return rareza;}

int ArmaCombate::getDaño() { return daño;}

void ArmaMagica::usar() {
    cout << "Se usa el arma magica: "<< nombre << ", con el poder: "<< poderMagico <<endl;
}

string ArmaMagica::getNombre() { return nombre;}

bool ArmaMagica::proteje() { return proteccion;}

int ArmaMagica::getNivelRequerido() { return nivelRequerido;}

string ArmaMagica::getRango() { return rangoEfecto;}

string ArmaMagica::getPoderMagico() { return poderMagico;}

Espada::Espada(int d, bool puedeB, int nivelR, string rar,bool filoD){
	nombre = "Espada";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	filoDoble = filoD;
}

bool Espada::tieneFDoble() { return filoDoble; }

Garrote::Garrote(int d, bool puedeB, int nivelR, string rar,int p){
	nombre = "Garrote";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	peso = p;
}

int Garrote::getPeso() { return peso; }

HachaDoble::HachaDoble(int d, bool puedeB, int nivelR, string rar,bool conF){
	nombre = "HachaDoble";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	conFuego = conF;
}

bool HachaDoble::estaPrendidaFuego() { return conFuego; }

HachaSimple::HachaSimple(int d, bool puedeB, int nivelR, string rar,bool lan){
	nombre = "HachaSimple";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	lanzable = lan;
}

bool HachaSimple::puedeLanzar() { return lanzable; }

Lanza::Lanza(int d, bool puedeB, int nivelR, string rar,bool ven){
	nombre = "Lanza";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	veneno = ven;
}

bool Lanza::tieneVeneno() { return veneno; }

