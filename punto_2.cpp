#include <iostream>
#include <conio.h>

/* Se desea conocer la altura promedio de un grupo de personas. Solicitar al usuario que ingrese alturas hasta que 
ingrese 0. Mostrar el promedio de alturas y la cantidad de personas. */

using namespace std;
int main(int argc, char** argv) {
	
	int altura=0;
	float prom=0;
	int contador=0;
	int acumulador=0;
	
	
	cout<<"ingrese alturas: ";
	cin>>altura;
	
	
	while (altura >0 )
		{
		
		cout<<"ingrese otra altura: ";
		cin>>altura;
		
		if(altura > 0)
			{
				contador++;
				
				acumulador= acumulador + altura;
				
				//promedio
				prom= acumulador/contador;
			}
		
		}
	
	
	
	cout<<"la cantidad de personas es de: "<<contador<<endl;
	cout<<"el promedio de alturas es de: "<<prom<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}
