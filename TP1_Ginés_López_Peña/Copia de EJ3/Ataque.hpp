#pragma once
#include <string>
using namespace std;

enum class Ataque {
	GolpeFuerte = 0,
    GolpeRapido = 1,
    DefensaYGolpe = 2
};

string ataqueToString(Ataque ataque);