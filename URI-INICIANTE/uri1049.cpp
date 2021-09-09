#include<iostream>

using namespace std;

int main(void){
	string filo, classe, alimentacao;
	
	cin >> filo >> classe >> alimentacao;
	
	if(filo == "vertebrado"){
		if(classe == "ave"){
			if(alimentacao == "carnivoro"){
				cout << "aguia\n";
			}
			else if(alimentacao == "onivoro"){
				cout << "pomba\n";
			}
		}
		else if(classe == "mamifero"){
			if(alimentacao == "onivoro"){
				cout << "homem\n";
			}
			else if(alimentacao == "herbivoro"){
				cout << "vaca\n";
			}
		}
	}
	if(filo == "invertebrado"){
		if(classe == "inseto"){
			if(alimentacao == "hematofago"){
				cout << "pulga\n";
			}
			else if(alimentacao == "herbivoro"){
				cout << "lagarta\n";
			}
		}
		else if(classe == "anelideo"){
			if(alimentacao == "hematofago"){
				cout << "sanguessuga\n";
			}
			else if(alimentacao == "onivoro"){
				cout << "minhoca\n";
			}
		}	
	}
}
