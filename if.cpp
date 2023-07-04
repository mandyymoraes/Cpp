/*Entre 2 valores digitados, qual é o maior?*/
#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout <<"Escreva 2 números:";
    cin >> x >> y;
    if (x > y){
        cout << x << " > " << y;
    }
    else{
        cout << y << " > " << x;
    }
    return 0;
}