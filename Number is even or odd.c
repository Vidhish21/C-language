/*Program to find whether a given number is even or odd.*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    //logic
    if (a % 2 == 0) {
        printf("The given number is EVEN");
    }
    else {
        printf("The given number is ODD");
    }
}
