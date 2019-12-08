#include <stdio.h>

void reverse(char * str, int first, int last)
{
	char tmp;
	while(first < last)
	{
		tmp = str[first];
		str[first] = str[last];
		str[last] = tmp;
		first++;
		last--;
	}
}

void shift(char * str, int n, int max)
{
	reverse(str, 0, n - 1);
	reverse(str, n, max);
	reverse(str, 0, max);
}

int main(void)
{
	char str[1000];
	scanf("%s", str);
	int max = 0, i;
	while(str[max]) { max++; }
	scanf("%d", &i);
	shift(str, i, max - 1);
	printf("%s\n", str);
}
