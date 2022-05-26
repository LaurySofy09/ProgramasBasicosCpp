#include <iostream>
#include <string.h>

using namespace std;

struct
{   char nombre[30];
    char apellido[30];
    int edad;
    float saldo;
}RegistroCliente[4];

int main()
{   int i;
    cout << "Hola\n";
    cout << "\n";

    for(i=0; i<4; i++)
    {
        cout << "Inserte nombre de cliente " << i << ": ";
        cin >> RegistroCliente[i].nombre;
        cout << "Inserte apellido de cliente " << i << ": ";
        cin >> RegistroCliente[i].apellido;
        cout << "Inserte edad de cliente " << i << ": ";
        cin >> RegistroCliente[i].edad;
        cout << "Inserte saldo de cliente " << i << ": ";
        cin >> RegistroCliente[i].saldo;
        cout << "\n";
    }
    cout << "\n";
    for(i=0; i<4; i++)
    {
        cout << "El nombre del cliente " << i << " es " << RegistroCliente[i].nombre << " " << RegistroCliente[i].apellido << ", su edad es " << RegistroCliente[i].edad << " y su saldo es " << RegistroCliente[i].saldo << endl;
    }
    cout << "\n";
    cout << "No.|" << " " << "NOMBRE|" << " " << "EDAD|" << " " << "SALDO|" << endl;
    cout << "\n";
    for(i=0; i<4; i++)
    {
        cout << i << " | " << RegistroCliente[i].nombre << " " << RegistroCliente[i].apellido << "  |  " << RegistroCliente[i].edad << "  |  " << RegistroCliente[i].saldo << endl;
    }
    cout << "\n";
    cout << "Los clientes con saldo mayores de B/.100.00 son: \n";
    cout << "\n";
    for(i=0; i<4; i++)
    {
        if(RegistroCliente[i].saldo > 100.00)
        {
            cout << RegistroCliente[i].nombre << " " << RegistroCliente[i].apellido << endl;;
        }
    }
return 0;
}
