#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE,"portuguese_brazil");
	
	int vetorA[9], vetorB[9], result[9], i;
	
	for(i = 0; i < 10; i++){
		cout<<"Digite um valor\n";
		cin>>vetorA[i]>>vetorB[i];
	}
	
	
	
	return 0;
}
