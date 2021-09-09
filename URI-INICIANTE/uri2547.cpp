#include <iostream>

using namespace std;

int main(void){
    int passageiros, aMin, aMax, pass, numPermitido = 0;

    while (cin >> passageiros >> aMin >> aMax){
        while (passageiros--)
        {
            cin >> pass;
            if(pass >= aMin && pass <= aMax)
                numPermitido++;
        }
        cout << numPermitido << endl;
        numPermitido = 0;
    }
    return 0;
}