#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    long long int fatorialNum1(int n1);
    long long int fatorialNum2(int n2);
    int num1, num2;
    long long int resultado = 0;
    
    while (scanf("%d%d", &num1, &num2) != EOF){
        if(num1 == 0){
            resultado += 1;
        }
        else if(num2 = 0){
            resultado += 1;
        }
        else if(num1 != 0 && num2 != 0){
            resultado += fatorialNum1(num1);
            resultado += fatorialNum2(num2);
        }
        cout << resultado << endl;
        resultado = 0;
    }
    return 0;
}
long long int fatorialNum1(int n1){
    long long int fatorial = 0;
    for(int i = n1; i > 0; i--)
        fatorial *= i;
    
    return fatorial;
}
long long int fatorialNum2(int n2){
    long long int fatorial = 0;
    for(int i = n2; i > 0; i--)
        fatorial *= i;
    
    return fatorial;    
}