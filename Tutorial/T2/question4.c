#include <stdlib.h>
#include <stdio.h>

int main (void)
{
int ar[10] = {1,2,3,4,5,6,7,8,9,10};
for (int i = 0; i < 10 ; i++) {
	if (ar[i]%2 == 0)
		printf("%d is even \n", ar[i]);
	else
		printf("%d is odd \n", ar[i]);	
}
}