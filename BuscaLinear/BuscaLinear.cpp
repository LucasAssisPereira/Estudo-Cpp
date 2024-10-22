#include<iostream>
#include <ctime>

using namespace std;

int main() {
	
	int array[10000], numeroBuscado;
		
	for(int i = 0; i < 10000; i++){
		array[i] = i;
	}
	
	cout << "Digite o valor a ser buscado: ";
	cin >> numeroBuscado;
	
	clock_t inicio = clock();
	
	int contador = 0;
	
	while(array[contador] != numeroBuscado){
		contador++;
		if(array[contador] == numeroBuscado){
			cout << array[contador] <<" <- Encontrado";
		}
	}
	
	
	clock_t fim = clock();
	double duracao = double(fim - inicio) / CLOCKS_PER_SEC;
	std::cout << "\nTempo decorrido: " << duracao << " ms" << std::endl;
	
	return 0;
}




