#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
  
    
    if (n>0){
        printf("%d is Positive",n);
    }
    else if (n<0){
        printf("%d is negative",n);
    }
    else{
        printf("%d is Zero",n);
    }
}    