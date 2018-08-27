#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	int a1,a2,a3;
	
	cout<<"Digite os três ângulos do trigângulo \n";
	cin>>a1>>a2>>a3;
	
	if(a1==a2 && a1==a3 && a2==a3){
		cout<<"Este triângulo é Equilátero!";		
	}else if(a1==a2||a1==a3||a2==a3){
		cout<<"Este triângulo é Isósceles!";
	}else{
		cout<<"Este triângulo é Escaleno!";
	}

	return 0;
}
