#include<iostream>
#include<string>
using namespace std;

string inverte(string s);


int main(){
	string teste;
	
	
	cout << "Digite uma palavra: ";
	cin >> teste;
	cout << inverte(teste) << " <- String invertida" ;
	
	return 0;
}


string inverte(string s){
	string invertida;
	
	for(int i = s.length() -1 ; i >= 0; i--){
		invertida += s[i];;
	}
	
	return invertida;
}
