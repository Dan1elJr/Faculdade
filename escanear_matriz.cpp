#include <iostream>
#include <locale>
	using namespace std;
	
	int main(){
		setlocale(LC_ALL,"ptb");
		
		int matriz [3][3],matriz2 [3][3],matriz3 [3][3];
		int i,j,valor;
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				cin>>valor;
				matriz[i][j]=valor;
			
			
			
			}
			
		}
			cout<<"\n";
			for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			
				if(matriz[i][j]==NULL){
					cin>>valor;
					matriz[i][j]=valor;	
				}
				else {
					cout<<"matriz de linha: "<<i<<" coluna: "<<j<<" não possui mais espaço \n";
				}
			
			
			}
			
		}
}
