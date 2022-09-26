#include <iostream>
#include <locale>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		
		int valorMenu=0,trio=0,ar=0,direcao=0,completo=0;
		float precoCarro=0,valorTotal=0;
		int valorContinuar=0;
		
		//introdução
		cout<<"****CALCULADOR DE PREÇO PARA VEÍCULOS******\n\n";
		cout<<"Este programa tem a finalidade de gerar o preço final do automóvel, com base na opção selecionada pelos clientes\n";
		cout<<"..............................................................................................................\n\n";
	
	
		
			do{
				//Apresentação do Menu ao cliente
				cout<<"Informe o preço de fábrica do automóvel\n";
				cin>>precoCarro;
				cout<<"\n\n";
				cout<<"..............................................................................................................\n\n";
				cout<<"Escolha os opcionais do automóvel:\n";
				cout<<"0-Nenhuma das opções\n";
				cout<<"1-Trio elétrico (alarme, vidro elétrico e tranca elétrica)\n";
				cout<<"2-Ar condicionado\n";
				cout<<"3-Direção hidráulica\n";
				cout<<"4-Completo (trio elétrico, arcondicionado e direção hidráulica)\n";
				cout<<"..............................................................................................................\n\n";
			
				cout<<"*Digite o número equivalente aos opcionais*\n";
				cin>>valorMenu;
				
				//Operação para obtenção de valor do automóvel.
				switch(valorMenu){
					case 0:
						cout<<"Nenhum opcional\n";
						cout<<"Preço final do automóvel é de: "<<valorTotal<<" R$\n";
						break;
					case 1:
						valorTotal=precoCarro*1.08;
						valorTotal=valorTotal*1.02;
						cout<<"***Preço final do automóvel é de: "<<valorTotal<<" R$\n";
						trio++;
						break;
					case 2:
						valorTotal=precoCarro*1.02;
						cout<<"***Preço final do automóvel é de: "<<valorTotal<<" R$\n";
						ar++;
						break;
					case 3:
						valorTotal=precoCarro*1.02;
						cout<<"***Preço final do automóvel é de: "<<valorTotal<<" R$\n";
						direcao++;
						break;
					case 4:
						valorTotal=precoCarro*1.08;
						valorTotal=valorTotal*1.06;
						valorTotal=valorTotal*0.965;
						cout<<"***Preço final do automóvel é de: "<<valorTotal<<" R$\n";
						completo++;
						break;
					
					
					default:
						cout<<"Valor não consta nas opções\n";
					
					
						
					
				}
					//Loop para garantir que o usuário insira o valor correto.
				do{
				
					cout<<"\nVocê deseja continuar? Digite o número 0-Sim ou 1-Não\n";
					cin>>valorContinuar;
					cout<<"\n\n";
					
					//Verificação do valor inserido pelo usuário, para continuar ou não a repetição.
				
					if((valorContinuar!=0)&&(valorContinuar!=1)){
						cout<<"Valor incorreto\n";
						cout<<"Digite o valor correto\n";
					}
				}while((valorContinuar!=0)&&(valorContinuar!=1));
	
				
				
			}while((valorContinuar!=1)&&(valorContinuar==0));
			//Apresentação da quantidade de vezes que os opcionais foram selecionados.
			cout<<"\n\n";
			cout<<"Opção 1 - Trio elétrico, foi escolhida "<<trio<<" vez(es)\n";
			cout<<"Opção 2 - Ar condicionado, foi escolhida "<<ar<<" vez(es)\n";
			cout<<"Opção 3 - Direção hidráulica, foi escolhida "<<direcao<<" vez(es)\n";
			cout<<"Opção 4 - Completo, foi escolhida "<<completo<<" vez(es)\n";
			
			
		
		
		
		
		

        	
}
