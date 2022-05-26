#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <conio.h>	//funcion para sistemas de entrada - salida
#define F 2	//definimos variable global F con la cantidad 5
#define C 2 	//definimos variable global C con la cantidad 5

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librería estándar

main()	//funcion de inicio del programa
{
	int matriz[F][C],i,j,ma=0,t=0;	//declaramos variables enteras
	for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
		{
			for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
			{
			cout << "Ingrese el elemento Fila: " << i << " y Columna: " << j <<" de la matriz:\n";	//instruccion que imprime pregunta
			cin >> matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
			
			if (((i+j)%2)==0)	//condicional que evalua que el residuo de la suma de las variables de la estructura repetitiva sea igual a 0 entonces...
				t=t+matriz[i][j];	//variable que acumula los valores de la matriz
					if(matriz[i][j]>ma)	//condicional que evalua si el valor de la matriz original es mayor que el valor introducido
						ma=matriz[i][j];	//variable que le asigna el valor de la posicion de la matriz
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
	cout << "\n";	//instruccion que imprime una linea
	cout << "\nEl elemento mayor es: " << ma;	//instruccion que imprime resultado
	cout << "\nLa suma de los elementos es: " << t;	//instruccion que imprime resultado
	getch();	//funcion que espera una entrada por teclado
}

