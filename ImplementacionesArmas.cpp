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

int ArmaCombate::getRareza() { return rareza;}

int ArmaCombate::getDaño() { return daño;}


//ArmaMagica
void ArmaMagica::usar() const {
    cout << "Se usa el arma magica: "<< nombre << endl;
}

string ArmaMagica::getNombre() const { return nombre;}

bool ArmaMagica::proteje() { return proteccion;}

int ArmaMagica::getNivelRequerido() { return nivelRequerido;}

int ArmaMagica::getRango() { return rangoEfecto;}


//Concretas de ArmaCombate
Espada::Espada(int d, bool puedeB, int nivelR, int rar,bool filoD){
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

Garrote::Garrote(int d, bool puedeB, int nivelR, int rar,bool pesoP){
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

HachaDoble::HachaDoble(int d, bool puedeB, int nivelR, int rar,bool conF){
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

HachaSimple::HachaSimple(int d, bool puedeB, int nivelR, int rar,bool lan){
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

Lanza::Lanza(int d, bool puedeB, int nivelR, int rar,bool ven){
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
Amuleto::Amuleto(bool prot, int niverlR,int rangoE,bool malaS){
	nombre = "Amuleto";
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	malaSuerte = malaS;
}

bool Amuleto::tieneHabilidadEspecial() const{
	return malaSuerte;
}

Baston::Baston(bool prot, int niverlR,int rangoE,bool gol){
	nombre = "Baston";
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	golpea = gol;
}

bool Baston::tieneHabilidadEspecial() const{
	return golpea;
}

LibroHechizos::LibroHechizos(bool prot, int niverlR,int rangoE,bool hechizoS){
	nombre = "LibroHechizos";
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	hechizoSecreto = hechizoS;
}

bool LibroHechizos::tieneHabilidadEspecial() const{
	return hechizoSecreto;
}

Pocion::Pocion(bool prot, int niverlR,int rangoE,bool curacionI){
	nombre = "Pocion";
	proteccion = prot;
	nivelRequerido = niverlR;
	rangoEfecto = rangoE;
	curacionInstantanea = curacionI;
}

bool Pocion::tieneHabilidadEspecial() const{
	return curacionInstantanea;
}


