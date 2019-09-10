#include <iostream>
#include <cmath>

using namespace std;

//FUNCION
float r=0;
float raiz(float num, float b){
    r=((num/b)+b)/2;
if((abs(r-b))<0.0001){
    return b;
}
else if(r<0.0001){
    return r;
}
else{
    return raiz(num,r);
}
}

int main(){

float numero=0;
float otro=0;

cout << "Digite un numero positivo para sacarle raiz: ";
cin >> numero;

cout << "Digite otro numero: ";
cin >> otro;

if(numero>=0&&otro>=0){
cout << "\nLa raiz cuadrada aproximada de " << numero << " es: ";
cout << raiz(numero, otro) << endl;
}
else{
    cout << "\nHa ingresado un numero negativo (no valido)" << endl;
}

return 0;
}
