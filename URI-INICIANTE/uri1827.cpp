#include<iostream>

using namespace std;

int main(){
    int tamanho;
    while (cin >> tamanho)
    {
        int matriz[105][105];
        int i, j, k, l;
        for (i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                matriz[i][j] = 0;
            }
        }
        for(i = 0; i < tamanho; i++){
            matriz[i][i] = 2;
        }
        int d = tamanho - 1;
        for (i = 0, j = d; i < tamanho; i++, j--){
            matriz[i][j] = 3;
        }
        int c = tamanho/3;
        int e = tamanho - 2*c;
        for(i = c, j = 1; j <= e; i++, j++){
            for(k = c, l = 1; l <= e; k++, l++){
                matriz[i][k] = 1;
            }
        }
        int aa;
        tamanho % 2 == 1 ? aa = tamanho/2 : aa = (tamanho/2) - 1;
        matriz[aa][aa] = 4;
        for(int i = 0; i < tamanho; i++){
            for(int j = 0; j < tamanho; j++){
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}