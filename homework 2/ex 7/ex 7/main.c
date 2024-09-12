/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Ahmed Mohamed Abdallah
 */
#include "stdio.h"
void main ()
{
	int x,i,sum=1;
	      printf("Enter an integer: ");
	      fflush(stdin); fflush(stdout);
	      scanf("%d",&x);
	      if(x<0)
	    	  printf("Error!!! factorial of negative number does not exist");
			  else
			  {
	      for(i=1;i<=x;i++)
	      {
	    	  sum=sum*i;
	      }
	      printf("factorial = %d",sum);
			  }
}

