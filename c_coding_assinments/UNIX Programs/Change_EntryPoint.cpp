// This program demonstates technique of changing entry point function while compiling

// Compile the program as
// gcc Change_EntryPoint.c -e New_Main
// ./a.out

// We can also create executable of this program as
// gcc Change_entryPoint.c -o NewExecutable
// NewExecutable

#include<stdio.h>
#include<stdlib.h>

int New_Main()
{
	printf("Inside New entry point function\n");
	exit(0);
}
int main()
{
	printf("Inside main\n");
	return 0;
}
