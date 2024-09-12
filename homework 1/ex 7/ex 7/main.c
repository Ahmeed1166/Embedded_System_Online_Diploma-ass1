/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Ahmed Mohame Abdallah
 */
#include "stdio.h"
void main ()
{
	float a,b;
	printf ("Enter value of a :");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&a);
	printf ("Enter value of b :");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&b);
	a=a+b;          //a=a+b   b=b
	b=a-b;           //b=a+b-b=frist a
	a=a-b;           //a=a+b-a=frist b
	printf("After swapping, value of a :%f\n",a);
	printf("After swapping, value of b :%f\n",b);
}

