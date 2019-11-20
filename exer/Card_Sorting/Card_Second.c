#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int num;
	struct node * next;
	struct node * prev;
}Node;

Node * head;

void Add_First(int n)
{
	Node * tmp = (Node*)malloc(sizeof(Node));
	tmp -> num = n;
	tmp -> next = head;
	tmp -> prev = head -> prev;
	head -> prev -> next = tmp;
	head -> prev = tmp;
	head = tmp;
}

void Remove_Cur_Node()
{
	Node * tmp = head;
	head -> prev -> next = head -> next;
	head -> next -> prev = head -> prev;
	head = head -> next;
}

int Find_Loca(int move)
{
	int ret = 0;

	for(int i = 0; i < move; i++)
	{
		head = head -> next;
	}
	ret = head -> num;
	Remove_Cur_Node();

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
	int n;
	int * arr;

	scanf("%d",&n);
	arr = (int*)calloc(n + 1, sizeof(int));
	
	head = (Node*)malloc(sizeof(Node));
	head -> next = head;
	head -> prev = head;
	head -> num = n;

	for(int i = n - 1; i >= 1; i--)
	{
		Add_First(i);
	}
	
	sorting(arr, n);

	for(int i = 1; i<=n;i++){printf("%d ",i);}
	printf("\n");
	for(int i = 1; i <= n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	
	free(arr);

	return 0;
}

