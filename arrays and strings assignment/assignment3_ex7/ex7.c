/*
 * ex7.c
 *
 *  Created on: Oct 15, 2023
 *      Author: marwan
 */


#include "stdio.h"
#include "string.h"
int main()
{
	char s[100];
	int i=0;
	printf("please enter the string \n");
	fflush(stdout);
	gets(s);
	while(s[i]!= 0)
	{
		i++;
	}
	printf("the length of the string is: %d",i);

}
