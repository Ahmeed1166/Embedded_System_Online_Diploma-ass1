/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	char x;
	printf("Enter an alphabet :");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&x);
	if (x=='a'|| x=='A' || x=='e' || x=='E' || x=='I' || x=='i' || x=='o' || x=='O' || x=='u' || x=='U')
		printf("%c is vowel",x);
	else
		printf("%c is consonant",x);




}

