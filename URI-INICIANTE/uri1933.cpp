#include <iostream>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    if(a != b && a > b)
        cout << a << endl;
    else if(a != b && a < b)
        cout << b << endl;
    if(a == b){
        cout << a << endl;
    }
    return 0;
}