#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter X Quadrant and Y Quadrant value:");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0){
        printf("This is First Quadrant.");
    }else if(x<0 && y>0){
        printf("This is Second Quadrant.");
    }else if(x<0 && y<0){
        printf("This is Third Quadrant.");
    }else{
        printf("This is Fourth Quadrant.");
    }
    }
    


