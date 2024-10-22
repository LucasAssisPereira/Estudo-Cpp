#include <iostream>
#include <ctime>

using namespace std;

void buscaBinaria(int array[10000]);

int main() {
    int array[10000];
    
    for (int i = 0; i < 10000; i++) {
        array[i] = i;    
    }
    
    buscaBinaria(array);
    
    return 0;
}

void buscaBinaria(int array[10000]) {
    int esquerda = 0, direita = 9999, valorBuscado;
    bool encontrado = false;
        
    cout << "Digite o valor a ser encontrado: ";
    cin >> valorBuscado;
    
    clock_t inicio = clock();
    
    while (direita >= esquerda) {
        int meio = (esquerda + direita) / 2;
        if (array[meio] == valorBuscado) {
            cout << "Encontrado! -> " << array[meio] << endl;
            encontrado = true;
            break;
        } else if (array[meio] < valorBuscado) {
            esquerda = meio + 1; 
        } else {
            direita = meio - 1;
        }
    }
    
    if (!encontrado) {
        cout << "Número não encontrado" << endl;
    }
    
    clock_t fim = clock();
    double duracao = double(fim - inicio) / CLOCKS_PER_SEC;
    
    cout << "Tempo decorrido: " << duracao << " ms" << endl;
}

