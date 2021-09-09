#include <iostream>

using namespace std;

int main(void){
    int vezes;
    long int xp, xpFinal = 0;
    while (true){
        cin >> vezes >> xp;
        if(vezes == 0 && xp == 0)
            break;
        cout << vezes * xp << endl;
    }
    return 0;
}