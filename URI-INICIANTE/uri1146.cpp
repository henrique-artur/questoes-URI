#include<iostream>

using namespace std;

int main(void){
    void crescente(int n);
    int num;
    for(int i = 0; i < 100; i++){
        cin >> num;
        if(num == 0){
            cout << endl;
            break;
        }
        crescente(num);
    }

    return 0;
}
void crescente(int n){
    for(int i = 1; i <= n; i++){
        if(i <= n - 1){
            cout << i << " ";
        }
        else if(i == n){
            cout << i << endl;
        }
    }
}