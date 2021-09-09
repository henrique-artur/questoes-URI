#include <iostream>

using namespace std;

int main(void){
    int repeat;
    double fracao = 0.0;
    
    cout.precision(10);
    cout.setf(ios::fixed);
    
    cin >> repeat;
    while (repeat--)
    {
        fracao = 1 / (6 + fracao);
    }

    cout << (3 + fracao) << endl;
    
    return 0;
}