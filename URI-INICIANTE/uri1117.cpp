#include<iostream>

using namespace std;

int main(void){
    double nota[100], notaSoma = 0, media;
    int valida = 0;
    for(int i = 0; i < 100; i++){
        cin >> nota[i];

        if(nota[i] >= 0.0 && nota[i] <= 10.0){
            notaSoma += nota[i];
            valida++;
            if(valida == 2){
                break;
            }
        }
        else{
            cout << "nota invalida\n";
        }
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    media = notaSoma/2;
    cout << "media = " << media << endl;

    return 0;
}