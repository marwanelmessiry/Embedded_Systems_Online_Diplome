/*
 * ex8.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */
#include "stdio.h"
int main()
{
	int x;
	printf("please enter an integer to know if it is odd or even ");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}


}


