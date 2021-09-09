#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    double vol, diam, ab = 0.0, h = 0.0;
    cout.precision(2);
    cout.setf(ios::fixed);
    while (cin >> vol >> diam)
    {
        h = vol / (3.14 * (pow(diam/2.0,2)));
        ab = vol / h;
        cout << "ALTURA = " << h << endl;
        cout << "AREA = " << ab << endl;
    }
    
    return 0;
}