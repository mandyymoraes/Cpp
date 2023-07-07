#include <iostream>
using namespace std;

int main(){
    float sal;
    cout << "Digite o valor do salário: ";
    cin >> sal;
    sal += 50 - (sal * 0.1);
    cout << "O valor do salário acrescido a gratificação e retirado o valor dos impostos é: "<<sal;

}
