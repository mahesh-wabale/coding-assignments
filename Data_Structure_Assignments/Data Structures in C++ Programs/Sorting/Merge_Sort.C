/* Merge Sort */

#include <stdio.h>
#include <conio.h>
#define SIZE 50

/* fn declaration */
void partition(int [],int,int);
void merge(int [],int,int,int,int);

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

	partition(nos,0,noe-1);

	printf("\nSorted array is :- \n");
	for (i=0;i<noe;i++)
		printf("%d ",nos[i]);
	getch();
}

void partition(int nos[],int i,int j)
{
	int mid;
	/* length of partition should be atleast 1 */
	if (i < j)
	{
		mid = (i+j) / 2;
		/* create 1 partition from i to mid, 2nd from mid+1 to j */
		partition(nos,i,mid);
		partition(nos,mid+1,j);
		merge(nos,i,mid,mid+1,j);
	}
}

void merge(int nos[],int i1,int j1,int i2,int j2)
{
	int k = 0, temp[SIZE], a, b;
	a = i1;
	b = i2;
	/* compare the elements from 2 sub-arrays till elements
	  exist in both arrays */
	while (a <= j1 && b <= j2)
	{
		if (nos[a] < nos[b])
		{
			temp[k] = nos[a];
			k++; a++;
		}
		else
		{
			temp[k] = nos[b];
			k++; b++;
		}
	}
	/* case 1, left sub-array is exhausted, copy elements of right
	  sub-array in temp */
	while (b <= j2)
	{
		temp[k] = nos[b];
		k++; b++;
	}
	/* case 2, right sub-array is exhausted, copy elements of left
	  sub-array in temp */
	while (a <= j1)
	{
		temp[k] = nos[a];
		k++; a++;
	}
	/* copy sorted elements from temp[] back to nos[] at their
	   original positions */
	k = 0;
	for (a=i1;a<=j2;a++)
	{
		nos[a] = temp[k];
		k++;
	}
}





















