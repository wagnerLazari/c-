#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	double n1,n2,n3,n4,maior,menor,media;
	
	cout<<"Digite quatro valores \n";
	cin>>n1>>n2>>n3>>n4;
	
	// MENOR
	if(n1<n2&&n1<n3&&n1<n4){
		menor=n1;
	}else if(n2<n1&&n2<n3&&n2<n4){
		menor=n2;
	}else if(n3<n1&&n3<n2&&n3<n4){
		menor=n3;
	}else{
		menor=n4;
	}
	
	// MAIOR
	if(n1>n2&&n1>n3&&n1>n4){
		maior=n1;
	}else if(n2>n1&&n2>n3&&n2>n4){
		maior=n2;
	}else if(n3>n1&&n3>n2&&n3>n4){
		maior=n3;
	}else{
		maior=n4;
	}
	
	// MEDIA
	media = (n1+n2+n3+n4)/4;
	
	cout<<"O número maior é "<<maior<<".";
	cout<<"\nO número menor é "<<menor<<".";
	cout<<"\nA média aritmética é "<<media<<".";
	
	
	return 0;
}
