#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	int a1,a2,a3;
	
	cout<<"Digite os tr�s �ngulos do trig�ngulo \n";
	cin>>a1>>a2>>a3;
	
	if(a1==a2 && a1==a3 && a2==a3){
		cout<<"Este tri�ngulo � Equil�tero!";		
	}else if(a1==a2||a1==a3||a2==a3){
		cout<<"Este tri�ngulo � Is�sceles!";
	}else{
		cout<<"Este tri�ngulo � Escaleno!";
	}

	return 0;
}
