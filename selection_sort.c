#include <stdio.h>
#include <conio.h>
int main()
{
  int no[50],n,i,j,min,temp,loc;

  printf("Enter how many number to be stored\n");
  scanf("%d",&n);
  printf("Enter %d numbers\n",n);
  for(i=0;i<n;i++)
   scanf("%d",&no[i]);
   printf("Displaying list before sorting\n");
   for(i=0;i<n;i++)
   {
       min=no[i];
       loc=i;
       for(j=i+1;j<n;j++)
       {
           if(no[j]<min)
           {
               min=no[j];
               loc=j;

           }
       }
       if(loc=i)
       {
           temp=no[i];
           no[i]=no[loc];
           no[loc]=temp;

       }
   }
   
   printf("Displaying list after sorting\n");

     for(i=0;i<n;i++)
     printf("%d\n",no[i]);
     return 0;

}
