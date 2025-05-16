#include<stdio.h>
int main (){
    int number, n,count=0,rev=0,rem;
    printf("enter a number :");
    scanf("%d",&n);
    number=n;
    if (n==0){
        count=1;
    }
    while(n!=0){
        n=n/10;
        count++;
    }
    for (int i=0;i<count;i++){
        rem=number%10;
        rev= rev*10+rem;
        number=number/10;

    }
    printf("reversed = %d",rev);
}
