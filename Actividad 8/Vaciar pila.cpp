#include <iostream>
using namespace std;

struct pilaa{
	int dato;
	pilaa *siguiente;
};

void agpila(pilaa *&pila, int n){
pilaa *nueva = new pilaa();
nueva->dato=n;
nueva->siguiente = pila;
pila=nueva;
}

void quitar(pilaa *&pila, int &n){
pilaa *aux = pila;
n=aux->dato;
pila=aux->siguiente;
delete aux;
}

int main()
{
    pilaa *pila=NULL;
    int dato=0;

    cout << "Digite un numero: ";
    cin >> dato;
    agpila(pila,dato);
    cout << "Digite un numero: ";
    cin >> dato;
    agpila(pila,dato);
    cout << "Digite un numero: ";
    cin >> dato;
    agpila(pila,dato);
    cout << "Digite un numero: ";
    cin >> dato;
    agpila(pila,dato);
    cout << "Digite un numero: ";
    cin >> dato;
    agpila(pila,dato);

    cout << "\nSacar los elementos: " << endl;
    while(pila!=NULL){
        quitar(pila,dato);
        //Para imprimir los valores que se quitan
        if(pila!=NULL || pila==NULL){
            cout << dato << endl;
        }
    }

    cout << "\nSe han quitado todos los elementos de la pila" << endl;
 return 0;
}
