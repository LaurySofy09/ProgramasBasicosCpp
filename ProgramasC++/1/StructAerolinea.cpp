#include <iostream>
#include <string.h>

using namespace std;

struct
{   char idavion[10];
    char modelo[10];
    float preciopasaje;
    int pasajeros;
    float recaudacion;
}RegistroAvion[3];

int main()
{   int i,y,x,z;
    cout << "Hola, Bienvenido a su aerolinea de vuelos\n";
    cout << "\n";

    for(i=0; i<3; i++)
    {
        cout << "\n";
        cout << "Inserte ID de avion " << i << ": ";
        cin >> RegistroAvion[i].idavion;
        cout << "Inserte modelo de avion " << i << ": ";
        cin >> RegistroAvion[i].modelo;
        cout << "Inserte precio del pasaje asignado al avion " << i << ": ";
        cin >> RegistroAvion[i].preciopasaje;
        do
        {
            cout << "Inserte cantidad de pasajeros del avion " << i << ": ";
            cin >> y;
            RegistroAvion[i].pasajeros = RegistroAvion[i].pasajeros + y;
            cout << "\n";
            cout << "Total de pasajeros: " << RegistroAvion[i].pasajeros;
            cout << "\n";
            cout << "\n";
            cout << "Desea insertar mas pasajeros? Escriba 1 en caso afirmativo y 0 en caso negativo: ";
            cin >> x;
        }while(x == 1);
        cout << "\n";
        RegistroAvion[i].recaudacion = RegistroAvion[i].preciopasaje * RegistroAvion[i].pasajeros;
        cout << "\n";
        cout << "Recaudacion: " << RegistroAvion[i].recaudacion;
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    do
    {
        for(i=0; i<3; i++)
        {
            cout << "Desea insertar mas pasajeros para el avion " << i << " ? Escriba 1 en caso afirmativo y 0 en caso negativo: ";
            cout << "\n";
            cin >> x;
            if(x==1)
            {
                cout << "Inserte cantidad de pasajeros del avion " << i << ": ";
                cin >> y;
                RegistroAvion[i].pasajeros = RegistroAvion[i].pasajeros + y;
                cout << "\n";
                cout << "Total de pasajeros: " << RegistroAvion[i].pasajeros;
                cout << "\n";
            }
        RegistroAvion[i].recaudacion = RegistroAvion[i].preciopasaje * RegistroAvion[i].pasajeros;
        }
    cout << "\n";
    cout << "Repetir? Escriba 1 en caso afirmativo y 0 en caso negativo: ";
    cout << "\n";
    cin >> z;
    }while(z == 1);

    for(i=0; i<3; i++)
    {
        cout << "El avion con ID: " << RegistroAvion[i].idavion << ", modelo: " << RegistroAvion[i].modelo << ", precio de pasaje: " << RegistroAvion[i].preciopasaje << ", cantidad de pasajeros: " << RegistroAvion[i].pasajeros << " y recaudacion: " << RegistroAvion[i].recaudacion << endl;
    }
return 0;
}
