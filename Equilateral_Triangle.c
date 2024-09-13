#include<stdio.h>

int main()

{

int a,b,c;

printf("Enter the number: ");

scanf("%d",&a);

printf("Enter the number: ");

scanf("%d",&b);

printf("Enter the number:");

scanf("%d",&c);

if(a==b && b==c ){

printf("The Triangle is equilateral");

}

else{ printf("The Triangle is not equilateral");

}

return 0;
}