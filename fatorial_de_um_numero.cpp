#include <iostream>
#include <locale>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		long contador,fat=1,limite;
		
		cout<<"Informe o número para gerar o valor fatorial\n";
		cin>>limite;
		
		for(contador=1;contador<=limite;contador++){
			
		fat=fat*contador;
		
		
			
		}	
			
		
		
			
		
		cout<<"valort total é de: "<<fat;
		
}
