#include <iostream>

using namespace std;

bool ehPrimo(int num){
	if(num <= 1) return false;
	if(num == 2 || num == 3) return true;
	if(num %2 == 0 || num %3 == 0) return false;
	
	for(int j = 5; j * j <= num; j += 6){
		if(num % j == 0 || num % (j + 2) == 0) return false;
	}
	
	return true;	
}

int main(){
	
	for (int i = 0; i <= 100; i++){
		if(ehPrimo(i))
		cout << i <<" eh primo \n";
	}
	
	return 0;
}
