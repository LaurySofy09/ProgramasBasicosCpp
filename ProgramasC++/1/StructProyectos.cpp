#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct
{   int numero;
    char nombre[30];
    float presupuesto;
    float porcentaje;
    float gasto;
}RegistroProyecto[4];

int main()
{   int i,opcion,w;
    float y, y1;
    cout << "\n";
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    cout << "* * * * * * * BIENVENIDO AL PROGRAMA DE REGISTRO DE PROYECTOS * * * * * * * * \n";
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    cout << "*                                                                           * \n";
    cout << "*                                                                           * \n";
    cout << "*                                                                           * \n";
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    cout << "*                                                                           * \n";
    cout << "* Ingrese el numero de la opcion a ejecutar:                                * \n";
    cout << "*                                                                           * \n";
    cout << "* 1. Registrar proyectos                                                    * \n";
    cout << "* 2. Actualizar porcentaje de avance                                        * \n";
    cout << "* 3. Registrar gasto de proyecto                                            * \n";
    cout << "* 4. Informe general                                                        * \n";
    cout << "* 5. Salir del programa                                                     * \n";
    cout << "*                                                                           * \n";
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    cout << "\n";
    cin >> opcion;
    system("CLS");

    switch(opcion)
    {
        case 1: cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                cout << "*                                                               * \n";
                cout << "* REGISTRAR PROYECTOS                                           * \n";
                for(i=0; i<4; i++)
                {
                    cout << "*\n";
                    cout << "Inserte el numero del proyecto " << i << ": ";
                    cin >> RegistroProyecto[i].numero;
                    cout << "Inserte nombre del proyecto " << i << ": ";
                    cin >> RegistroProyecto[i].nombre;
                    cout << "Inserte presupuesto del proyecto " << i << ": ";
                    cin >> RegistroProyecto[i].presupuesto;
                    cout << "\n";
                }
                    cout << "\n";
                    cout << "Registro de proyectos realizado exitosamente!";
                    cout << "\n";
                    getch();
                    system("CLS");
        main();
        break;

        case 2: cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                cout << "* ACTUALIZAR AVANCES DE PROYECTOS                               * \n";
                cout << "*                                                               * \n";
                cout << "* Ingrese el numero del proyecto para registrar avance:         * \n";
                cout << "*                                                               * \n";
                cout << "* Proyecto 1                                                    * \n";
                cout << "* Proyecto 2                                                    * \n";
                cout << "* Proyecto 3                                                    * \n";
                cout << "* Proyecto 4                                                    * \n";
                cout << "*                                                               * \n";
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                cin >> opcion;
                switch(opcion)
                {
                    case 1: i = 0;
                            cout << "PROYECTO 1 \n";
                            cout << "\n";
                            cout << "Inserte nuevo porcentaje de avance del proyecto 1: \n";
                            cout << "% ";
                            cin >> y;
                            RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje + y;
                            if(RegistroProyecto[i].porcentaje > 100.00)
                            {
                                cout << "Este valor es mayor del 100%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje - y;
                                getch();
                                system("CLS");
                                main();
                            }
                            if(RegistroProyecto[i].porcentaje < 0.00)
                            {
                                cout << "Este valor es menor del 0%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = 0;
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Porcentaje actual: " << RegistroProyecto[i].porcentaje;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;

                       case 2: i = 1;
                            cout << "PROYECTO 2 \n";
                            cout << "\n";
                            cout << "Inserte nuevo porcentaje de avance del proyecto 2: \n";
                            cout << "% ";
                            cin >> y;
                            RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje + y;
                            if(RegistroProyecto[i].porcentaje > 100.00)
                            {
                                cout << "Este valor es mayor del 100%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje - y;
                                getch();
                                system("CLS");
                                main();
                            }
                            if(RegistroProyecto[i].porcentaje < 0.00)
                            {
                                cout << "Este valor es menor del 0%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = 0;
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Porcentaje actual: " << RegistroProyecto[i].porcentaje;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;

                        case 3: i = 2;
                            cout << "PROYECTO 3 \n";
                            cout << "\n";
                            cout << "Inserte nuevo porcentaje de avance del proyecto 3: \n";
                            cout << "% ";
                            cin >> y;
                            RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje + y;
                            if(RegistroProyecto[i].porcentaje > 100.00)
                            {
                                cout << "Este valor es mayor del 100%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje - y;
                                getch();
                                system("CLS");
                                main();
                            }
                            if(RegistroProyecto[i].porcentaje < 0.00)
                            {
                                cout << "Este valor es menor del 0%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = 0;
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Porcentaje actual: " << RegistroProyecto[i].porcentaje;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;

                        case 4: i = 3;
                            cout << "PROYECTO 4 \n";
                            cout << "\n";
                            cout << "Inserte nuevo porcentaje de avance del proyecto 4: \n";
                            cout << "% ";
                            cin >> y;
                            RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje + y;
                            if(RegistroProyecto[i].porcentaje > 100.00)
                            {
                                cout << "Este valor es mayor del 100%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = RegistroProyecto[i].porcentaje - y;
                                getch();
                                system("CLS");
                                main();
                            }
                            if(RegistroProyecto[i].porcentaje < 0.00)
                            {
                                cout << "Este valor es menor del 0%. Porfavor, verifique. \n";
                                RegistroProyecto[i].porcentaje = 0;
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Porcentaje actual: " << RegistroProyecto[i].porcentaje;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;
                }
        main();
        break;

        case 3: cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                cout << "* ACTUALIZAR GASTOS DE PROYECTOS                                * \n";
                cout << "*                                                               * \n";
                cout << "* Ingrese el numero del proyecto para registrar gastos:         * \n";
                cout << "*                                                               * \n";
                cout << "* Proyecto 1                                                    * \n";
                cout << "* Proyecto 2                                                    * \n";
                cout << "* Proyecto 3                                                    * \n";
                cout << "* Proyecto 4                                                    * \n";
                cout << "*                                                               * \n";
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                cin >> opcion;
                switch(opcion)
                {
                    case 1: i = 0;
                            cout << "PROYECTO 1 \n";
                            cout << "\n";
                            cout << "Inserte nuevo gasto del proyecto 1: \n";
                            cin >> y1;
                            RegistroProyecto[i].gasto = RegistroProyecto[i].gasto + y1;
                            if(y1 < 0.00)
                            {
                                cout << "Este valor es menor que 0. Porfavor, verifique. \n";
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Gasto actual: " << RegistroProyecto[i].gasto;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;

                    case 2: i = 1;
                            cout << "PROYECTO 2 \n";
                            cout << "\n";
                            cout << "Inserte nuevo gasto del proyecto 2: \n";
                            cin >> y1;
                            RegistroProyecto[i].gasto = RegistroProyecto[i].gasto + y1;
                            if(y1 < 0.00)
                            {
                                cout << "Este valor es menor que 0. Porfavor, verifique. \n";
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Gasto actual: " << RegistroProyecto[i].gasto;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;

                        case 3: i = 2;
                            cout << "PROYECTO 3 \n";
                            cout << "\n";
                            cout << "Inserte nuevo gasto del proyecto 3: \n";
                            cin >> y1;
                            RegistroProyecto[i].gasto = RegistroProyecto[i].gasto + y1;
                            if(y1 < 0.00)
                            {
                                cout << "Este valor es menor que 0. Porfavor, verifique. \n";
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Gasto actual: " << RegistroProyecto[i].gasto;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;

                        case 4: i = 3;
                            cout << "PROYECTO 4 \n";
                            cout << "\n";
                            cout << "Inserte nuevo gasto del proyecto 4: \n";
                            cin >> y1;
                            RegistroProyecto[i].gasto = RegistroProyecto[i].gasto + y1;
                            if(y1 < 0.00)
                            {
                                cout << "Este valor es menor que 0. Porfavor, verifique. \n";
                                getch();
                                system("CLS");
                                main();
                            }
                            cout << "Gasto actual: " << RegistroProyecto[i].gasto;
                            cout << "\n";
                            getch();
                            system("CLS");
                        break;
                }
                main();
                break;
        case 4: cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                cout << "* INFORME GENERAL DE PROYECTOS \n";
                cout << "* \n";
                cout << "* Lista de proyectos: \n";
                cout << "* \n";
                for(i=0; i<4; i++)
                {
                    cout << "* " << RegistroProyecto[i].numero << " " << RegistroProyecto[i].nombre << " \n";
                }
                cout << "\n";
                cout << "* Lista de proyectos concluidos: \n";
                cout << "*\n";
                for(i=0; i<4; i++)
                {
                    if(RegistroProyecto[i].porcentaje == 100.00)
                    {
                      cout << "* " << RegistroProyecto[i].nombre << " " << RegistroProyecto[i].porcentaje << "\n";
                    }
                }
                cout << "* Lista de proyectos en ejecucion: \n";
                cout << "*\n";
                for(i=0; i<4; i++)
                {
                    if(RegistroProyecto[i].porcentaje != 100.00)
                    {
                      cout << "* " << RegistroProyecto[i].nombre << " " << RegistroProyecto[i].porcentaje << "\n";
                    }
                }
                cout << "* Total general de gastos: \n";
                cout << "*\n";
                for(i=0; i<4; i++)
                {
                    cout << "* " << RegistroProyecto[i].nombre << " " << RegistroProyecto[i].gasto << "\n";
                }
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
                getch();
                system("CLS");
                main();
                break;
        case 5: cout << "* HASTA PRONTO * \n";
                getch();
                break;
    }
return 0;
}
