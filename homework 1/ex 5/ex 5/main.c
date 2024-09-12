/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Ahmed Mohamed Abdallah
 */

#include "stdio.h"
void main ()
{
	char c;
	printf ("Enter character :");
	fflush (stdin); fflush (stdout);
	scanf ("%c",&c);
	printf ("Ascii code of %c : %d" , c,c);

}
