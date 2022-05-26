#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int contagios[10];
    int num[10];
    string provincia[10];
    string prov[10];
    string provincias = "Bocas del Toro(1), Cocle(2), Colon(3), Chiriqui(4), Darien(5), Herrera(6), Los Santos(7), Panama Este(8), Veraguas(9), Panama Oeste(10)";
    int aux, aux2, p, i, j;

    cout << "Hola\n";
    cout << "Ordenamiento mediante el metodo de insercion.\n";
    cout << "Escriba solo numeros enteros.\n";
    cout << "\n";
    cout << "Tenemos 10 provincias correspondientes a: \n";
    cout << provincias << ' ';
    cout << "\n";
    for(i=0; i<10; i++)
    {
        provincia[0] = "Bocas del Toro";
        provincia[1] = "Cocle";
        provincia[2] = "Colon";
        provincia[3] = "Chiriqui";
        provincia[4] = "Darien";
        provincia[5] = "Herrera";
        provincia[6] = "Los Santos";
        provincia[7] = "Panama Este";
        provincia[8] = "Veraguas";
        provincia[9] = "Panama Oeste";
    }
    for(i=0; i<10; i++)
    {
        cout << "Inserte cantidad de contagiados por Covid19 en la provincia " << i << " de " << provincia[i] << ' ' << ": ";
        cin >> contagios[i];
        num[i] = i;
    }

    for(i=0; i<10; i++)
    {
        aux = contagios[i];
        aux2 = num[i];
        p = i-1;

        while(aux < contagios[p] && p >= 1)
        {
            contagios[p+1] = contagios[p];
            num[p+1] = num[p];
            p = p - 1;
        }

        if(contagios[p] <= aux)
        {
            contagios[p+1] = aux;
            num[p+1] = aux2;
        }
        else
        {
            contagios[p+1] = contagios[p];
            contagios[p] = aux;
            num[p+1] = num[p];
            num[p] = aux2;
        }
    }
    cout << "\n";
    cout << "Contagios ordenados:\n";
    cout << "\n";
    cout << "Contagios = {";
    for(i=0; i<10; i++)
    {
        printf("%d,", contagios[i]);
    }
    cout << "}\n";
    cout << "\n";
    for(i=0; i<10; i++)
    {
        if (num[i]== 0)
        {
            prov[i] = "Bocas del Toro";
        }
        if (num[i]== 1)
        {
            prov[i] = "Cocle";
        }
        if (num[i]== 2)
        {
            prov[i] = "Colon";
        }
        if (num[i]== 3)
        {
            prov[i] = "Chiriqui";
        }
        if (num[i]== 4)
        {
            prov[i] = "Darien";
        }
        if (num[i]== 5)
        {
            prov[i] = "Herrera";
        }
        if (num[i]== 6)
        {
            prov[i] = "Los Santos";
        }
        if (num[i]== 7)
        {
            prov[i] = "Panama Este";
        }
        if (num[i]== 8)
        {
            prov[i] = "Veraguas";
        }
        if (num[i]== 9)
        {
            prov[i] = "Panama Oeste";
        }
        cout << "Contagiados en la provincia " << num[i] << " de " << prov[i] << ' ' << "es:" << contagios[i] << "\n";
    }
    _getch();
}
