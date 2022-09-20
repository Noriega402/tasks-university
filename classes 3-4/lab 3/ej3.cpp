#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct Notas{ // creacion de estructura de notas
	float notas[5];
	float promedio;
};

struct Alumno{ // creacion de estructura de alumno y estructura anidada
	char matricula[14];
	char nombre[16];
	char apellido[16];
	struct Notas calificacion;
}alumno; // crear variable de estructura

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Matricula del alumno: ";
	cin>>alumno.matricula;
	cout<<"Nombre: ";
	cin>>alumno.nombre;
	cout<<"Apellido: ";
	cin>>alumno.apellido;
	cout<<"\nA continuacion ingresa las 5 calificaciones: "<<endl;
	
	fflush(stdin); // liberar espacio de buffer
	
	for(int i = 0; i < 5; i++){
		cout<<"Nota "<<i+1<<": ";
		cin>>alumno.calificacion.notas[i];
		alumno.calificacion.promedio += alumno.calificacion.notas[i];
	}
	
	system("cls");
	
	cout<<"------ DATOS DEL ALUMNO -------"<<endl;
	cout<<"\nMatricula: "<<alumno.matricula<<endl;
	cout<<"Nombre: "<<alumno.nombre<<endl;
	cout<<"Apellido: "<<alumno.apellido<<endl;
	cout<<"\nCalificaciones de semestre: "<<endl;
	
	for(int i = 0; i < 5; i++){
		cout<<"- Nota "<<i+1<<": "<<alumno.calificacion.notas[i]<<endl;
	}
	
	cout<<"\nEl promedio fue de: "<<alumno.calificacion.promedio/5<<endl;
	
	if(alumno.calificacion.promedio/5 >= 61)
		cout<<"APROVADO";
	else
		cout<<"REPROBADO";
	getch();
}
