#include<iostream>
#include<string>

using namespace std;

int main(void){
    unsigned long int n;
    string id;
    while (cin >> n >> id){
        string idGp;
        int idGame;
        long int vezes = 0;
        while (n--){
            cin >> idGp >> idGame;
            if(idGp == id && idGame == 0) vezes++; 
        }
        cout << vezes << endl;
    }
    return 0;
}