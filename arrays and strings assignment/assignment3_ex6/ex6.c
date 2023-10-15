/*
 * ex6.c
 *
 *  Created on: Oct 15, 2023
 *      Author: marwan
 */


#include "stdio.h"
#include "string.h"
int main()
{
	char s[100],x;
	int count=0;
	printf("please enter the string \n");
	fflush(stdout);
	gets(s);
	printf("please enter the character you want its frequency \n");
		fflush(stdout);
		scanf("%c",&x);
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]==x)
			{
				count++;
			}
		}

		printf("the frequency of %c is %d",x,count);
}
