#include "IPersonaje.hpp"
#include "Guerrero.hpp"
#include "Mago.hpp"
#include "Nigromante.hpp"
#include "Conjurador.hpp"
#include "Hechicero.hpp"
#include "Paladin.hpp"
#include "Gladiador.hpp"
#include "Caballero.hpp"
#include "Barbaro.hpp"
#include "Brujo.hpp"
#include "Mercenario.hpp"
#include <iostream>

//Guerreros 
void Guerrero::usar(){
	cout << "Se elige al guerrero: "<< nombre <<endl;
}

void Guerrero::atacar(){
	cout << "El guerrero " << nombre << " ataca!" << endl;
}

void Guerrero::defender(){
	cout << "El guerrero " << nombre << " se defiende!" << endl;
}

int Guerrero::getNivel() const {
	return nivel;
}

int Guerrero::getVida(){
	return vida;
}

string Guerrero::getNombre() const {
	return nombre;
}

int Guerrero::getResistencia(){
	return resistencia;
}

//Mago

void Mago::usar(){
	cout << "Se elige al mago: "<< nombre <<endl;
}

void Mago::atacar(){
	cout << "El mago " << nombre << " ataca!" << endl;
}

void Mago::defender(){
	cout << "El mago " << nombre << " se defiende!" << endl;
}

int Mago::getNivel() const {
	return nivel;
}

int Mago::getVida(){
	return vida;
}

string Mago::getNombre() const {
	return nombre;
}

int Mago::getPoderDisponible(){
	return poderDisponible;
}

//Clases derivadas de Guerrero

Caballero::Caballero(int niv, int vid, int res, bool guar){
	nombre = "Caballero";
	nivel = niv;
	vida = vid;
	resistencia = res;
	guardia = guar;
}

bool Caballero::HabilidadEspecial() const {
	return guardia;
}

Barbaro::Barbaro(int niv, int vid, int res, bool fur){
	nombre = "Barbaro";
	nivel = niv;
	vida = vid;
	resistencia = res;
	furia = fur;
}

bool Barbaro::HabilidadEspecial() const {
	return furia;
}

Gladiador::Gladiador(int niv, int vid, int res, bool reflejosR){
	nombre = "Gladiador";
	nivel = niv;
	vida = vid;
	resistencia = res;
	reflejosRelampago = reflejosR;
}

bool Gladiador::HabilidadEspecial() const {
	return reflejosRelampago;
}

Paladin::Paladin(int niv, int vid, int res, bool escudoD){
	nombre = "Paladin";
	nivel = niv;
	vida = vid;
	resistencia = res;
	escudoDivino = escudoD;
}

bool Paladin::HabilidadEspecial() const {
	return escudoDivino;
}

//Clases derivadas de Mago
Hechicero::Hechicero(int niv, int vid, int poderD, bool inv){
	nombre = "Hechicero";
	nivel = niv;
	vida = vid;
	poderDisponible = poderD;
	invisibilidad = inv;
}

bool Hechicero::HabilidadEspecial() const {
	return invisibilidad;
}

Brujo::Brujo(int niv, int vid, int poderD, bool mal){
	nombre = "Brujo";
	nivel = niv;
	vida = vid;
	poderDisponible = poderD;
	maldicion = mal;
}

bool Brujo::HabilidadEspecial() const {
	return maldicion;
}

Nigromante::Nigromante(int niv, int vid, int poderD, bool cl){
	nombre = "Nigromante";
	nivel = niv;
	vida = vid;
	poderDisponible = poderD;
	clon = cl;
}

bool Nigromante::HabilidadEspecial() const {
	return clon;
}

Conjurador::Conjurador(int niv, int vid, int poderD, bool inv){
	nombre = "Conjurador";
	nivel = niv;
	vida = vid;
	poderDisponible = poderD;
	invocacion = inv;
}

bool Conjurador::HabilidadEspecial() const {
	return invocacion;
}



