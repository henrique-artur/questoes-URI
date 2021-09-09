#include<iostream>

using namespace std;

int main(void){
    int num;
    cin >> num; 
    for(int i = 1; i <= 6; i++){
        if(num%i == 0){
            cout << i << endl;
        }
    }
    return 0;
}