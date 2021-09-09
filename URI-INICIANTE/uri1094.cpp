#include<iostream>

using namespace std;

int main(void){
    int nVezes, cobaia, tot = 0, totRato = 0, totSapo = 0, totCoelho = 0;
    double porcentCoelho, porcentSapo, porcentRato;
    char tipo;
    cin >> nVezes;
    for(int i = 1; i <= nVezes; i++){
        cin >> cobaia >> tipo;
        tot += cobaia;
        if(tipo == 'C'){
            totCoelho += cobaia;
        }
        else if(tipo == 'R'){
            totRato+= cobaia;
        }
        else if(tipo == 'S'){
            totSapo += cobaia;
        }
    }
    porcentCoelho = (double)(totCoelho*100)/tot;
    porcentRato = (double) (totRato*100)/tot;
    porcentSapo = (double) (totSapo*100)/tot;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << "Total: " << tot << " Cobaias\n";
    cout << "Total de coelhos: " << totCoelho << endl;
    cout << "Total de ratos: " << totRato << endl;
    cout << "Total de sapos: " << totSapo << endl;
    cout << "Percentual de coelhos: " << porcentCoelho << "%\n";
    cout << "Percentual de ratos: " << porcentRato << "%\n";
    cout << "Percentual de sapos: " << porcentSapo << "%\n";

    return 0;
}