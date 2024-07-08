//Ejercicio propuesto 03//
//Temperatura maxima y minima de siete dias
//Alison Khiara Flores Hallasi//
#include<iostream>
#include <cstdlib>
using namespace std;
int main (){
	string dia[8]={"nulo","lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	int i=1;
	int k=1, t; 
	double dmt=0, mt=0, tmed[99],tmax[40],tm[40];
 	for (int i=1; i<=7; i++){
 		cout<<"Temperatura del dia "<<dia[i]<<endl;
		cout<<"Ingrese la temperatura MINIMA: ";
		cin>>tm[i];
		cout<<"Ingrese la temperatura MAXIMA: ";
		cin>>tmax[i];
	 }
	
	for(int j=1; j<=7; j++){
		cout<<"La temperatura media del "<<dia[j]<<" es: ";
		tmed[j]=((tm[j]+tmax[j])/2);
		cout<<tmed[j]<<endl;
	}
	dmt= tm[1];
	for (int a=1; a<=7; a++){
		if(tm[a]<=dmt){
			mt = tm[a];
		}
	}
	for( int b=1; b<=7; b++){
		if (mt==tm[b]){
			cout<<"El dia con menor temperatura es: "<<dia[b]<<endl;
			cout<<"Y la menor temperatura es: "<<mt<<endl;
		}
	}
	cout<<"Ingrese una temperatura: "; 
	cin>>t;
	while(k<=7){
		if(tmax[k]==t){
			cout<<"La temperatura maxima coincide con el dia "<<dia[k]<<endl;
		}
		else{
			cout<<"La temperatura dada no coincide con ninguna "<<endl;	
		}
		k++;
	}
	
	return 0;
}
