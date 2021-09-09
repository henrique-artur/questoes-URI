#include <iostream>
#include <string>
using namespace std;

int main(void){
    int i = 0, abasIniciais, numAcoes, abasAbertas;
    string acao;
    cin >> abasIniciais >> numAcoes;
    abasAbertas = abasIniciais;
    while (i <= numAcoes){
        getline(cin, acao);
        if(acao == "fechou") abasAbertas++;
        if(acao == "clicou") abasAbertas--;
        i++;
    }
    cout << abasAbertas << endl;
    return 0;
}