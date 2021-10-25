/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int pascal(int k, int n)
{
	if(k == 0 || k == n)
	return 1;
	else
	return pascal(k-1,n-1) + pascal(k, n-1);
}

void Ex1(int n){
	//Your codes here

	for (int i=0; i <= n; i++)
	{
		for(int k=0; k <= i; k++)
		{
			printf("%d ", pascal(k,i));
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
