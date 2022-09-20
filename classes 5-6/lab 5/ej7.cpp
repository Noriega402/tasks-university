#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

float venta, descuento;
int numDia;
char cliente[40];

main(){
	system("cls");
	system("color 0F");
	
	while(numDia < 1 || numDia > 7){
		cout<<"--------- DIA DE LA SEMANA ----------";
		cout<<"\nDigite el numero de dia de la semana"<<endl;
		cout<<"1. Lunes"<<endl;
		cout<<"2. Martes"<<endl;
		cout<<"3. Miercoles"<<endl;
		cout<<"4. Jueves"<<endl;
		cout<<"5. Viernes"<<endl;
		cout<<"6. Sabado"<<endl;
		cout<<"7. Domingo"<<endl;
		cout<<"Digite la opcion: ";
		cin>>numDia;
		
		if(numDia <= 0 || numDia > 7)
			cout<<"Dia no valido, vuelve a intentarlo...";
			getch();
			system("cls");
	}
	
	fflush(stdin);
	
	cout<<"Escriba el nombre del cliente: ";
	cin.getline(cliente,40,'\n');
	
	cout<<"Digite el monto de la venta: ";
	cin>>venta;
	
	system("cls");
	
	if(venta < 500 && venta > 0){
		cout<<"Estimad@ "<<cliente<<" al ser una compra de menos de Q500.00";
		cout<<" no hay un descuento sobre su compra."<<endl;
		cout<<"Su total es de: Q"<<venta;
	}
	if(venta >= 500 && venta < 1000){
		descuento = 0.05;
		cout<<"Estimad@ "<<cliente<<" al ser una compra de mas 500";
		cout<<" tiene un descuento del 5% en su compra total."<<endl;
		cout<<"El total de su compra aplicando el descuento es de: Q"<<venta-(venta*descuento);
	}
	if(venta >= 1000 && venta < 7000){
		descuento = 0.11;
		cout<<"Estimad@ "<<cliente<<" al ser una compra de mas 1000";
		cout<<" tiene un descuento de 11% en su compra total."<<endl;
		cout<<"El total de su compra aplicando el descuento es de: Q"<<venta-(venta*descuento);
	}
	if(venta >= 7000 && venta < 15000){
		descuento = 0.18;
		cout<<"Estimad@ "<<cliente<<" al ser una compra de mas 7000";
		cout<<" tiene un descuento de 18% en su compra total."<<endl;
		cout<<"El total de su compra aplicando el descuento es de: Q"<<venta-(venta*descuento);
	}
	if(venta > 15000 && numDia == 6 || numDia == 7){
		descuento = 0.30;
		cout<<"Estimad@ "<<cliente<<" al ser una compra de mas 15000 y por ser fin de semana";
		cout<<" tiene un descuento de 30% en su compra total."<<endl;
		cout<<"El total de su compra aplicando el descuento es de: Q"<<venta-(venta*descuento);
	}
	if(venta > 15000 && numDia > 0 && numDia < 6){
		descuento = 0.25;
		cout<<"Estimad@ "<<cliente<<" al ser una compra de mas 15000";
		cout<<" tiene un descuento de 25% en su compra total."<<endl;
		cout<<"El total de su compra aplicando el descuento es de: Q"<<venta-(venta*descuento);
	}
	getch();
}
