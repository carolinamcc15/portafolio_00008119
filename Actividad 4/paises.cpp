//Carolina Maria Carranza Carballo          00008119
//Caroline Michelle Sierra Linares          00091119

#include <iostream>
#include <string>
#include<cstring>

using namespace std;

struct pais{
    string nombre="";
    string capital="";
    int habitantes=0;
};

struct continente{
    struct pais info;
}paises[5];

struct continente2{
    struct pais info;
}paises2[5];

struct continente3{
    struct pais info;
}paises3[5];

struct continente4{
    struct pais info;
}paises4[5];

struct continente5{
    struct pais info;
}paises5[5];

int main(){

cout << "AMERICA" << endl;
for(int i=0; i<5; i++){
    cout << "Nombre del pais: ";
    cin >> paises[i].info.nombre;
    cout << "Capital: ";
    cin >> paises[i].info.capital;
    cout << "Numero de habitantes: ";
    cin >> paises[i].info.habitantes;
    cout << "\n";
}

cout << "\n";
cout << "AFRICA"<< endl;
for(int i=0; i<5; i++){
    cout << "Nombre del pais: ";
    cin >> paises2[i].info.nombre;
    cout << "Capital: ";
    cin >> paises2[i].info.capital;
    cout << "Numero de habitantes: ";
    cin >> paises2[i].info.habitantes;
    cout << "\n";
}

cout << "\n";
cout << "ASIA" << endl;
for(int i=0; i<5; i++){
    cout << "Nombre del pais: ";
    cin >> paises3[i].info.nombre;
    cout << "Capital: ";
    cin >> paises3[i].info.capital;
    cout << "Numero de habitantes: ";
    cin >> paises3[i].info.habitantes;
    cout << "\n";
}

cout << "\n";
cout << "EUROPA" << endl;
for(int i=0; i<5; i++){
    cout << "Nombre del pais: ";
    cin >> paises4[i].info.nombre;
    cout << "Capital: ";
    cin >> paises4[i].info.capital;
    cout << "Numero de habitantes: ";
    cin >> paises4[i].info.habitantes;
    cout << "\n";
}

cout << "OCEANIA" "\n" << endl;
for(int i=0; i<5; i++){
    cout << "Nombre del pais: ";
    cin >> paises5[i].info.nombre;
    cout << "Capital: ";
    cin >> paises5[i].info.capital;
    cout << "Numero de habitantes: ";
    cin >> paises5[i].info.habitantes;
    cout << "\n";
}

//Para calcular el total de habitantes del continente
bool continuar=true;
do{
    int opconts =0;
cout << "\n1. America" << endl;
cout << "2. Africa" << endl;
cout << "3. Asia" << endl;
cout << "4. Europa" << endl;
cout << "5. Oceania" << endl;
cout << "6. Ninguno" << endl;

cout << "\nElige el numero de continente para saber el total de su poblacion: ";
cin >> opconts;

    switch (opconts) {
case (1): {
int samerica=0;
int *puntero1 = &paises[0].info.habitantes;
int *puntero2 = &paises[1].info.habitantes;
int *puntero3 = &paises[2].info.habitantes;
int *puntero4 = &paises[3].info.habitantes;
int *puntero5 = &paises[4].info.habitantes;
samerica=(*puntero1)+(*puntero2)+(*puntero3)+(*puntero4)+(*puntero5);
cout << "\nPOBLACION TOTAL DE AMERICA: " << samerica << endl;
break;}

case (2): {
int safrica=0;
int *puntero6 = &paises2[0].info.habitantes;
int *puntero7 = &paises2[1].info.habitantes;
int *puntero8 = &paises2[2].info.habitantes;
int *puntero9 = &paises2[3].info.habitantes;
int *puntero10 = &paises2[4].info.habitantes;
safrica=(*puntero6)+(*puntero7)+(*puntero8)+(*puntero9)+(*puntero10);
cout << "\nPOBLACION TOTAL DE AFRICA: " << safrica << endl;
break;}

case(3):{
int sasia=0;
int *puntero11 = &paises3[0].info.habitantes;
int *puntero12 = &paises3[1].info.habitantes;
int *puntero13 = &paises3[2].info.habitantes;
int *puntero14 = &paises3[3].info.habitantes;
int *puntero15 = &paises3[4].info.habitantes;
sasia=(*puntero11)+(*puntero12)+(*puntero13)+(*puntero14)+(*puntero15);
cout << "\nPOBLACION TOTAL DE ASIA: " << sasia << endl;
break;}

case(4):{
int seuropa=0;
int *puntero16 = &paises4[0].info.habitantes;
int *puntero17 = &paises4[1].info.habitantes;
int *puntero18 = &paises4[2].info.habitantes;
int *puntero19 = &paises4[3].info.habitantes;
int *puntero20 = &paises4[4].info.habitantes;
seuropa=(*puntero16)+(*puntero17)+(*puntero18)+(*puntero19)+(*puntero20);
cout << "\nPOBLACION TOTAL DE EUROPA: " << seuropa << endl;
break;}

case(5):{
int soceania=0;
int *puntero21 = &paises5[0].info.habitantes;
int *puntero22 = &paises5[1].info.habitantes;
int *puntero23 = &paises5[2].info.habitantes;
int *puntero24 = &paises5[3].info.habitantes;
int *puntero25 = &paises5[4].info.habitantes;
soceania=(*puntero21)+(*puntero22)+(*puntero23)+(*puntero24)+(*puntero25);
cout << "\nPOBLACION TOTAL DE OCEANIA: " << soceania << endl;
break;}

case(6):{
continuar=false;
}
    }
}while(continuar);

//Para encontrar el mayor de cada continente
int aux=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(paises[j].info.habitantes < paises[j+1].info.habitantes){
            aux=paises[j].info.habitantes;
            paises[j].info.habitantes=paises[j+1].info.habitantes;
            paises[j+1].info.habitantes=aux;
        }
    }
}
int *mayor_america = &paises[0].info.habitantes;

