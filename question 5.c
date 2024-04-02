#include<stdio.h>

struct  house{
	
	int rooms;
	int est_year;
	char city[20];
	};



main()
{
	int i,n;
	
	printf("enter the number of houses= ");
	scanf("%d",&n);
	
	
	struct house how[n];
	
	
		for(i=1;i<=n;i++)
		{
	
	printf("Number of rooms:- \n");
	scanf("%d",&how[i].rooms);
	printf("\nyear of establishment:- \n");
	scanf("%d",&how[i].est_year);
	printf("\ncity:- \n");
	scanf("%s",&how[i].city);
	}
	
	for(i=1;i<=n;i++)
	{
		printf("rooms= %d",how[i].rooms);
		printf("year of establisment = %d",how[i].est_year);
		printf("city= ");
		puts(how[i].city);
		
		
	}
	

	
}
