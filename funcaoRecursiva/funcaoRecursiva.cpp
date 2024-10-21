#include<iostream>

using namespace std;

int fatorial(int n);


int main(){
	int num;
	
	cout << "---Calculo Fatorial---\n\n";
	cout << "Digite o valor do fatorial: ";
	cin  >> num;
	
	fatorial(num);
	
	return 0;
}

int fatorial(int n){
	if (n == 1){
		cout << n;
		return 1;
	}else {
		cout << n << "\n";
		return n * fatorial(n - 1);
	}
}
