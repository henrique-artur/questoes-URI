#include<iostream>

using namespace std;

int main(void){
    int x,y, soma = 0, numMaior, numMenor;
    for(int i = 0; i < 100; i++){
        cin >> x >> y;
        if(x <= 0 || y <= 0){
            break;
        }
        else if(x > y){
            numMaior = x;
            numMenor = y;
        }
        else if(x < y){
            numMaior = y;
            numMenor = x;
        }
        for(int j = numMenor; j <= numMaior; j++){
            cout << j << " ";
            soma += j;
            if(j == numMaior){
                cout << "Sum=" << soma << endl;
                soma = 0;
            } 
        }
    }
    return 0;
}