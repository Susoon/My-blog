#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int* arr;
int n = 0;

void update()
{
	for(int i = 0; i < n; i++)
	{
		arr[i] += 10;
	}
		
}

void print()
{
	for(int i = 0 ; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");		
}

int main(void)
{
	arr = (int*)calloc(100, sizeof(int));

	while(n < 10)
	{
		arr[n] = 2 * n - 1;
		n++;
	}

	update();
	print();

	update();
	print();

	update();
	print();

	free(arr);
}
		

