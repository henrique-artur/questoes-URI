//tesoura ganha de papel, largato;
//papel ganha de pedra, Spock;
//pedra ganha de largato, tesoura;
//largato ganha de Spock, papel;
//Spock ganha de tesoura, pedra;

#include<iostream>
#include<string>

using namespace std;

string validation(string s1, string s2);

int main(void){
    int i;
    string sheldon, raj;
    
    cin >> i;

    for (int j = 0; j < i; j++)
    {
        cin >> sheldon >> raj;
        cout << "Caso #" << j+1 << ": " << validation(sheldon, raj);   
    }

    return 0;
}

string validation(string s1, string s2){
    if(s1 == "tesoura" && s2 == "papel" || s1 == "tesoura" && s2 == "lagarto"){
        return "Bazinga!\n";
    }
    else if(s2 == "tesoura" && s1 == "papel" || s2 == "tesoura" && s1 == "lagarto"){
        return "Raj trapaceou!\n";
    }
    else if(s1 == "papel" && s2 == "pedra" || s1 == "papel" && s2 == "Spock"){
        return "Bazinga!\n";
    }
    else if(s2 == "papel" && s1 == "pedra" || s2 == "papel" && s1 == "Spock"){
        return "Raj trapaceou!\n";
    }
    else if(s1 == "pedra" && s2 == "lagarto" || s1 == "pedra" && s2 == "tesoura"){
        return "Bazinga!\n";
    }
    else if(s2 == "pedra" && s1 == "lagarto" || s2 == "pedra" && s1 == "tesoura"){
        return "Raj trapaceou!\n";
    }
    else if(s1 == "lagarto" && s2 == "Spock" || s1 == "lagarto" && s2 == "papel"){
        return "Bazinga!\n";
    }
    else if(s2 == "lagarto" && s1 == "Spock" || s2 == "lagarto" && s1 == "papel"){
        return "Raj trapaceou!\n";
    }
    else if(s1 == "Spock" && s2 == "tesoura" || s1 == "Spock" && s2 == "pedra"){
        return "Bazinga!\n";
    }
    else if(s2 == "Spock" && s1 == "tesoura" || s2 == "Spock" && s1== "pedra"){
        return "Raj trapaceou!\n";
    }
    else{
        return "De novo!\n";
    }   
}