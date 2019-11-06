#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int num;
	struct node * next;
	struct node * prev;
}Node;

Node * head;
Node * hash_head;

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

void Hash_Add(int n)
{
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp -> num = n;
	tmp -> next = hash_head;
	tmp -> prev = head;
	hash_head -> next = tmp;
	hash_head = tmp;
}	

void Remove_Cur_Node()
{
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
	int n, count;
	int * arr;

	scanf("%d",&n);
	arr = (int*)calloc(n + 1, sizeof(int));
	
	head = (Node*)malloc(sizeof(Node));
	head -> next = head;
	head -> prev = head;
	head -> num = n;

	hash_head = (Node*)malloc(sizeof(Node));
	hash_head -> next = hash_head;
	hash_head -> prev = head;
	hash_head -> num = n / 1000;

	for(int i = n - 1; i >= 1; i--)
	{
		Add_First(i);
	}
	
	count = n / 1000;

	for(int i = 1; i <= n; i++)
	{
		if(i == count)
		{
			Hash_Add(i);
			count += n / 1000;
			if(count > n)
				count %= n;
		}
	}

	sorting(arr, n);

	for(int i = 1; i <= n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	
	free(arr);

	return 0;
}

