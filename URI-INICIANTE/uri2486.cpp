#include <iostream>
#include <string>

using namespace std;

int valorFruta(string fruta);

int main(void){
    int consumo, qtd = 0, valorTot = 0;
    string fruta;

    while (cin >> consumo){
        if(consumo == 0) break;
        else{
            while (consumo--){
                cin >> qtd;
                cin.ignore();
                getline(cin, fruta);
                valorTot = valorTot + qtd * valorFruta(fruta);
            }
            if(valorTot > 130) cout << "Menos " << valorTot - 130 << " mg" << endl;
            else if (valorTot < 110) cout << "Mais " << 110 - valorTot << " mg" << endl;
            else cout << valorTot<< " mg" << endl;
        }
        valorTot = 0;
    }
    

    return 0;
}

int valorFruta(string fruta){
    if(fruta == "suco de laranja") return 120;
    if(fruta == "morango fresco") return 85;
    if(fruta == "mamao") return 85;
    if(fruta == "goiaba vermelha") return 70;
    if(fruta == "manga") return 56;
    if(fruta == "laranja") return 50;
    if(fruta == "brocolis") return 34;
}