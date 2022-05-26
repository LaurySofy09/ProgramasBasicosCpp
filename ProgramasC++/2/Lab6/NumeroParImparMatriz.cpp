#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <conio.h>	//funcion para sistemas de entrada - salida
#define F 4	//definimos variable global F con la cantidad 4
#define C 3	//definimos variable global C con la cantidad 3

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librería estándar

main()	//funcion de inicio del programa
{
	int matriz[F][C], i,j,t=0; //declaramos variables enteras
		for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
		{
			for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
			{
				cout << "\nIngrese el elemento Fila: " << i << " y Columna: " << j <<" de la matriz:\n";	//instruccion que imprime pregunta
				cin >> matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
				if(matriz[i][j]%2==0)	//condicional que evalua si el residuo del valor de la matriz es igual a 0
					cout << "\nEl # es Par";	//instruccion que imprime resultado
				else	//de lo contrario
					cout << "\nEl # es Impar";	//instruccion que imprime resultado
			}
		}
		cout << "\nLa Matriz generada es:\n\n";	//instruccion que imprime texto
		for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
			{
				for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
				{
					cout << matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
				}
			cout << "\n";	//imprime una nueva linea
			}
		getch();	//funcion que espera una entrada por teclado
}

