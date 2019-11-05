#include <stdio.h>
#include <stdlib.h>

void sorting(int * arr, int n)
{
	int location = 0;
	int * num = (int*)calloc(n + 1, sizeof(int));
	for(int i = 1; i <= n; i++)
	{
		location = location + i + 1;
		if(location > n)
			location % n;
		arr[location] = i;
		num[location]++;
	}
}

int main(void)
{
	int n;
	int * arr;

	scanf("%d",&n);
	arr = (int*)calloc(n + 1, sizeof(int));

	sorting(arr, n);

	for(int i = 1; i <= n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");

	return 0;
}

