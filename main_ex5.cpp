#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	int ano;
	
	cout<<"Digite o ano que deseja saber se � bissexto: ";
	cin>>ano;
	cout<<ano%4<<" "<<ano%100<<" "<<ano%400<<"\n";
	
	if(ano%4==0 && ano%100!=0){
		cout<<"O ano "<<ano<<" � bissexto!";
	}else if (ano%400==0){
		cout<<"O ano "<<ano<<" � bissexto!";
	}else{
		cout<<"O ano "<<ano<<" n�o � bissexto!";

	}

	return 0;
}
