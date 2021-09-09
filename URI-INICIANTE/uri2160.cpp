#include <iostream>
#include <string>

using namespace std;

int main(void){
    string nome;
    getline(cin, nome);
    if(nome.length() > 80)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}