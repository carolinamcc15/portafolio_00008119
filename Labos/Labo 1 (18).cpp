#include <iostream>
using namespace std;

int main(){

int matriz[5][5];

//Inicializar matriz
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        matriz[i][j]=0;
    }
}

//Llenar la matriz
int n=0;
for (int i=0; i<5; i++){
    cout << "Ingrese valor [0]" << "[" << i << "]"<< ":";
    cin >> n;
    matriz[0][i]=n;
    }
for (int i=1; i<5; i++){
    cout << "Ingrese valor [1]" << "[" << i << "]"<< ":";
    cin >> n;
    matriz[1][i]=n;
    }
for (int i=2; i<5; i++){
    cout << "Ingrese valor [2]" << "[" << i << "]"<< ":";
    cin >> n;
    matriz[2][i]=n;
    }
for (int i=3; i<5; i++){
    cout << "Ingrese valor [3]" << "[" << i << "]"<< ":";
    cin >> n;
    matriz[3][i]=n;
    }
for (int i=4; i<5; i++){
    cout << "Ingrese valor [4]" << "[" << i << "]"<< ":";
    cin >> n;
    matriz[4][i]=n;
    }

//Mostrar la matriz
cout << "\nMatriz diagonal superior\n" << endl;

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout << matriz[i][j] << " ";
    }
    cout << "\n";
}


return 0;
}
