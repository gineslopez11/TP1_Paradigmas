#include <string>
#pragma once

using namespace std;

class IArma{
public:
	virtual string getNombre() const = 0;
	virtual void usar() const = 0;
	virtual int getDaño() const = 0;
	virtual ~IArma() = default;

};

