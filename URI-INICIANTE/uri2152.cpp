#include <iostream>

using namespace std;

void horaCerta(int h, int m, int o);

int main(void){
    unsigned int casos, hora, min, ocorencia;

    cin >> casos;

    while (casos--){
        cin >> hora >> min >> ocorencia;
        horaCerta(hora, min, ocorencia);
    }

    return 0;
}

void horaCerta(int h, int m, int o){
    if(o == 1){
        if(h < 10 && m < 10){
            cout << "0" << h << ":0" << m << " - A porta abriu!\n";
        }
        else if(h < 10){
            cout << "0" << h << ":" << m << " - A porta abriu!\n";
        }
        else if(m < 10){
            cout << h << ":0" << m << " - A porta abriu!\n";
        }
        else{
            cout << h << ":" << m << " - A porta abriu!\n";
        }
        
    }
    else{
        if(h < 10 && m < 10){
            cout << "0" << h << ":0" << m << " - A porta fechou!\n";
        }
        else if(h < 10){
            cout << "0" << h << ":" << m << " - A porta fechou!\n";
        }
        else if(m < 10){
            cout << h << ":0" << m << " - A porta fechou!\n";
        }
        else{
            cout << h << ":" << m << " - A porta fechou!\n";
        }
    }   
}