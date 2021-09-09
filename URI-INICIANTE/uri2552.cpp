#include<iostream>

using namespace std;

int preencher(int matriz[105][105], int i, int j, int linha, int coluna);

int main(void){
    int linha, coluna;
    while(cin >> linha >> coluna){
        int tabuleiro[105][105] = {0};
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                cin >> tabuleiro[i][j];
            }
        }
        for(int i = 0; i < linha; i++, cout << endl){
            for(int j = 0; j < coluna; j++){
                tabuleiro[i][j] == 1 ? cout << "9" : cout << preencher(tabuleiro, i, j, linha, coluna); 
            }
        }
    }
    return 0;
}

int preencher(int matriz[105][105], int i, int j, int linha, int coluna){
    int p = 0;
    int l = linha - 1;
    int c = coluna - 1;
    if (i > 0 && matriz[i - 1][j] == 1) p++;
    if (i < l && matriz[i + 1][j] == 1) p++;
    if (j > 0 && matriz[i][j - 1] == 1) p++;
    if (j < c && matriz[i][j + 1] == 1) p++;
    return p;
}