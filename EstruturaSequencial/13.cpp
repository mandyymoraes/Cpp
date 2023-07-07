#include <iostream>
using namespace std;

int main(){
    int medida;
    int pe = 12; // 12 polegadas
    int jarda = 3 * pe; // 1 jarda = 3 pés
    int milhas = 1760 * jarda; // 1 milha = 1760 jardas
    cout << "Digite uma medida em pés:";
    cin >> medida;
    cout << "Polegadas:" << medida * pe;
    cout << "Jardas:" << medida * jarda;
    cout << "Milhas:" << medida * milhas;




}