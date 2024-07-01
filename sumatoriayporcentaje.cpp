#include <iostream>
#include <cmath>
using namespace std;
int (p);
int main (){
    int n;
    int x[30];
    int k=0;
	int s=0;
	cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    for (int i=1; i<=n; i++){
		cout<<"Ingrese el numero: ";
        cin>>x[i];
        
        s= s + x[i];
        if (x[i]== 0){
            k= k + 1;
            
        }
			
    }
	 p= (k*100)/n;
    cout<<"La sumatoria de los elementos de arreglo es: "<<s<<endl;
    cout<<"El porcentaje de los 0 introducidos es: "<<p<<'%'<<endl;

}