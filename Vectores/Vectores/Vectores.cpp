// Vectores.cpp 
#include <iostream>
#include <string>
#include<math.h>
#include <cstdlib>
using namespace std;
void menu();
int suma();
int resta();
int multi();
float divi();
double expo();
void pausa();
float resultado();
int main()
{
	menu();
}

void menu()
{
	bool bandera = false;
	int tecla;
	do
	{
		system("color 70");
		system("cls");
		cin.clear();
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "                                                     Calculadora" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "       Sumar (1)" << endl;
		cout << "       Restar (2)" << endl;
		cout << "       Multiplicar (3)" << endl;
		cout << "       Dividir (4)" << endl;
		cout << "       exponente (5)" << endl;
		cout << "       salir (6)" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "                                                     Elije una opcion: ";
		cin >> tecla;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

		switch (tecla)
		{
		case 1:
			system("cls");
			int s1, s2;
			system("color 74");
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                                   Has elejido Sumar" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                        dame un valor para sumar "; cin >> s1;
			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                        dame el otro valor para sumar "; cin >> s2;
			cout << "                      -----------------------------                                                                     " << endl;

			cout << "                        el resultado seria: " << endl;
			cout << "                      -----------------------------                                                                     " << endl;
			pausa();
			break;
		case 2:
			system("cls");
			int r1, r2;
			system("color 71");
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                                   Has elejido Restar" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                         dame un valor para restar "; cin >> r1;
			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                         dame el otro valor para restar "; cin >> r2;
			cout << "                      -----------------------------                                                                     " << endl;

			cout << "                         el resultado seria: " << endl;
			cout << "                      -----------------------------                                                                     " << endl;
			pausa();
			break;
		case 3:
			system("cls");
			int m1, m2;
			system("color 72");
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                                Has elejido Multiplicar" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                         dame un valor para la multiplicacion "; cin >> m1;
			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                         dame el otro valor para multiplicar "; cin >> m2;

			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                         el resultado seria: " << endl;
			cout << "                      -----------------------------                                                                     " << endl;
			pausa();
			break;
		case 4:
		{
			system("cls");
			float d1, d2;
			system("color 73");
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                                  Has elejido Dividir" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                         dame un  valor para dividir "; cin >> d1;
			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                         dame el valor para dividirlo "; cin >> d2;
			cout << "                      -----------------------------                                                                     " << endl;

			cout << "                         el resultado seria: " << endl;
			cout << "                      -----------------------------                                                                     " << endl;
			pausa();
			break;
		}
		case 5:
			system("cls");
			float ex1, ex2;
			system("color 75");
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                                Has elejido Exponente" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                         dame un valor que expondre "; cin >> ex1;
			cout << "                      -----------------------------                                                                     " << endl;
			cout << "                         dame a que cifra lo expongo "; cin >> ex2;
			cout << "                      -----------------------------                                                                     " << endl;

			cout << "                         el resultado seria: " << endl;
			cout << "                      -----------------------------                                                                     " << endl;
			pausa();
			break;
		case 6:
			bandera = true;
			break;
		default:
			system("cls");
			system("color 07");
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                           Opcion no valida, inserte una opcion verdadera " << endl;
			cout << "                                                    PRESIONE EL ENTER PARA VOLVER         " << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			pausa();
			break;
		}
	} while (bandera != true);
}

void pausa() 
{
	cout << "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}
