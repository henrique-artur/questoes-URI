#include<iostream>
#include<math.h>

using namespace std;

int main(void){
    unsigned long int ninja, resultado;
    while(cin >> ninja){
        if(ninja == 1){
            cout << 0 << endl;
        }
        else{
            for(int i = 0; i < ninja; i++){
                resultado = (unsigned long long int)pow(2,i);
                if(resultado == ninja){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}