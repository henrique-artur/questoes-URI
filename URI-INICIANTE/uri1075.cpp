#include<iostream>

using namespace std;

int main(void){
    int num;
    cin >> num;

    for(int i = 0; i < 10000; i++){
        if(i%num == 2){
            cout << i << endl;
        }
    }

    return 0;
}