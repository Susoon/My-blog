#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int index;
	int num;
	int tan_index;
	struct node * next;
}Node;

int Find_Loca(Node** arr, int location, int move)
{
	if(arr[location] -> tan_index == -1)
		return location + move;
	Node * tmp = arr[location];
	while(tmp -> num > move)
	{
		move -= tmp -> num;
		location = tmp -> index;
	}	

	return location + move;
}

void sorting(Node ** arr, int n)
{
	int location = 1;
	for(int i = 1; i <= n; i++)
	{	
		location = Find_Loca(arr, location, i % (n - i + 1)) % n;

		arr[location] -> tan_index = i;
	}
}

int main(void)
{
	int n, count = 1001;
	Node ** arr; 
	scanf("%d",&n);
	
	arr = (Node**)malloc(sizeof(Node*) * n);
	
	for(int i = 1; i <= n; i++)
	{
		arr[i] = (Node*)malloc(sizeof(Node));
		arr[i] -> index = i;
		arr[i] -> tan_index = 0;
		arr[i] -> num = -1;
	}
	
	for(int i = 1; i < n; i++)
	{
		arr[i] -> next = arr[i + 1];
	}
	arr[n] -> next = arr[1];

	sorting(arr, n);

	for(int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i] -> tan_index);
	}
	
	printf("\n");
	
	free(arr);

	return 0;
}

