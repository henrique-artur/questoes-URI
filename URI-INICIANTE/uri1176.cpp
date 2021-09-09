#include<iostream>

using namespace std;

int main(void){
    int testes;
    long long fibo[61];
    fibo[0] = 0;
    fibo[1] = 1;
    int num;
    
    for(int i = 2; i <= 60; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cin >> testes;
    while (testes--){
        cin >> num;
        cout<< "Fib(" << num << ") = " << fibo[num] << endl;
    }
    
    return 0;
}