int aux2=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(paises2[j].info.habitantes < paises2[j+1].info.habitantes){
            aux2=paises2[j].info.habitantes;
            paises2[j].info.habitantes=paises2[j+1].info.habitantes;
            paises2[j+1].info.habitantes=aux2;
        }
    }
}
int *mayor_africa = &paises2[0].info.habitantes;

int aux3=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(paises3[j].info.habitantes < paises3[j+1].info.habitantes){
            aux3=paises3[j].info.habitantes;
            paises3[j].info.habitantes=paises3[j+1].info.habitantes;
            paises3[j+1].info.habitantes=aux3;
        }
    }
}
int *mayor_asia = &paises3[0].info.habitantes;

int aux4=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(paises4[j].info.habitantes < paises4[j+1].info.habitantes){
            aux4=paises4[j].info.habitantes;
            paises4[j].info.habitantes=paises4[j+1].info.habitantes;
            paises4[j+1].info.habitantes=aux4;
        }
    }
}
int *mayor_europa = &paises4[0].info.habitantes;

int aux5=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(paises5[j].info.habitantes < paises5[j+1].info.habitantes){
            aux5=paises5[j].info.habitantes;
            paises5[j].info.habitantes=paises5[j+1].info.habitantes;
            paises5[j+1].info.habitantes=aux5;
        }
    }
}
int *mayor_oceania = &paises5[0].info.habitantes;

//Para encontrar el mayor entre todos los continentes

int mayor=0;

if((*mayor_america)>(*mayor_africa)){
    mayor=(*mayor_america);
}
else{
    mayor=(*mayor_africa);
}

if(mayor>(*mayor_asia)){
    mayor=mayor;
}
else{
    mayor=(*mayor_asia);
}

if(mayor>(*mayor_europa)){
    mayor=mayor;
}
else{
    mayor=(*mayor_europa);
}

if(mayor>(*mayor_oceania)){
   mayor=mayor;
   }
else{
    mayor=(*mayor_oceania);
}

cout << "LA CAPITAL CON MAYOR CANTIDAD DE HABITANTES TIENE: " << mayor << "HABITANTES" << endl;

return 0;
}
