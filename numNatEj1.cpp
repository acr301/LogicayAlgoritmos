
#include <iostream>
using namespace std;

int n;
int acumulador;
int sumaTotal;

void suma();

void suma()
{
    /*porque empieza desde 1 hasta el n*/
    acumulador = 1;

    for (int i=0;i<n;i++)
    {
        acumulador = acumulador + i;
        sumaTotal = acumulador + i;

        cout << "la suma es " << sumaTotal << endl;
    }
}

int main(int argc, char const *argv[])
{
    cout << "inserte un n hasta el cual";
    
    cout << " desde 1 se sumen todos los naturales \n";
    cin >> n;

    suma();

    return 0;
}

