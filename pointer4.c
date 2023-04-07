#include <stdio.h>

int main () 
{

   int dizi[] = {2,5,45,32,67};
   
   int *ptr;
   
   int i;
   
   ptr = dizi;
   
   //printf("dizinin 2. elemani : %d ve adresi: %x",*(ptr+1),(ptr+1));
   
   for(i=0; i<5; i++)
   {
   		printf("%d. eleman %d ve adresi %x\n",i+1,*(ptr+i),(ptr+i));
   }
 
   return 0;
}
