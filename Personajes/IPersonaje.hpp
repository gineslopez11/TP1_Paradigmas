#include <string>
using namespace std;

class IPersonaje {
	public:
		virtual void atacar() = 0;
		virtual void defender() = 0;
		virtual void usar() = 0;
		virtual int getNivel() const = 0;
		virtual string getNombre() const = 0;
	};