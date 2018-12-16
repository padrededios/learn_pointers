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

   int tab[3];
   int * p;
   int ** pp;
   int (*pt)[3];

   p = tab;
   pp = &tab;
   pt = &tab;

   return 0;
}