#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int a,b;

void getData();
int validation(int a, int b);
int modulo(int x, int y);

main(){
	system("cls");
	system("color 0F");
	
	getData();
	
	getch();
	
}

void getData(){
	cout<<"Dame un numero: ";
	cin>>a;
	cout<<"Dame otro numero: ";
	cin>>b;
	validation(a,b);
}
int validation(int a,int b){
	if(modulo(a,b) == true){
		cout<<"Si es divisible entre ambos numeros!";
	}else{
		cout<<"No son divisibles entre si...";
	}
}
int modulo(int x,int y){
	if(x % y == 0 && y % x == 0){
		return 1;
	}else{
		return 0;
	}
}
