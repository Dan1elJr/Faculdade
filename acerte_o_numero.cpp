#include <iostream>
#include <locale>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		int i,i2,tentativas=0,acertos=0,vetor[10],jogador1=0,jogador2=0,validador=0;
		
		cout<<"***Vamos jogar um jogo simples. O jogo se chama, acerte o número***.\n";
		cout<<"***Neste jogo, o primeiro jogador informa 10 números, e o segundo jogador terá três tentativas para acertar os números***.\n\n";
		cout<<"jogador 1 , informe os 10 números.\n";
		for(i=0;i<10;i++){
			cin>>jogador1;
			vetor[i]=jogador1;
			
			
		}
		cout<<"Agora é a sua vez jogador 2. Tente acertar ,em três tentativas , os números informados pelo jogador 1";
		for(i=0;i<3;i++){
			cout<<"\n";
			cout<<"Informe os números\n";
			cin>>jogador2;
			tentativas++;
			for(i2=0;i2<10;i2++){
				
				if(jogador2==vetor[i2]){
					acertos++;
					validador++;
					cout<<"Parabéns!Este número está na posição "<<i2<<" do vetor! "<<"Você usou "<<tentativas<<" tentativa(s)\n\n";
					
				
				}
					else if((validador!=1)&&(i2==9)){
					cout<<"Que pena! Você errou!\n\n";
					}
				
				
			}
				validador=0;
				if(3-tentativas>0){
					cout<<"Restam "<<3-tentativas<<" Tentativa(s)\n\n";
				}
					else{
					cout<<"Não há mais tentativas\n\n";
					}
		
				
			}
				if(acertos==0){
					cout<<"\n";
					cout<<"Você não acertou nenhuma das  tentativas\n";
				}
					else{
					cout<<"Parabéns!!! Você obteve "<<acertos<<" acertos";
					}
				
		}
		
		
	
