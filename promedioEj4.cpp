
#include <iostream>
using namespace std;

int nota;
float ac;
float promedio;

void promediar();

void promediar()
{
    for (int i=1;i<=10;i++)
    {
        cout << "inserte nota del estudiante num " << i << endl;
        cin >> nota;
        ac = ac + nota;
    }
        promedio = ac/10;
        cout << "el promedio de las notas es: " << promedio << endl;
}

main()
{
    promediar();
}