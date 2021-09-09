#include<iostream>

using namespace std;

int main(void){
    int n;
    int x[100], y[100];
    double div[100];
    cin >> n;
    for(int i = 0; i < n; n++){
        cin >> x[i] >> y[i];
        div[i] = (double)x[i]/y[i];
    }
    for(int j = 0; j < n; j++){
        if(y[j] == 0){
            cout << "divisao impossivel\n";
        }
        else{
            cout << div[j] << endl;
        }
    }
    return 0;
}