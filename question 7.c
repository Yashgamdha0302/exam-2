#include <stdio.h>
int main() 
{
    
    int i,j,xyz=10;

    for (i=0; i<5; i++)
	 {
        for (j=0; j<=i; j++)
		 {
            printf("%d ",xyz*xyz);
       	 }
        xyz--;
        printf("\n");
    }

}

