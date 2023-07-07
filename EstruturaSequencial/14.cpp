#include <iostream>
using namespace std;

int main()
{
    int anoNasc, anoAtual, idade2005;
    cout << "Digite o ano de nascimento e o ano atual:";
    cin >> anoNasc >> anoAtual;
    cout << anoAtual - anoNasc << " anos tem a pessoa";
    idade2005 = 2005 - anoNasc;
    if (idade2005 < 0)
    {
        cout << "Essa pessoa não era nascida em 2005" << endl;
    }
    else if (idade2005 == 0)
    {
        cout << "Essa pessoa nasceu em 2005" << endl;
    }
    else
    {
        cout << "Idade da pessoa em 2005: " << idade2005 << endl;
    }
}