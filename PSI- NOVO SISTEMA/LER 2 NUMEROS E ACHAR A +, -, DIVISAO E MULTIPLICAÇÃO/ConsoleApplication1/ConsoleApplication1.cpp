// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{ 
	int x, y, z;
	printf("Introduza um numero \n");
	scanf_s("%i", &x);
	printf("Introduza um numero \n");
	scanf_s("%i", &y);
	z = x + y;
	printf("O resultado da soma de %i e %i e igual %i \n", x, y, z);
	z = x - y;
	printf("O resultado da subtracao de %i e %i e igual %i\n", x, y, z);
	z = x * y;
	printf("O resultado da multiplicacao de %i e %i e igual %i\n", x, y, z);
	z = x / y;
	printf("O resultado da divisao de %i e %i e igual %i\n", x, y, z);
	getchar();





    return 0;
}

