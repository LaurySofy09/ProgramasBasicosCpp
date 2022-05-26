#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <conio.h>	//funcion para sistemas de entrada - salida
#define F 4	//definimos variable global F con la cantidad 4
#define C 3	//definimos variable global C con la cantidad 3

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librería estándar.

main()	//funcion de inicio del programa
{
	int matriz[F][C],i ,j ,vector=0; //declaracion de variables del tipo entero
	float t=0;	//declaracion de variables de tipo flotante
	//clrscr ();	//funcion que limpia la pantalla
	for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
	{
		for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
		{
			cout << "Ingrese el elemento Fila: " << i << " y Columna: " << j <<" de la matriz:\n";	//instruccion que imprime pregunta
			cin >> matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
			t=matriz[i][j]*0.05;	//variable que almacena la operacion de calculo del 5% 
			cout << "El 5 porciento del elemento es: " << t << "\n";	//instruccion que imprime respuesta
		}
	}
	cout << "La Matriz generada es:\n";	//instruccion que imprime texto
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

