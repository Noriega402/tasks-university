#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float nota;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Ingrese la nota final del alumno: ";
	cin>>nota;
	
	if(nota > 60 && nota <= 100)
		cout<<"Aprobado";
	else if(nota <= 60 && nota >= 0)
		cout<<"Reprobado";
	else
		cout<<"No es una nota valida";

	getch();
}
