#include <iostream>
#include <locale>
#include <math.h>>
	using namespace std;

	int main(){
	 int num;

  cout << "Digite um numero: ";
  cin >> num;

  if (num  > 0)
  {
      num++;
      cout << num << " ";
  }
  cout << num + 1 << " ";
  if (num < 0)
  {
      num--;
      cout << num << " ";
  }
  else{
  
     cout << num * 10 ;
	
	}
}
