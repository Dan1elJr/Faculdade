#include <iostream>
#include <locale>
	using namespace std;

	int texto(){
		setlocale(LC_ALL,"ptb");
		cout<<"Ol� mundo";
		
	}
	
	int main(){
	
		texto();
		
	}
