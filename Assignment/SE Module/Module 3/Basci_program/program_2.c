// Write a program to make Simple calculator (to make addition, subtraction, 
// multiplication, division and modulo)

#include<stdio.h>
int main(){
    int n1, n2, sum;
    printf("Enter the Number for n1 :  ");\
    scanf("%d",&n1);
    printf("Enter the Number for n2 :  ");\
    scanf("%d",&n2);
    sum = n1 + n2;
    printf("\nAddition of %d + %d is : %d ",n1,n2,sum);
    
     sum = n1 - n2;
    printf("\nSubtraction of %d - %d is : %d ",n1,n2,sum);

     sum = n1 * n2;
    printf("\nMultiplication of %d * %d is : %d ",n1,n2,sum);

     sum = n1 / n2;
    printf("\nDivision of %d / %d is : %d ",n1,n2,sum);

     sum = n1 % n2;
    printf("\nModulo of %d % %d is : %d ",n1,n2,sum);
}