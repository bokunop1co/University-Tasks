#include <iostream>
#include <conio.h>

/* Solicitar al usuario una serie de números positivos. Finalizar cuando ingrese un número negativo. Mostrar la suma 
total de los números ingresados y la cantidad total de números ingresados. 
Nota: Considerar el número 0 como parte de los números positivos*/

using namespace std;
int main(int argc, char** argv) {
	
	int num=0;
	int contador=0;
	int acumulador=0;
	
	
	cout<<"ingrese un numero: ";
	cin>>num;
	
	while (num >=0) {
		
	

		cout<<"ingrese otro numero: ";
		cin>>num;
			
			//contador
			if(num >=0){
				contador++;
				
				//acumulador
				acumulador=acumulador + num;
		
			}
		
		
		
	}
	
	
	
	cout<<"la cantidad total de numero es de: "<<contador<<endl;
	cout<<"el total de los numeros es de: "<<acumulador;
	
	getch();
	return 0;
}
