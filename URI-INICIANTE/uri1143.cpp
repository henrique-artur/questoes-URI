#include<iostream>

using namespace std;

int main(void){
    int num;
    int quadrado, cubo;
    
    cin >> num;

    for(int i = 1; i <= num; i++){
        quadrado = i*i;
        cubo = i*i*i;
        cout << i << " " << quadrado << " " << cubo << endl;
    }
    return 0;
}