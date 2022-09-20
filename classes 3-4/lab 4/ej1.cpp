//Convertir un valor dado en segundos a horas, minutos, segundos 
//19825segundos = 5horas, 30minutos, 25segundos
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int cantSegundos, horas, minutos, segundos;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Digite los segundos para la conversion: ";
	cin>>cantSegundos;
	horas = cantSegundos/3600;
	minutos = (cantSegundos - (horas*3600))/60;
	segundos = (cantSegundos - (horas*3600+minutos*60));
	cout<<"\n"<<horas<<" horas con "<<minutos<<" minutos y "<<segundos<<" segundos."<<endl;
	
	getch();
}
