#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

double avg = 0;
int max = 0, min = 0, n = 0;
int* arr;

void *Avg(void* arg)
{
	double sum = 0;
	int *num = (int*)arg;
	for(int i = 0; i < n; i++)
	{
		sum += num[i];
	}

	avg = sum / n;	
	
	pthread_exit(0);
}

void *Max(void* arg)
{
	int *num = (int*)arg;
	max = arr[0];

	for(int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = num[i];
	}
	
	pthread_exit(0);
}

void *Min(void* arg)
{
	int *num = (int*)arg;
	min = arr[0];

	for(int i = 1; i < n; i++)
	{
		if(arr[i] < min)
			min = num[i];
	}
	
	pthread_exit(0);
}

int main(void)
{
	arr = (int*)calloc(100, sizeof(int));

	pthread_t th1;
	pthread_t th2;
	pthread_t th3;
	pthread_attr_t attr1, attr2, attr3;

	while(1)
	{
		scanf("%d",&arr[n]);
		n++;
		if(n >= 10)
			break;
	}
	pthread_attr_init(&attr1);
	pthread_attr_init(&attr2);
	pthread_attr_init(&attr3);

	pthread_create(&th1, &attr1, Avg, arr);
	pthread_create(&th2, &attr2, Max, arr);
	pthread_create(&th3, &attr3, Min, arr);
	
	pthread_join(th1, NULL);
	pthread_join(th2, NULL);
	pthread_join(th3, NULL);
	
	printf("The average value is : %lf\n", avg);
	printf("The maximum value is : %d\n", max);
	printf("The minimum value is : %d\n", min);
	
	free(arr);
}
		

