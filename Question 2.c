#include<stdio.h>

main()
{
	int  n;
	int  num[n];
	int i;
	int min;
	
	printf("enter the number in array= ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element:= ");
		scanf("%d",&num[i]);
		
		
	}
	
	for(i=0;i<n;i++)
	{
		if(num[i]<min)
		{
			min=num[i];
		}
		
	}	
	
	printf("%d is the smallest value",min);
	
	
	
	
	
}
