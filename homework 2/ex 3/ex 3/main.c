/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	float x,y,z;
	printf("Enter three number :");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f" ,&x,&y,&z);
	if (x>y&&x>z)
		printf("largest number = %f",x);
	else if (y>x&&y>z)
		printf("largest number = %f",y);
	else
		printf("largest number = %f",z);




}

