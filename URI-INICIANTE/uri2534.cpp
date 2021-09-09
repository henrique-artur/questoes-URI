#include<iostream>

using namespace std;

int main(void){
    int habt, query, notas[105], pos;
    while(cin >> habt >> query){
        for(int i = 0; i < habt; i++){
            cin >> notas[i];
        }
        int j, i, aux = 0;
        for(i = 0; i < habt; i++){
            for(j = i; j < habt; j++){
                if(notas[i] < notas[j]){
                    aux = notas[j];
                    notas[j] = notas[i];
                    notas[i] = aux;
                }
            }
        }
        while(query--){
            cin >> pos;
            cout << notas[pos-1] << endl;
        }
    }
    return 0;
}