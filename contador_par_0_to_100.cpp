#include <iostream>
#include <locale>
#include <stddef.h>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		
		int num=10;
		
		while(num<=100){
			if(num%2==0){
				cout<<num<<" número par"<<"""\n";
				
			}
			else{
				cout<<num<<" número ímpar"<<"\n";
			}
			num++;
		}
		
	}
