#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cout<< "Digite um número: ";
    cin >> a;
    cout << pow(a,2) << "\n"; // "a" elevado ao quadrado
    cout << pow(a,3) << "\n"; // "a" elevado ao cubo
    cout << sqrt(a)<< "\n"; // raiz quadrada de "a"
     cout << pow(a,1/3)<< "\n"; // raiz cubica de "a"
    return 0;

}