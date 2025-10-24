#include <iostream>
using namespace std;
int main(){
	// para que funcione el bucle
	int salida = 0;
	while(salida == 0){
	// valores se igualan a cero para la siguiente reproducion de estos valores
		int valor =0,comprovante=0;
		
		// mostar en patalla que ingrese un numero
		
		cout << " ingrese el numero que quiere verificar"<< endl;	
		cin >> valor;
		
		// identificador y acumulador de los divisores del numero dado
		for (int i=1; i < valor -1 ; i++){
			
			if (valor % i == 0){
				
				comprovante = comprovante + i;
				
			}	
		}
		
		// comprobante de el numero perfecto
		
		if (comprovante == valor){
			cout << endl << "el numero " << valor <<" es un numero perfecto"<< endl << endl;
			
		}
		
		else{
			cout << endl << "el numero " << valor <<"  no es un numero perfecto"<< endl << endl;
		}
		 // para salir del bucle
		cout << "salir?" << endl;
		cout << "si (ingrese un numero mayor a 0)" << endl;
		cout << "no (ingrese 0)" << endl;
		cin >> salida;
	}	
}
