#include <iostream>
using namespace std;


int tamano=5;
int a[5]= {1,2,3,4,5};
int b[5]={10,20,30,40,50};
	
int fun1( int a[], int b[] ) 
{
	int respuesta =0;
	for( int i=0; i < tamano; i++)
	{
		respuesta += a[i]*b[i];
	}		
	return respuesta;
}


int fun2( int a ) 
{
	magA=0;
	magB=0;
	for( int i=0; i < tamano; i++)
	{
		magA+=pow(a[i],2);
		magB+=pow(b[i],2);
	}		
	return respuesta;
}
	return a;
}

int main(){
	int a[5]= {1,2,3,4,5};
	int b[5]={10,20,30,40,50};
	cout<<"El producto entre a y b :"<<fun1(a,b)<<endl;
	return 0;

}



// # programa 3: Haga un programa que tenga dos funciones. Cada una debe recibir dos arreglos unidimensionales de 5 elementos cada uno. La primera funcion debe retornar el producto de los dos arreglos elemento a elemento. La segunda debe retornar el producto punto de los dos arreglos. En la funcion main se debe imprimir lo que retornen las dos funciones para [1,2,3,4,5] y [10,20,30,40,50]. llamelo producto_array_FUN.cpp
