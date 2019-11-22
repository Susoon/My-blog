#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GO_NEXT -1
#define MATCH 0
#define NOT_MATCH 1

int n1;
int n2;

int Normal_Case(char ** strArr1, char ** strArr2, int len);
int Binary_Search(char ** strArr, char * str, int len, int start, int end);
int Upset_Case(char ** strArr1, char ** strArr2, int len);
int Binary_Search_DP(char ** strArr, char * str, int * dp, int len, int start, int end);
int countCommonStrings(char ** strArr1, char ** strArr2);

int Normal_Case(char ** strArr1, char ** strArr2, int len)
{
	int i = 0, j = 0, count = 0;
	while(i < n1 && j < n2)
	{
		if(Binary_Search(strArr2, strArr1[i], len, 0, n2) == 0)
			count++;
		i++;
	}
	
	return count;
}

int Binary_Search(char ** strArr, char * str, int len, int start, int end)
{
	if(start == end)
		return memcmp(strArr[start], str, len);
	int middle = (start + end) / 2;
	int cmp = memcmp(strArr[middle], str, len);
	if(cmp > 0)
		return Binary_Search(strArr, str, len, start, middle);
	else if(cmp < 0)
		return Binary_Search(strArr, str, len, middle + 1, end);
	else
		return 0;
}

int Upset_Case(char ** strArr1, char ** strArr2, int len)
{
	int * dp = (int*)calloc(n2, sizeof(int));
	int i = 0, j = 0, count = 0;
	
	while(i < n1 && j < n2)
	{
		if(Binary_Search_DP(strArr2, strArr1[i], dp, len, 0, n2) == 0)
			count++;
		i++;
	}

	return count;
}

int Binary_Search_DP(char ** strArr, char * str, int * dp, int len, int start, int end)
{
	if(start == end)
		return memcmp(strArr[start], str, len);
	int middle = (start + end) / 2;
	int cmp;
	
	if(dp[middle] >= 0)
		cmp = memcmp(strArr[middle], str, len);
	else
		cmp = dp[middle];

	if(cmp > 0)
		return Binary_Search(strArr, str, len, start, middle);
	else if(cmp < 0)
		return Binary_Search(strArr, str, len, middle + 1, end);
	else
		return 0;
}

int countCommonStrings(char** strArr1, char ** strArr2)
{
	int i = 0, j = 0, cmp, len = strlen(strArr1[0]), count = 0;
	
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
