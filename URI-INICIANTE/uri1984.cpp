#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    unsigned long long num;
    string text;
    stack <char> descript;
    
    cin >> num;
    
    text = to_string(num);
    for(int i = 0; i < text.size(); i++)
    {
        descript.push(text[i]);
    }

    while (!descript.empty())
    {
        cout << descript.top();
        descript.pop();
    }
    cout << endl;

    return 0;
}