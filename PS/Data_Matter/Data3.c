#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GO_NEXT -1
#define MATCH 0
#define NOT_MATCH 1

int n1;
int n2;

int countCommonStrings(char** strArr1, char ** strArr2)
{
	int i = 0, j = 0, k = 0, cmp, len = strlen(strArr1[0]), count = 0;
	while(i < n1 && j < n2)
	{
		if(strArr1[i][k] > strArr2[j][k])
		{
			j++;
		}
		else if(strArr1[i][k] == strArr2[j][k])
		{
			k++;
			if(k >= len)
			{
				count++;
				i++;
				j++;
				k = 0;
			}
		}
		else
		{
			k = 0;
			i++;
		}
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
