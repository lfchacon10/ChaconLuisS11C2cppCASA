#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<< "Ingrese un numero entero: ";
	cin>>a ;
	cout<< "Ingrese un numero entero: ";
	cin>>b ;
	cout<<"Los numeros primos entre: "<<a<< " y "<<b <<endl;
	for ( int i=a; i<b ; i++)
	{
		int contador=0;
		if( a > 1){
			contador++; // Todo numero puede ser dividido en 1.
		}

		for (int j=a; j<=i; j++){
			//cout<<"Numero:"<<i<<" Divisores"<< contador <<endl;
			if( i%j == 0){
				contador++;			
			}
		}
		if( contador == 2){
			cout<< i <<endl;
		}
	}
	return 0;
} 

