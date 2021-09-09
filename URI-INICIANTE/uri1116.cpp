#include<iostream>

using namespace std;

int main(void){
    int x, y, n;
    double divi;
    cout.precision(1);
    cout.setf(ios::fixed);
    cin >> n;
    for(int i = 0; i < n; i++ ){
        cin >> x >> y;
        if(y == 0){
            cout << "divisao impossivel\n";
        }else{
            divi = (double) x/y;
            cout << divi;
        }
    }
    return 0;
}