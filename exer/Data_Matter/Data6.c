#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GO_NEXT -1
#define MATCH 0
#define NOT_MATCH 1

int n1;
int n2;

int idx;

int Quaternary_Search(char ** strArr, char * str, int len, int start, int end);
int Normal_Case(char ** strArr1, char ** strArr2, int len);
int countCommonStrings(char ** strArr1, char ** strArr2);

int Quaternary_Search(char ** strArr, char * str, int len, int start, int end)
{
	if(start == end)
	{
		idx = start;
		return memcmp(strArr[start], str, len);
	}
	int tmp = (start + end) / 2, term = tmp - start;	
	int middle[3] = {tmp, tmp + term, tmp + 2 * term};
	int cmp[5];
	cmp[0] = start - 1; cmp[4] = end;
       	for(int i = 1; i < 4; i++)
	{	
		cmp[i] = memcmp(strArr[middle[i]], str, len);
		if(cmp[i] > 0)
			return Quaternary_Search(strArr, str, len, cmp[i - 1] + 1, cmp[i]);
	}
	for(int i = 1; i < 3; i++)
	{
		if(cmp[i] < 0)
			return Quaternary_Search(strArr, str, len, cmp[i] + 1, cmp[i + 1]);
	}
}

int Normal_Case(char ** strArr1, char ** strArr2, int len)
{
	int i = 0, j = 0, count = 0;
	while(i < n1 && j < n2)
	{
		if(Binary_Search(strArr2, strArr1[i], len, idx, n2) == 0)
			count++;
		i++;
	}
	
	return count;
}

int countCommonStrings(char** strArr1, char ** strArr2)
{
	int i = 0, j = 0, cmp, len = strlen(strArr1[0]), count = 0;
	idx = 0;

	if(n2 / n1 <= 50)
		return Normal_Case(strArr1, strArr2, len);
	
	return Upset_Case(strArr1, strArr2, len);
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
