// Dados los datos enteros A y B, escriba el resultado 
//de la siguiente expresión: (A + B)^2/3
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

int a, b, add;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Digite el primer numero: ";
	cin>>a;
	cout<<"Digite el segundo numero: ";
	cin>>b;
	add = a+b;
	
	cout<<"El resultado es: "<<pow(add,0.66);
	
	getch();	
}
