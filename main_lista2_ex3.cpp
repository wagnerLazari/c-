#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");

	int vet[9], vet2[9], result[9], i, j;
	char op[9];
	
	for(i = 0; i < 10; i++){
		cout<<"Digite um valor: \n";
		cin>>vet[i]>>vet2[i];
	}

	for(i = 0; i < 10; i++){
		//cout<<"DIGITE: \n1- SOMAR;\n2- SUBTRAIR;\n3- DIVIDIR;\n4- MULTIPLICAR";
		cout<<"Digite uma operação: \n";
		cin>>op[i];
	}
	
	for(i = 0; i < 10; i++){
		result[i] = vet[i]op[i]vet2[i];
		cout<<"\n==RESULTADO==\n";
		cout<<i+1<<"- "<<vet[i]<<op[i]<<vet2[i]<<"="<<result[i]<<"\n";
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}
