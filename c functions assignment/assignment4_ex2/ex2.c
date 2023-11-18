/*
 * ex2.c
 *
 *  Created on: Nov 17, 2023
 *      Author: marwan
 */


#include "stdio.h"

int factorial(int a )
{
	if (a==1||a==0)
	{
		return 1;
	}
	else
	{
		return  a*factorial(a-1);
	}
	}


int main()
{
	int a;
	printf("please enter the the number you need its factorial \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	int result= factorial(a);
	printf("the factorial of %d is %d ",a,result);

}
