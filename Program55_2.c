// recursive program which accept number from user
// and return summation of its digit.
// Input : 879
// Output : 24

#include <stdio.h>
 
int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
 
int main()
{
    int no=0;
    printf("Enter number: ");
    scanf("%d",&no);
    int result = sum_of_digit(no);
    printf("Sum of digits in %d is %d\n", no, result);
    return 0;
}