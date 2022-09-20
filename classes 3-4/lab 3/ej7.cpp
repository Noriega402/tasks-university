#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int kilometros;
int horas;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Distancia en kilometros: ";
	cin>>kilometros;
	cout<<"Horas recorridas: ";
	cin>>horas;
	cout<<"La velocidad de los corredores es de: "<<kilometros/horas<<" km/h";
	
	getch();
}
