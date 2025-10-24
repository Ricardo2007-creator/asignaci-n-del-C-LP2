#include <iostream>
using namespace std;
int main(){
	int salida = 0;
	int n1=0,n2=0,n3=0,n4=0;
	
	while(salida == 0){
		int out = 0;
		while (out== 0){
		
		int valor = 0;
		cout << "precio del carro vendido" << endl;
		cout << "ver resultado (oprima 0)" << endl<<endl;	
		cin >> valor;
		
		if (valor < 25000 && valor != 0){
			n1 = n1+1;
		}
		
		else if (valor >= 25000 && valor < 75000){
			n2 = n2+1;
		}
		
		else if (valor >= 75000 && valor < 120000){
			n3 = n3+1;
		}
		else if (valor > 120000){
			n4 = n4+1;
		}
		else{
			out = out + 1;
		}
		
	
		
		}
		cout << "se vendieron " << n1 << " auto de menor precio que 25.000 $" << endl;
		cout << "se vendieron " << n2 << " auto entre los precios de 25.000 $ a 75.000 $" << endl;	
		cout << "se vendieron " << n3 << " auto entre los precios de 75.000 $ a 120.000 $" << endl;
		cout << "se vendieron " << n4 << " auto de mayor precio q 120.000 $" << endl << endl;
		
		cout << "se vendieron en total " << n1 + n2 + n3 + n4 << " carros en total" << endl << endl;
		
		cout << "salir?" << endl;
		cout << "si (ingrese un numero mayor a 0)" << endl;
		cout << "no (ingrese 0)" << endl;
		cin >> salida;
	}	
}
