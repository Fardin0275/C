#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length :");
    scanf("%d",&length);
    printf("Enter the breadth :");
    scanf("%d",&breadth);

    area = length*breadth;
    perimeter = 2 * (length+breadth);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is less than perimeter");

    }
return 0;
}