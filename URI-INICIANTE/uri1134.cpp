#include<iostream>

using namespace std;

int main(void){
    int combustiveis[1005];
    int alcool = 0, diesel = 0, gasolina = 0;
    for(int i = 0; i < 1005; i++){
        cin >> combustiveis[i];
        if(combustiveis[i] == 4){
            break;
        }
        else if(combustiveis[i] == 1){
            alcool += 1;
        }
        else if(combustiveis[i] == 2){
            gasolina += 1;
        }
        else if(combustiveis[i] == 3){
            diesel += 1;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}