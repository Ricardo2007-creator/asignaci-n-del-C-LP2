//Ricardo Millan,Gabriel Lisboa Seccion A
/*Escriba un programa que permita generar tablas de multiplicar, a partir de un rango (n hasta n) de multiplicando y rango (n hasta n) de
de multiplicadores ingresados por el usuario*/
#include <iostream>
using namespace std;
int main(){
int salida = 0;
while(salida == 0){
int m1=0,m2=0,m3=0,m4=0;
cout<<"Empieze su Rango de Multiplicando"<<endl;
cin>>m1;

cout<<"Termine el Rango de Multiplicando"<<endl;
cin>>m2;

cout<<"Empieze su Rango de Multiplicadores"<<endl;
cin>>m3;

cout<<"Termine el Rango de Multiplicadores"<<endl;
cin>>m4;

    for (int i = m1; i <= m2; i++){
			for (int a = m3; a <= m4; a++){
				cout<<"La Multiplicacion de "<< i << " x "<< a << " es igual a "<< i*a <<endl;
			}
		}
cout<<"salir?"<<endl;
cout<<"si (1)"<<endl;
cout<<"no (0)"<<endl;
cin>>salida;
}

}

