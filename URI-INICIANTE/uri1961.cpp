#include<iostream>

using namespace std;

int main(void){
    bool jogoPulaSapo(int p, int n, int altCano[]);
    int i = 0, altPulo, numCanos;
    
    cin >> altPulo >> numCanos;
    int altCano[105] = {0};

    for (i = 0; i < numCanos; i++){
        cin >> altCano[i];
    }
    if(jogoPulaSapo(altPulo, numCanos, altCano) == 1)
        cout << "GAME OVER\n";
    else
        cout << "YOU WIN\n";
    
    return 0;
}

bool jogoPulaSapo(int p, int n, int altCano[]){
    int loser = 0;
    for (int i = 0; i < n; i++){
        if(altCano[i+1] == 0){
            break;
        }
        else if(p + altCano[i] < altCano[i+1]){
            loser++;
        }
        else if(altCano[i] > altCano[i+1]){
            if(altCano[i] - p > altCano[i+1])
                loser++;
        }
        
    }
    if (loser > 0){
        return true;
    }
    else{
        return false;
    } 
}