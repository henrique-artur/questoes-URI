#include<iostream>
#include<string>

using namespace std;

int main(void){
    string dodo, leo, pepper;
    while (cin >> dodo >> leo >> pepper){
        if(dodo == "papel" && leo == "papel" && pepper == "tesoura") 
            cout << "Urano perdeu algo muito precioso...\n";
        else if(dodo == "papel" && leo == "pedra" && pepper == "pedra") 
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        else if(dodo == "papel" && leo == "tesoura" && pepper == "papel")
            cout << "Iron Maiden's gonna get you, no matter how far!\n";
        else if(dodo == "pedra" && leo == "papel" && pepper == "pedra")
            cout << "Iron Maiden's gonna get you, no matter how far!\n";
        else if(dodo == "pedra" && leo == "pedra" && pepper == "papel")
            cout << "Urano perdeu algo muito precioso...\n";
        else if(dodo == "pedra" && leo == "tesoura" && pepper == "tesoura")
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        else if(dodo == "tesoura" && leo == "papel" && pepper == "papel")
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        else if(dodo == "tesoura" && leo == "pedra" && pepper == "tesoura")
            cout << "Iron Maiden's gonna get you, no matter how far!\n";
        else if(dodo == "tesoura" && leo == "tesoura" && pepper == "pedra")
            cout << "Urano perdeu algo muito precioso...\n";
        else 
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
    }
    return 0;
}

