//SOLICITE AL CONTADOR DEL ALMACÉN LA MILAGROSA EL MONTO DE LAS VENTAS MENSUALES
//DE TODO EL AÑO 2023
//-VALOR DE LA VENTA MENSUAL PROMEDIO
//-OBTENGA EL PORCENTAJE DE LOS MESES DEL AÑO QE CUMPLIERON LOS SIGUIENTES NIVELES DE VENTAS:
#include <iostream>
using namespace std;
int main(){
	int montomen[100];
	int s=0;
	int c;
	for(int i=1; i<=12; i++){
	cout<<"Ingrese el monto de las ventas del mes "<<i<<" : ";
	cin>>montomen[i];	
	}
	for(int i=1; i<=12;i++){
		s=s+montomen[i];
	}
	int promedio= s/12;
	int menu;
	cout<<"1. Valor de la venta mensual promedio. "<<endl;
	cout<<"2. Obtenga el porcentaje de los mese del año que cumplieron los niveles. "
	cout<<" "<<endl;
	cin>>menu;
	switch(menu){
		case 1:
			cout<<"El promedio de la venta mensual alrededor del año es de : "<<promedio<<endl;
			cout<<" "<<endl;
			cout<<"Salir";
			cin>>c;
			switch(c){
				case 1:
					return main();
					break;
			}
			break;
	}
}
