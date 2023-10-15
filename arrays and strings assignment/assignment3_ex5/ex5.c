/*
 * ex5.c
 *
 *  Created on: Oct 15, 2023
 *      Author: marwan
 */


#include "stdio.h"
int main()
{
	int a[100];
	int n , x;
	printf("please enter the number of elements \n");
	fflush(stdout);
	scanf("%d", &n);

	for(int i =0;i<n; i++)
	{
		a[i]=(i+1)*11;
	}

	for(int i =0;i<n; i++)
		{
			printf(" %d",a[i]);
		}
	printf(" \n");
	printf("please enter the element you want to search \n");
		fflush(stdout);
		scanf("%d", &x);

		for(int i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				printf("Number found at location: %d",i+1);
				break;
			}
		}
				}
