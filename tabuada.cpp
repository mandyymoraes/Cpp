/*Tabuadas do 1 ao 10*/
#include <iostream>
using namespace std;

int main()
{
    int cont = 1;
    while (cont <= 10)
    {   
        cout << "-------//-------"<<"\n";
        cout << "Tabuada do "<<cont<< "\n";
        cout << "-------//-------";
        cout << "\n";
        for (int i=1; i<=10; i++){
            cout << cont << " X " << i << " = " << cont * i << "\n";

        }
        cont++;
    }
    return 0;
}