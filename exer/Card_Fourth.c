#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	double index;
	int left_child_num;
	int right_child_num;
	struct node * parent;
	struct node * left_child;
	struct node * right_child;

}Node;

int n;

Node * root;
Node * curr;

void Make_Tree(Node * parent, int start, int end)
{
	if(end == start)
	{
		parent -> index = start;
		parent -> left_child_num = 0;
		parent -> right_child_num = 0;
		parent -> left_child = NULL;
		parent -> right_child = NULL;
		if(end == n)
			parent -> right_child_num = -1;
	}

	int i_half = (start + end) / 2;
	double d_half = (start + end) / 2;
	parent -> index = d_half;
	parent -> left_child_num = i_half - start + 1;
	parent -> right_child_num = end - i_half;
	parent -> left_child = (Node*)malloc(sizeof(Node));
	parent -> right_child = (Node*)malloc(sizeof(Node));
	parent -> left_child -> parent = parent;
	parent -> right_child -> parent = parent;
	Make_Tree(parent -> left_child, start, i_half);
	Make_Tree(parent -> right_child, i_half + 1, end);
}

int Find_Loca(int location, int move)
{
	int ret;
	Node * tmp = curr;

	while(curr -> left_child_num + curr -> right_child_num < move) 
	{ 
		curr = curr -> parent;
	       	tmp = tmp -> parent;
	}
	if(curr -> left_child == tmp)
	{
		tmp = curr -> right_child;
		move -= curr -> left_child_num;
	}
	else
	{
		tmp = curr -> left_child;
		move -= curr -> right_child_num;
	}

	while(curr -> left_child != NULL || curr -> right_child != NULL)
	{
		if(curr -> left_child_num >= move)
		{
			curr -> left_child_num -= 1;
			curr = curr -> left_child;
		}
		else
		{
			curr -> right_child_num -= 1;
			curr = curr -> right_child;
		}
	}

	ret = curr -> index;
	
	tmp = curr;
	curr = curr -> parent;
	if(curr -> left_child == tmp)
		curr -> left_child = NULL;
	else
		curr -> right_child = NULL;

	return curr -> index;
}

void sorting(int * arr)
{
	int location = 1;
	for(int i = 1; i <= n; i++)
	{	
		location = Find_Loca(location, i);

		arr[location] = i;
	}
}

int main(void)
{
	int * arr;

	scanf("%d",&n);

	arr = (int*)calloc(n + 1, sizeof(int));

	root = (Node*)malloc(sizeof(Node));
	root -> parent = NULL;
	
	curr = root;

	Make_Tree(root, 1, n);

	//sorting(arr);

	for(int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	free(arr);

	return 0;
}

