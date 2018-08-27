#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");

	int vetor[5], i, j, aux;
	
	
	for(i = 0; i < 5; i++){
		cout<<"Digite um valor: \n";
		cin>>vetor[i];
	}
	
	for(i = 0; i < 5; i++){
		for(j = i+1; j < 5; j++){
		
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	} 
	
	for(i = 0; i < 5; i++){
		cout<<vetor[i]<<" - ";
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}
