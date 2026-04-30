#include <iostream>
#include <conio.h>

/* Desarrolle un programa que le permita determinar de una lista de números que se ingresan por teclado:    
a) ¿Cuántos números están entre el 50 y 75, ambos inclusive?  
b) ¿Cuántos números  son mayores a 76?  
c) ¿Cuántos números son menores a 45? 
Terminar la carga de datos cuando se ingrese el número -1. 
Mostrar los resultados usando un menú de opciones  */

using namespace std;
int main(int argc, char** argv) {
	
	int num=0;
	int op=0;
	int cont1,cont2,cont3;
	cont1=cont2=cont3=0;
	
	
	
	do
	{
		cout<<"ingrese un numero: ";
		cin>>num;
		
		
		if (num >= 50 && num <= 75)
			{
			 cont1++;
			}
		else if(num >76)
			{
				cont2++;
			}
		else if (num< 46 && num>0)
			{
				cont3++;
			}
	
		
		
		
			
	}while(num!=-1);
	
	
	
	do 
	{
		cout<<" *** MENU DE OPCIONES ***"<<endl;
		cout<<"1- Entre el 50 y 75"<<endl;
		cout<<"2- Mayores a 76"<<endl;
		cout<<"3- Menores de 46"<<endl;
		cin>>op;
		
		switch (op)
		{
			case 1: cout<<cont1<<endl;
				break;
			case 2: cout<<cont2<<endl;
				break;
			case 3: cout<<cont3<<endl;
				break;
			
		}
		
		
	}while(op<4);
	
	
	
	
	
	
	

	
	
	getch();
	return 0;
}
