#include <iostream>
using namespace std;

//La funcion se encarga de sumar los numeros anteriores, incluyendo el ingresado

int suma=0;
int ite(int num){
if(num==0){
    return(0);
}
else{
for(int i=0; i<=num; i++){
    suma = suma+i;
    }
   return suma;
}
}

int main(){

int numero=0;
cout << "Digite un numero: ";
cin >> numero;

if(numero>=0){
cout << "\nLa suma con sus numeros anteriores es: ";
cout << ite(numero) << endl;
}
else{
    cout << "\nDigite un numero positivo" << endl;
}

return 0;
}
