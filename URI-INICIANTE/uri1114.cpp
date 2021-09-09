#include<iostream>

using namespace std;

int main(void){
    int senha;
    for(int i = 0; i < 100; i++){
        cin >> senha;
        if(senha != 2002){
            cout << "Senha Invalida\n";
        }
        else{
            cout << "Acesso Permitido\n";
            break;
        }
    }
    return 0;
}