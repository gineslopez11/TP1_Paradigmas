#include <iostream>
#include <string>
#include <vector>

using namespace std;

class EntidadOrganizativa{
public:
	string nombre;

private:
	vector<shared_ptr<EntidadOrganizativa>> subentidades;

public:
	EntidadOrganizativa(string n);

	void agregarSubentidad (shared_ptr<EntidadOrganizativa> entidad);

	int contarSubentidades();

};

