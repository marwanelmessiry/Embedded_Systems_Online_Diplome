/*
 * ex3.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */
#include "stdio.h"
int main()
{
	int x,y;
	printf("please enter two integer ");
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	int z;
	z=x+y;
	printf("sum: %d",z);
}


