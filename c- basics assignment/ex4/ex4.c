/*
 * ex4.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */
#include "stdio.h"
int main()
{
	float x,y;
	printf("please enter two integer ");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	float z;
	z=x*y;
	printf("product: %f",z);
}


