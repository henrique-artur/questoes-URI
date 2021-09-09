#include<iostream>

using namespace std;

int main(void){
    double num;
    double vetor[101];
    
    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> num;
    vetor[0] = num;
    cout << "N[0] = " << num << endl;
    int i = 1;
    while (i <= 99){
        vetor[i] = vetor[i-1] / 2;
        cout << "N[" << i << "] = " << vetor[i] << endl;
        i++;
    }
    
    return 0;
}