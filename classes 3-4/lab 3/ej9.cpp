#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

float galones, pago;
float precio = 32.45;

main(){
	system("cls");
	system("color 0F");
	cout<<"Galones: ";
	cin>>galones;
	pago = precio * galones;
	cout<<"Total a pagar: "<<pago<<endl;
	
	getch();
}
