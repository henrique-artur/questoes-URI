#include<iostream>

using namespace std;

int main(){
    double num[6];
    int numPositivo = 0;
    double numSoma = 0;
    double numMedia;
    for(int i = 0; i < 6; i++){
        cin >> num[i];
    }
    for (int i = 0; i < 6; i++){
        if(num[i] > 0){
            numPositivo++; 
            numSoma += num[i];
        }
    }
    numMedia = (double)numSoma/numPositivo;
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << numPositivo << " valores positivos" << endl;
    cout << numMedia << endl;
    return 0;
}