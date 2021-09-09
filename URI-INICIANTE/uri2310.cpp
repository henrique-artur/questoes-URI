#include <iostream>
#include <string>

using namespace std;

int main(void){
    string nome;
    int s, a, b, sAc, aAc, bAc, jogadores;
    int sTotal = 0, aTotal = 0, bTotal = 0;
    int sAcerto = 0, aAcerto = 0, bAcerto = 0;

    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> jogadores;
    int i = 0;
    while ( i < jogadores)
    {
        cin >> nome;
        cin >> s >> b >> a;
        cin >> sAc >> bAc >> aAc;

        sTotal += s; aTotal += a; bTotal += b;
        sAcerto += sAc; aAcerto += aAc; bAcerto += bAc; 
        
        i++;
    }

    cout << "Pontos de Saque: " << (float)(100*sAcerto)/sTotal << " %.\n";
    cout << "Pontos de Bloqueio: " << (float)(100*bAcerto)/bTotal << " %.\n";
    cout << "Pontos de Ataque: " << (float)(100*aAcerto)/aTotal << " %.\n";
    
    

    return 0;
}