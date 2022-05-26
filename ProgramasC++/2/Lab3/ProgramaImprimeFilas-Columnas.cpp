#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
#include <string>	//Incluimos biblioteca para manejo de cadenas
#define MAX_FILAS       3	//define cantidad de filas de la matriz, en este caso 3
#define MAX_COLUMNAS    3	//define cantidad de columnas de la matriz, en este caso 3

int main()	//funcion de inicio del programa
{
    int fila, columna;	//define variables de tipo entero
    int matriz[MAX_FILAS][MAX_COLUMNAS] = {{2,3,0}, {1,2,0}, {2,5,8}};	//define el arreglo de matriz y se le asigna el valor 0 como inicializacion
    std::string opcion;		//define la variable opcion del tipo string o cadena
    std::cout << "Ingrese (f)/(c) si desea imprimir una fila o columna" << std::endl;	//instruccion que imprime pregunta
    std::cin >> opcion;	//instruccion que captura la entrada por teclado del usuario y la signa a la variable opcion
    if(opcion == "f")	//estructura condicional, si la lectura de la variable opcion es igual a f entonces...
    {
        std::cout << "Que fila quieres imprimir?" << std::endl;	//pregunta la fila a mostrar
        std::cin >> fila;	//captura el valor insertado y lo asigna a la variable fila
        std::cout << "\n";	//imprime un salto de linea
        for(columna = 0; columna != MAX_COLUMNAS; ++columna)	//estructura repetitiva donde su condición será verdadera hasta que la variable acumuladora sea diferente del maximo de columnas
		            std::cout << matriz[fila][columna] << std::endl;	//imprime la fila seleccionada
    }
    else	//de lo contrario...
    {
        std::cout << "Que columna quieres imprimir?" << std::endl;	//pregunta la columna a mostrar
        std::cin >> columna;	//captura el valor insertado y lo asigna a la variable columna
        for(fila = 0; fila != MAX_FILAS; ++fila)	//estructura repetitiva donde su condición será verdadera hasta que la variable acumuladora sea diferente del maximo de filas
            std::cout << matriz[fila][columna] << std::endl;	//imprime la columna
    }
    return 0; //retorna 0 a la funcion principal del programa
}
