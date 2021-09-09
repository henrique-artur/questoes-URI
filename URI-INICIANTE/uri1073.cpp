#include<iostream>

using namespace std;

int main(void){
    int n, multi;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            multi = i * i;
            cout << i << "^2 = " << multi << endl; 
        }
    }
    return 0;
}