#include <stdio.h>
#include <stdlib.h>

int * bucket;
int * arr;
int n = 0;

void sort()
{
	for(int i = 0; i < n; i++)
	{
		bucket[arr[i]]++;
	}
}

double avg()
{
	double sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	
	return sum / n;
}

int A_cut(int a_per)
{
	int cut = (n * a_per) / 100;

	for(int i = 99; i >= 0; i--)
	{
		cut -= bucket[i];
		if(cut <= 0)
			return i;
	}
}

int Half_cut()
{
	int cut = n / 2;

	for(int i = 99; i >= 0; i--)
	{
		cut -= bucket[i];
		if(cut <= 0)
			return i;
	}
}

int Find_rank(int num)
{
	int rank = 0;
	for(int i = 99; i > num; i--)
	{
		rank += bucket[i];
	}
	return rank;
}

int main(void)
{
	int tmp, i = 0;
	double avg;
	int a_cut, half_cut, my_rank, a_per;
	
	arr = (int*)calloc(100, sizeof(int));
	bucket = (int*)calloc(101, sizeof(int));
	
	printf("Enter your class's scores. After this enter -1\n");

	while(1)
	{
		scanf("%d", &tmp);
		if(tmp == -1)
			break;
		arr[n] = tmp;
		n++;
	}
	
	printf("Enter your score.\n");

	scanf("%d", &tmp);
	
	printf("Enter your A percent in integer. ex) 40%% -> 40\n");
	
	scanf("%d", &a_per);

	sort();
	a_cut = A_cut(a_per);
	half_cut = Half_cut();
	my_rank = Find_rank(tmp);
	
	while(i <= 95)
	{
		int j = 0;
		tmp = 0;
		while(j < 5)
		{
			tmp += bucket[i + j];
			j++;
		}
		printf("%d ~ %d : %d\n", i, i + j, tmp);
		i = i + j;
	}

	printf("Num of student : %d, A Cut : %d, Half Cut : %d, My Rank : %d\n", n, a_cut, half_cut, my_rank);

	free(bucket);
	free(arr);

	return 0;
}


