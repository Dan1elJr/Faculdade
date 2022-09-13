#include <iostream>
#include <locale>

 using namespace std;
 
 int main(){
 	setlocale(LC_ALL,"ptb");
 	
 	long numPedido,qtdPedido;
 	float valorPedido,total;
 	char continuarOuNao=0;
 	cout<<"***Cardápio da lanchonete*** \n\n";
 	cout<<"100 - Hambúrguer - R$5,50 \n";
 	cout<<"101 - Cachorro-quente - R$4,50 \n";
 	cout<<"102 - Milk-shake- R$7,00 \n";
 	cout<<"103 - Pizza brotinho - R$8,00 \n";
 	cout<<"104 - Cheeseburguer - R$8,50 \n\n";
 	

		do{
			cout<<"Informe o código do seu pedido: ";
			cin>>numPedido;
			
			
			switch(numPedido){
				
				case 100:
					cout<<"Quantos itens você deseja pedir: ";
					valorPedido=5.50;
					cin>>qtdPedido;
					total+=valorPedido*qtdPedido;
				
					break;
			
				case 101:
					cout<<"Quantos itens você deseja pedir: ";
					valorPedido=4.50;
					cin>>qtdPedido;
					total+=valorPedido*qtdPedido;
				
					
					break;
			
				case 102:
					cout<<"Quantos itens você deseja pedir: ";
					valorPedido=7.00;
					cin>>qtdPedido;
					total+=valorPedido*qtdPedido;
				
					break;
					
				case 103:
					cout<<"Quantos itens você deseja pedir: ";
					valorPedido=8.00;
					cin>>qtdPedido;
					total+=valorPedido*qtdPedido;
					
					
					break;
			
				case 104:
					cout<<"Quantos itens você deseja pedir: ";
					valorPedido=8.50;
					cin>>qtdPedido;
					total+=valorPedido*qtdPedido;
					
					break;
				
				default:
				
					cout<<"Você informou o código errado do pedido\n";
					cout<<"Deseja continuar? S/N: ";
					cin>>continuarOuNao;
					
				
				
					
					
					
				
			}
			if((numPedido>=100)&&(numPedido<=104)){
				cout<<"Deseja acrescentar mais algum item?: S/N \n";
				cin>>continuarOuNao;
			}
			
		}while(continuarOuNao!='N');
		cout<<"valor total a pagar é de: "<<total<<" R$";
 	
 	
 }
