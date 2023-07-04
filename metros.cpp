/*Transformar valores de metros para decimetros, centímetros e milimetros*/
#include <iostream>
using namespace std;
int main (){
    int m;
    cout << "Digite um valor em metros: ";
    cin >> m;
    cout << "Valor em decimetros: " << m * 10 ;
    cout << "\n";
    cout << "Valor em centimetros: " << m * 100 ;
    cout << "\n";
    cout << "Valor em milimetros: " << m * 1000 ;

}