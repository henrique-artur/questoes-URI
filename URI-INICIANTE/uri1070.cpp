#include<iostream>

using namespace std;

int main(void){
    int n;

    cin >> n;
    if(n%2 == 0){
        n += 1;
    }
    for(int i = n; i < n+12; i++){
        if(i%2 == 1){
            cout << i << endl;
        }
    }
    return 0;
}