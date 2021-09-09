#include<iostream>
#include<string>

using namespace std;

int main(void){
    int qtd, tamanho;
    string str;
    cin >> qtd;
    while (qtd--){
        cin >> str;
        tamanho = str.length();
        if(0 <= tamanho && tamanho <= 25){
            cout << "Y\n";
        }
        else{
            cout << "N\n";
        }
    }
    return 0;
}