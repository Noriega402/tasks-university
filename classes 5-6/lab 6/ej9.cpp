#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int signo;

void pedirSigno();
int mostrarFortuna(int opcion);
void salir();
void errorSigno();
void aries();
void tauro();
void geminis();
void cancer();
void leo();
void virgo();
void libra();
void escorpio();
void sagitario();
void capricornio();
void acuario();
void piscis();

main(){
	system("cls");
	system("color 0F");
	
	pedirSigno();
	
	getch();
}

void pedirSigno(){
	do{
		cout<<"---------- SIGNOS ZODIACALES -----------"<<endl;
		cout<<"1. Aries"<<endl;
		cout<<"2. Tauro"<<endl;
		cout<<"3. Geminis"<<endl;
		cout<<"4. Cancer"<<endl;
		cout<<"5. Leo"<<endl;
		cout<<"6. Virgo"<<endl;
		cout<<"7. Libra"<<endl;
		cout<<"8. Escorpio"<<endl;
		cout<<"9. Sagitario"<<endl;
		cout<<"10. Capricornio"<<endl;
		cout<<"11. Acuario"<<endl;
		cout<<"12. Piscis"<<endl;
		cout<<"13. Salir"<<endl;
		cout<<"Digite el numero de su signo zodiacal: ";
		cin>>signo;

		mostrarFortuna(signo);
		
	}while(signo != 13);
}

int mostrarFortuna(int opcion){
	switch(opcion){
		case 1:
			aries();
			getch();
			system("cls");
		break;
		case 2:
			tauro();
			getch();
			system("cls");
		break;
		case 3:
			geminis();
			getch();
			system("cls");
		break;
		case 4:
			cancer();
			getch();
			system("cls");
		break;
		case 5:
			leo();
			getch();
			system("cls");
		break;
		case 6:
			virgo();
			getch();
			system("cls");
		break;
		case 7:
			libra();
			getch();
			system("cls");
		break;
		case 8:
			escorpio();
			getch();
			system("cls");
		break;
		case 9:
			sagitario();
			getch();
			system("cls");
		break;
		case 10:
			capricornio();
			getch();
			system("cls");
		break;
		case 11:
			acuario();
			getch();
			system("cls");
		break;
		case 12:
			piscis();
			getch();
			system("cls");
		break;
		case 13:
			salir();
		break;
		default: 
			errorSigno();
			getch();
			system("cls");
	}
}

void salir(){
	cout<<"Saliendo del sistema...";
}

void errorSigno(){
	cout<<"Opcion no valida dentro del menu"<<endl;
	cout<<"Intente de nuevo...";
}

void aries(){
	cout<<"Tendras que cuidar de tus hijos, encargarte de otro miembro de "<<endl;
	cout<<"la familia y atender otras obligaciones. Intenta encontrar tiempo "<<endl;
	cout<<"para la diversion, solo para ti.";
}

void tauro(){
	cout<<"Probablemente te guste explorar las fibras mas intimas de tu naturaleza humana. "<<endl;
	cout<<"Sin embargo, hoy puedes necesitar ser un poco más racional. En tu vida personal, puedes "<<endl;
	cout<<"sentir como que has sido vencida en tu propio juego, y esto te debilita. Porque no aprovechar "<<endl;
	cout<<"esta oportunidad para incluir a tu pareja en uno de tus viajes a tu interior?";
}

void geminis(){
	cout<<"Necesitas analizar tu vida y ver qué puedes hacer para crear una rutina mas armoniosa. "<<endl;
	cout<<"Necesitas programar más tiempo de descanso para que puedas relajarte y recargar las pilas."<<endl;
	cout<<"O quizas desees pensar en una carrera diferente que te permita experimentar otra clase de rutina."<<endl;
}

void cancer(){
	cout<<"Es probable que un familiar o ser querido te este mintiendo. Pero no lo hace con mala intencion."<<endl;
	cout<<"Piensa que te esta protegiendo al ocultarte la verdad. Confía en tu intuición."<<endl;
	cout<<"Si te dicen algo que es demasiado bueno para ser verdad, verifica primero la informacion."<<endl;
}

void leo(){
	cout<<"Podrias necesitar enfrentar algunas emociones complejas. Quizas tu hijo este atravesando un momento dificil. "<<endl;
	cout<<"Te gusta bromear y mantener alegre el espiritu, pero quizas llego el momento de ponerse serio."<<endl;
	cout<<"No descartes los problemas de un miembro de la familia sin conversarlos de verdad."<<endl;
}

void virgo(){
	cout<<"Hoy te levantarás sintiendote fuerte y con confianza, y las buenas noticias en el trabajo no harán más que reforzar tu animo. "<<endl;
	cout<<"Podra tratarse de un aumento, un ascenso o algun otro tipo de progreso y significara un aumento en tus ingresos."<<endl;
}

void libra(){
	cout<<"Hoy puede ser el dia para poner en orden tu vida familiar. Si tus hijos estan necesitando algo mas de disciplina,"<<endl;
	cout<<"este es un buen momento para establecer algunas reglas nuevas y trazar un nuevo programa de tareas."<<endl;
}

void escorpio(){
	cout<<"Hoy el amor y el romance están primero en tu agenda. Tu y tu pareja se iran de una reunion con amigos,"<<endl;
	cout<<"para estar solos y charlar. Tienen una buena comunicación, y el sentimiento intenso entre"<<endl;
	cout<<"ambos sera obvio, posiblemente embarazoso, para todos los que los conocen."<<endl;
}

void sagitario(){
	cout<<"Si bien hoy quizás tu pasion fisica se agite debajo de la superficie, sigue estando bien presente"<<endl;
	cout<<"y es probable que te sientas particularmente romántica."<<endl;
	cout<<"Quizas desees leer novelas osadas o ir a ver alguna película romantica."<<endl;
}

void capricornio(){
	cout<<"Has estado leyendo novelas romanticas? Quizas eso se deba a que ultimamente piensas mucho en el amor. "<<endl;
	cout<<"Pueda que estes en una relacion apasionada o que anheles una. "<<endl;
	cout<<"Si fuera lo ultimo, no estaras sin pareja por mucho tiempo. "<<endl;
	cout<<"Todo apunta que el romance sera una de tus prioridades."<<endl;
}

void acuario(){
	cout<<"Comparte tu pasion, amor y felicidad con los que te rodean. Pon tus energias en un proyecto grupal y trabaja"<<endl;
	cout<<"para crear en conjunto mucho mas magico y significante que todo lo que podrias crear tu sola."<<endl;
	cout<<"No estas sola en el mundo, y encontraras que tienes mucho que aprender de otras personas que comparten tus ideales."<<endl;
}

void piscis(){
	cout<<"Hoy seguiras trabajando para alcanzar metas deseadas, profesionales y de las otras. Los temas del corazon estaran"<<endl;
	cout<<"hoy en primer lugar. Si estas en pareja actualmente, acontecimientos inesperados te acercaran a el mas aun."<<endl;
	cout<<"Si no lo estas,  podrias conocer alguien interesante, quizas a través de alguna actividad de grupo. "<<endl;
	cout<<"Tambien, podrias mirar distinto a un viejo amigo."<<endl;
	cout<<"De un modo u otro, espera algun desarrollo interesante."<<endl;
}
