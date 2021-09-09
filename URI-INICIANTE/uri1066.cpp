#include<iostream>

using namespace std;

int main(void){
    int num[5];
    int numPositivo = 0, numNegativo = 0, numPar = 0, numImpar = 0;

    for(int i = 0; i < 5; i++){
        cin >> num[i];
        if(num[i] > 0 ){
            numPositivo += 1;
        }
        else if(num[i] < 0){
            numNegativo += 1;
        }
        if(num[i]%2 == 0){
            numPar += 1;
        }
        else{
            numImpar += 1;
        }
    }  

    cout << numPar << " valor(es) par(es)" << endl;
    cout << numImpar << " valor(es) impar(es)" << endl;
    cout << numPositivo << " valor(es) positivo(s)" << endl;
    cout << numNegativo << " valor(es) negativo(s)" << endl;


    return 0;
}