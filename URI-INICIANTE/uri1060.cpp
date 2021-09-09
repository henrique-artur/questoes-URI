#include<iostream>

using namespace std;

int main(void){
	double num[6];
	int cont;
	for(int i = 0; i < 6; i++){
		cin >> num[i]; 
	}
	for(int j = 0;j < 6; j++){
		if(num[j] > 0){
			cont = cont+1;
		}
	}
	cout << cont << " valores positivos" << endl;
}
