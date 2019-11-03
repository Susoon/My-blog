#include <stdio.h>

double bitmap;

union Bit
{
	double d;
	int i[2];
}ubit;

int get_bit(int n)
{
	int *i1, *i2;
	i1 = (int*)&bitmap;
	i2 = i1 + 1;

	if(n >= 32)
		return (*i1 >> (n - 31)) & 1;
	else
		return (*i2 >> n) & 1;
}

int print_bit()
{
	unsigned int *i1, *i2, bit = 1, i = 31;
	double tmp = bitmap;
	i1 = (int*)&tmp;
	i2 = i1 + 1;
	bit <<= 31;
	while(i != -1)
	{
		printf("%u", (*i1 & bit)>>i);
		if(i == 31)
			printf(" ");
		else if(i == 21)
			printf(" ");
		bit>>=1;
	       i--;	
	}
	i = 31;
	bit = 1;
	bit <<= 31;
	while(i != -1)
	{
		printf("%d", (*i2 & bit) >>i);
		i--;
		bit>>=1;
	}
	printf("\n");
}

int main(void)
{
	bitmap = -1;
	scanf("%lf", &bitmap);
	bit.d = bitmap;
	print_bit();
}


