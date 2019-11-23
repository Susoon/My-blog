#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n1;
int n2;
int Dense_Case(char** strArr1, char ** strArr2, int len, int start1, int end1, int start2, int end2)
{
	int i = start1, j = start2, cmp, count = 0;
	while(i < end1 && j < end2)
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
	if(start == end)
	{
		return end;
	}
	int middle = (start + end) / 2;
	cmp = memcmp(strArr[middle], str, len);
	if(cmp > 0)
		return Binary_Search(strArr, str, len, start, middle);
	else if(cmp < 0)
		return Binary_Search(strArr, str, len, middle + 1, end);
	else
	{
		return middle;
	}
}

int Normal_Case(char ** strArr1, char ** strArr2, int len, int start1, int end1, int start2, int end2)
{
	int i = start1, count = 0, idx;
	while(i < end1)
	{
		idx = Binary_Search(strArr2, strArr1[i], len, idx, end2);
		if(memcmp(strArr1[i], strArr2[idx], len) == 0)
			count++;
		i++;
	}

	return count;
}

int Recursive_Counting(char ** strArr1, char** strArr2, int len, int start1, int end1, int start2, int end2)
{
	int count = 0, middle = (start1 + end1) / 2, tmp_s, tmp_m, tmp_e;
	static int height = 0;
	if(height == 10)
	{
		if((end2 - start2) / (end1 - start1) < 50)
			return Dense_Case(strArr1, strArr2, len, start1, end1, start2, end2);
		else
			return Normal_Case(strArr1, strArr2, len, start1, end1, start2, end2);
	}
	height++;
	
	tmp_s = Binary_Search(strArr2, strArr1[start1], len, start2, end2);
	tmp_m = Binary_Search(strArr2, strArr1[middle], len, start2, end2);
	tmp_e = Binary_Search(strArr2, strArr1[end1], len, start2, end2);

	
	count += Recursive_Counting(strArr1, strArr2, len, start1, middle, tmp_s, tmp_m);
	count += Recursive_Counting(strArr1, strArr2, len, middle + 1, end1, tmp_m, tmp_e);
	height--;

	return count;
}

int countCommonStrings(char** strArr1, char ** strArr2)
{
	int len = strlen(strArr1[0]), start = 0, end = n2;
	start = Binary_Search(strArr2, strArr1[0], len, 0, n2);
	
	end = Binary_Search(strArr2, strArr1[n1 - 1], len, 0, n2);
	
	return Recursive_Counting(strArr1, strArr2, len, 0, n1, start, end);
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
