#include <iostream>
using namespace std;

int main(){

int numero=0;
int residuo=0;
int reves=0;

cout << "Ingrese un numero entero: ";
cin >> numero;

do{
residuo=numero%10;
numero=numero/10;

reves=reves*10+residuo;

}while (numero>0);

cout << "\nNumero invertido: " << reves << endl;

return 0;
}
