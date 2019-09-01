#include <iostream>
using namespace std;
void calculos (int num, int *doble, int *triple){
	*doble = 2 * num;
	*triple = 3 * num;
}
int main()
{
	int numero = 2, doble = 0, triple = 0;
	int *puntero=&numero;
	*puntero=5;
	calculos (numero, &doble, &triple); 
	cout << "Valor del numero: " << numero << endl;
	cout << "Direccion &numero: " << &numero << endl;
	cout << "Valor del doble: " << doble << endl;
	cout << "Direccion &doble: " << &doble <<endl;
	cout << "Valor del triple: " << triple << endl;
	cout << "Direccion &triple: " << &triple << endl;
		return 0;		ss					
}