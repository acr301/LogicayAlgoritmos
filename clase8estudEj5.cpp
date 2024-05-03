
#include <iostream>
using namespace std;

int nota;
float ac;
float promedio;
int cantAprobado;
int cantReprobado;

void profesor();
void puntaje();

void puntaje()
{
    if (nota >= 70)
    {
        cantAprobado += 1;
    }
        else
    {
        cantReprobado += 1;
    }
}

void profesor()
{
    
    for(int i=1;i<=8;i++)
    {
        cout << "inserte nota del estudiante num " << i << endl;
        cin >> nota;

        puntaje();

        ac = ac + nota;
    }
    promedio = ac/8;
}

main()
{
    profesor();
    cout << "el numero de estudiantes aprobados es: " << cantAprobado << endl;
    cout << "el numero de estudiantes reprobados es: " << cantReprobado << endl;
    cout << "el promedio general del grupo es: " << promedio << endl;
}