#include <iostream>
using namespace std;

int main(){
    float d, j, r, total;
    cout << "Digite o valor e a taxa de juros em %:";
    cin >> d >> j;
    r = d * (j/100);
    total = d + r;
    cout << "Rendimento:" << r << "\n";
    cout << "Nova Quantia:"<< total;
}