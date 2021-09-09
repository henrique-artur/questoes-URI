#include <iostream>

using namespace std;

int main(void){
    void valorGolpe(int bonus, int aD, int dD, int lD, int aG, int dG, int lG);
    int casos, bonus, ataqueDabriel, defesaDabriel, levelDabriel, ataqueGuarte, defesaGuarte, levelGuarte;
    cin >> casos;
    while (casos--){
        cin >> bonus;
        cin >> ataqueDabriel >> defesaDabriel >> levelDabriel;
        cin >> ataqueGuarte >> defesaGuarte >> levelGuarte;
        valorGolpe(bonus, ataqueDabriel, defesaDabriel, levelDabriel, ataqueGuarte, defesaGuarte, levelGuarte);
    }

    return 0;
}
void valorGolpe(int bonus, int aD, int dD, int lD, int aG, int dG, int lG){
    int golpeD = (aD + dD) / 2;
    int golpeG = (aG + dG) / 2;
    if(lD%2 == 0)
        golpeD += bonus;
    if(lG%2 == 0)
        golpeG += bonus;
    if(golpeG > golpeD)
    {
        cout << "Guarte\n";
    }
    if(golpeD > golpeG)
    {
        cout << "Dabriel\n";
    }
    if(golpeD == golpeG)
    {
        cout << "Empate\n";
    }
}