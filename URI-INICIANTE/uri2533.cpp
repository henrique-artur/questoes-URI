#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    int m, n, c, denom = 0, div = 0;
    cout.precision(4);
    cout.setf(ios::fixed);
    while(cin >> m){
        while(m--){
            cin >> n >> c;
            denom += (n * c);
            div += c; 
        }
        cout << (float)denom/(div*100.0) << endl;
        denom = div = 0;
    }
    return 0;
}