#include <iostream>

using namespace std;

int main(void){
    int casos, numPessoas;
    cin >> casos;
    do{
        for(int i = 1; i <= casos; i++){
            cin >> numPessoas;
            if(numPessoas % 2 == 0)
            {
                cout << 2 * numPessoas - 2 << endl;
            }
            else
            {
                cout << numPessoas / 2 * 4 + 1 << endl; 
            }
        }
        cin >> casos;
    } while (casos != 0);
    
    return 0;
}