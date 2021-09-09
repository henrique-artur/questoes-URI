#include <iostream>

using namespace std;

int main(void){
    unsigned short linha, coluna, lin = 0, col = 0;
    short campo[1005][1005];
    
    cin >> linha >> coluna;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> campo[i][j];
        }
    }   
    
	for(int k = 0; k < linha; k++){
        for(int l = 0; l < coluna; l++){
            if(campo[k][l] == 42){
                if(campo[k-1][l-1] == 7 && campo[k-1][l] == 7 
				   && campo[k-1][l+1] == 7 && campo[k][l-1] == 7 
                   && campo[k][l+1] == 7 && campo[k+1][l-1] == 7 
                   && campo[k+1][l] == 7 && campo[k+1][l+1] == 7){
                	lin = k;
                	col = l;
                }
            }            
        }
    }
    if(lin == 0 && col == 0)
        cout << lin << " " << col << endl;
    else
        cout << lin+1 << " " << col+1 << endl;

    return 0;
}

