#include <iostream>
#include <conio.h>

/* En un colegio secundario se maneja la información de las notas de un curso, con tres vectores de longitud 
n llamados trim1,trim2 y trim3. Los componentes de los vectores, son las notas del primero, segundo y 
tercer cuatrimestre respectivamente, para cada alumno. Generar un cuarto vector de nombre prom, 
donde cada componente sea el promedio de las notas contenidas en los vectores trim1, trim2 y trim3. 
Validar que las notas estén comprendidas entre 1 y 10  */


using namespace std;
int main(int argc, char** argv) {
	
	int i;
	//int alumno[50];
	int n;
	int trim_1[n];
	int trim_2[n];
	int trim_3[n];
	float prom[n];
	
	
	
	cout<<"ingrese la cantidad de alumnos: ";
	cin>>n;
	
	
	//carga de datos
	
	for (i=0;i<n;i++)
	{
		cout <<"\n alumno numero: "<<i+1<<endl;
		
		do {
			cout <<" nota primer cuatrimestre: ";
		cin>>trim_1[i];
			
		}while(trim_1[i]<1 || trim_1[i]>10);
		
		
		do {
			
				
		cout<<"\n nota segundo cuatrimestre: ";
		cin>>trim_2[i];
			
		}while(trim_2[i]<1 || trim_2[i]>10);
		
		
		do {
			
				cout<<"\n nota tercer cuatrimestre: ";
		cin>>trim_3[i];
		
			
		}while(trim_3[i]<1 || trim_3[i]>10);
		
		
	
		
	
		
	}

	//promedios
	
	for(i=0;i<n;i++)
	{
		prom[i]= (trim_1[i] + trim_2[i] + trim_3[i] / 3);
	}
	
	
	//mostrar datos
	cout<<"\n **notas de los alumnos**";
	
	for(i=0; i<n; i++)
	{
		cout<<"\n alumno: "<<i+1;
		
		cout<<"\n nota primer cuatrimestre: "<<trim_1[i];
		
		cout<<"\n nota segundo cuatrimestre: "<<trim_2[i];
		
		cout<<"\n nota tercer cuatrimestre: "<<trim_3[i];
		
		
	}
	
	//mostrar promedios
	
	cout<<"\n ** promedios **"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"alumno "<<i+1<<endl;
		cout<<"el promedio es de: "<< prom[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
}
