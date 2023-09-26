/*
 * ex9.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */

#include "stdio.h"
int main()
{
	char x;
	printf("please enter a character to know if it vowel or not ");
	fflush(stdout);
	scanf("%c",&x);
	if(x=="A" ||x=="E"||x=="U"||x=="I"||x=="O"||x=="a"||x=="e"||x=="i"||x=="u"||x=="o")
	{
		printf("%c is vowel",x);
	}
	else
	{
		printf("%c is not vowel",x);
	}


}
