/*
 * assignment4_ex1.c
 *
 *  Created on: Nov 17, 2023
 *      Author: marwan
 */


#include "stdio.h"

void prime(int a , int b)
{
	int temp=0;
	printf("the prime numbers are ");
	for (int i=a;i<b;i++)

	{
		temp=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				temp++;

			}


		}
		if (temp==0)
		{
			printf("%d ",i);
		}

	}
}

int main()
{
	int a,b;
	printf("please enter the interval of numbers to find prime numbers \n");
	fflush(stdout);
	scanf("%d",&a);
	scanf("%d",&b);
	prime(a,b);

}
