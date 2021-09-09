#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
	//entrada
	int diaIni, diaFim;
	int hrIni, minIni, segIni;
	char ini1, ini2;
	int hrFim, minFim, segFim;
	
	printf("Dia ");
	scanf("%d", &diaIni);
	cin >> hrIni >> ini1 >> minIni >> ini2 >> segIni;
	
	printf("Dia ");
	scanf("%d", &diaFim);
	cin >> hrFim >> ini1 >> minFim >> ini2 >> segFim;
	
	//saida
	int dia, min, seg, hora;
	
	if((diaIni < diaFim) && (hrIni = hrFim) &&
	   (minIni = minFim) && (segIni = segFim)){
		dia = diaFim - diaIni;
		hora = 0;
		min = hora;
		seg = min;
		cout << dia << " dia(s)" << endl;
		cout << hora << " hora(s)" << endl;
		cout << min << " minuto(s)" << endl;
		cout << seg << " segundo(s)" << endl;	
	}
	else if(diaIni = diaFim){
		if(hrIni < hrFim){
			dia = 0;
			hora = hrFim - hrIni;
			min = minFim - minIni;
			seg = segFim - segIni;
			cout << dia << " dia(s)" << endl;
			cout << hora << " hora(s)" << endl;
			cout << min << " minuto(s)" << endl;
			cout << seg << " segundo(s)" << endl;		
		}
		else if(hrIni > hrFim){
			dia = 0;
			hora = 0;
			min = minFim - minIni;
			seg = segFim - segIni;
			cout << dia << " dia(s)" << endl;
			cout << hora << " hora(s)" << endl;
			cout << min << " minuto(s)" << endl;
			cout << seg << " segundo(s)" << endl;	
		}
	}
	else if((diaIni < diaFim) && (hrIni > hrFim)){
		dia = diaFim - diaIni - 1;
		hora = hrFim - hrIni + 20;
		min = minFim - minIni;
		seg = segFim - segIni;
		cout << dia << " dia(s)" << endl;
		cout << hora << " hora(s)" << endl;
		cout << min << " minuto(s)" << endl;
		cout << seg << " segundo(s)" << endl;	
	}
		
	return 0;	
} 
