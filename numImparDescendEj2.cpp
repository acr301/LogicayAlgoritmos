
#include <iostream>
using namespace std;


void imprimir();

void imprimir()
{
 

    for (int i=100;i>=1;i--)
    {
        if(i % 2 == 0)
        {
        }
        else
        {
            cout << i << endl;
        }
    }

}

main()
{
    imprimir();
}