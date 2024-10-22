#include<iostream>
#include<vector>

using namespace std;


void ordenaVetorDes(vector<int>& numeros);
void ordenaVetorCres(vector<int>& numeros);

int main(){
	vector<int> vetor, vetorDesarrumado;
	

	
	for(int i = 0; i < 5 ; i++){
		int teste = 0;
		cout << "Digite o valor [" << i + 1 << "]: ";
		cin >> teste;
		vetor.push_back(teste);
		
	}
	
	vetorDesarrumado = vetor;	
	
	//-------------------------------------------------------------
	cout << "\n_________Vetor sem ordenacao________ \n";
	
	for(int j = 0; j < vetor.size(); j++){
		cout << "vetor[" << j + 1 << "] = " << vetor[j];		 
		cout << "\n";
	}
	
	//-------------------------------------------------------------
	cout << "\n______Vetor ordenado Descrecente____ \n";
	ordenaVetorDes(vetor);
	
	//-------------------------------------------------------------
	cout << "\n______Vetor Ordenado Crescente______ \n";
	ordenaVetorCres(vetorDesarrumado);
	return 0;
}


void ordenaVetorDes(vector<int>& numeros){
	int tamanho = numeros.size();
	
	for(int i = 0; i < tamanho - 1; i++){
		for(int j = 0; j < tamanho - i - 1; j++){
			if(numeros[j] < numeros[j + 1]){
				swap(numeros[j], numeros[j + 1]);
			}	
		}
	}
	
	for(int k = 0; k < tamanho; k++){
		cout << "vetor[" << k + 1 << "] = " << numeros[k];
		cout << "\n";
	}
	
} 


void ordenaVetorCres(vector<int>& numeros){
	int tamanho = numeros.size();
	
	for(int i = 0; i < tamanho - 1; i++){
		for(int j = 0; j < tamanho - i - 1; j++){
			if(numeros[j] > numeros[j + 1]){
				swap(numeros[j], numeros[j + 1]);
			}
		}
	}
	
	for(int k = 0; k < tamanho; k++){
		cout << "vetor[" << k + 1 << "] = " << numeros[k];
		cout << "\n";
	}
}

