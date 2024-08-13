//SOLICITE AL CONTADOR DEL ALMACÉN LA MILAGROSA EL MONTO DE LAS VENTAS MENSUALES
//DE TODO EL AÑO 2023
//-VALOR DE LA VENTA MENSUAL PROMEDIO
//-OBTENGA EL PORCENTAJE DE LOS MESES DEL AÑO QE CUMPLIERON LOS SIGUIENTES NIVELES DE VENTAS:
#include <iostream>
using namespace std;
int main(){
	float montomen[100];
	int s=0;
	int c;
	double sminimo=0;
	float sregular=0;
	float psregular=0;
	double psminimo=0;
	float psexcelente=0;
	float sexcelente;
	for(int i=1; i<=12; i++){
	cout<<"Ingrese el monto de las ventas del mes "<<i<<" : ";
	cin>>montomen[i];	
	}
	for(int i=1; i<=12;i++){
		s=s+montomen[i];
	}
	float promedio= s/12;
	int menu;
	cout<<"MENU."<<endl;
	cout<<"Ingrese el valor que quiera"<<endl;
	cout<<"1. Valor de la venta mensual promedio. "<<endl;
	cout<<"2. Obtenga el porcentaje de los meses del anio que cumplieron los niveles. "<<endl;
	cout<<"3. Nombres de los meses en los cuales las ventas fueron excelentes. ";
	cin>>menu;
	system ("cls");
	switch(menu){
		case 1:
			cout<<"El promedio de la venta mensual alrededor del año es de : "<<promedio<<endl;
			cout<<" "<<endl;
			cout<<"Menu secundario."<<endl;
			cout<<"1. Salir";
			cin>>c;
			switch(c){
				case 1:
					return main();
					break;
			}
			break;
		case 2:
			cout<<"PORCENTAJES: "<<endl;
			cout<<"Porcentaje del minimo de ventas: "<<endl;
			for(int j=1; j<=12; j++){
				if(montomen[j]<(promedio*0.4)){
					sminimo=sminimo+montomen[j];
				}	
			}
			psminimo= (sminimo*100)/s;
			cout<<psminimo<<"%";
			cout<<" "<<endl;
			cout<<"Porcentaje de las ventas regulares: "<<endl;
			for(int j=1; j<=12; j++){
				if ((promedio*0.4)<=montomen[j]<=(promedio*0.75)){
					sregular= sregular+montomen[j];
				}
			}
			psregular = (sregular*100)/s;
			cout<<psregular<<"%";
			cout<<" "<<endl;
			cout<<"Porcentaje de las ventas excelentes: "<<endl;
			cout<<" "<<endl;
			for(int j=1; j<=12; j++){
				if((promedio*0.75)<montomen[j]){
					sexcelente= sexcelente+montomen[j];
				}
			}
			psexcelente= (sexcelente*100)/s;
			cout<<psexcelente<<"%";
			break;
		case 3: 
			cout<<"Nombres de los meses en los cuales las ventas fueron excelentes. ";
	}
}
