//Ricardo Millan,Gabriel Lisboa Seccion A
//Realice un programa que calcule todos los numeros primos en un rango que ingrese el usuario
#include <iostream>
using namespace std;
int main(){
int salida = 0;
while(salida == 0){
int p1,p2,esPrimo;

cout<<"Ingrese el Comienzo de su Rango"<<endl;
cin>>p1;

cout<<"Ingrese el final de su Rango"<<endl;
cin>>p2;



for (int i = p1; i <= p2; ++i){
	if (esPrimo%i == 0){
	cout <<"los numeros en el rango son :"<< endl;
	}
}

cout<<"salir?"<<endl;
cout<<"si (1)"<<endl;
cout<<"no (0)"<<endl;
cin>>salida;
}

}
