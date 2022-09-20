#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

float celsius, temp;

main(){
	system("cls");
	system("color 0F");
	cout<<"Temperatura en Centigrados: ";
	cin>>celsius;
	temp = (celsius*1.8)+32;
	
	cout<<"La temperatura en fahrenheit es de: "<<temp;
	
	getch();
}
