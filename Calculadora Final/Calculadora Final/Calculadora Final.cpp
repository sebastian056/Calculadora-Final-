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
int main()
{
	menu();

	return 0;
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
			system("color 74");
			suma();
			pausa();
			break;
		case 2:
			system("cls");
			system("color 71");
			resta();
			pausa();
			break;
		case 3:
			system("cls");
			system("color 72");
			multi();
			pausa();
			break;
		case 4:
		{
			system("cls");
			system("color 73");
			divi();
			pausa();
			break;
		}
		case 5:
			system("cls");
			system("color 75");
			expo();
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

int suma()
{
	int s1, s2,resultado;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                                   Has elejido Sumar" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                        dame un valor para sumar "; cin >> s1;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                        dame el otro valor para sumar "; cin >> s2;
	cout << "                      -----------------------------                                                                     " << endl;
	resultado = s1 + s2;
    cout << "                         el resultado seria: " << resultado << endl;
    cout << "                      -----------------------------                                                                     " << endl;
	return 0;
}
int resta()
{
	int r1, r2,resultado;

	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                                   Has elejido Restar" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                         dame un valor para restar "; cin >> r1;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                         dame el otro valor para restar "; cin >> r2;
	cout << "                      -----------------------------                                                                     " << endl;
	resultado = r1 - r2;
	cout << "                         el resultado seria: " << resultado << endl;
	cout << "                      -----------------------------                                                                     " << endl;
	return 0;
}
int multi()
{
	int m1, m2,resultado;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                                Has elejido Multiplicar" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                         dame un valor para la multiplicacion "; cin >> m1;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                         dame el otro valor para multiplicar "; cin >> m2;
	resultado = m1 * m2;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                         el resultado seria: " << resultado << endl;
	cout << "                      -----------------------------                                                                     " << endl;
	return 0;
}
float divi() 
{
	float d1, d2,resultado;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                                  Has elejido Dividir" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                         dame un  valor para dividir "; cin >> d1;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                         dame el valor para dividirlo "; cin >> d2;
	cout << "                      -----------------------------                                                                     " << endl;
	resultado = d1 / d2;
	cout << "                         el resultado seria: " << resultado << endl;
	cout << "                      -----------------------------                                                                     " << endl;
	return 0;
}
double expo()
{
	float ex1, ex2, resultado;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                                Has elejido Exponente" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                         dame un valor que expondre "; cin >> ex1;
	cout << "                      -----------------------------                                                                     " << endl;
	cout << "                         dame a que cifra lo expongo "; cin >> ex2;
	cout << "                      -----------------------------                                                                     " << endl;
	resultado = pow(ex1, ex2);
	cout << "                         el resultado seria: " << resultado << endl;
	cout << "                      -----------------------------                                                                     " << endl;
	return 0;
}

void pausa()
{
	cout << "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}