#include <iostream>

#include "Procesos.cpp"


using namespace std;


int main(int argc, char** argv) {
	
	Procesos ing;
	
	
	printf("%d",ing.suma(5));
	printf("\n%f",ing.suma(5,6));
	printf("\n%.2lf",ing.suma(6,8.8));
	printf("\n%s",ing.suma(6,8,8));
	return 0;
}
