#include <iostream>
#include <string.h>

using namespace std;

struct
{   char id[10];
    char nombre[30];
    char apellido[30];
    int imparables;
    int turnos;
    float promedio;
}RegistroBeisbol[4];

int main()
{   int i,opcion;
    cout << "\n";
    cout << "Hola\n";
    cout << "Ingrese el numero de la opcion a ejecutar: \n";
    cout << "1. Registrar jugadores \n";
    cout << "2. Registrar datos de bateo \n";
    cout << "3. Informe general \n";
    cout << "4. Salir del programa \n";
    cout << "\n";
    cin >> opcion;

    switch(opcion)
    {
        case 1: cout << "REGISTRAR JUGADORES \n";
                for(i=0; i<4; i++)
                {
                    cout << "Inserte ID del jugador " << i << ": ";
                    cin >> RegistroBeisbol[i].id;
                    cout << "Inserte nombre del jugador " << i << ": ";
                    cin >> RegistroBeisbol[i].nombre;
                    cout << "Inserte apellido del jugador " << i << ": ";
                    cin >> RegistroBeisbol[i].apellido;
                    cout << "\n";
                }
                    cout << "\n";
        main();
        break;
        case 2: cout << "REGISTRAR DATOS DE BATEO \n";
                for(i=0; i<4; i++)
                {
                    cout << "\n Inserte turnos al bate del jugador " << i << ": ";
                    cin >> RegistroBeisbol[i].turnos;
                    cout << "\n Inserte imparables del jugador " << i << ": ";
                    cin >> RegistroBeisbol[i].imparables;
                    RegistroBeisbol[i].promedio = RegistroBeisbol[i].imparables/RegistroBeisbol[i].turnos * 1000;
                    cout << "\n";
                }
                    cout << "\n";
        main();
        break;
        case 3: cout << "INFORME GENERAL \n";
                cout << "No.|" << " NOMBRE | " << " TURNOS AL BATE | " << " IMPARABLES | " << endl;
                for(i=0; i<4; i++)
                {
                    cout << i << " | " << RegistroBeisbol[i].nombre << " " << RegistroBeisbol[i].apellido << "  |  " << RegistroBeisbol[i].turnos << "  |  " << RegistroBeisbol[i].imparables << endl;
                }
                cout << "\n";
                cout << "Los jugadores con promedio mayor a 0.500 son: \n";
                cout << "\n";
                for(i=0; i<4; i++)
                {
                    if(RegistroBeisbol[i].promedio > 0.500)
                    {
                        cout << RegistroBeisbol[i].nombre << " " << RegistroBeisbol[i].apellido << endl;;
                    }
                }
        main();
        break;
        case 4: cout << "SALIR DEL PROGRAMA \n";
        break;
    }

return 0;
}
