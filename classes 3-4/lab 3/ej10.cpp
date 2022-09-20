#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h> // lib para funcion Sleep() en windows

using namespace std;

char dinosaurio[40];
float kg, mts;
float const PIES = 3.28;
float const TONELADA = 1000;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Ingrese el nombre del Dinosaurio: ";
	cin.getline(dinosaurio,40,'\n');
	cout<<"Digite su peso en kilogramos:";
	cin>>kg;
	cout<<"Digite la longitud del dinosaurio (en metros): ";
	cin>>mts;
	cout<<"Calculando espere...";
	Sleep(3000); //tiempo de espera
	system("cls");
	
	cout<<"Nombre Dinosaurio: "<<dinosaurio<<endl;
	cout<<"Peso en toneladas: "<<kg/TONELADA<<endl;
	cout<<"Longitud en pies: "<<mts*PIES<<endl;
	getch();
}
