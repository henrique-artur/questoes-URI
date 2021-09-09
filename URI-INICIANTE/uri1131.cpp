#include<iostream>

using namespace std;

int main(void){
    int gInter, gGremio, continuar, winTer = 0, winGre = 0, empate = 0;

    for(int i = 0; i < 100; i++){
        cin >> gInter >> gGremio;
        if(gInter > gGremio){
            winTer += 1;
        }
        else if(gGremio > gInter){
            winGre += 1;
        }
        else{
            empate += 1;
        }
        cout << "Novo Grenal (1-sim 2-nao)\n";
        cin >> continuar;
        if(continuar == 2){
            break;
            if(winGre > winTer){
                cout << i+1 << " grenais" << endl;
                cout << "Inter:" << winTer << endl;
                cout << "Gremio:" << winGre << endl;
                cout << "Empates:" << empate << endl;
                cout << "Gremio venceu mais" << endl;
            }
            else if(winTer > winGre){
                cout << i+1 << " grenais" << endl;
                cout << "Inter:" << winTer << endl;
                cout << "Gremio:" << winGre << endl;
                cout << "Empates:" << empate << endl;
                cout << "Inter venceu mais" << endl;
            }
            else{
                cout << i+1 << " grenais" << endl;
                cout << "Inter:" << winTer << endl;
                cout << "Gremio:" << winGre << endl;
                cout << "Empates:" << empate << endl;
                cout << "Nao houve vencedor" << endl;
            }
            
        }

        }
    return 0;
}