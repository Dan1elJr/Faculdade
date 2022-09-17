#include <iostream>
#include <locale>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		
		char asteristico='*';
		int contador,limite,imprimir=0,controle;
		
		cout<<"Quantas linhas o triângulo terá ?\n";
		cin>>limite;
		cout<<"\n";
		for(contador=1;contador<=limite;contador++){
			
		
			cout<<" ";
		
			while(imprimir<contador){
				cout<<asteristico;
				imprimir++;
				
			}
			imprimir=0;
			cout<<"\n";
			
		}
}
