#include <iostream>

using namespace std;

int main(void){
    unsigned int casos, anos; 
    int dif = 0;

    cin >> casos;
    
    for(int i = 0; i < casos; i++){
        cin >> anos;
        dif = anos - 2015;
        
        if(dif > 0) cout << dif + 1 << " A.C.\n";
        else if(dif < 0) cout << -dif << " D.C.\n";
        else cout << "1 A.C.\n";
    }
    return 0;
}