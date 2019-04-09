#include <iostream>
using namespace std;

int Factorial( int num)
{
	if( num ==1)
	{
		return 1;
	}
	double suma =1;
	suma*= num*Factorial(num-1);
	return suma;
}

int main(){
	int n;
	cout<< "Ingrese un valor entero: ";
	cin>>n ;
	cout<<"El factorial de "<<n<< " es "<< Factorial(n) <<endl;

	return 0;
}
