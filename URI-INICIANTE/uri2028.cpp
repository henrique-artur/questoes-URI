#include<iostream>

using namespace std;

int tamanho(int num);

int main(){
    int num;
    int casos = 1;
    while (cin >> num){
        if (num == 0){
            cout << "Caso " << casos << ": 1 numero\n0\n\n";
        }
        else {
            cout << "Caso " << casos << ": " << tamanho(num) << " numeros" << endl;
            cout << "0";
            for (int i = 1; i <= num; i++){
                for (int j = 1; j <= i; j++){
                    cout << " " << i;
                }
            }
            cout << "\n\n";
        }
        casos++;
    }
    
    return 0;
}

int tamanho(int num){
    unsigned int soma = 0;

    for (int i = num; i > 0; i--)
        soma += i;

    return ++soma;
}