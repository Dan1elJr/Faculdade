#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main(){
	setlocale(LC_ALL,"ptb");
	int a,b,c;
	
	cout<<"Informe o primeiro n�mero: ";
	cin>>a;
	b=pow(a,2);
	c=pow(a,3);
	cout<<a<<" Ao quadrado �: "<<b<<" \n";
	cout<<a<<" Ao quadrado �: "<<c<<" \n";
	
}
