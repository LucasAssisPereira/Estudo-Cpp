#include<iostream>

using namespace  std;

int main(){
	
	int num;
	
	cout << "Digite o numero: ";
	cin >> num;
	
	if(num % 2 != 0){
		cout << "Impar";
	}else{
		cout << "Par";
	}
	
	return 0;
}
