#include <iostream>
#include <stack>
using namespace std;

struct pilaa{
	int dato;
	struct pilaa *siguiente;
};
typedef struct pilaa *Pila;

//Para inicializar la pila
void inicio(Pila *s){
    *s=NULL;
}

//Para verficar si esta vacia
bool empty(Pila *s){
return *s==NULL;
}

//Para agregar elemento
void agpila(Pila *s, int n){
struct pilaa *unaPila;
//unaPila=(struct pilaa *)malloc(sizeof(struct pilaa));
unaPila = new struct pilaa;
unaPila->dato=n;
unaPila->siguiente=*s;
*s=unaPila;
}

//Para quita elemento
void quitar(Pila *s){
if(!empty(s)){
    struct pilaa *unaPila = *s;
    int n = (*s)->dato;
    *s = (*s)->siguiente;
    delete(unaPila);
    cout << "Nueva direccion: " << *s << endl;
    cout << "Pop: " << n << "\n" << endl;
}
    else{
        cout << "Underflow" << endl;
        }
}

int main()
{

    pilaa *pila=NULL;
    int dato1=0, dato2=0, dato3=0, dato4=0, dato5=0;

    cout << "Digite un numero: ";
    cin >> dato1;
    agpila(&pila,dato1);
    cout << "Digite un numero: ";
    cin >> dato2;
    agpila(&pila,dato2);
    cout << "Digite un numero: ";
    cin >> dato3;
    agpila(&pila,dato3);
    cout << "Digite un numero: ";
    cin >> dato4;
    agpila(&pila,dato4);
    cout << "Digite un numero: ";
    cin >> dato5;
    agpila(&pila,dato5);

    cout << "\nSacar los elementos: " << endl;
    while(pila!=NULL){
        quitar(&pila);
        //Para imprimir los valores que se quitan
        if(pila!=NULL || pila==NULL){
        }
    }

    cout << "Se han quitado todos los elementos de la pila" << endl;
 return 0;
}
