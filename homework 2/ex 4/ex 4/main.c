/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	float x;
	printf("Enter a number :");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&x);
	if (x==0)
		printf("You entered Zero");
	else if (x>0)
		printf("%f is positive",x);
	else
		printf("%f is negative",x);




}

