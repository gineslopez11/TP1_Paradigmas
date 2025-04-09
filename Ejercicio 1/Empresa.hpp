#include "EntidadOrganizativa.hpp"

class Empresa{
public:
	string direccion;

private:
	vector <Departamento> departamentos;
	
public:
	vector<string> getDepByName(string nombre_depto);

	vector<string> getDepNames();

};
