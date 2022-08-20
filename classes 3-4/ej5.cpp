// Escriba un programa en donde, dado como dato una cantidad de dinero 
// expresada en dólares, la convierte a Quetzales. 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

float dolares, quetzales;
const float cambio = 7.73;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Ingrese el monto en dolares: ";
	cin>>dolares;
	
	if(dolares <= 0)
		cout<<"No ingresaste una cantidad valida de dinero";
	
	quetzales = dolares*cambio;
	
	cout<<"Total en quetzales: "<<quetzales;
	
	getch();
}
