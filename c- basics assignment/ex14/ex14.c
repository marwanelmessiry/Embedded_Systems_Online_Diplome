/*
 * ex14.c
 *
 *  Created on: Sep 27, 2023
 *      Author: marwan
 */

#include "stdio.h"
int main()
{
	int x;
	printf("please enter an integer ");
	fflush(stdout);
	scanf("%d",&x);
	int factorial=1;
	if(x<0)
	{
		printf("you entered a negative number which has no factorial");

	}
	else if(x==0)
	{
		printf("the factorial of zero is 1");
	}
	else{
	for (int i=1;i<=x;i++)
	{
		factorial*=i;
	}
	printf("factorial of %d is %d",x,factorial);
}
}
