#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void Agregar(Nodo *&, int);
int Retirar(Nodo *&);
void Mostrar(Nodo *&);
void Vaciar(Nodo *&);

//Agregar elemento a la pila
void Agregar(Nodo *&pila, int n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = n;
    nuevoNodo -> siguiente = pila;
    pila = nuevoNodo;
}

//Retirar elemento de la pila
int Retirar(Nodo *&pila)
{
    int n = 0;
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete(aux);
    return n;
}

//Mostrar elementos de la pila
void Mostrar(Nodo *&pila)
{
    Nodo *aux = pila;
    while(aux != NULL)
    {
        cout << "\t" << aux -> dato <<endl;
        aux = aux -> siguiente;
    }
}

//Vaciar elementos de la pila
void Vaciar(Nodo *&pila)
{
    Nodo *aux;
    while(pila != NULL)
    {
        aux = pila;
        pila = aux -> siguiente;
        delete(aux);
    }
}

int main()
{
    Nodo *pila = NULL;
    int dato;
    int opc = 0;
    int x = 0;

    system("color 2F");

    while(opc != 5)
    {
        system("CLS");
        cout << "------------------------------" << endl;
        cout << "------Programa de Pilas-------" << endl;
        cout << "------------------------------" << endl;
        cout << "1. Agregar elemento a la pila" << endl;
        cout << "2. Retirar elemento de la pila" << endl;
        cout << "3. Mostrar pila" << endl;
        cout << "4. Vaciar pila" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "------------------------------" << endl;
        cout << "Seleccione la opcion: ";
        cin >> opc;
        cout << "------------------------------" << endl;

        switch(opc)
        {   case 1: cout << "Teclee el numero que entrara en la pila: ";
                    cin >> dato;
                    Agregar(pila, dato);
                    cout << "\t Numero " << dato << " agregado..." << endl;
                    getch();
                    break;
            case 2: x = Retirar(pila);
                    cout << "\t Numero " << x << " retirado..." << endl;
                    getch();
                    break;
            case 3: cout << "Elementos de la pila: " << endl;
                    if (pila != NULL)
                        Mostrar(pila);
                    else
                        cout << "\t Pila vacia..!" << endl;
                    getch();
                    break;
            case 4: Vaciar(pila);
                    cout << "\t Se ha vaciado la pila..." << endl;
                    getch();
                    break;
            case 5: cout << "Hasta pronto!" << endl;
                    getch();
                    break;
            default: cout << "Error en la opcion seleccionada" << endl;
                    getch();
                    break;
        }
    }
}
