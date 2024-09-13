#include <stdio.h>
#include <tgmath.h>

int main()
{
    int a,b,c;
    int c1;
    int c2;

    printf("Enter the num1 :");
    scanf("%d",&a);
    printf("Enter the num2 :");
    scanf("%d",&b);
    printf("Enter the num3 :");
    scanf("%d",&c);

    c1=(a*a) + (b*b);
    c2=(c*c);

    if(c1 == c2){
        printf("Triangle is right angled triangle:");
    }
    else{
        printf("Triangle is not a right angled triangle");
    }

    }




