#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <conio.h>	//funcion para sistemas de entrada - salida
#define F 5	//definimos variable global F con la cantidad 5
#define C 4	//definimos variable global C con la cantidad 4

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librer�a est�ndar

main()	//funcion de inicio del programa
{
	int matriz[F][C],i ,j ,porc=0;	//declaramos variables enteras
	float t=0;	//declaramos variable flotante
	for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
		{
			for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
			{
			cout << "Ingrese el elemento Fila: " << i << " y Columna: " << j <<" de la matriz:\n";	//instruccion que imprime pregunta
			cin >> matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
			t=t+matriz[i][j];	//acumula los valores de la matriz
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
	porc=t*0.45;	//variable que guarda el valor de la operacion
	cout << "\n El 45 por ciento del total de elementos es: " << porc;	//instruccion que imprime resultado
	getch();	//funcion que espera una entrada por teclado
}

