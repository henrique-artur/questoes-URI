#include <iostream> 

using namespace std;

int main(void){
    int quedaDeVel(int rpm[], int c);
    int casos;
    int rpm[105] = {0};
    
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> rpm[i];
    }
    cout << quedaDeVel(rpm, casos) << endl;

    return 0;
}
int quedaDeVel(int rpm[], int c){
    int queda = 0;
    for(int i = 0; i < c - 1; i++)
    {
        if(rpm[i] > rpm[i+1]){
            queda = i+2;
            break;
        }
    }
    return queda;
}