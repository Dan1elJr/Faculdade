#include <iostream>
#include <locale>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		
		int valorMenu=0,trio=0,ar=0,direcao=0,completo=0;
		float precoCarro=0,valorTotal=0;
		int valorContinuar=0;
		
		//introdu��o
		cout<<"****CALCULADOR DE PRE�O PARA VE�CULOS******\n\n";
		cout<<"Este programa tem a finalidade de gerar o pre�o final do autom�vel, com base na op��o selecionada pelos clientes\n";
		cout<<"..............................................................................................................\n\n";
	
	
		
			do{
				//Apresenta��o do Menu ao cliente
				cout<<"Informe o pre�o de f�brica do autom�vel\n";
				cin>>precoCarro;
				cout<<"\n\n";
				cout<<"..............................................................................................................\n\n";
				cout<<"Escolha os opcionais do autom�vel:\n";
				cout<<"0-Nenhuma das op��es\n";
				cout<<"1-Trio el�trico (alarme, vidro el�trico e tranca el�trica)\n";
				cout<<"2-Ar condicionado\n";
				cout<<"3-Dire��o hidr�ulica\n";
				cout<<"4-Completo (trio el�trico, arcondicionado e dire��o hidr�ulica)\n";
				cout<<"..............................................................................................................\n\n";
			
				cout<<"*Digite o n�mero equivalente aos opcionais*\n";
				cin>>valorMenu;
				
				//Opera��o para obten��o de valor do autom�vel.
				switch(valorMenu){
					case 0:
						cout<<"Nenhum opcional\n";
						cout<<"Pre�o final do autom�vel � de: "<<valorTotal<<" R$\n";
						break;
					case 1:
						valorTotal=precoCarro*1.08;
						valorTotal=valorTotal*1.02;
						cout<<"***Pre�o final do autom�vel � de: "<<valorTotal<<" R$\n";
						trio++;
						break;
					case 2:
						valorTotal=precoCarro*1.02;
						cout<<"***Pre�o final do autom�vel � de: "<<valorTotal<<" R$\n";
						ar++;
						break;
					case 3:
						valorTotal=precoCarro*1.02;
						cout<<"***Pre�o final do autom�vel � de: "<<valorTotal<<" R$\n";
						direcao++;
						break;
					case 4:
						valorTotal=precoCarro*1.08;
						valorTotal=valorTotal*1.06;
						valorTotal=valorTotal*0.965;
						cout<<"***Pre�o final do autom�vel � de: "<<valorTotal<<" R$\n";
						completo++;
						break;
					
					
					default:
						cout<<"Valor n�o consta nas op��es\n";
					
					
						
					
				}
					//Loop para garantir que o usu�rio insira o valor correto.
				do{
				
					cout<<"\nVoc� deseja continuar? Digite o n�mero 0-Sim ou 1-N�o\n";
					cin>>valorContinuar;
					cout<<"\n\n";
					
					//Verifica��o do valor inserido pelo usu�rio, para continuar ou n�o a repeti��o.
				
					if((valorContinuar!=0)&&(valorContinuar!=1)){
						cout<<"Valor incorreto\n";
						cout<<"Digite o valor correto\n";
					}
				}while((valorContinuar!=0)&&(valorContinuar!=1));
	
				
				
			}while((valorContinuar!=1)&&(valorContinuar==0));
			//Apresenta��o da quantidade de vezes que os opcionais foram selecionados.
			cout<<"\n\n";
			cout<<"Op��o 1 - Trio el�trico, foi escolhida "<<trio<<" vez(es)\n";
			cout<<"Op��o 2 - Ar condicionado, foi escolhida "<<ar<<" vez(es)\n";
			cout<<"Op��o 3 - Dire��o hidr�ulica, foi escolhida "<<direcao<<" vez(es)\n";
			cout<<"Op��o 4 - Completo, foi escolhida "<<completo<<" vez(es)\n";
			
			
		
		
		
		
		

        	
}
