#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

int xSub1, xSub2, ySub1, ySub2;
int v1, v2, add;
float distancia;

main(){
	system("cls");
	system("color 0F");
	
	// P1
	cout<<"Digite la coordenada X1: ";
	cin>>xSub1;
	cout<<"Digite la coordenada Y1: ";
	cin>>ySub1;
	
	//P2
	cout<<"Digite la coordenada X2: ";
	cin>>xSub2;
	cout<<"Digite la coordenada Y2: ";
	cin>>ySub2;
	
	v1 = pow(xSub2-xSub1,2);
	v2 = pow(ySub2-ySub1,2);
	add = v1 + v2;
	distancia = sqrt(add);
	
	cout<<"\nLa distancia entre los puntos es: "<<distancia;
	
	getch();
}
