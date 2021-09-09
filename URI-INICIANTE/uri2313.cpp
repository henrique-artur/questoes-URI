#include<iostream>
#include<math.h>

using namespace std;

bool trianguloRetangulo(int a, int b, int c);

int main(void){ 
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b + c && b < a + c && c < a + b){
        if (a == b && a == c && b == c){
            cout << "Valido-Equilatero\n";
        }
        else if(a == b || a == c || b == c){
            cout << "Valido-Isoceles\n";
        }
        else{
            cout << "Valido-Escaleno\n";
        }
        trianguloRetangulo(a, b, c) ? cout << "Retangulo: S\n" : cout << "Retangulo: N\n";
    }
    else{
        cout << "Invalido\n";
    }
    return 0;
}

bool trianguloRetangulo(int a, int b, int c){
    int aA = a * a;
    int bB = b * b;
    int cC = c * c;
    return aA + bB == cC || aA + cC == bB || cC + bB == aA;
}