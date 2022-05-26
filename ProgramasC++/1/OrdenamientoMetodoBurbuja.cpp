#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    string NOMBRE[5];
    string aux;
    int num[5];
    int aux2, i, j;

    cout << "Hola\n";
    cout << "Ordenamiento mediante el metodo de burbuja.\n";
    cout << "\n";

    for(i=0; i<5; i++)
    {
        printf("Inserte el nombre de compañero %d :", i);
        cin >> NOMBRE[i];
        num[i] = i;
    }

    for(i=1; i<=5; i++)
    {
        aux = NOMBRE[i];
        aux2 = num[i];

        for(j=0;j<5-i;j++)
        {
            if(NOMBRE[j] > NOMBRE[j+1])
            {
                aux = NOMBRE[j];
                NOMBRE[j] = NOMBRE[j+1];
                NOMBRE[j+1] = aux;
                aux2 = num[j];
                num[j] = num[j+1];
                num[j+1] = aux2;
            }
        }
    }
    cout << "\n";
    cout << "Nombres ordenados:\n";
    cout << "\n";
    cout << "NOMBRES = {";
    for(i=0; i<5; i++)
    {
        cout << NOMBRE[i] << ' ' << ",";
    }
    cout << "}\n";
    cout << "\n";
    printf("Presione cualquier tecla para salir %c \n", NOMBRE[i]);
    _getch();
}
