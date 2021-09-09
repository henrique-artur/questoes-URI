#include<iostream>

using namespace std;

int main(void){
    int x, y;

    for(int i = 0; i < 100; i++){
        cin >> x >> y;
        if(x > y){
            cout << "Decrescente\n";
        }
        else if(x < y){
            cout << "Crescente\n";
        }
        else if(x == y){
            break;
        }
    }
    return 0;
}