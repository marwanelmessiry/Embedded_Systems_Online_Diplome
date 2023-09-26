/*
 * ex11.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */
#include "stdio.h"
int main()
{
	float x;
	printf("please enter an integer you want to know if it is positive or not");
	fflush(stdout);
	scanf("%f",&x);

	if(x>0)
	{
		printf("%f is  positive number",x);
	}
	else if(x==0)
	{
		printf("%f is  equal to zero ",x);
	}
	else
	{
		printf("%f is  negative number",x);
	}
}
