#include <iostream>
#include <string>
using namespace std;

//FUNCION
void hanoi(int num, string t1, string t2, string t3){
    if(num==1){
        cout<<"Mover disco de la torre "<< t1 <<" a la "<< t3 <<endl;
    }else{
        hanoi(num-1, t1, t3,  t2);
        cout<<"Mover disco de la torre "<<t1<<" a la "<< t3 <<endl;
        hanoi(num-1, t2, t1, t3);
    }
}

int main (){

    string torre = "uno";
    string aux = "auxiliar";
    string ultimo = "final";
    int numdiscos = 0;

    cout<<"Digite el numero de discos: ";
    cin>>numdiscos;
    cout << "\n";

    if(numdiscos>=1){
    hanoi(numdiscos, torre, aux, ultimo);
    }
    else if(numdiscos==0){
        cout << "No se puede jugar sin discos" << endl;
    }
    else{
        cout << "Error" << endl;
    }

    return 0;
}

