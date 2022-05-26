#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <stdlib.h>	//libreria para funciones estandar para control de procesos

using namespace std;	//da acceso al espacio de nombres, donde se encuentra encerrada toda la librería estándar.

int main()	//funcion de inicio del programa
 {
    int numero = 0;	//declaramos la variable numero de tipo entero y la inicializamos a 0
    cout << "\nIngrese el numero a evaluar: ";	//instruccion que imprime pregunta
    cin >> numero;	//instruccion que captura la entrada por teclado del usuario y la signa a la variable numero
    
    if ((numero%2 == 0) && (numero > 0))	//estructura condicional, si el residuo de la division entre 2 es 0 y es mayor que 0 entonces...
    	cout << "\nEl numero es par positivo \n";	//instruccion que imprime resultado
        else if ((numero%2 == 0) && (numero < 0))	//estructura condicional, si el residuo de la division entre 2 es 0 y es menor que 0 entonces...
        	cout << "\nEl numero es par negativo \n";	//instruccion que imprime resultado
            else if ((numero%2 != 0) && (numero > 0))	//estructura condicional, si el residuo de la division entre 2 no es 0 y es mayor que 0 entonces...
            	cout << "\n el numero es impar positivo \n";	//instruccion que imprime resultado
                     else if ((numero%2 != 0) && (numero < 0))	//estructura condicional, si el residuo de la division entre 2 no es 0 y es menor que 0 entonces...
                     	cout << "\n El numero es impar negativo\n ";	//instruccion que imprime resultado
					    else	//estructura condicional, si no se cumple ninguna de las otras opciones  entonces...
					    	cout << "\n El numero es 0 \n";	//instruccion que imprime resultado
                     	
    system("PAUSE");	//pausa el programa hasta que el usuario de una entrada por teclado
    return (EXIT_SUCCESS);	//da salida
}

