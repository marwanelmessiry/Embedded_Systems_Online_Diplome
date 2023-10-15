/*
 * ex3.c
 *
 *  Created on: Oct 13, 2023
 *      Author: marwan
 */

#include "stdio.h"
int main()
{
	int n;
	printf("please enter the number of rows:  \n");
			fflush(stdout);
			scanf("%d",&n);
	int m;
	printf("please enter the number of rows:  \n");
			fflush(stdout);
			scanf("%d",&m);
	int a[n][m];
	int transpose[m][n];
	printf("please enter the  matrix element by element \n");
	fflush(stdout);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				printf("please enter the value of a%d%d \n",i+1,j+1);
				fflush(stdout);
				fflush(stdin);
				scanf("%d",&a[i][j]);
			}
	}

	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				{
					transpose[j][i]=a[i][j];
				}
		}

	for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
						{
							printf("%d \t",transpose[i][j]);
						}
					printf("\n");

				}
}



