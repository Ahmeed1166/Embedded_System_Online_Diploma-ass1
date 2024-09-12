/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Ahmed Mohamed Abdallah
 */

#include "stdio.h"
void main ()
{
	float a,b,c;
	printf ("Enter value of a :");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&a);
	printf ("Enter value of b :");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&b);
	c=a;
	a=b;
	b=c;
	printf("After swaping, value of a : %f\n",a);
	printf("After swaping, value of b : %f",b);


}

