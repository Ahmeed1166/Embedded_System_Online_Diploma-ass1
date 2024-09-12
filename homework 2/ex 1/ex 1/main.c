/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Ahmed Mohamed Abdallah
 */

#include "stdio.h"
void main ()
{
	int x;
	printf("enter an integer U want to check :");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&x);
	if(x%2==0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);



}
