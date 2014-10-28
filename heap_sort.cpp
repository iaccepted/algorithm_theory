#include <cstdio>

inline
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void max_heapify(int *a, int s, int size)
{
	int largest = s;
	int l = s * 2;
	int r = s * 2 + 1;

	if(l <= size && a[l] > a[largest])
	{
		largest = l;
	}

	if(r <= size && a[r] > a[largest])
	{
		largest = r;
	}

	if(largest != s)
	{
		swap(a[largest], a[s]);
		max_heapify(a, largest, size);
	}
}

void build_max_heap(int *a, int size)
{
	int s = (size / 2);

	for(int i = s; i >= 1; --i)
	{
		max_heapify(a, i, size);
	}
}

void heap_sort(int *a, int size)
{
	build_max_heap(a, size);
	swap(a[size], a[1]);

	for(int i = size-1; i >= 2; --i)
	{
		max_heapify(a, 1, i);
		swap(a[1], a[i]);
	}
}

void print(int *a, int size)
{
	for(int i = 1; i <= size; ++i)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}

int main()
{
	int iarr[] = {0, 3, 1, 2, 6, 4, 5, 7, 0, 8, 9};
	heap_sort(iarr, 10);
	print(iarr, 10);
	
	return 0;
}
