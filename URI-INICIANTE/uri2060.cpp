#include <iostream>

using namespace std;

int main(void){
    void multiplus(int list[], int n);
    int num;
    int lista[1005] = {0};
    
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> lista[i];
    }
    multiplus(lista, num);
    
    return 0;
}

void multiplus(int list[], int n)
{
    int m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    for(int i = 0; i < n; i++){
        if(list[i] % 2 == 0)
            m2++;
        if(list[i] % 3 == 0)
            m3++;
        if(list[i] % 4 == 0)
            m4++;
        if(list[i] % 5 == 0)
            m5++;
    }
    cout << m2 << " Multiplo(s) de 2\n"
         << m3 << " Multiplo(s) de 3\n"
         << m4 << " Multiplo(s) de 4\n"
         << m5 << " Multiplo(s) de 5\n";
}