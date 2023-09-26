/*
 * ex6.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */

#include "stdio.h"
int main()
{
	float x,y;
	printf("please enter two integer in order of x then y ");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	float z;
	z=x;
	x=y;
	y=z;
	printf("the value of x is %f while the value of y is %f",x,y);
}
