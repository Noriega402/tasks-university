// Dado el radio y la altura de un cilindro, calcule su área y su volumen.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

float const PI = 3.1416;
float area, volumen, radio, altura;

main(){
	system("cls");
	system("color 0F");
	cout<<"Calcular el area y volumen de un cilindro"<<endl;
	cout<<"Digite el radio: ";
	cin>>radio;
	cout<<"Digite la altura: ";
	cin>>altura;
	
	area = PI*pow(radio,2);
	volumen = area*altura;
	
	cout<<"\n\nArea: "<<area<<" cm cuadrados."<<endl;
	cout<<"Volumen: "<<volumen<<" cm cubicos."<<endl;
	
	getch();
}
