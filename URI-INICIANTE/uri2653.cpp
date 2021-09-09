#include<iostream>
#include<set> 
#include<string>

using namespace std;

int main(void){ 
    set<string> joias;
    string joia;
    while(cin >> joia){
        joias.insert(joia);
    }
    cout << joias.size() << endl;
    return 0;
}