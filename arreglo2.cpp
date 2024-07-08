//Ejercicio propuesto 02//
//Desarrolle un programa que lea un arreglo de n elementos y forme dos arreglos nuevos
//uno con los elementos pares y otro con los impares
//Alison Khiara Flores Hallasi//
#include <iostream>
using namespace std;
int main (){
	int n, num[30], I[30],P[30];
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>n;
	for (int i=1;i<=n ;i++){
		cout<<"Ingrese el numero: ";
		cin>>num[i];
		if ((num[i]%2)==0){
			P[i]=num[i];
			I[i]=0;
		}
		else{
			I[i]=num[i];
			P[i]=0;
		}
	}
	cout<<"Los numeros pares son: "<<endl;
	for (int k=1; k<=n; k++){
		if(P[k]!=0){
		cout<<P[k]<<endl;	
		}
		else;
	}
	cout<<"Los numeros impares son: "<<endl;
	for (int j=1; j<=n; j++){
		if(I[j]!=0){
		cout<<I[j]<<endl;	
		}
		else;
	}
	return 0;
}
