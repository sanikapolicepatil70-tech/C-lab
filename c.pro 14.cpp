#include<stdio.h>
int main()
{
	int a [100], n,key,i, frequecy = 0;
	printf("enter mnumber of elements:");
	scanf("%d" , &n);
	if (n<1 ||n > 100)
	{
		printf("%Invalid array size.\n");
		return 0;
	}
	    printf("Enter array elements:");
		for(i=0; i<n; i++)
		    scanf("%d", &a[i]);
		printf("Enter elements to search:");
		scanf("%d", & key);
		for (i=0; i<n; i++)
	{
		if(a[i]== key)
		{
			printf("Found at position %d\n", i + 1);
			frequecy++;
		}
	}
	if (frequecy == 0)
	   printf("Elements not found.\n");
	else
	   printf(" Total frequecy = %d\n", frequecy);
	   return 0;
}