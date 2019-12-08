#include <stdio.h>

void sorting(int * arr, int n)
{
	int* tmp = (int*)calloc(n + 1, sizeof(int));
	int location = 1;
	for (int i = 1; i <= n; i++)
	{
		int count = 0;
		while (count < i)
		{
			if (location > n)
				location = location % n;
			if (tmp[location] == 0)
			{
				count++;
			}
			location++;
		}
		if (location > n)
			location = location % n;
		while (tmp[location] != 0 || location == 0) 
		{
			location++; 
			if (location > n)
				location = location % n;
		}
		tmp[location] = i;
	}

	for (int i = 1; i <= n; i++) { arr[i] = tmp[i]; }
}

int main(void)
{
	int n;
	int* arr;
	scanf("%d", &n);
	arr = (int*)calloc(n + 1, sizeof(int));

	for (int i = 0; i <= n; i++)
	{
		arr[i] = i;
	}

	sorting(arr, n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}