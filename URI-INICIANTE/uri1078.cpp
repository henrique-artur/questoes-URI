#include<iostream>

using namespace std;

int main(void){
    int n;
    int multi;
    
    cin >> n;

    for(int i = 1; i <= 10; i++){
        multi = i * n;
        cout << i << " x " << n << " = " << multi << endl;
    }
    return 0;
}