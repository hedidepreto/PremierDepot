#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int nombre1, int nombre2) {
    int resultat = nombre1 * nombre2;
    return resultat;
}

float division(float nombre1, float nombre2) {
    if (nombre2 == 0) {
        //  division par zéro
        cout << "la divison par zero est interdite" << endl;
        return 0;
    } else {
        float resultat = nombre1 / nombre2;
        return resultat;
    }
}
