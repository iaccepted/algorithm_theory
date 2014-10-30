#include <cstdio>

void insert_sort(int *a, int size)
{
	for(int i = 1; i < size; ++i)
	{
		int x = a[i];
		int j = i - 1;

		while(j >= 0 && x < a[j])
		{
			a[j + 1] = a[j];
			--j;
		}
		
		a[j + 1] = x;
	}
}

void print(int *a, int size)
{
	for(int i = 0; i < size; ++i)
	{
		printf("%d   ", a[i]);
	}

	printf("\n");
}

int main()
{
	int a[] = {2, 3, 1, 6, 4};

	insert_sort(a, 5);

	print(a, 5);
	
	return 0;
}
