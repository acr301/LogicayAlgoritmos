#include <iostream>
using namespace std;

void sumaVectores ();

void sumaVectores()
{
    int vector1 = {};
    int vector2 = {};
    cout << "Ingrese el tamaño de los vectores: " << endl;
    cin >> vector1;
    cin >> vector2;
    
    int suma = vector1 + vector2;


    cout << suma << endl;

}

main()
{
    sumaVectores();
}