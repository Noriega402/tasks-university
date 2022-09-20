#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h> // para funcion Sleep()

using namespace std;

int hora, minuto;
int h;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Digite las horas en formato de 24 hrs: ";
	cin>>hora;
	cout<<"Digite los minutos: ";
	cin>>minuto;	

	if(hora > 24 || hora < 0){
		cout<<"No es una hora valida...";
	}else if(minuto > 60 || minuto < 0){
		cout<<"No es una hora valida...";
	}else{
		cout<<"Convirtiendo a formato de 12 hrs...";
	
		Sleep(2000); //hacer un pausa automatica de 2 segundos y seguir con la ejecucion del programa
		system("cls");
	
		if(hora > 12){
			h = hora-12;
			cout<<h<<":"<<minuto<<" P.M";
		}else{
			h = hora;
			cout<<h<<":"<<minuto<<" A.M";
		}	
	}
	
	getch();
}
