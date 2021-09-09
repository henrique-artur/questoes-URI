#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    long int num;
    double p, m;
    
    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> num;

    p = num/log(num);
    m = 1.25506 * (num/log(num));

    cout << p << " " << m << endl;
    return 0;
}