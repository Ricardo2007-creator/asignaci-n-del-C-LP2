#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
	
	int salida = 0;
	while(salida == 0){
		string binario;	
		int aco =0, resultado;
		
		cout << "ingrese el numero binario ()" << endl;
		cin >> binario;
		
		int longitud =binario.length();
		
		for (int i=0; i <= longitud; i++){
			if (atoi(binario[i]) == 1){
				
				aco = 1 * pow(2 , (longitud * i));
			}
			
			else if (atoi(binario[i]) == 0){
				
				aco = 0 * pow(2 , (longitud * i));
			}
			
			
			
			resultado = aco + resultado;
		}
		cout << "el numero binario "<< binario << " en numero decimal es "<< resultado << endl;


	}	
}
