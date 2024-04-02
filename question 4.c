#include <stdio.h>

main()
{
	int n;
    int arr[n]; 
    int i,y ;

	printf("enter the size of array= ");
	scanf("%d",&n);
	
	for(y=0;y<n;y++)
	{
		printf("enter the elemnt= ");
		scanf("%d",&arr[y]);
	}
	
    printf("Array elements: \n");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);

    printf("\nSquare of array elements: \n");
    for (i=0;i<n;i++)
    {
	
        printf("%d ", arr[i] * arr[i]);
	}
}

