#include <iostream>

using namespace std;

int main(void){
    int num;
    int quadra[105][105];

    cin >> num;

    for(int i = 0; i < num + 1; i++){
        for(int j = 0; j < num + 1; j++){
            cin >> quadra[i][j];
        }
    }

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(quadra[i][j] == 1 && quadra[i][j+1] == 1 || quadra[i+1][j] == 1 && quadra[i+1][j+1] == 1 ||
               quadra[i][j] == 1 && quadra[i+1][j] == 1 || quadra[i][j+1] == 1 && quadra[i+1][j+1] == 1 || 
               quadra[i][j] == 1 && quadra[i+1][j+1] == 1 || quadra[i][j+1] == 1 && quadra[i+1][j] == 1)
                cout << "S";
            else
                cout << "U";
        }
        cout << endl;
    }

    return 0;
}