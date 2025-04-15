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

int Guerrero::getVida()const{
	return vida;
}

void Guerrero::setVida(int nuevaV){
	vida = nuevaV;
}

string Guerrero::getNombre() const {
	return nombre;
}

int Guerrero::getResistencia(){
	return resistencia;
}

void Guerrero::agregarArma(shared_ptr<IArma> arma){ //Se utilizan smart pointers para agregar las armas a los personajes, ya que de esta manera se pueden agregar armas sin importar del tipo que sean
	armasGuerrero.push_back(arma); //agrego al vector de shared pointers de armas 
}

void Guerrero::mostrarInfo() const { //Muestro informacion del personaje importante para el ejercicio 3
	cout << "Guerrero: " << nombre << endl;
	cout << "Armas:" << endl;
	if (armasGuerrero.size() > 0 ){
		for (const auto& arma : armasGuerrero) { //recorro vector de armas si es que tiene
			cout << "- " << arma->getNombre() << endl;
		}
	}
	else { cout<<"No tiene armas"<<endl;}
	cout<<"\n";
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

int Mago::getVida() const{
	return vida;
}

void Mago::setVida(int nuevaV){
	vida = nuevaV;
}

string Mago::getNombre() const {
	return nombre;
}

int Mago::getPoderDisponible(){
	return poderDisponible;
}

void Mago::agregarArma(shared_ptr<IArma> arma){
	armasMago.push_back(arma);
}

void Mago::mostrarInfo() const {
	cout << "Mago: " << nombre << endl;
	cout << "Armas:" << endl;

	if (armasMago.size() > 0 ){
		for (const auto& arma : armasMago) {
			cout << "- " << arma->getNombre() << endl;
		}
	}
	else { cout<<"No tiene armas"<<endl;}
	cout<<"\n";
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

Mercenario::Mercenario(int niv, int vid, int res, bool ataqueP){
	nombre = "Mercenario";
	nivel = niv;
	vida = vid;
	resistencia = res;
	ataquePersonal = ataqueP;
}

bool Mercenario::HabilidadEspecial() const {
	return ataquePersonal;
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



