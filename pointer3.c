#include<stdio.h>

void degerdegistir(int *a, int *b)
{
	
	int gecici = *a;
	
	*a = *b;
	
	*b = gecici;
	
	N
}

int main()
{
	
	int x=5;
	int y=10;
	
	degerdegistir(&x,&y);
	
	printf("x: %d, y: %d",x,y);
	
	return 0;
}
