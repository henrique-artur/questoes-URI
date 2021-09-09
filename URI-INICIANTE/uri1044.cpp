#include<iostream>

using namespace std;

int main(void){
    int x, y, numMaior, numMenor, numSoma = 0;
    cin >> x >> y;
    if(y > x){
        numMaior = y;
        numMenor = x;
    }
    else{
        numMaior = x;
        numMenor = y;
    }
    for(numMenor; numMenor <= numMaior; numMenor++){
        if(numMenor%13 != 0){
            numSoma += numMenor;
        }
    }
    cout << numSoma << endl;

    return 0;
}