/*
 * ex13.c
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
	int sum=0;
	for (int i=1;i<=x;i++)
	{
		sum+=i;
	}
	printf("sum : %d",sum);
}

