/*Program to accept the marks of 5 subjects and finds the sum and percentage marks obtained by the student.*/

#include <stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
    printf("enter the marks of first subject: ");
    scanf("%f",&sub1);
    printf("enter the marks of second subject: ");
    scanf("%f",&sub2);
    printf("enter the marks of third subject: ");
    scanf("%f",&sub3);
    printf("enter the marks of fourth subject: ");
    scanf("%f",&sub4);
    printf("enter the marks of fifth subject: ");
    scanf("%f",&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    printf("the sum of 5 subjects are: %f ",sum);
    percentage= ((sum/500)*100);
    printf("\npercentage is: %f", percentage);
    
}
