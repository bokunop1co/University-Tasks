#include <iostream>

/* practica segundo parcial */

//Funciones

	//cargar matriz
	void carga_matriz(int mat[50][5]);
	
	//imprimir matriz
	void imprimir_matriz(int mat[50][5]);
	
	//listado de mascotas ordenado
	void lista_mascotas(int mat[50][5]);
	
	//matriz de conteo
	void matriz_conteo(int mat[50][5]);
	
	//eliminar cliente
	int eliminar_cliente (int mat[50][5]);



//Variables Globales

int i,j,n;


using namespace std;
int main(int argc, char** argv) {
	
	int mat[50][5]; //matriz principal
	int op=0; //opcion del menu de opciones
	int eliminado=0; //para eliminar un cliente

	cout<<"ingrese la cantidad de clientes a registrar: ";
	cin>>n;
	
	//inicializar la matriz
	
	for(i=0;i<n;i++)
	{for (j=0;j<5;j++)
		{
			mat[i][j]=0;
		}
		
	}	
	
	
	//cargar matriz
	carga_matriz(mat);
	
	//imprimir matriz
	imprimir_matriz(mat);
	
	
	//menu de opciones
	do{
		cout<<"\n *** MENU DE OPCIONES ***";
		cout<<"\n 1- Listado de mascotas ordenado";
		cout<<"\n 2- Matriz de conteo";
		cout<<"\n 3- Eliminar un cliente";
		cout<<"\n 4- Salir"<<endl;
		cin>>op;
	
		switch (op)
		{
			case 1:lista_mascotas(mat);
			break;
				
			case 2:matriz_conteo(mat);
				break;
			
			case 3:eliminado=eliminar_cliente (mat);
					if(eliminado==1)
					{
						cout<<"\n el cliente fue eliminado \n";
						imprimir_matriz(mat);
					}
					else
					{
						cout<<"\n el numero de cliente ingresado no existe.";
					}
					
				break;
			
			case 4: cout<<"programa finalizado";
				break;
			
		}
		
		
	}while(op!=4);
	
		
	
	
	return 0;
}

//cargar matriz
void carga_matriz(int mat[50][5]){
	
	int c=1; //contador
	
	cout<<"\n ** bienvenido a la veterinaria **";
	
	
	for(i=0;i<n;i++){
		
		cout<<"\n";
		
		//columna 0
		mat[i][0]=c++;
		cout<<"numero de cliente: "<<mat[i][0];
		
		//columna 1
		cout<<"\n ingrese la especie de su mascota: ";
		cin>>mat[i][1];
		while(mat[i][1]<1 || mat[i][1]>4)
			{
				cout<<"\n la especie ingresada es incorrecta, ingrese otra: ";
				cin>>mat[i][1];
			}
		
		//columna 2
		cout<<"\n ingrese el año de nacimiento: ";
		cin>>mat[i][2];
		while(mat[i][2]<1995 || mat[i][2]>2025)
			{
				cout<<"\n el año ingresado es incorrecto, ingrese otro: ";
				cin>>mat[i][2];
			}
			
		//columna 3
		cout<<"\n ingrese el tamaño: ";
		cin>>mat[i][3];
		while(mat[i][3]<1 || mat[i][3]>3)
			{
				cout<<"\n el tamaño ingresado es incorrecto, ingrese otro: ";
				cin>>mat[i][3];
			}
		
		//columna 4
		
		if(mat[i][3]==3)
		{
			cout<<"\n ingrese el peso de su mascota pequeña: ";
			cin>>mat[i][4];
			while(mat[i][4]<1 || mat[i][4]>10)
				{
					cout<<"\n el peso es incorrecto, por favor ingrese otro:";
					cin>>mat[i][4];
					
				}
		}
		
		else if (mat[i][3]==2)
		{
			cout<<"\n ingrese el peso de su mascota mediana: ";
			cin>>mat[i][4];
			while(mat[i][4]<10 || mat[i][4]>31)
				{
					cout<<"\n el peso es incorrecto, por favor ingrese otro:";
					cin>>mat[i][4];
				}
			
		}
		
		else if (mat[i][3]==1)
		{
			cout<<"\n ingrese el peso de su mascota grande: ";
			cin>>mat[i][4];
			while(mat[i][4]<30)
				{
					cout<<"el peso es incorrecto, por favor ingrese otro:";
					cin>>mat[i][4];
				}
		}
		
	}
	
	
	
}

//imprimir matriz
void imprimir_matriz(int mat[50][5]){
	
	for(i=0;i<n;i++)
	{ cout<<"\n";
		for (j=0;j<5;j++)
			{
			cout<<mat[i][j]<<"\t";
			}
		
	}	
		
}

//listado de mascotas ordenado
void lista_mascotas(int mat[50][5]){
	
	int aux,k;
	aux=k=0;
	
	//matriz ordenada
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(mat[i][4] > mat[j][4])
			{ 
				for(k=0;k<5;k++)
				{
					aux=mat[i][k];
	     			mat[i][k] = mat[j][k];
	     			mat[j][k] = aux;
				}
				
			}
		}
		
	}
	
	//imprimir matriz ordenada
	
	for(i=0;i<n;i++)
	{ cout<<"\n";
		for (j=0;j<5;j++)
			{
			cout<<mat[i][j]<<"\t";
			}
		cout<<"\n";
	}
	
}

//matriz de conteo
void matriz_conteo(int mat[50][5])
{
	int f,c, mat_conteo[4][3];
	f=c=0;
	
	//inicializar nueva matriz
	for(i=0;i<4;i++)
	{for (j=0;j<3;j++)
		{
			mat_conteo[i][j]=0;
		}
	
	}
	
	//recorrer matriz principal
	for (i=0;i<n;i++)
	{
		f=mat[i][1]-1;
		c=mat[i][3]-1;
		mat_conteo[f][c]++;
	}
	
	//imprimir matriz de conteo
	for(i=0;i<4;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<<mat_conteo[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
}


//eliminar cliente
int eliminar_cliente (int mat[50][5])
{
	int eliminar,k;
	eliminar=k=0;
	
	cout<<"ingrese el numero de cliente que quiere eliminar: ";
	cin>>eliminar;
	
	for(i=0;i<n;i++)
	{
		if(mat[i][0]== eliminar)
		{
			for(j=i;j<n;j++)
			{
				for(k=0;k<5;k++)
				{
					mat[j][k]=mat[j+1][k];
				}
			}
			n--;
			return 1;
		}
	}
	
	
	return 0;
}












