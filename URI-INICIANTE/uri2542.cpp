#include<iostream>

using namespace std;

int main(void){
    int numAtributos;
    while(cin >> numAtributos){
        int cMarcos, cLeo;
        unsigned long long int atribMarcos[105][105], atribLeo[105][105]; 
        cin >> cMarcos >> cLeo;
        for(int i = 0; i < cMarcos; i++){
            for(int j = 0; j < numAtributos; j++){
                cin >> atribMarcos[i][j];
            }
        }
        for(int i = 0; i < cLeo; i++){
            for(int j = 0; j < numAtributos; j++){
                cin >> atribLeo[i][j];
            }
        }
        int escMarcos, escLeo, escAtributo;
        cin >> escMarcos >> escLeo;
        cin >> escAtributo;
        if(atribMarcos[escMarcos - 1][escAtributo - 1] > atribLeo[escLeo - 1][escAtributo - 1]){
            cout << "Marcos\n";
        }
        else if(atribMarcos[escMarcos - 1][escAtributo - 1] < atribLeo[escLeo - 1][escAtributo - 1]){
            cout << "Leonardo\n";
        }
        else
        {
            cout << "Empate\n";
        }
    }
    return 0;
}