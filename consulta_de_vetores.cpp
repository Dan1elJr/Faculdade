#include<iostream>
#include<locale>
	using namespace std;
	
int main(){
	setlocale(LC_ALL, "ptb");
	string cores[4];
	int i,x;
	x=sizeof(cores)/ sizeof(cores[0]);

	for(i=0;i<x;i++){
		cout<<"Informe " << x <<" cores: ";
		cin>>cores[i];
	}
	for(i=0;i<x;i++){
		cout<<"As cores são: "<<cores[i]<<"\n";
		
	}
	
	for(i=0;i<x;i++){
		if(i==(x-1)){
		
		cout<<"a ultima cor é "<<cores[i]<<"\n";
		}
	}
	for(i=0;i<x;i++){
		if(i%2==1){
		
		cout<<"a cor impar na posição "<<i<<" do vetor é: "<<cores[i]<<"\n";
		}
	}
}	
