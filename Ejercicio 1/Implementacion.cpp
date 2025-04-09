#include "EntidadOrganizativa.hpp"

EntidadOrganizativa::EntidadOrganizativa(string n) {
	nombre = n;
}

void EntidadOrganizativa::agregarSubentidad (shared_ptr<EntidadOrganizativa> entidad){
	subentidades.push_back(entidad);
}

int EntidadOrganizativa::contarSubentidades(){
	return subentidades.size();
}


	