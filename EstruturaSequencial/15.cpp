#include <iostream>
using namespace std;

int main(){
    //Inserindo os dados 
    float p, taxa_distribuidor, taxa_imposto, p_distribuidor, p_imposto, p_final;
    cout << "Digite o preco do carro: ";
    cin >> p;
    cout << "Digite a porcentagem da taxa do venededor: ";
    cin >> taxa_distribuidor;
    cout << "Digite a porcentagem da taxa de imposto: ";
    cin >> taxa_imposto;
    //Calculando os preços acrescentando as taxas
    p_distribuidor = p * (taxa_distribuidor/100);
    p_imposto = p - (p*taxa_imposto/100);
    p_final = p + p_imposto + p_distribuidor;
    cout << "Preço final:" << p_final;
    cout << "Lucro Distribuidor:" << p_distribuidor;
    cout << "Preço imposto:" << p_imposto;
}