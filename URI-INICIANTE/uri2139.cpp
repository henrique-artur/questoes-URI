#include<iostream>

using namespace std;

int main(){
    int mes, dia, i, j;
    int array[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    
    while (cin >> mes >> dia){
        if(mes == 12 && dia == 25){
            cout << "E natal!\n";
        }
        else if(mes == 12 && dia > 25){
            cout << "Ja passou!\n";
        }
        else if(mes == 12 && dia == 24){
            cout << "E vespera de natal!\n";
        }
        else{
            j = array[mes-1] - dia;
            for (i = mes; i < 12; i++){
                j += array[i];
            }
            cout << "Faltam " << j << " dias para o natal!\n";   
        }
    }
    return 0;
}