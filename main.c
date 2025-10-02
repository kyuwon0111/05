#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x;
	
	printf("Input an integer :");
	scanf("%d",&x);
	
	if (x > 0)
		printf("positive number \n");
	else if (x < 0)
		printf("negative number \n");
	else
		printf("zero \n");
		
	return 0;
}