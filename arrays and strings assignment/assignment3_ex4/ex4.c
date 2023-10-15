/*
 * ex4.c
 *
 *  Created on: Oct 15, 2023
 *      Author: marwan
 */


/*
 * ex2.c
 *
 *  Created on: Oct 13, 2023
 *      Author: marwan
 */


#include "stdio.h"
int main()
{
	int a[100];
	int n , pos,x;
	printf("please enter the number of elements");
	fflush(stdout);
	scanf("%d", &n);

	for(int i =0;i<n; i++)
	{
		a[i]=i+1;
	}

	for(int i =0;i<n; i++)
		{
			printf("%d",a[i]);
		}
	printf("please enter the element you want to enter");
		fflush(stdout);
		scanf("%d", &x);
		n++;
		printf("please enter the position you want to insert the number in");
		fflush(stdout);
		scanf("%d", &pos);
		for(int i=n-1;i>=pos-1;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=x;

		for(int i =0;i<n; i++)
				{
					printf("%d",a[i]);
				}
		}

