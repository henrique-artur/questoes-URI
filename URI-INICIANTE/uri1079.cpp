#include<iostream>

using namespace std;

int main(void){
    int n;
    double num[1005][3];
    double media[1005];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> num[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 1; j++){
            media[i] = ((num[i][j] * 2) + (num[i][j+1] * 3) + (num[i][j+2] * 5))/10;
        }
    }
    cout.precision(1);
    cout.setf(ios::fixed);
    
    for(int i = 0; i < n; i++){
        cout << media[i] << endl;
    }
    return 0;
}