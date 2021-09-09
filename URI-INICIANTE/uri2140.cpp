#include<iostream>

using namespace std;

int main(void){
    int compra, dinheiro;
    
    while (true){
        cin >> compra >> dinheiro;

        int troco = dinheiro - compra;
        int notas[] = {2, 5, 10, 20, 50, 100};
        bool possivel = false;
     
        if(compra == 0 && dinheiro == 0)
            break;
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                if(troco - notas[j] == notas[i]) possivel = true;
            }
        }
        possivel ? cout << "possible\n" : cout << "impossible\n";
    }
    return 0;
}