#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float raio,area;
    cout << "Digite o raio do círculo:";
    cin >> raio;
    area = 3.14 * (pow(raio,2));
    cout << "Área do círculo: "<<area;
}