#include<iostream>

using namespace std;

float posmed =0;
float posmedp=0;
float posmedp2=0;

float medimpar (int n=0) {
posmed=(n+1)/2;
cout << "La mediana se encuentra en la posicion " << posmed << endl;
return posmed;
}

float medpar (int n=0) {
posmedp=((n/2)+((n/2)+1))/2;
posmedp2=posmedp+1;
cout << "La mediana es el promedio de los valores de la posicion " << posmedp << " y " << posmedp2 << endl;
return posmedp;
}

int main () {

int casillas=0;

cout << "Digite el numero de casillas: ";
cin >> casillas;
cout << "\n";

int arreglo [casillas];

for (int i=0; i<casillas; i++){
cout << "Digite valor " << "[" << i << "]: ";
cin>> arreglo [i];
}
cout << "\n";

	float aux;
	for (int i=0;i<casillas; i++){
		for (int j=0; j<casillas-1; j++){
			if (arreglo[j] > arreglo[j+1]){
			aux = arreglo[j];
			arreglo[j] = arreglo[j+1];
			arreglo[j+1] = aux;
			}
		}
	}

//Ya ordenado
cout << "Arreglo en orden ascendente" << endl;
for (int i=0; i<casillas; i++) {
cout << arreglo[i] << endl;
}
cout << "\n";
int residuo=0;

residuo=casillas%2;

if(residuo==0){
medpar(casillas);

float prom=0;
int vmediap1=0;
int vmediap2=0;
float valor1=0;
float valor2=0;

vmediap1= posmedp-1;
vmediap2= posmedp2-1;

valor1=arreglo[vmediap1];
valor2=arreglo[vmediap2];

prom=(valor1+valor2)/2;

cout << "\n";
cout << "VALOR DE LA MEDIANA: " << prom << endl;
}

else if(residuo=!0){
medimpar(casillas);

int vmediai=0;
vmediai= posmed-1;
cout << "\n";
cout << "VALOR DE LA MEDIANA: " << arreglo[vmediai] << endl;
}
return 0;

}
