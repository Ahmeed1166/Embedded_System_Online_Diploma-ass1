/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	float x,y,sum;
	char a;
    printf("Enter operator either + or - or * or /: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	printf("Enter operands: ");
	fflush(stdin); fflush(stdout);
    scanf("%f%f",&x,&y);
	switch(a)
	{

	case '+':
		{sum=x+y;
		}
	break;

	case '-':
		{sum=x-y;
		}
	break;

	case'*':
		{sum=x*y;
		}
	break;
	case'/':
		{sum=x/y;
		}
	break;

	}
	printf("%f %c %f = %f",x,a,y,sum);



}

