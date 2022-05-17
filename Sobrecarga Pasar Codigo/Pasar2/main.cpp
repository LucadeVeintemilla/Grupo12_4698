


#include <iostream>
#include "Vector.cpp"

using namespace std;
int main(int argc, char **argv)
{
	Vector V1(10,20), V2(5,5);
    float p;

   p = V1*V2;

   cout << "P = " << p<< endl;
 
	return 0;
}

