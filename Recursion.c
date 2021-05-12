#include <stdio.h>
int sumofdigits(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int result=sumofdigits(n);
	printf("Sum of digits in %d is %d\n", n, result);
    return 0;
}
int sumofdigits(int m)
{
	if(m==0)
		return 0;
	return (m%10+sumofdigits(m/10));
}
