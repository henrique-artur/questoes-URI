#include <iostream>

using namespace std;

int main(void){
    int chaCorreto(int tipoCha, int a, int b, int c, int d, int e);
    int tipoCha, a, b, c, d, e;

    cin >> tipoCha;

    cin >> a >> b >> c >> d >> e; 
    cout << chaCorreto(tipoCha, a, b, c, d, e) << endl;

    return 0;
}

int chaCorreto(int tipoCha, int a, int b, int c, int d, int e){
    int certo = 0;
    if(tipoCha == a) certo++;
    if(tipoCha == b) certo++;
    if(tipoCha == c) certo++;
    if(tipoCha == d) certo++;
    if(tipoCha == e) certo++;
    return certo;
}