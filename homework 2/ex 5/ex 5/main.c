/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: hp
 */

#include "stdio.h"
void main ()
{                               //Ascii a=97 , z=122    ****   A=65  ,  Z=90  other method

	char x;
	int i,s;
	s=0;
	printf("Enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&x);
	for(i=97 ; i<=122 ; i++)
	{
		if(x==i)
		{    printf("%c is an alphabet",x);
		     s=1;
			 break;
		}
	}
	for(i=65 ; i<=90 ; i++)
		{
			if(x==i)
			{printf("%c is an alphabet",x);
			s=1;
				 break;
			}
		}
	if(s==0)
		printf("%c is not an alphabet",x);












}
