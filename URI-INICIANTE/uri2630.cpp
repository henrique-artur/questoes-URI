#include<iostream>
#include<string>

using namespace std;

int getMin(int a, int b, int c);
int getMax(int a, int b, int c);
int getEye(int a, int b, int c);

int main(){
    int teste;
    cin >> teste;
    cin.ignore();
    int i = 1;
    while(teste--){
        string modo;
        int r, g, b;
        cin >> modo;
        cin >> r >> g >> b;
        if(modo == "eye"){
            cout << "Caso #" << i << ": " << getEye(r, g, b) << endl; 
        }
        else if(modo == "mean"){
            cout << "Caso #" << i << ": " << (r + g + b)/3 << endl;
        }
        else if(modo == "min"){
            cout << "Caso #" << i << ": " << getMin(r, g, b) << endl;
        }
        else if(modo == "max"){
            cout << "Caso #" << i << ": " << getMax(r, g, b) << endl;
        }
        i++;
    }
    return 0;
}

int getMin(int a, int b, int c){
    if(a < b && a < c){
        return a;
    }
    else if(b < c){
        return b;
    }
    else{
        return c;
    }  
}

int getMax(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > c){
        return b;
    }
    else{
        return c;
    }  
}

int getEye(int a, int b, int c){
    return (int) ((a * 0.30) + (0.59 * b) + (0.11 * c));
}