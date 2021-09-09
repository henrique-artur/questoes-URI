#include<iostream>

using namespace std;

int main(void){
	int ddd;
	string regiao;
	
	cin >> ddd;
	
	switch(ddd){
		case 61:
			regiao = "Brasilia\n";
		break;
		case 71:
			regiao = "Salvador\n";
		break;
		case 11:
			regiao = "Sao Paulo\n";
		break;
		case 21:
				regiao = "Rio de Janeiro\n";
		break;
		case 32:
			regiao = "Juiz de Fora\n";
		break;
		case 19: 
			regiao = "Campinas\n";
		break;
		case 27:
			regiao = "Belo Horizonte\n";
		break;
		case 31:
			regiao = "Vitoria\n";
		break;
		default:
			regiao = "DDD nao cadastrado\n";
		break; 	
	}
	cout << regiao;
	return 0;	
}
