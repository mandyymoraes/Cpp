#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cout << "Digite um valor: ";
    cin >> a;
    cout << "Digite o expoente: ";
    cin >> b;
    cout << a << " elevado a "<< b <<": "<< pow(a,b);
}