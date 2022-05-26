#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <conio.h>	//funcion para sistemas de entrada - salida
#define F 3	//definimos variable global F con la cantidad 3
#define C 3	//definimos variable global C con la cantidad 3

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librería estándar.

main()	//funcion de inicio del programa
{
	int matriz[F][C], i,j, total=0;	/* DECLARACION DE LA MATRIZ Y LOS INDICES */
	//clrscr();	//funcion que limpia la pantalla
	for(i=0; i<C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
	{
		for(j=0; j<F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
		{
			cout << "Ingrese el elemento Fila: " << i << " y Columna: " << j <<" de la matriz:\n";	//instruccion que imprime pregunta
			cin >> matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
			total=total+matriz[i][j];	//acumula los valores de la matriz
		}
	} 
	cout << "La Matriz generada es:\n\n" ;	//instruccion que imprime texto
	for(i=0; i < C; i++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de C de 1 en 1
	{
		for(j=0; j < F; j++)	//estructura repetitiva que recorre un loop desde 0 hasta el valor de F de 1 en 1
		{ 
			cout << matriz[i][j];	//instruccion que captura el valor por teclado insertado por el usuario y lo asigna a la variable matriz
		} 
		cout << "\n";	//imprime un salto de linea
	}
	cout << "\n";	//imprime un salto de linea
	cout << " El total de los elementos de la matriz es " << total << "\t";	//instruccion que imprime el resultado
getch();	//funcion que espera una entrada por teclado
}

