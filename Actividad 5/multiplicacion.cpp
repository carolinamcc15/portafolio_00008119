//Caroline Sierra			00091119
//Carolina Carranza	00008119

#include <iostream>
using namespace std;

int mult(int a,int b){
	if(b==1){
		cout << "\nPrimer numero= " << a << " Caso base" << endl;
		return a;
		
	}else{
		int x = a+ mult (a,b-1);
		cout << "\n x=" << x << endl;
		return x;
	}
}


int main()
{
	
	int num1=0;
	int num2=0;
	
	cout << "Ingrese primer numero: ";
	cin >> num1;
	
	cout << "Ingrese segundo numero: ";
	cin >> num2;
	
	int variable=mult(num1,num2);
	cout << "\nRESULTADO: " << variable << "\n";
}