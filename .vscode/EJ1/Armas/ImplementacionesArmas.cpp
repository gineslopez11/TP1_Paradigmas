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


//ArmaCombate
void ArmaCombate::usar()const {
    cout << "Se ataca con el arma de combate: "<< nombre << ", haciendo: "<< daño <<" daño"<<endl;
}

bool ArmaCombate::bloqueadora() { return puedeBloquear;}

string ArmaCombate::getNombre()const { return nombre;}

int ArmaCombate::getNivelRequerido () { return nivelRequerido;}

string ArmaCombate::getRareza() { return rareza;}

int ArmaCombate::getDaño() { return daño;}


//ArmaMagica
void ArmaMagica::usar() {
    cout << "Se usa el arma magica: "<< nombre << ", con el poder: "<< poderMagico <<endl;
}

string ArmaMagica::getNombre() { return nombre;}

bool ArmaMagica::proteje() { return proteccion;}

int ArmaMagica::getNivelRequerido() { return nivelRequerido;}

string ArmaMagica::getRango() { return rangoEfecto;}

string ArmaMagica::getPoderMagico() { return poderMagico;}


//Concretas de ArmaCombate
Espada::Espada(int d, bool puedeB, int nivelR, string rar,bool filoD){
	nombre = "Espada";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	filoDoble = filoD;
}

bool Espada::tieneHabilidadEspecial() const {
	return filoDoble; 
}

Garrote::Garrote(int d, bool puedeB, int nivelR, string rar,bool pesoP){
	nombre = "Garrote";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	pesoPesado = pesoP;
}

bool Garrote::tieneHabilidadEspecial() const{
	return pesoPesado;
}

HachaDoble::HachaDoble(int d, bool puedeB, int nivelR, string rar,bool conF){
	nombre = "HachaDoble";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	conFuego = conF;
}

bool HachaDoble::tieneHabilidadEspecial() const{
	return conFuego;
}

HachaSimple::HachaSimple(int d, bool puedeB, int nivelR, string rar,bool lan){
	nombre = "HachaSimple";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	lanzable = lan;
}

bool HachaSimple::tieneHabilidadEspecial() const{
	return lanzable;
}

Lanza::Lanza(int d, bool puedeB, int nivelR, string rar,bool ven){
	nombre = "Lanza";
	daño = d;
	puedeBloquear = puedeB;
	nivelRequerido = nivelR;
	rareza = rar;
	veneno = ven;
}

bool Lanza::tieneHabilidadEspecial() const{
	return veneno;
}


//Concretas de ArmaMagica
Amuleto::Amuleto(string poderM, bool prot, int niverlR,string rangoE,bool malaS){
	nombre = "Amuleto";
	poderMagico = poderM;
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	malaSuerte = malaS;
}

bool Amuleto::tieneHabilidadEspecial() const{
	return malaSuerte;
}

Baston::Baston(string poderM, bool prot, int niverlR,string rangoE,bool gol){
	nombre = "Baston";
	poderMagico = poderM;
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	golpea = gol;
}

bool Baston::tieneHabilidadEspecial() const{
	return golpea;
}

LibroHechizos::LibroHechizos(string poderM, bool prot, int niverlR,string rangoE,bool hechizoS){
	nombre = "LibroHechizos";
	poderMagico = poderM;
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	hechizoSecreto = hechizoS;
}

bool LibroHechizos::tieneHabilidadEspecial() const{
	return hechizoSecreto;
}

Pocion::Pocion(string poderM, bool prot, int niverlR,string rangoE,bool curacionI){
	nombre = "Pocion";
	poderMagico = poderM;
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	curacionInstantanea = curacionI;
}

bool Pocion::tieneHabilidadEspecial() const{
	return curacionInstantanea;
}


