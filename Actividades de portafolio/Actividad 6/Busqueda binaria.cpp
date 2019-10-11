#include <iostream>
using namespace std;

int arreglo[8]={1,3,4,5,17,18,31,33};
int mid=0;

int buscar(int numerito, int menor, int mayor){
if(menor>mayor){
    return(-1);
}
mid=(menor+mayor)/2;
if(numerito==arreglo[mid]){
    return(mid);
}
if(numerito<arreglo[mid]){
    return buscar(numerito, menor, mid-1);
}
else{
    return buscar (numerito, mid+1, mayor);
}
}

int main(){

int menor=0;
int mayor=8-1;
int numerito=0;
int o=0;

cout << "Digite un numero entero positivo para buscar: ";
cin >> numerito;

if(numerito>=0){
o=buscar(numerito, menor, mayor);

if(o==-1){
    cout << "\nEl elemento no esta en el arreglo" << endl;
 }
else{
    cout << "\nEl numero se encuentra en la posicion: "<< o << endl;
}
}
else{
    cout << "\nERROR" << endl;
}
return 0;
}
