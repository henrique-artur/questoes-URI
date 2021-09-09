#include <iostream>

using namespace std;

int main(void){
    int jog1, jog2, escolha1, roubo, acusacao;
    cin >> escolha1 >> jog1 >> jog2;
    if(jog1 >= 0 && jog2 >= 0 && jog1 <= 100 && jog2 <= 100){
        cin >> roubo >> acusacao;
        if(roubo == 0 && acusacao == 1){
            cout << "Jogador 1 ganha!\n";
        }
        if(roubo == 1 && acusacao == 1){
            cout << "Jogador 2 ganha!\n";
        }
        else{
            if(roubo == 1 && acusacao == 0){
                cout << "Jogador 1 ganha!\n";
            }
            else{
                if(roubo == 0 && acusacao == 0){
                    if((jog1 + jog2) % 2 == 0 && escolha1 == 1){
                        cout << "Jogador 1 ganha!\n";
                    }
                    else{
                        if((jog1 + jog2) % 2 == 0 && escolha1 == 0){
                            cout << "Jogador 2 ganha!\n";
                        }
                        else{
                            if((jog1 + jog2) % 2 != 0 && escolha1 == 1){
                                cout << "Jogador 2 ganha!\n";
                            }
                            else{
                                if((jog1 + jog2) != 0 && escolha1 == 0){
                                    cout << "Jogador 1 ganha!\n";
                                }
                            }
                        }
                    }
                }
            }
        }
    }   
    return 0;
}