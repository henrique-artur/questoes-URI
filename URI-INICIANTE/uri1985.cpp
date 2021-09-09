#include <iostream>

using namespace std;

int main(void){
    float cardapio(int produto[], int pedido, int quantidade[]);
    int pedido, produto[10] = {0}, qtd[10] = {0};

    cout.precision(2);
    cout.setf(ios::fixed);
    cin >> pedido;
    for (int i = 0; i < pedido; i++){
        cin >> produto[i] >> qtd[i];
    }
    cout << cardapio(produto, pedido, qtd) << endl;
    return 0;
}

float cardapio(int produto[], int pedido, int quantidade[]){
    int i = 0;
    double total = 0;
    while (i < pedido){
        if(produto[i] == 1001) total += 1.50 * quantidade[i];
        if(produto[i] == 1002) total += 2.50 * quantidade[i];
        if(produto[i] == 1003) total += 3.50 * quantidade[i];
        if(produto[i] == 1004) total += 4.50 * quantidade[i];
        if(produto[i] == 1005) total += 5.50 * quantidade[i];
        i++;
    }
    return total;
}