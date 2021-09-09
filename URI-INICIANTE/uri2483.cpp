#include<iostream>
#include<string>

using namespace std;

int main(void){
    long int felicity;
    string natal = "Feliz nat";

    cin >> felicity;

    for (int i = 0; i < felicity; i++){
        natal += "a";
    }

    cout << natal << "l!\n";
    


    return 0;
}