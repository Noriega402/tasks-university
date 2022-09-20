#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // para funcion Sleep()

using namespace std;

float nota[5];
float promedio, acumulador;
int i;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"------- INGRESO DE NOTAS -------"<<endl;
	for(i = 0; i < 5; i++){
		cout<<"Nota "<<i+1<<": ";
		cin>>nota[i];
		acumulador += nota[i];
	}
	
	promedio = acumulador/5;
	cout<<"Calculando promedio de notas..."<<endl;
	cout<<"Espere..."<<endl<<endl;
	Sleep(2000);//hacer un pausa automatica de 2 segundos y seguir con la ejecucion del programa
	
	if(promedio >= 0 && promedio <= 60){
		cout<<"Reprobado";
	}
	if(promedio >= 61 && promedio <= 70){
		cout<<"Aprobado";
	}
	if(promedio >= 71 && promedio <= 80){
		cout<<"Notable";
	}
	if(promedio >= 81 && promedio <= 90){
		cout<<"Sobresaliente";
	}
	if(promedio >= 91 && promedio <= 100){
		cout<<"Excelente";
	}
	
	getch();
}
