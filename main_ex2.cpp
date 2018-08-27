#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	double l1,l2,l3,area,base,h;
	
	cout<<"Digite os lados do triângulo \n";
	cin>>l1>>l2>>l3;

	if (l1==l2 && l1==l3 && l2==l3){
		//TRIANGULO EQUILATERO
		area = sqrt(3)/4*(l1*l1);
		cout<<"A área deste Triângulo Equilátero é "<<area<<"cm²";
	
	}else if (l1!=l2 && l1!=l3 && l2!=l3){
		//TRIANGULO RETANGULO
		if(l1<l2 && l1<l3 && l2<l3){
			base = l1; 
			h = l2;
		}else if(l1<l2 && l1<l3 && l3<l2){
			base = l1; 
			h = l3;
		}else if (l2<l1 && l2<l3 && l1<l3){
			base = l2;
			h = l1;
		}else if (l2<l1 && l2<l3 && l3<l1){
			base = l2;
			h = l3;
		}else if(l3<l1 && l3<l2 && l1<l2){
			base = l3;
			h = l1;
		}else{
			base = l3;
			h = l2;
		}
		area = (base * h)/2;
		cout<<"A área deste Triângulo Retângulo é "<<area<<"cm²";
		
	}else{
		//TRIANGULO ISOSCELES
		if (l1==l2){
			base = l3/2;
			h = sqrt(l1*l1+base*base);
		}else if(l2==l3){
			base = l1/2;
			h = sqrt(l2*l2+base*base);
		}else{
			base = l2/2;
			h = sqrt(l3*l3+base*base);
		}
		area = (base * h)/2;
		cout<<"A área deste Triângulo Isosceles é "<<area<<"cm²";		
		}	
	
	return 0;
}
