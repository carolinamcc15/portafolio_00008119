#include <iostream>
using namespace std;

int matriz[10][20];

int main(){

for (int i=0; i<20; i++){
    matriz[0][i]=100+i;
}
for (int i=0; i<20; i++){
    matriz[1][i]=120+i;
}
for (int i=0; i<20; i++){
    matriz[2][i]=140+i;
}
for (int i=0; i<20; i++){
    matriz[3][i]=160+i;
}
for (int i=0; i<20; i++){
    matriz[4][i]=180+i;
}
for (int i=0; i<20; i++){
    matriz[5][i]=200+i;
}
for (int i=0; i<20; i++){
    matriz[6][i]=220+i;
}
for (int i=0; i<20; i++){
    matriz[7][i]=240+i;
}
for (int i=0; i<20; i++){
    matriz[8][i]=260+i;
}
for (int i=0; i<20; i++){
    matriz[9][i]=280+i;
}

cout << "Direccion de matriz[0][0]: " << matriz[0][0] << endl;
cout << "Direccion de matriz[2][1]: " << matriz[2][1] << endl;
cout << "Direccion de matriz[5][1]: " << matriz[5][1] << endl;
cout << "Direccion de matriz [1][10]: " << matriz[1][10] << endl;
cout << "Direccion de matriz[2][10]: " << matriz[2][10] << endl;
cout << "Direccion de matriz[5][3]: " << matriz[5][3] << endl;
cout << "Direccion de matriz [9][19]: " << matriz[9][19] << endl;

return 0;
}
