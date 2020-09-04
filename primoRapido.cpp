#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numPrimo(long long int n);
    int casos;
    long long int num;
    cin >> casos;
    while (casos--){
        cin >> num;
        if(1 == numPrimo(num))
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
            
    }
    return 0;
}

int numPrimo(long long int n){
    int i, raiz;
    if (n<2)
        return 0;
    if (n==2)
        return 1;
    if (n%2==0)
        return 0;
    raiz = sqrt(n);
    for (i = 3; i <= raiz; i+=2)
        if (n%i == 0)
            return 0;
    return 1;            
}
