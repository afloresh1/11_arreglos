//Ejercicio propuesto 04//
//Arreglo unidimensional
//Alison Khiara Flores Hallasi//
#include <iostream>
using namespace std;
void rellenar(int m, int x);
int main(){
	int x, m;
	cout<<"Ingresa el tamano del arreglo: ";
	cin>>x;
	cout<<"Ingrese el numero que quiera: ";
	cin>>m;
		rellenar( m, x);
	}

void rellenar(int m, int x){
	int arreglo[100];
	for (int i=1; i<=x; i++){
		arreglo[i]=m*i;
		cout<<arreglo[i]<<endl;
	}
	
}
