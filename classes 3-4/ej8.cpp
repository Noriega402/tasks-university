// El programa, dados como datos dos n�meros reales, calcular�
// la suma, la resta y multiplicaci�n de dichos n�meros. 
// Considere 2 d�gitos significativos para su respuesta.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

float x, y;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Dame el primer numero: "; 
	cin>>x;
	cout<<"Dame el segundo numero: "; 
	cin>>y;
	
	cout<<"\nSuma: "<<x+y<<endl;
	cout<<"Resta: "<<x-y<<endl;
	cout<<"Multiplicacion: "<<x*y;
	
	getch();
}
