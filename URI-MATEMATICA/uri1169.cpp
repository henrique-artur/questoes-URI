#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int casos, casasTabuleiro;
    long long int soma = 0;

    cin >> casos;
    while (casos--)
    {
        cin >> casasTabuleiro;
        soma = (pow(2, casasTabuleiro) - 1)/ 12000;
        cout << soma << " kg\n";
    }
    
    return 0;
}

