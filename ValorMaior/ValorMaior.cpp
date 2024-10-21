#include<iostream>
int verificaMaior();

using namespace std;

int main() {
	
	cout << "O maior valor: " << verificaMaior();
	return 0;
}


int verificaMaior(){
	int num1 , num2;
	
	
	cout << "Digite um valor: ";
	cin >> num1;
	cout << "Digite outro valor: ";
	cin >> num2;
	
	if (num1 > num2){ return num1; }
	else if (num2 > num1) {return num2;}
	return 0 ;
}
