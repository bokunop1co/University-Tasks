#include <iostream>
#include <conio.h>

/* Cargar dos vectores: uno con los legajos de empleados, y otro de hs trabajadas por estos empleados. Cada 
vector tendrá n elementos, y el legajo en la posición i del primer vector, se corresponde con el valor de las 
hs trabajadas en la posición i del segundo vector. Se solicita realizar un menú de opciones que permita 
acceder a: 
a) Promedio de hs trabajadas. 
b) Imprimir los legajos de las personas que trabajaron más horas que el promedio general. 
c) Legajo de la persona que más horas trabajó y de la que menos trabajó 
Los legajos deberán registrarse de manera automática, de manera incremental desde el 100. 
Validar que las horas trabajadas sea un número positiv */


using namespace std;
int main(int argc, char** argv) {
	
	
	int i;
	int n;
	int op;
	int maxx=-9999;
	int minn=9999;
	
	float prom;
	float total = 0;
	
	cout<<"indique la cantidad de empleados: ";
	cin>>n;
	
	int legajo[n];
	float horas[n];
	
	
	//carga de datos
	
	for(i=0;i<n;i++)
	{
		legajo[i]=100+i;
		
		cout<<"\n legajo de empleado: "<<legajo[i]<<endl;
		
		do
		{
			cout<<"horas trabajadas: ";
			cin>>horas[i];
			
			
		}while(horas[i]<0);
		
			total += horas[i];
			
		
		
	}
	

	
	do
	{
		cout<<"\n **MENU DE OPCIONES**";
		cout<<"\n 1- Promedio de horas trabajadas";
		cout<<"\n 2- Legajos de las personas que trabajaron más horas que el promedio general";
		cout<<"\n 3- Legajo de la persona que más horas trabajó y de la que menos trabajo "<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1: //promedio
				
				prom= total / n;
				cout<<"total de horas trabajadas: "<< prom;
				break;
				
			case 2:
				
					prom= total / n;
				
				for(i=0;i<n;i++)
				{
				
					if(horas[i]>prom)
					{
						cout<<"\n el mas laburante que el promedio es: " << legajo[i];
						cout<<"\n con la cantidad de horas de: "<<horas[i];
					}
				}
				
				break;
			
			case 3:
				
				int posMax = 0;
    			int posMin = 0;
				
				for(i=0;i<n;i++)
				{
					if(horas[i]>maxx)
					{
						maxx=horas[i];
						posMax=i;
						
						
					}
					
					if(horas[i]<minn)
					{
						minn=horas[i];
						posMin=i;
						
						
					}
					
					cout << "\nEl empleado que MAS trabajo:" << endl;
   					cout << "Legajo: " << legajo[posMax] << " - Horas: " << maxx << endl;

   					cout << "\nEl empleado que MENOS trabajo:" << endl;
   					cout << "Legajo: " << legajo[posMin] << " - Horas: " << minn << endl;
				}
				
			
				break;
		}
		
	}while(op<4);
	
	
	
	getch();
	return 0;
}
