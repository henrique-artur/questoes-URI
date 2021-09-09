#include <iostream>

using namespace std;

int main(void){
    double a, b, x = 0;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> a >> b;

    x = (((b - a) * 100.00) / a);

    cout << x << "%\n";

    return 0;
}