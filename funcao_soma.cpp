#include <iostream>
#include <locale>
	using namespace std;

	int soma(int a=0, int b=0){
	
		int resultado;
		resultado=a+b;
		return resultado;
		
		
		
	}
	
	int main(){
		setlocale(LC_ALL,"ptb");
		int a1=0,b2=0,resultado2=0;
		cout<<"Informe os números";
		cin>>a1;
		cin>>b2;
		resultado2=soma(a1,b2);
		cout<<resultado2;
		
	}
