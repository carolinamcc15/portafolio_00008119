#include <iostream>
using namespace std;

int main(){

int arreglo[10];

cout << "Digite 10 numeros enteros\n" << endl;

for (int i=0; i<10; i++){
    cout << "Digite un entero: ";
    cin>>arreglo[i];
}

float suma=0;
float promedio=0;

int n=0;

while(n<=9){
suma+=arreglo[n];
 n+=1;

}

promedio=suma/10;

cout << "\nSuma: " << suma << endl;
cout << "Promedio: " << promedio << endl;

return 0;
}
