/*
 * ex12.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */

#include "stdio.h"
int main()
{
	char x;
	printf("please enter character to know if it is Alphabet or not ");
	fflush(stdout);
	scanf("%c",&x);
	if(x>='A'&&x<='z')
	{
		printf(" %c is an Alphabet ",x);
	}
	else{printf(" %c is not an Alphabet ",x);}

}
