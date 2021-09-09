#include<iostream>

using namespace std;

int main(void){
    int nota;
    cin >> nota;

    if(nota >= 1 && nota <= 35) cout << "D\n";
    else if(nota >= 36 && nota <= 60) cout << "C\n";
    else if(nota >= 61 && nota <= 85) cout << "B\n";
    else if(nota >= 86 && nota <= 100) cout << "A\n";
    else cout << "E\n";
    
    return 0;
}