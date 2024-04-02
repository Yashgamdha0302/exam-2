#include <stdio.h>

int main()
{
    int n;
	int  num1;
	int num2;
	int num3; 
	int rev;    

    printf("Enter the number :\n");
    scanf("%d",&n);   //123

    num1 = n / 100;                 //1
    num2 = (n % 100) / 10;          //2
    num3 = (n % 10);               // 3

    rev = num3*100+ num2*10 + num1;

    printf(" The reverse is %d", rev);

    return 0;
}
