#include <iostream>
#include <string.h>

using namespace std;

struct
{   char codigo[10];
    char nombre[30];
    char apellido[30];
    int edad;
    float nota1;
    float nota2;
    float promedio;
}RegistroEstudiante[3];

int main()
{   int i,x,z;
    cout << "Hola\n";
    cout << "\n";

    for(i=0; i<3; i++)
    {
        cout << "Inserte codigo del estudiante " << i << ": ";
        cin >> RegistroEstudiante[i].codigo;
        cout << "Inserte nombre del estudiante " << i << ": ";
        cin >> RegistroEstudiante[i].nombre;
        cout << "Inserte apellido del estudiante " << i << ": ";
        cin >> RegistroEstudiante[i].apellido;
        cout << "Inserte edad del estudiante " << i << ": ";
        cin >> RegistroEstudiante[i].edad;
        cout << "\n";
    }

    for(i=0; i<3; i++)
        {
            cout << "Inserte nota 1 del estudiante " << i << ": ";
            cin >> RegistroEstudiante[i].nota1;
            cout << "Inserte nota 2 del estudiante " << i << ": ";
            cin >> RegistroEstudiante[i].nota2;
            RegistroEstudiante[i].promedio = (RegistroEstudiante[i].nota1 + RegistroEstudiante[i].nota2) / 2.0;
            cout << "\n";
        }
    do
    {
        for(i=0; i<3; i++)
        {
            cout << "Desea modificar notas para el estudiante " << i << "? Escriba 1 en caso afirmativo y 0 en caso negativo: ";
            cout << "\n";
            cin >> x;
            if(x==1)
            {
                cout << "Inserte nota 1 del estudiante " << i << ": ";
                cin >> RegistroEstudiante[i].nota1;
                cout << "Inserte nota 2 del estudiante " << i << ": ";
                cin >> RegistroEstudiante[i].nota2;
                cout << "\n";
            }
            RegistroEstudiante[i].promedio = (RegistroEstudiante[i].nota1 + RegistroEstudiante[i].nota2) / 2.0;
        }
    cout << "\n";
    cout << "Modificar nuevamente notas de estudiantes? Escriba 1 en caso afirmativo y 0 en caso negativo: ";
    cout << "\n";
    cin >> z;
    }while(z == 1);

    cout << "\n";
    cout << "No.|" << " " << "CODIGO|" << "NOMBRE|" << " " << "NOTA 1|" << " " << "NOTA 2|" << "PROMEDIO|" << endl;
    cout << "\n";
    for(i=0; i<3; i++)
    {
        cout << i << " | " << RegistroEstudiante[i].codigo << " | " << RegistroEstudiante[i].nombre << " " << RegistroEstudiante[i].apellido << " | " << RegistroEstudiante[i].nota1 << " | " << RegistroEstudiante[i].nota2 << " | " << RegistroEstudiante[i].promedio << endl;
    }
    cout << "\n";
return 0;
}


