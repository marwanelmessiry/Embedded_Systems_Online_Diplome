/*
 * ex10.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */
#include "stdio.h"
int main()
{
	float x,y,z;
	printf("please enter three integers you want to compare");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(x>z)
	{
		if(x>y)
		{
			printf("%f is the greatest number",x);
		}
		else
		{
			printf("%f is the greatest number",y);
		}
	}
	else if(y>z)
	{
		printf("%f is the greatest number",y);
	}
	else
	{
		printf("%f is the greatest number",z);

	}

}


