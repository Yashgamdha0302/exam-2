#include <stdio.h>

int main()

{

    int i, number; 
	int yes= 0; 

    printf("Enter any number to Check for Prime: ");
	scanf("%d", &number);

	for(i=2;i<=number/2;i++)
	{
	    if (number % i == 0)
	    {
	        yes++;
		}
	} 
    if (yes == 0 && number != 1)	
    {
        printf("%d is a Prime number", number);
    }
	else
	{
	    printf("%d is  composite number", number);
	}
}
