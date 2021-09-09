#include<stdio.h>

int main(void){
    unsigned int A, B;
    while(scanf("%u %u", &A, &B) != EOF){
        printf("%u\n", (A^B));
    }
    return 0;
}