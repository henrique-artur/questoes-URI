#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    int n, m;
    string orignalIput, result;
    string s1, s2;
    while(cin >> n >> m){
        map<char, int> st1, st2;
        cin.ignore();
        getline(cin, s1);
        getline(cin, s2);
        for(int j = 0; j < n; j++){
            st1.insert(pair<char, int>(s1[j], j));
            st2.insert(pair<char, int>(s2[j], j));
        }
        int index;
        while(m--){
            getline(cin, orignalIput);
            for(int i = 0; i < orignalIput.length(); i++){
                char ch = toupper(orignalIput[i]);
                if(st1.count(ch) == 0 && st2.count(ch) == 0){
                    result += orignalIput[i];
                }
                else if(st1.count(ch) != 0){
                    index = st1.find(ch) -> second;
                    result += !isupper(orignalIput[i]) ? (char) tolower(s2[index]) : s2[index];
                }
                else if(st2.count(ch) != 0){
                    index = st2.find(ch) -> second;
                    result += !isupper(orignalIput[i]) ? (char) tolower(s1[index]) : s1[index];
                }
            }
            cout << result << endl;
            result.clear();
        }
        cout << endl;
    }
    return 0;
}