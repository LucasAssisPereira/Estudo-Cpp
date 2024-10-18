#include<iostream>
 #include<stdlib.h>

using namespace std;

void quadradoOuRetangulo();
void circulo();
void triangulo();


int main(){
	
	int menu = 0;
		
	while (menu != 4){
		
		cout << "Digite qual das opcoes voce deseja\n" << "1- quadrado ou retangulo\n" << "2- Circulo\n" << "3- Triangulo\n" << "4- Sair\n" << "Sua Opcao: ";
		cin >> menu;
		switch(menu){
			case(1):
				quadradoOuRetangulo();
				break;
			case(2):
				circulo();
				break;
			case(3):
				triangulo();
				break;
			case(4):
				cout << "Tchau!";
				return 0;
			default:
				cout << "Opcao Invalida\n";
				break;
		}
		
		
		
	}
	
	
	return 0;
	
}


void quadradoOuRetangulo(){
	float x, y;
	
	cout << "Digite a base: ";
	cin >>  x;
	
	cout << "Digte a altura: ";
	cin >> y;
	
	cout << "Area do retangulo ou quadrado: " << x * y << "cm^2\n";
}

void circulo() {
	double pi = 3.1416;
	float r;
	
	cout << "Digite o raio da circulo: ";
	cin >> r;
	cout << "Area do do circulo: " << (r * r) * pi << "cm^2\n";
}

void triangulo(){
	float b, h;
	cout << "Digite a base do triangulo: ";
	cin >> b;
	
	cout << "Digite a altura do triangulo: ";
	cin >> h;
	
	cout << "Area do triangulo: " << (b + h)/2 << "cm^2\n";
}


