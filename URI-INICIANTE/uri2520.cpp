#include<iostream>
#include<math.h>

using namespace std;

int main(void){
    int linha, coluna;
    while (cin >> linha >> coluna){
        int matriz[105][105] = {0}, a = 0, b = 0, c = 0, d = 0;
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                cin >> matriz[i][j];
                if(matriz[i][j] == 1) a = i, b = j;
                if(matriz[i][j] == 2) c = i, d = j;  
            }
        }
        int res = 0;
        res = abs(d-b) + abs(c-a);
        cout << res << endl;
    }
    return 0;
}