#include<iostream>

using namespace std;

int main(void){
    int jogadores, voto, apuracao = 0;
    while(cin >> jogadores){
        double porc = (double)jogadores * (2.0/3.0);
        apuracao = 0;
        while(jogadores--){
            cin >> voto;
            if(voto == 1) apuracao++;
        }
        apuracao >= porc ? cout << "impeachment\n" : cout << "acusacao arquivada\n";
    }
    return 0;
}