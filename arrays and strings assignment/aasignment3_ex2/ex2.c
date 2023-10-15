/*
 * ex2.c
 *
 *  Created on: Oct 13, 2023
 *      Author: marwan
 */


#include "stdio.h"
int main()
{
	int n;
	printf("please enter the number of data:  \n");
		fflush(stdout);
		scanf("%d",&n);
	float a[n];
	float result,sum;

	printf("please enter  data:  \n");
		fflush(stdout);

	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		fflush(stdin);

	}
	for(int i=0;i<n;i++)
	{
		sum+= a[i];
	}

	result = sum/n;
	printf("the average is : %f", result);
	}


