#include <iostream>
using namespace std;

int main(){
    float sal;
    cout << "Digite o valor do salário: ";
    cin >> sal;
    sal += sal * 0.25;
    cout << "O valor do salário acrescido 25% é: "<<sal;

}
