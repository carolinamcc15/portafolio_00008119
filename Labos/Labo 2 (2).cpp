#include <iostream>
#include <cmath>

using namespace std;

    float r1=0;

float valorr(float n, float b){

    r1=((n/b)+b)/2;

if((abs(r1-b))<0.0001){
    return b;
}
else if(r1<0.0001){
    return r1;
}
else{
    return valorr(n,r1);
}
}

int main(){

float numero=0;
float valor=0;

cout << "Digite un entero para sacarle raiz: ";
cin >> numero;

cout << "Digite un numero mayor: ";
cin >> valor;
cout << "\nLa raiz cuadrada aproximada de " << numero << " es: "<<endl;

valorr(numero, valor);

cout << valorr(numero, valor) << endl;

return 0;
}
