#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int arr[24];
int num;
int aux;

void getNumbers();
bool validation(int num, int i);
void viewNumbers();

main(){
	system("cls");
	system("color 0F");
	
	getNumbers();
	cout<<"Presiona una tecla para continuar...";
	getch();
	system("cls");
	viewNumbers();
	
	getch();
}

bool validation(int num, int i){
	for(int j = 0; j < i; j++){
		if(num == arr[j]){
			return true;
		}
	}
	return false;
}

void getNumbers(){
	for(int i = 0; i < 24; i++){
		cout<<"Index ["<<i<<"]: ";
		cin>>num;
		
		while(validation(num, i)){
			cout<<"Este numero ya existe dentro del array..."<<endl;
			cout<<"Index ["<<i<<"]: ";
			cin>>num;
		}
		arr[i] = num;
	}
}

void viewNumbers(){
	cout<<"Numeros dentro del arreglo sin repetir..."<<endl;
	for(int i = 0; i < 24; i++){
		cout<<arr[i]<<" ";
	}
}
