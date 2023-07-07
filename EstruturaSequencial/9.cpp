#include <iostream>
using namespace std;

int main(){
    float area, base, altura;
    cout << "Digite a altura e a base de um triângulo:";
    cin >> base >> altura;
    area = (base * altura) / 2;
    cout << "Área do triângulo:  "<<area;
}