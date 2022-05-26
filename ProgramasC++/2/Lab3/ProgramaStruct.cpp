#include <stdio.h>	//Incluye la biblioteca principal que contiene las definiciones principales y estandar
#include <iostream>	//Incluimos biclioteca estandar para operaciones de entrada/salida
struct estructura_cliente {	/* Definimos la estructura estructura_amigo */
	char nombre[30];	//Consta de un vector de cadena de caracteres de longitud 30
	char apellido[40];	//Consta de un vector de cadena de caracteres de longitud 40
	char telefono[10];	//Consta de un vector de cadena de caracteres de longitud 10
	int edad;	//Consta de una variable de numero entero
	};
struct estructura_cliente cliente;	/* Declaramos la variable amigo con esa estructura */
int main()	//funcion de inicio del programa
{
	std::cout << "Escribe el nombre del cliente: " ;	//instruccion que imprime indicacion
	std::cin >> cliente.nombre ;	//instruccion que capta el valor y lo agrega a la variable		
	std::cout << "Escribe el apellido del cliente: " ;	//instruccion que imprime indicacion
	std::cin >> cliente.apellido ;	//instruccion que capta el valor y lo agrega a la variable	
	std::cout << "Escribe el numero de telefono del cliente: " ;	//instruccion que imprime indicacion
	std::cin >> cliente.telefono ;	//instruccion que capta el valor y lo agrega a la variable
	std::cout << "Escribe los años del cliente: " ;	//instruccion que imprime indicacion
	std::cin >> cliente.edad ;	//instruccion que capta el valor y lo agrega a la variable
	std::cout << "El cliente " << cliente.nombre << " " << cliente.apellido << " tiene " << cliente.edad << " años y  el numero: " << cliente.telefono;	//instruccion que imprime respuestas guardadas en variables
	
	return 0;	//retorna 0 a la funcion principal del programa
}

