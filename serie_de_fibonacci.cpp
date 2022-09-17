#include <iostream>
#include <locale>
	using namespace std;
	int main(){
		setlocale(LC_ALL,"ptb");
		
		int contador,penult=0,ult=1,limite,temp=0;
		
		cout<<"Quantas series de fibonacci você quer ver ?";
		cout<<"\n";
		cin>>limite;
		cout<<"\n\n";
		if(limite==1){
			cout<<penult;
			
			}else if(limite==2){
			cout<<penult;
			cout<<"\n";
			cout<<ult;
			cout<<"\n";


				}else if(limite>=3){
	
					cout<<penult;
					cout<<"\n";
					cout<<ult;
					cout<<"\n";
					
						for(contador=0;contador<limite-2;contador++){
							temp=penult;
							penult=ult;
							ult=temp+penult;
							cout<<ult;
							cout<<"\n";
				
						}
				}
			
		}

		
	
