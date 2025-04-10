#include <string>

using namespace std;

class IArma{
public:
	virtual string getNombre() const = 0;
	virtual void usar() const = 0;

};

