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

void Agregar(Nodo *&, Nodo *&, int);
bool ColaVacia(Nodo *);
int Retirar(Nodo *&, Nodo *&);
void Mostrar(Nodo *&);
void Vaciar(Nodo *&);

//Agregar elemento a la cola
void Agregar(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = n;
    nuevoNodo -> siguiente = NULL;
    if(ColaVacia(frente))
        frente = nuevoNodo;
    else
        fin -> siguiente = nuevoNodo;
    fin = nuevoNodo;
}

bool ColaVacia(Nodo *frente)
{
    return(frente == NULL) ? true : false;
}

//Retirar elemento de la cola
int Retirar(Nodo *&frente, Nodo *&fin)
{
    int n = 0;
    Nodo *aux = frente;
    n = aux -> dato;
    if(frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
        frente = frente -> siguiente;
    delete(aux);
    return n;
}

//Mostrar elementos de la cola
void Mostrar(Nodo *&frente)
{
    Nodo *aux = frente;
    while(aux != NULL)
    {
        cout << "   " << aux -> dato;
        aux = aux -> siguiente;
    }
}

//Vaciar elementos de la cola
void Vaciar(Nodo *&frente)
{
    Nodo *aux;
    while(frente != NULL)
    {
        aux = frente;
        frente = aux -> siguiente;
        delete(aux);
    }
}

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato = 0, opc = 0, x = 0;

    system("color 2F");

    while(opc != 5)
    {
        system("CLS");
        cout << "------------------------------" << endl;
        cout << "------Programa de Colas-------" << endl;
        cout << "------------------------------" << endl;
        cout << "1. Agregar elemento a la cola" << endl;
        cout << "2. Retirar elemento de la cola" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Vaciar cola" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "------------------------------" << endl;
        cout << "Seleccione la opcion: ";
        cin >> opc;
        cout << "------------------------------" << endl;

        switch(opc)
        {   case 1: cout << "Teclee el numero que entrara en la cola: ";
                    cin >> dato;
                    Agregar(frente, fin, dato);
                    cout << "\t Numero " << dato << " agregado..." << endl;
                    getch();
                    break;
            case 2: x = Retirar(frente, fin);
                    cout << "\t Numero " << x << " retirado..." << endl;
                    getch();
                    break;
            case 3: cout << "Elementos de la cola: " << endl;
                    if (frente != NULL)
                        Mostrar(frente);
                    else
                        cout << "\t Cola vacia..!" << endl;
                    getch();
                    break;
            case 4: Vaciar(frente);
                    cout << "\t Se ha vaciado la cola..." << endl;
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
