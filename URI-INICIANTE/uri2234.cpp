#include <iostream>

using namespace std;

int main(void){
    int hot, p;
    float media = 0.00;

    cout.precision(2);
    cout.setf(ios::fixed);
    
    cin >> hot >> p ;
    media = (float)hot/p;

    cout << media << endl;
    
    return 0;
}