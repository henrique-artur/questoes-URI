#include <iostream>
#include <string>

using namespace std;

int main(void){
    string s;
    int bit1 = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1'){
            bit1++;
        }
    }
    if(bit1 % 2 != 0)
        s += "1";
    else
        s += "0";

    cout << s << endl;
    
    return 0;
}