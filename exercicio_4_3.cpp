#include <iostream>
#include <locale>
#include <math.h>
	using namespace std;
int main(){
	setlocale(LC_ALL,"ptb");

	float valorCompra,valorVenda;
	
	cout<<"Informe a valor pago no produto, para obter o pre�o de venda: ";
	cin>>valorCompra;
	valorVenda=valorCompra*1.20;
	cout<<"O valor sugerido para venda � de: "<<valorVenda<<" Reais";
	
	
	
}
