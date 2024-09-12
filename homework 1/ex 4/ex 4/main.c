/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	float x,y ;
	printf ("Enter two number :");
	fflush (stdin); fflush (stdout);
	scanf ("%f%f" ,&x ,&y);
	printf ("product : %f" ,x*y);

}

