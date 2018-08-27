#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	
	int x;
	
	cout<<"Digite um valor \n";
	cin>>x;
	
	if(x%2==0){
		cout<<"O número é PAR!!";
	}else{
		cout<<"O número é ÍMPAR!!";
	}

	return 0;
}
