#include<iostream>

using namespace std;

int main(void){
    int i, n, fatorial = 1;
    cin >> n;
    for( i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }
    cout << fatorial;
    return 0;
}