#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int CLAVES[7];
    int num[7];
    int aux, aux2, p, i, j;

    cout << "Hola\n";
    cout << "Ordenamiento mediante el metodo de seleccion.\n";
    cout << "Escriba solo numeros enteros.\n";
    cout << "\n";

    for(i=0; i<7; i++)
    {
        printf("Inserte contrase�a de usuario %d :", i);
        cin >> CLAVES[i];
        num[i] = i;
    }

    for(i=0; i<7; i++)
    {
        aux = CLAVES[i];
        aux2 = num[i];
        p = i;

        for(j=i+1;j<7;j++)
        {
            if(CLAVES[j]< aux)
            {
                aux = CLAVES[j];
                aux2 = num[j];
                p = j;
            }
        }
        CLAVES[p] = CLAVES[i];
        CLAVES[i] = aux;
        num[p] = num[i];
        num[i] = aux2;
    }
    cout << "\n";
    cout << "Contrase�as ordenadas:\n";
    cout << "\n";
    cout << "CLAVES = {";
    for(i=0; i<7; i++)
    {
        printf("%d,", CLAVES[i]);
    }
    cout << "}\n";
    cout << "\n";
    for(i=0; i<7; i++)
    {
        printf("La contrase�a del usuario %d es: %d \n", num[i], CLAVES[i]);
    }
    _getch();
}

