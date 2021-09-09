#include<iostream>
#include<string>

using namespace std;

int main(void){
    string tweet;

    getline(cin, tweet);
    if(tweet.length() <= 140)
        cout << "TWEET\n";
    else
        cout << "MUTE\n";
    return 0;
}