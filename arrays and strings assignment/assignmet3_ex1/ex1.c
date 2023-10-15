/*
 * ex1.c
 *
 *  Created on: Oct 13, 2023
 *      Author: marwan
 */
#include "stdio.h"
int main()
{
	float a[2][2];
	float b[2][2];
	float c[2][2];
	printf("please enter the first matrix element by element \n");
	fflush(stdout);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			{
				printf("please enter the value of a%d%d \n",i+1,j+1);
				fflush(stdout);
				fflush(stdin);
				scanf("%f",&a[i][j]);
			}
	}
	printf("please enter the second matrix element by element \n");
		fflush(stdout);
	for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
				{
					printf("please enter the value of b%d%d \n",i+1,j+1);
					fflush(stdout);
					fflush(stdin);
					scanf("%f",&b[i][j]);
				}
		}
	for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
					{
						c[i][j]=a[i][j] + b[i][j];
					}
			}
	for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
						{
							printf("%f \t",c[i][j]);
						}
					printf("\n");

				}
}


