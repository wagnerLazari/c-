#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	int idade;
	
	cout<<"Digite sua idade: ";
	cin>>idade;
	
	if(idade<12){
		cout<<"� crian�a!";
	}else if(idade>=12 && idade<18){
		cout<<"� adolescente!";
	}else if(idade>=18 && idade<50){
		cout<<"� adulto!";
	}else{
		cout<<"� idoso!";
	}

	return 0;
}
