#include<stdio.h>

main()
{
	int a[20],count,i;
	printf("Enter 15 numbers of your choice \n");
	
	for (i=0; i<=19; i++)
	{
	scanf("%d", &a[i]);
	
	}
	count=0;
	
	for (i=0; i<=19; i++)
	{
		if (a[i] % 2 == 0 )
			count++;
		
	}

	printf("Even numbers count is = %d \n", count);

}
