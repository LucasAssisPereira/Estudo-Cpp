#include<iostream>

void troca(int& valor, int& num);

int main(){
	
	int a = 10;
	int b = 5;S
	
	
	std::cout << "Valor a: " << a << std::endl;
	std::cout << "Valor b:" << b << std::endl;
	
	troca(a, b);
	
	std::cout << "Valores trocados ----> " << "\n(novo a): " << a << "\n(novo b): " << b << std::endl;
	
	return 0;
}

void troca(int& valor, int& num ){
	int temp = valor;
	valor = num;
	num = temp;
}
