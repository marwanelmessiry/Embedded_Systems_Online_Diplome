/*
 * ex4.c
 *
 *  Created on: Nov 18, 2023
 *      Author: marwan
 */

#include "stdio.h"

int power(int b ,int e )
{
	if(e==1)
	{
		return b;
	}
	else
	{
		return b*power(b,e-1);
	}

}


int main()
{
	int b,e;
	printf("please enter the base and power \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&b);
	scanf("%d",&e);
	int result= power(b,e);
	printf("the result of %d power %d is %d ",b,e,result);

}

