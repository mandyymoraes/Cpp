#include <iostream>
using namespace std;
int main()
{   
    //Inserindo os dados
    int horas, sal_min;
    cout << "Digite o salário mínimo: ";
    cin >> sal_min;
    cout << "Digite as horas trabalhadas: ";
    cin >> horas;
    int valor_hora = sal_min/2,
    sal_bruto = horas*valor_hora,
    imposto = sal_bruto*0.03;
    int sal_final = sal_bruto - imposto;
    cout << "Salário a receber: "<<sal_final;
}