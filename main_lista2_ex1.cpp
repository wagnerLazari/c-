#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	int	vetor[99], i, ult, qntUlt;
	ult = 0; qntUlt = 0;
	
	for(i = 0;i<=99;i++){
		cout<<"Digite um número \n";
		cin>>vetor[i];
		
		if(vetor[i]==0){
			break;
		}
	}
	
	for(i = 0; i <= 99; i++){
		
		if(i == 0){
			cout<<vetor[0];
			
		}
		if(i != 0 && i != 99 && vetor[i] != 0){ // tirando o '-' inicial/final
			cout << " - " << vetor[i];
			
		}else if(i == 99 || vetor[i] == 0){ // condicionando fim SE digitou '0'
			ult = vetor[i-1];
			
			for(i = 0; i <= 99; i++){
				
				if(ult == vetor[i-1]){
					qntUlt++;
				}
			}
			cout<<"\n Último número: "<<ult;
			cout<<"\n Quantidade de ult: "<<qntUlt;
			break;
		}
	}
	
	return 0;
}
