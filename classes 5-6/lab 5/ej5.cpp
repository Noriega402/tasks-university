#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int numeros[4];
int mayor;
int i,j;

main(){
	system("cls");
	system("color 0F");
	
	for(i = 0; i < 4; i++){
		cout<<"Dame un numero: ";
		cin>>numeros[i];
	}
	
	system("cls");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(numeros[j] > numeros[j+1]){
				mayor = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = mayor;
			}
		}
	}
	
	cout<<"El numero mayor es: "<<numeros[4];
//	for(i = 0; i < 4; i++){
//		cout<<"Posicion["<<i<<"]: "<<numeros[i]<<endl;
//	}
	
	getch();
}
