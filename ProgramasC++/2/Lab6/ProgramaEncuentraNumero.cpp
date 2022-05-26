#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <conio.h>	//funcion para sistemas de entrada - salida
#define F 5	//definimos variable global F con la cantidad 5
#define C 5	//definimos variable global C con la cantidad 5

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librería estándar

main()	//funcion de inicio del programa
{
	int matriz[F][C],i,j,ma=0,me=0;	//declaramos variables enteras
	for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
		{
			for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
			{
				cout << "\nIngrese el elemento Fila: " << i << " y Columna: " << j <<" de la matriz:\n";	//instruccion que imprime pregunta
				cin >> matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
				if(matriz[i][j]<1000)	//condicional que evalua si el valor de la matriz es menor que 1000
					me=me+1;	//instruccion que hace el conteo
					if(matriz[i][j]>1000)	//condicional que evalua si el valor de la matriz es mayor que 1000
						ma=ma+1;	//instruccion que hace el conteo
			}
		}
		cout << "La Matriz generada es:\n\n";	//instruccion que imprime texto
	for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
		{
			for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
			{
				cout << matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
			}
			cout << "\n";	//imprime una nueva linea
		}
	cout << "\nHay " << ma << " mayores de 1000 y " << me << " menores de 1000";	//instruccion que imprime respuesta
	getch();	//funcion que espera una entrada por teclado
}

