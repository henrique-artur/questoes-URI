#include<iostream>

using namespace std;

int main(void){
    int numTreinos;
    while (cin >> numTreinos){
        double recorde = 0;
        for(int i = 1; i <= numTreinos; i++){
            double t, d;
            cin >> t >> d;
            if(d / t > recorde){
                cout << i << endl;
                recorde = d / t;
            } 
        }
    } 
    return 0;
}