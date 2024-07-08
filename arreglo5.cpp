//Ejercicio propuesto 05//
//Alumnos comunes de dos asignaturas
//Alison Khiara Flores Hallasi//
#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
	int nfp, npg;
	string fp[999];
	string pg[999];
	cout<<"Ingrese la cantidad de estudiantes de Fundamentos de programacion: ";
	cin>>nfp;
	cout<<"Ingrese la cantidad de estudiantes de Programacion Grafica: ";
	cin>>npg;
	for (int i=1; i<=nfp;i++){
		cout<<"Ingrese el nombre del estudiante en Fundamentos: ";
		cin>>fp[i];
	}
	for (int i=1; i<=npg;i++){
		cout<<"Ingrese el nombre del estudiante en Programacion: ";
		cin>>pg[i];
	}
	cout<<"Los alumnos que coinciden en ambas clases son: "<<endl;
	for (int j=1; j<=nfp;j++){
		for(int k=1;k<=npg;k++){
            if(fp[j]==pg[k]){
            cout<<fp[j]<<endl;
        	}
        }
	}
}
