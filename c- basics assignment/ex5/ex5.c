/*
 * ex5.c
 *
 *  Created on: Sep 25, 2023
 *      Author: marwan
 */


#include "stdio.h"
int main()
{
	char x;
	printf("please enter character ");
	fflush(stdout);
	scanf("%c",&x);

	int z;
	z=(int)x;
	printf("Ascii code of %c is: %d",x,z);
}
