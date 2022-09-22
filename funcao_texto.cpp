#include <iostream>
#include <locale>
	using namespace std;

	int texto(){
		setlocale(LC_ALL,"ptb");
		cout<<"Olá mundo";
		
	}
	
	int main(){
	
		texto();
		
	}
