#include <iostream>
using namespace std;

int main(){
    float sal, aumento;
    cout << "Digite o salario e o aumento em %:";
    cin >> sal >> aumento;
    sal += sal * (aumento/100);
    cout << "O salário acrescido da porcentagem é: "<<sal;

}
