#include<stdio.h>

using namespace std;

int main(void){
    unsigned long long int patin = 0;

    while (true){
        scanf("%llu", &patin);
        
        if(patin == -1){ 
            break;
        }
        else { 
            printf("%llu\n", (patin != 0 ? patin - 1 : patin));
        }
    }
    return 0;
}