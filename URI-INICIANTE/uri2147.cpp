#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void){
    int casos;
    char texto[10001];
    float result = 0.01f;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> casos;
    getchar();
    while (casos--){
        cin.getline(texto, 10001);
        cout << strlen(texto) * result<< endl;
    }
    return 0;
}