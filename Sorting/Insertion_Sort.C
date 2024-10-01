/* Insertion Sort */
#include <stdio.h>
#include <conio.h>
#define SIZE 50

void main()
{
	int nos[SIZE], noe, i, j, k, temp, comp_cntr = 0;
	clrscr();
	printf("Enter the no. of elements :- ");
	scanf("%d",&noe);
	/* accept the elements to sort */
	printf("Enter the elements :- ");
	for (i=0;i<noe;i++)
		scanf("%d",&nos[i]);
	/* sorting procedure */
	for (i=0;i<noe-1;i++)
	{
		/* comparison of elements loop */
		for (j=i+1;j<noe;j++)
		{
			comp_cntr++;
			if (nos[i] > nos[j])
			{
				temp = nos[j];

				/* Shift elements at L to R */
				for (k=j;k>i;k--)
					nos[k] = nos[k-1];

				nos[i] = temp;
			}
		}
		printf("\nAfter iteration %d, array is :- ",i+1);
		for (j=0;j<noe;j++)
			printf("%d ",nos[j]);

	}
	printf("\nNo. of comparisons are %d",comp_cntr);
	getch();
}









