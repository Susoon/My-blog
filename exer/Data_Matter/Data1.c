#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int n1;
int n2;


typedef struct trie_node
{
	struct trie_node ** children;
	char alphabet;
}node;

node * root;
node * curr;

//initialize Trie
void Init_Trie();
//arr1의 값을 trie에 대입
void Insert_Str(char * str);
//arr2의 값을 traverse하며 확인
int Traverse_Trie(char * str);
//node 추가
void Add_Node(char alpha);
//call되는 함수
int countCommonStrings(char** strArr1, char ** strArr2);

void Init_Trie()
{
	root = (node*)malloc(sizeof(node));
	root -> children = (node**)malloc(sizeof(node*) * 26);
	root -> alphabet = 0;
}


void Insert_Str(char * str)
{
	int len = strlen(str);
	curr = root;

	for(int i = 0; i < len; i++)
	{
		if(curr -> children[str[i] - 'a'] == NULL)
		{
			Add_Node(str[i]);
		}
		curr = curr -> children[str[i] - 'a'];
	}
}

int Traverse_Trie(char * str)
{
	int len = strlen(str);
	curr = root;

	for(int i = 0; i < len; i++)
	{
		if(curr -> children[str[i] - 'a'] == NULL)
		{
			return false;
		}
		curr = curr -> children[str[i] - 'a'];
	}

	return true;
}

void Add_Node(char alpha)
{
	node *tmp;
	curr -> children[alpha - 'a'] = (node*)malloc(sizeof(node));
	tmp = curr -> children[alpha - 'a'];
	tmp -> children = (node**)malloc(sizeof(node*) * 26);
	tmp -> alphabet = alpha;
}


int countCommonStrings(char** strArr1, char ** strArr2)
{
	int count = 0;

	Init_Trie();

	for(int i = 0; i < n1; i++)
	{
		Insert_Str(strArr1[i]);
	}

	for(int i = 0; i < n2; i++)
	{
		count += Traverse_Trie(strArr2[i]);
	}

	return count;
}

int main(void)
{
	scanf("%d", &n1);
	scanf("%d", &n2);
	char** strArr1 = (char**)malloc(sizeof(char*) * n1);
	char** strArr2 = (char**)malloc(sizeof(char*) * n2);

	for(int i = 0; i < n1; i++)
		strArr1[i] = (char*)malloc(sizeof(char) * 9);
	for(int i = 0; i < n2; i++)
		strArr2[i] = (char*)malloc(sizeof(char) * 9);

	for(int i = 0; i < n1; i++)
		scanf("%s", *(strArr1 + i));
	for(int i = 0; i < n2; i++)
		scanf("%s", *(strArr2 + i));

	int sum = 0;
	int test_num = 150;
	for(int i = 0; i < test_num; i++)
		sum += countCommonStrings(strArr1, strArr2);
	printf("%d\n", sum/test_num);

	for(int i = 0; i < n1; i++)
		free(strArr1[i]);
	for(int i = 0; i < n2; i++)
		free(strArr2[i]);

	free(strArr1);
	free(strArr2);

	return 0;
}
