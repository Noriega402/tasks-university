#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

float ft,cm,pulgadas,metros,yardas;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Pies: ";
	cin>>ft;
	
	yardas=ft/3;
	pulgadas=ft*12;
	cm=pulgadas*2.54;
	metros=cm/100;

	system("cls");
	
	cout<<"En yardas: "<<yardas<<endl;
	cout<<"En pulgadas: "<<pulgadas<<endl;
	cout<<"En metros: "<<metros<<endl;
	cout<<"En centimetros: "<<cm;
 
	getch();
}
