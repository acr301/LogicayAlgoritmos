
#include <iostream>
using namespace std;

void sumar();

void sumar()
{
    int n;
    int nAc;
    for(int i=1;i <= 100;i++)
    {
        nAc = nAc + i;
        cout << (nAc*nAc) + nAc << endl;
    }

}

main()
{
    sumar();

}