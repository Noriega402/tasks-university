#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int count;
char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Imprimiendo el alfabeto de forma inversa"<<endl;
	
	count = sizeof(alphabet)/sizeof(alphabet[0]);
	
	for(int i = count; i >= 0; i--){
		cout<<"\t"<<alphabet[i]<<endl;
	}
	
	getch();
}
