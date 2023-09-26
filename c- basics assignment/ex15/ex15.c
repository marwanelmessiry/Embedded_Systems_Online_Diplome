/*
 * ex15.c
 *
 *  Created on: Sep 27, 2023
 *      Author: marwan
 */

#include "stdio.h"
int main()
{
	char x;
	float y,z,result;
	printf("please enter  your operation ");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);
	if(x == '+')
	{
		printf("please two numbers you want to add ");
			fflush(stdout);
			scanf("%f",&y);
			scanf("%f",&z);
			result=y+z;
			printf("the result is : %f",result);
	}
	else if(x == '-')
		{
			printf("please two numbers you want to subtract ");
				fflush(stdout);
				scanf("%f",&y);
				scanf("%f",&z);
				result=y-z;
				printf("the result is : %f",result);
		}
	else if(x =='*')
			{
				printf("please two numbers you want to multiply ");
					fflush(stdout);
					scanf("%f",&y);
					scanf("%f",&z);
					result=y*z;
					printf("the result is : %f",result);
			}
	else if(x =='/')
				{
					printf("please two numbers you want to divide ");
						fflush(stdout);
						scanf("%f",&y);
						scanf("%f",&z);
						if(z==0)
						{
							printf("anything divide by zero is infinite \n");
						}
						result=y/z;
						printf("the result is : %f",result);
				}
}

