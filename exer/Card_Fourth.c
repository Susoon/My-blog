#include <stdio.h>
#include <stdlib.h>

int Find_Loca(int move)
{
	int ret = 0;
	
	return ret;
}

void sorting(int * arr, int n)
{
	int location = 0;
	for(int i = 1; i <= n; i++)
	{	
		location = Find_Loca(i % (n - i + 1));	

		arr[location] = i;
	}
}

int main(void)
{
	int n, count = 1001;
	int * arr;

	scanf("%d",&n);
	
	arr = (int*)calloc(n + 1, sizeof(int));

	for(int i = 0; i <= n; i++) { arr[i] = i;}

	sorting(arr, n);

	for(int i = 1; i <= n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	
	free(arr);

	return 0;
}

