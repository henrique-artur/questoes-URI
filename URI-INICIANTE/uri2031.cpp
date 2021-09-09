#include <iostream>
#include <string>
using namespace std;

int main(){
    void pedraPapelAtaque(string jog1, string jog2);
    int casos, i = 0;
    string jog1, jog2;
    
    cin >> casos;
    while (i < casos){
        cin >> jog1;
        getchar();
        cin >> jog2;
        pedraPapelAtaque(jog1, jog2);
        i++;
    }
    return 0;
}

void pedraPapelAtaque(string jog1, string jog2){
    if(jog1 == "ataque" && jog2 == "ataque")
    {
        cout << "Aniquilacao mutua\n";
    }
    if(jog1 == "ataque" && jog2 == "pedra" || jog1 == "ataque" && jog2 == "papel" || jog1 == "pedra" && jog2 == "papel")
    {
        cout << "Jogador 1 venceu\n";
    }
    if(jog2 == "ataque" && jog1 == "pedra" || jog2 == "ataque" && jog1 == "papel" || jog2 == "pedra" && jog1 == "papel")
    {
        cout << "Jogador 2 venceu\n";
    }
    if(jog1 == "papel" && jog2 == "papel")
    {
        cout << "Ambos venceram\n";
    }
    if(jog1 == "pedra" && jog2 == "pedra")
    {
        cout << "Sem ganhador\n";
    }
}