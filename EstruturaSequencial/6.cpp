#include <iostream>
using namespace std;

int main(){
    float sal;
    cin >> sal;
    sal += (sal * 0.05) - (sal * 0.07);
    cout <<"O salário acrescido da gratificação e retidado os impostos é: " <<sal;

}
