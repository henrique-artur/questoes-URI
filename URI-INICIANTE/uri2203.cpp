#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    int xf, yf, xi, yi, vi, r1, r2;
    double dist = 0, dist2 = 0;
    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){    
        dist = (float)sqrt(pow(xi - xf, 2.0) + pow(yi - yf, 2.0)) + (vi * 1.50);
        dist2 = (float) r1 + r2;

        if(dist2 < dist )
            cout << "N\n";
        else
            cout << "Y\n";
    }
    return 0;
}