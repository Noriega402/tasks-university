// Los datos A, B, C y D representan números enteros, escriba los mismos en 
// orden inverso. 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int valores[] = {1,2,3,4}; // declarar e inicializar el array

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Imprimiendo datos en orden inverso"<<endl;
	for(int i = 3; i >= 0; i--){
		cout<<valores[i]<<endl;
	}
	
	getch();
}
