#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<malloc.h>

int main()
{
	char *p = NULL;

	p = (char*)malloc(10);
	if(p == NULL)
	{
		printf("Unable ton allocate memory\n");
		return -1;
	}
	
	strcpy(p,"new string");

	printf("String at dynamically allocated memory is %s\n",p);

	// set character a at first 5 positions

	memset(p,97,5);

	printf("String after calling memset is %s\n",p);

return 0;
}
