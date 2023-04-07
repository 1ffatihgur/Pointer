#include<stdio.h>

int main()
{
	
	char isim[] = "Ali";
	char isim2[] = {'A','l','i','\0'};	
	
	printf("%s\n",isim);
	printf("%s\n",isim2);
	printf("%c\n",isim[0]);
	printf("%c\n",isim2[0]);

	char *ptr;
	
	ptr = "Ali";

	printf("%s\n",ptr);	
	printf("%c\n\n\n",*(ptr));
	
	char *sehir = "Izmir";
	printf("%s\n",(sehir));
	printf("%c",*(sehir+1));
	
	printf("\n\n ---- \n\n");
	
	
	
	
	
	
	
	char *sehircim = "Osmaniye";
	int i=0;
	
	while(sehircim[i] != '\0')
	{
		printf("%c --- %x\n",*(sehircim+i),&sehircim[i]);
		i++;
	}
	
	printf("\n\n\n");
	
	
	
	char *sehircim2 = "Adana";
	
	while(*sehircim2 != NULL)
	{
		
		printf("%c --- %x\n",*(sehircim2),&sehircim2);
		sehircim2++;
	}
	
	
	printf("\n\n\n");
	
	char *sehirler[] = {"Ankara","Konya","Mus","Adiyaman"};
	int j;
	
	for(j=0; sehirler[j]!='\0'; j++)
	{
		printf("%s --- %x\n",*(sehirler+j),&sehirler+j);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
