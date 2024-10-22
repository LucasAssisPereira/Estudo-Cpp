#include<iostream>
#include<vector>


int SomaMatriz(int matriz [3][3]);
int main(){
	
	int matriz[3][3] = {
		{1, 2, 3}, 
		{5, 8, 2},
		{7, 1, 9},
	};
	
	std::cout << "Soma Matriz: " << SomaMatriz(matriz);
	
	
	return 0;
}


int SomaMatriz(int matriz[3][3]){
	int soma = 0;
	
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j++){
			soma += matriz[i][j];
		}	
	}
	
	return soma;
}


