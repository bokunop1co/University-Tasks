#include <iostream>
#include <conio.h>

/* Cargar por teclado un conjunto de valores tales que todos ellos estén comprendidos entre 1 y 30. 
Determinar cuántas veces apareció cada número. El fin de la carga de datos se determina cuando se 
ingresa el 0 */

using namespace std;
int main(int argc, char** argv) {
	
	int num;
	int frecuencia[31];
	int i;
	
	//inicializacion 
	
	for (i=0;i<=30;i++)
	{
		frecuencia[i]=0;	
		
	}
	
	//carga de datos
	cout<<"ingrese un numero: ";
	cin>>num;
	
	while(num!=0)
	{
		if (num>=1 && num<=30)
		{
			frecuencia[num] = frecuencia[num] + 1;
		}
		
		else 
		{
			cout<<"numero invalido"<<endl;
		}
		
		cout<<"ingrese otro numero: ";
		cin>>num;
		
	}
	
	
	cout<<"\n frecuancia de cada num "<<endl;
	
	for (i=1 ;i<=30;i++)
	{
		if (frecuencia[i] > 0 )
		{
			cout<<i<< " aparece "<<frecuencia[i]<<" veces "<<endl;
		}
		
	}
	
	
	
	
	getch();
	return 0;
}
