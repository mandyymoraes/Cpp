#include <iostream>
using namespace std;
int main(){
    float c1,c2,dep,saldo=0;
    cout << "Digite o valor do depósito:";
    cin >> dep;
    cout << "Digite o valor do Cheque 1: ";
    cin >> c1;
    cout << "Digite o valor do Cheque 2: ";
    cin >> c2;
    float taxa = 0.38;
    float saldo = dep - ((c1+c2)-((c1*taxa)+(c2*taxa)));
    cout << "Saldo:" << saldo;
}