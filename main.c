#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);

int main()
{
    ASG_3-1 __________________________________________________
    int num1, num2;
    printf("Enter First Number \n");
    scanf("%d", &num1);
    printf("Enter Second Number \n");
    scanf("%d", &num2);
    swap(num1,num2);
    return 0;
}

void swap(int x, int y)
{
    printf("Before Swapping \nx= %d\t y= %d \n", x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("After Swapping \nx= %d\t y= %d \n", x,y);
}
