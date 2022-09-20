#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int random, num, aux;
int arr[10];

void contar(int arr[],int size, int num);
void drop(int arr[], int size, int num);

main(){
	system("cls");
	system("color 0F");
	
	for(int i = 0; i < 10; i++){
		cout<<"Index ["<<i<<"]: ";
		cin>>arr[i];
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10-1; j++){
			if(arr[j] > arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
	
	cout<<"------------- DATOS ORDENADOS DEL ARRAY --------------"<<endl;
	for(int i = 0; i < 10; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i = 0 ; i < 10; i++){
		num = arr[i];
		if(num != 0){ // si num no es -1 entra en el bucle para poder imprimir en pantalla el numero de veces que se repite
			contar(arr,10,num);
			drop(arr,10,num);
		}
	}
	
	getch();
}

void contar(int arr[], int size, int num){
	int contador = 0;
	int numero;
	for(int i = 0; i < size; i++){
		if(num == arr[i]){
			contador++;
			numero = arr[i];
		}
	}
	cout<<"El numero "<<numero<<" se repite "<<contador<<" de veces"<<endl;
}
void drop(int arr[], int size, int num){//En caso num ya este repetido reescribir su valor para que no se muestre en pantalla
	for(int i = 0; i < size; i++){
		if(num == arr[i]){
			arr[i] = 0;
		}
	}
}
