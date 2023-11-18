/*
 * ex3.c
 *
 *  Created on: Nov 18, 2023
 *      Author: marwan
 */


#include "stdio.h"

int i;
void reverse(char *a)
{
  if (*a)
  {
    reverse(a + 1);
    printf("%c", *a);
  }
}


int main()
{
	char a[100];
	printf("please enter the string you want to reverse ");
	fflush(stdout);
	fflush(stdin);
	gets(a);
	reverse(a);

}

