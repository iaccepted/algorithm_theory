#include <cstdio>

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int partion(int *a, int l, int r)
{
	int i = l - 1;
	int x = a[r];

	for(int j = l; j <= r - 1; ++j)
	{
		if(a[j] < x)
		{
			++i;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[r]);
	return i + 1;
}

void quik_sort(int *a, int l, int r)
{
	if(l <= r)
	{
		int m = partion(a, l, r);
		quik_sort(a, l, m - 1);
		quik_sort(a, m + 1, r);
	}
}

void print(int *a, int size)
{
	for(int i = 0; i < size; ++i)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}

int main()
{
	int iarr[] = {3, 2, 1, 5, 8, 7, 6, 0, 9, 8};
	quik_sort(iarr, 0, 9);
	print(iarr, 10);
}
