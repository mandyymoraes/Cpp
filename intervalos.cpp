/*Faça um programa que leia uma quantidade indeterminada de números positivos e conte quantos
deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100].
A entrada de dados deverá terminar quando for lido um número negativo.*/
#include <iostream>
using namespace std;
int main()
{
    int n = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, qntd = 0;
    while (n >= 0)
    {
        cout << "Digite um numero:";
        cin >> n;
        if (n < 0)
        {
            cout << "Numero Invalido";
            break;
        }
        qntd++;
        if (0 <= n && n <= 25)
        {
            i1 += 1;
        }
        if (26 <= n && n <= 50)
        {
            i2 += 1;
        }
        if (51 <= n && n <= 75)
        {
            i3 += 1;
        }
        if (76 <= n && n <= 100)
        {
            i4 += 1;
        }
    };
    cout << "Quantidade de numeros digitados: " << qntd << "\n";
    cout << "Quantidade de numeros do 1º intervalo: " << i1 << "\n";
    cout << "Quantidade de numeros do 2º intervalo: " << i2 << "\n";
    cout << "Quantidade de numeros do 3º intervalo: " << i3 << "\n";
    cout << "Quantidade de numeros do 4º intervalo: " << i4 << "\n";
    return 0;
}
