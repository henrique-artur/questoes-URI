#include<iostream>
#include<string>

using namespace std;

float apuracao(float array[], float dificult);

int main(void){
    float notas[7];
    int casos;
    float hard;
    cin >> casos;
    string nome;

    cout.precision(2);
    cout.setf(ios::fixed);

    while (casos--){
        cin >> nome;
        cin >> hard;
        for (int i = 0; i < 7; i++){
            cin >> notas[i];
        }
        cout << nome << " " << apuracao(notas, hard) << endl;
    }

    return 0;
}

float apuracao(float array[], float dificult){
    float aux;
    for (int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(array[i] > array[j]){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    array[0] = 0.0;
    array[6] = 0.0;
    aux = 0;
    for(int i = 0; i < 7; i++){
        aux += array[i];
    }

    return aux * dificult;
}