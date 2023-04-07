#include<stdio.h>


int main()
{
	
	int sayi = 10;
	int *s = &sayi;
	
	printf("Deger: %d\n",sayi);
	printf("Adres: %x",s);
	
	printf("\n\n-----\n\n");
	
	char harf = 'a';
	char *k = &harf;
	
	printf("Deger: %c\n",harf);
	printf("Adres: %x",k);	
	
	
	
	
	return 0;
}
