#include<cstdio>

int main(void){
    char mensagem[30];
    int nLamp, lamp;

    while(scanf("%s", mensagem) != EOF){
        scanf("%d", &nLamp);

        while(nLamp--){
            scanf("%d", &lamp);
            printf("%c", mensagem[lamp-1]);
        }
        printf("\n");
    }
    return 0;
}
