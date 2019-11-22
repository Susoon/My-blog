#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n1;
int n2;

int idx;

int Dense_Case(char** strArr1, char ** strArr2, int len, int start, int end)
{
	int i = 0, j = start, cmp, count = 0;
	while(i < n1 && j < end)
	{
		cmp = memcmp(strArr1[i], strArr2[j], len);
		
		if(cmp > 0)
		{
			j++;
		}
		else if(cmp < 0)
		{
			i++;
		}
		else
		{
			i++;
			j++;
			count++;
		}

	}
	return count;
}
int Binary_Search(char ** strArr, char * str, int len, int start, int end)
{
	int cmp;
	if(start >= end)
	{
		cmp = memcmp(strArr[start], str, len);
		if(cmp <= 0)
			idx = start;
		return cmp;
	}
	int middle = (start + end) / 2;
	cmp = memcmp(strArr[middle], str, len);
	if(cmp > 0)
		return Binary_Search(strArr, str, len, start, middle);
	else if(cmp < 0)
		return Binary_Search(strArr, str, len, middle + 1, end);
	else
	{
		idx = middle;
		return 0;
	}
}

int Normal_Case(char ** strArr1, char ** strArr2, int len, int start, int end)
{
	int i = 0, count = 0;
	idx = start;
	while(i < n1)
	{
		if(Binary_Search(strArr2, strArr1[i], len, idx, end) == 0)
			count++;
		i++;
	}

	return count;
}

int countCommonStrings(char** strArr1, char ** strArr2)
{
	int len = strlen(strArr1[0]), start = 0, end = n2;
	idx = 0;
	
	Binary_Search(strArr2, strArr1[0], len, 0, n2);
	start = idx;
	
	idx = 0;
	Binary_Search(strArr2, strArr1[n1 - 1], len, 0, n2);
	if(idx != 0)
		end = idx;

	if((end - start)/n1 < 100)
		return Dense_Case(strArr1, strArr2, len, start, end + 1);
  else
		return Normal_Case(strArr1, strArr2, len, start, end);
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
