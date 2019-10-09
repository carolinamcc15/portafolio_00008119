//Carolina Maria Carranza Carballo
//Caroline Michelle Sierra Linares

#include <iostream>
#include <vector>
using namespace std;

struct TOrden{
    int revueltas;
    int frijolConQueso;
    int queso;
    bool arroz;
};
typedef struct TOrden Pedirorden;

Pedirorden solicitarPedirorden(){
    Pedirorden c;
    int masa=0;

    cout << "\nSeleccione si van a ser de arroz o de maiz..." << endl;
    cout << "1) Arroz \n2) Maiz " << endl;
    cout << "Su eleccion es: ";
    cin >> masa;

    switch(masa){
    case 1: c.arroz=true;
            cout << "Ha elegido pupusas de arroz" << endl;
    break;
    case 2: c.arroz=false;
            cout << "Ha elegido pupusas de maiz" << endl;
    break;
    default: cout << "Ingrese una opcion valida" << endl;
    break;
    }

    cout<<"\nDigite la cantidad de pupusas que desea:"<<endl;

    cout << "Revueltas: "; cin >> c.revueltas;
    cout << "Frijol con Queso: ";   cin >> c.frijolConQueso;
    cout << "Queso: "; cin >> c.queso;
    return c;
}

void mostrarPedirorden(Pedirorden c){
    if(c.arroz==true){
        cout << "\n\tORDEN DE ARROZ" << endl;
    }
    else if(c.arroz==false){
        cout << "\n\tORDEN DE MAIZ" << endl;
    }
    cout << "Pupusas Revueltas: " << c.revueltas << endl;
    cout << "Pupusas de Frijol con Queso: " << c.frijolConQueso << endl;
    cout << "Pupusas de Queso: " << c.queso << endl;
}

vector<Pedirorden> lista;

void agregarPedirorden(){
    Pedirorden c = solicitarPedirorden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Agregar su orden al principio \n\t2) Agregar su orden al final"
            << "\n\t Su opcion elegida es: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), c);
                continuar = false;
            break;
            case 2: lista.push_back(c);
                continuar = false;
            break;
            default: cout << "\nOpcion erronea" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarPedirorden(lista[i]);
}

int main(){
    cout << "\nInicializando su orden..." << endl;

    cout<<"\nPor favor, digite un numero de las opciones siguientes: " <<endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n\t1) Agregar Pedido.\n\t2) Ver pedidos."
            << "\n\t3) Salir. \n\tSu opcion elegida es: ";
        cin >> opcion;
        switch(opcion){

            case 1: cout << "\nAgregando orden... " << endl;
                agregarPedirorden();
            break;

            case 2:
                if(lista.empty()){
                        cout << "\nTodavia no hay pedidos" << endl;
                }
                else{
                cout << "\nSus ordenes son las siguientes: " << endl;
                mostrarLista();
                }
            break;

            case 3: continuar = false;
            break;
            default: cout << "\nOpcion erronea" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
