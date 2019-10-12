#include <iostream>
using namespace std;

struct nodo{
    int numero;
    nodo *sig;
};

nodo *puntero = NULL;
nodo *nuevo = NULL;

void ingresar(){
nuevo = new nodo;

cout<<"Ingrese un entero: ";
cin>>nuevo->numero;

if(puntero==NULL){
puntero=nuevo;
nuevo->sig=NULL;
}
else{
nuevo->sig = puntero;
puntero = nuevo;
}
}

void mostrar(nodo *puntero){
    if(!puntero){
        return;
    }
    else{
        cout<< puntero->numero<<endl;
        mostrar(puntero->sig);
    }
}

void eliminar(int num){
    nodo *p = puntero, *q = NULL;
    while(p!= NULL&&(p->numero)!= num){
        q = p;
        p = p->sig;
    }
    if(p==NULL){
        cout << "Se han eliminado las coincidencias" << endl;
        return;
    }else
        if(q==NULL)
        puntero = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    eliminar(num);
}

int main() {
    int numero=0;
    int opcion=0;

    do{
    cout<<"\n\tMENU \n\t1) Agregar numero \n\t2) Ver lista \n\t3) Eliminar coincidencias de un numero \n\t4) Finalizar"<<endl;
    cout << "\n\tIngrese su opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
                cout << "\n" << endl;
                ingresar();
                break;
            case 2:
                cout << "\n" << endl;
                mostrar(puntero);
                break;
            case 3:
                cout << "\n" << endl;
                cout<<"Numero a eliminar: ";
                cin>>numero;
                eliminar(numero);
                break;
            case 4:
                break;
        }
    }
    while(opcion!=4);
    return 0;
}


