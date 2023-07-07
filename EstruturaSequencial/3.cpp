#include <iostream>
using namespace std;

int main(){
    float a,b,c,media,pA,pB,pC;
    cout << "Digite 3 notas e seus respectivos pesos:";
    cin >> a >> pA >> b >> pB >> c >> pC;
    media = ((a*pA)+ (b*pB) +(c*pC))/3;
    cout << "A média ponderada das notas são: "<<media;

}
