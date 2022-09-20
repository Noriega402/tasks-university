#include <iostream>
#include <conio.h>

using namespace std;
int num, i, counter, op;

void pedirNumero();
void menu();

main(){
	system("cls");
	system("color 0F");
	
	
	while(op != 2){
		pedirNumero();
		getch();
		system("cls");
		menu();
		system("cls");
	}
	
	
	getch();
}

void pedirNumero(){
	cout<<"Digite un numero: "; cin>>num;
	
	for(i = 1; i <= num; i++){
		if(num% i == 0){
			counter++;
		}
	}
	
	if(counter > 2) cout<<"No es primo"<<endl;
	else cout<<"Primo"<<endl;
}

void menu(){
	cout<<"Deseas verificar otro numero?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cout<<"Opcion: ";
	cin>>op;
}
