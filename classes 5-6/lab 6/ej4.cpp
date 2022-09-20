#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int n;
float resultado,contador;

void operacion(); //realizar operacion
void error(); // mostrar error

main(){
	system("cls");
	system("color 0F");
	
	resultado = 0;
	
	do{
		cout<<"Ingrese un numero entero positivo: ";
		cin>>n;
	
		if(n <= 0){
			error();
		}else{
			operacion();
			cout<<"Resultado: "<<resultado;
		}
		
	}while(n <= 0);
	
	getch();
}

void error(){
	cout<<"Error, no es un numero entero positivo...";
	getch();
	system("cls");
}

void operacion(){
	contador = n;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){ // -i/n
			resultado = resultado - (i/contador);
			contador -= 1;
		}else{ // +i/n
			resultado = resultado + (i/contador);
			contador -= 1;
		}	
	}
}
