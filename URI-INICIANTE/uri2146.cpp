#include <iostream>

using namespace std;

int main(void){
    int senha;
    while (cin >> senha)
    {
        cout << senha - 1 << endl;
    }
    
    return 0;    
}