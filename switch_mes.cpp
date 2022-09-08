#include <iostream>
#include <locale>
 using namespace std;
 
 int main(){
 	setlocale(LC_ALL,"ptb");
 	
 	int numMes;
	 char *mesExtenso;
 	bool invalido=false;
 	
 	cout<<"Informe o número do mês: ";
	
 	do {
 		cout<<"\n";
	 cin>>numMes;
 	switch(numMes){
 		case 1:
 			mesExtenso="Janeiro";
 			cout<<mesExtenso;	
			 break;	
 			
	 
 	
	 	case 2:
 			mesExtenso="Fevereiro";
 			cout<<mesExtenso;		
 			break;
	 	case 3:
 			mesExtenso="Março";
 			cout<<mesExtenso;		
 		   	break;
	 	case 4:
 		mesExtenso="Abril";
 			break;
	 	case 5:
 			mesExtenso="Maio";
 			cout<<mesExtenso;		
	
			break;
		case 6:
 			mesExtenso="junho";
 			cout<<mesExtenso;
 			break;
 		case 7:
 			mesExtenso="Julho";
 			cout<<mesExtenso;	
 			break;
		 case 8:
 			mesExtenso="Agosto";
 			cout<<mesExtenso;		
 			break;		
		case 9:
 			mesExtenso="Setembro";
 			cout<<mesExtenso;	
			 break;	
 		
		case 10:
 			mesExtenso="Outubro";
 			cout<<mesExtenso;
 			break;
 		
		case 11:
 			mesExtenso="Novembro";
 			cout<<mesExtenso;
			 cout<<mesExtenso;
			 break;	
		
		case 12:
 			mesExtenso="Dezembro";
 			cout<<mesExtenso;
 			break;
 		
 		default:
 			cout<<"número inválido";
 		
 	}
 		
	
	 }while(numMes>false);
 }
