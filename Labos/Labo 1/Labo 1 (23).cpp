#include <iostream>
using namespace std;

//Estructura para cada numero complejo
struct numcomplejo{
    int real=0;
    int imaginario=0;
}numcomplejo1,numcomplejo2;

//Funcion para sumar
int sumareal=0;
int sumaimg=0;
numcomplejo suma(numcomplejo numcomplejo1,numcomplejo numcomplejo2){
    sumareal=+numcomplejo1.real+numcomplejo2.real;
    sumaimg=+numcomplejo1.imaginario+numcomplejo2.imaginario;
    cout << "RESULTADO: " << sumareal << "," << sumaimg << "j" << endl;
    return numcomplejo1;
}

int main(){

cout << "Digite la parte real 1: ";
cin >> numcomplejo1.real;
cout << "Digite la parte imaginaria 1: ";
cin >> numcomplejo1.imaginario;

cout << "\n";

cout << "Digite la parte real 2: ";
cin >> numcomplejo2.real;
cout << "Digite la parte imaginario: ";
cin >> numcomplejo2.imaginario;

cout << "\n";

suma(numcomplejo1,numcomplejo2);

return 0;
}
