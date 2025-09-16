#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main () {
//antes de poner algun numero aprete enter
	int A,B,C;
	cout<<"ingrese tres numeros: ";
    cin>>A>>B>>C;
if((A>B)&&(A>C))
{
	cout<<"A es mayor que B y que C";
	return 0;
}
if((B>A)&&(B>C))
{
	cout<<"B es mayor que A y que C";
	return 0;
}
	else
    {
	cout<<"C es mayor que A y mayor que B";
	}
   return 0;
}
