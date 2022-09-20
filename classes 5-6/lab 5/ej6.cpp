#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int op,minutos;
float pago;

main(){
	system("cls");
	system("color 0F");
	
	do{
		cout<<"-------- MENU --------"<<endl;
		cout<<"12. America del Norte"<<endl;
		cout<<"15. America Central"<<endl;
		cout<<"18. America del Sur"<<endl;
		cout<<"19. Europa"<<endl;
		cout<<"23. Asia"<<endl;
		cout<<"25. Africa"<<endl;
		cout<<"29. Oceania"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Digite la opcion: ";
		cin>>op;
		
		switch(op){
			case 12:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*2;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 15:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*2.55;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 18:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*4.90;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 19:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*3.50;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 23:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*6;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 25:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*7.6;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 29:
				system("cls");
				cout<<"Digite la cantidad de minutos para hablar: ";
				cin>>minutos;
				pago = minutos*5;
				cout<<"El total a pagar es de : Q"<<pago;
				getch();
				system("cls");
			break;
			case 0:
				system("cls");
				cout<<"Saliendo del sistema...";
			break;
			default: 
				cout<<"Error, opcion invalida...";
				getch();
				system("cls");
			
		}
		
	}while(op != 0);
	
	getch();
}
