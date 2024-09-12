/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	int x,i,sum=0;
	      printf("Enter an integer: ");
	      fflush(stdin); fflush(stdout);
	      scanf("%d",&x);
	      for(i=1;i<=x;i++)
	      {
	    	  sum=sum+i;
	      }
	      printf("sum = %d",sum);
}

