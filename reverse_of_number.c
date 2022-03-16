#include<stdio.h>
int main()
{
    int no,digit,rev=0; 
    printf("enter a number",&no);
    scanf("%d",&no);
    while (no>0){
        digit=no%10;
        rev=rev*10+digit;
        no=no/10;
    }
printf("reverse of number=%d",rev);
return 0;
}
