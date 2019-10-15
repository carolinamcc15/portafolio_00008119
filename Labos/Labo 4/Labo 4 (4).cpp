#include <iostream>
using namespace std;

struct numero{
    int dato;
    numero *sig;
};

numero *inicio=NULL;

void insertar(int num){
    cout << "Ingrese el numero: ";
    cin >> num;
    numero *nuevo;
    nuevo = new numero;
    nuevo->dato = num;
    nuevo->sig = inicio;
    inicio = nuevo;
}

//FUNCIÓN RECURSIVA
void sumas(numero *s, int sumapar, int sumaimpar){
    int residuo=0;

    if(!s){
    cout << "\nSuma de numeros pares: " << sumapar << endl;
    cout << "Suma de numeros impares: " << sumaimpar << endl;
        return;
    }
    else{
        residuo=s->dato%2;
        if(residuo==0){
        sumapar+=s->dato;
        }
        else{
        sumaimpar+=s->dato;
        }

        sumas(s->sig, sumapar, sumaimpar);
    }
    }

int main(){

int cantidad=0;
int num=0;

cout << "Ingrese la cantidad de numeros: ";
cin >> cantidad;
cout << endl;

for(int i=0; i<cantidad; i++){
    insertar(num);
}

//Llamada a la función recursiva
sumas(inicio, 0, 0);

return 0;
}
