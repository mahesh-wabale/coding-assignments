/* Quick Sort */

#include <stdio.h>
#include <conio.h>
#define SIZE 50

/* fn declaration */
void quick_sort(int [],int,int);

void main()
{
	int nos[SIZE], noe, i;
	clrscr();
	printf("Enter the no. of elements :- ");
	scanf("%d",&noe);
	/* accept the elements to sort */
	printf("Enter the elements :- ");
	for (i=0;i<noe;i++)
		scanf("%d",&nos[i]);
	quick_sort(nos,0,noe-1);
	printf("\nSorted array is :- \n");
	for (i=0;i<noe;i++)
		printf("%d ",nos[i]);
	getch();
}

void quick_sort(int nos[],int l,int h)
{
	int low=l,high=h, key, temp;
	key = nos[(l+h)/2];
	while (low <= high)
	{
		/* keep smaller elements than pivot el to left */
		while (nos[low] < key)
			low++;

		/* keep larger elements than pivot el to right */
		while (nos[high] > key)
			high--;

		if (low <= high)
		{
			temp = nos[low];
			nos[low] = nos[high];
			nos[high] = temp;
			low++;
			high--;
		}
	}
	/* send left & right partitions again for quick sort */
	if (l < high)
		quick_sort(nos,l,high);

	if (low < h)
		quick_sort(nos,low,h);
}