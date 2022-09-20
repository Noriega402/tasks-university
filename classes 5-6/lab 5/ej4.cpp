#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>//funcio Sleep()

using namespace std;

float trabajoValor, salario;
int horasTrabajo;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Digite el valor por hora de trabajo: ";
	cin>>trabajoValor;
	cout<<"Digite las horas trabajadas de la semana del empleado: ";
	cin>>horasTrabajo;
	cout<<"Calculando salario, espere...";
	
	Sleep(2000);//hacer un pausa automatica de 2 segundos y seguir con la ejecucion del programa
	system("cls");
	
	if(horasTrabajo < 38){
		salario = horasTrabajo*trabajoValor;
		cout<<"No tiene horas extras de trabajo."<<endl;
		cout<<"--------- SALARIOS -------- "<<endl;
		cout<<"Por semana: Q"<<salario;
		cout<<"Por quincena: Q"<<salario*2;
		cout<<"Mensual: Q"<<salario*4;
	}else{
		salario = horasTrabajo*trabajoValor*0.50;
		cout<<"Si tiene horas extras de trabajo da un aumento de 50%."<<endl;
		cout<<"--------- SALARIOS -------- "<<endl;
		cout<<"Por semana: Q"<<salario<<endl;
		cout<<"Por quincena: Q"<<salario*2<<endl;
		cout<<"Mensual: Q"<<salario*4<<endl;
	}
	
	getch();
}
