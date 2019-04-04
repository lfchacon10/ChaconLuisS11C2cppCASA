#include <iostream>
using namespace std;

int Factorial( int num)
{
	double suma=1;	
	for ( int i=1; i<num ; i++)
	{
		if( num==0)
			break;
		suma += i*suma; 
	}
	return suma;
}

int main(){
	int n;
	cout<< "Ingrese un valor entero: ";
	cin>>n ;
	
	cout<<"El factorial de "<<n<< " es "<< Factorial(n) <<endl;

	return 0;
} 

