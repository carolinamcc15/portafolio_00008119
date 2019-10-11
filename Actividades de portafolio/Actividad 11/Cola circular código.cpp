// Carolina Maria Carranza Carballo
// Caroline Michelle Sierra Linares
#include <iostream>
using namespace std;

#define tamano 4
int arreglo[tamano];
int frente=-1;
int fin=-1;

void agregar(int num){
if((fin+1)%tamano==frente)
    cout << "Cola llena" << endl;
else{
  if(frente==-1){
     frente = 0;
  }
 fin = (fin+1)%tamano;
   arreglo[fin] = num;
}
}

bool vacia(){
if (frente==-1&&fin==-1){
    return true;
}
else{
    return false;
}
}

void quitar (){
 if(vacia()){
  cout<<"Cola vacia" << endl;
 }
 else
 if(frente==fin)
  frente=fin = -1;
 else
  frente=(frente+1)%tamano;
}

void mostrarfrente( )
{
 if(vacia()){
 cout << "Cola vacia" << endl;
 }
 else
 cout<<"Elemento al frente: " << arreglo[frente] << endl;
}

void mostrar(){
 if(vacia()){
  cout << "Cola vacia" << endl;
 }
 else
 {
  int i;
  if(frente<=fin){
   for(i=frente; i<=fin; i++)
   cout << arreglo[i] << "\n";
  }
  else
  {
   i=frente;
   while(i<tamano){
   cout<<arreglo[i]<< "\n";
   i++;
   }
   i=0;
   while(i<=fin){
   cout<<arreglo[i]<<"\n";
   i++;
   }
  }
}
}
int main(){

int opcion=0;
int aux=1;
int valor=0;

 while(aux==1){
  cout<<"\n1.Agregar  2.Quitar  3.Mostrar frente  4.Mostrar cola  5.Salir" << endl;
  cout << "Ingrese opcion: ";
  cin>>opcion;

  switch (opcion)
  {
  case 1: cout<< "Ingrese valor: ";
          cin>>valor;
          agregar(valor);
          break;
  case 2: quitar();
          break;
  case 3: mostrarfrente();
          break;
  case 4: mostrar();
          break;
  case 5: aux=2;
          break;
  }
 }

 return 0;
}

