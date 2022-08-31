#include <iostream>
#include <locale>
#include <math.h>

	using namespace std;
int main(){
	
	setlocale(LC_ALL,"ptb");
	float diasVividos,idade;
	
	cout<<"Quantos dias você viveu até hoje? ";
	cin>>diasVividos;
	idade=diasVividos/365;
		if(idade<=1){
		
			cout<<"Com base nos seus dias vividos, sua idade é de: "<<idade<<" ano";
	
		} else cout<<"Com base nos seus dias vividos, sua idade é de: "<<idade<<" anos";
	
}
