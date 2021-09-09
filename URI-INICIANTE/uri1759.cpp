#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
    int num;
    
    cin >> num;

    int i = 0;

    while (i >= num-1){
        printf("Ho ");          
        i++;
    }
    printf("Ho!\n");
    
    return 0;
}