#include<iostream>
#include<string>

using namespace std;

struct pessoa{
	string nome;
	int idade;
	float altura;
};

void cadastraPessoa(pessoa& p);
void printaPessoas(pessoa p[]);

int main (){
	pessoa pessoas[3];
	
	cout << "---------Cadastrando--------------" << endl;
	for(int i = 0; i < 3 ; i++){
		cout << "--------Pessoa[" << i+1 <<"]-------" << endl;
		cadastraPessoa(pessoas[i]);
	}
	
	printaPessoas(pessoas);
	return 0;
}

void cadastraPessoa(pessoa& p){
	cout << "Digite o nome da pessoa: ";
	cin >> p.nome;
	cout << "Digite a idade da pessoa: ";
	cin >> p.idade;
	cout << "Digite a altura da pessoa: ";
	cin >> p.altura; 
}

void printaPessoas(pessoa p[]){
	cout << "----------Printando--------------" << endl;
	for(int i = 0; i < 3 ; i++){
		cout << "--------Pessoa[" << i+1 <<"]-------" << endl;
		cout << "Nome: " << p[i].nome << "\n" << "Idade: " << p[i].idade << "\n" << "Altura: " << p[i].altura << "\n" ;
	}
}
