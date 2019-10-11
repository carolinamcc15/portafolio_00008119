#include <iostream>
#include <string>
using namespace std;

struct libro{
    string titulo;
    int numPaginas;
    libro *sig;
};

libro *puntero = NULL;
libro *nuevo = NULL;

void ingresar(){
nuevo = new libro;

cout<<"\nTitulo: ";
cin>>nuevo->titulo;
cout<<"Numero de paginas: ";
cin>>nuevo->numPaginas;

if(puntero==NULL){
puntero=nuevo;
nuevo->sig=NULL;
}
else{
nuevo->sig = puntero;
puntero = nuevo;
}
}

void buscar(libro *puntero, string titulo){
    if(!puntero){
        return;
    }
    else{
        if(titulo == puntero->titulo){
            cout<<"El libro tiene " << puntero->numPaginas << " paginas"<<endl;
            cout<<endl;
        }
        buscar(puntero->sig, titulo);
    }
}

int main() {

    int opcion=0;
    string titulo=" ";

    do{
    cout << "\n\tMENU\n\t1. Agregar libro \n\t2. Buscar libro \n\t3. Finalizar" << endl;
    cout << "\tSu opcion:";
    cin >> opcion;
        switch(opcion){
            case 1:{
            ingresar();
            }
                break;
            case 2:
                cout<<"\nLibro que desea buscar: ";
                cin>>titulo;
                buscar(puntero,titulo);
                break;
            case 3:
                break;
            default: cout << "El numero ingresado no esta entre las opciones" << endl;
        }
    }

    while(opcion!=3);
    return 0;
}

