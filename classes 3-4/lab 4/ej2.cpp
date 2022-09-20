#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

float radio, longitud, area;
float const PI = 3.1416;

main(){
	system("cls");
	system("color 0F");
	cout<<"Radio: ";
	cin>>radio;
	
	longitud = 2*PI*radio;
	area = PI*pow(radio,2);
	
	cout<<"Longitud del circulo: "<<longitud<<" centimetros"<<endl;
	cout<<"Area del circulo: "<<area<<" centimetros cuadrados";
	
	getch();
}
