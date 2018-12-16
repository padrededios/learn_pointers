#include <stdio.h>

int main(void)
{
	int variable;
	int * ptrint = &variable;
   printf("Tuto sur les pointeurs\n"); 

   variable = 10; 
   printf("variable = %d\n", variable);

   *ptrint = 20; 

   printf("variable = %d\n", variable);

   return 0;
}