/*
 * ex8.c
 *
 *  Created on: Oct 15, 2023
 *      Author: marwan
 */


#include "stdio.h"
#include "string.h"
int main()
{
	char s[100],r[100];
	int x=0;
	printf("please enter the string \n");
	fflush(stdout);
	gets(s);
	for(int i=strlen(s)-1;i>=0;i--)
	{
		r[x]=s[i];
		x++;
	}
	printf("the reversed string is: %s",r);

}
