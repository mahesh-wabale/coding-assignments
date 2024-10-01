/* Bubble Sort */

#include <stdio.h>
#include <conio.h>

#define SIZE 50

void main()
{
	int nos[SIZE], noe, i, j, temp, flag, comp_cntr = 0;

	printf("Enter the no. of elements :- ");
	scanf("%d",&noe);

	/* accept the elements to sort */
	printf("Enter the elements :- ");
	for (i=0;i<noe;i++)
	{
		scanf("%d",&nos[i]);
	}

	/* sorting procedure */
	for (i=1;i<noe;i++)
	{
		flag = 0;

		/* comparison of elements loop */
		for (j=0;j<noe-i;j++)
		{
			comp_cntr++;
			if (nos[j] > nos[j+1])
			{
				temp = nos[j];
				nos[j] = nos[j+1];
				nos[j+1] = temp;
				flag = 1;
			}
		}
	
		printf("\nAfter iteration %d, array is :- ",i);
		for (j=0;j<noe;j++)
		{
			printf("%d ",nos[j]);
		}

		if (!flag)  /* no swapping took place, then break outer loop */
			break;
	}
	printf("\nNo. of comparisons are %d",comp_cntr);

}
