#include <stdio.h>
int main()
{
int size,i,arr[10];
int *ptr;
ptr=&arr[0];

scanf("%d",&size);
for(i=0;i<size;i++)
   {
   scanf("%d",ptr);
   ptr++;
   }

ptr=&arr[size-1];
 for(i=size-1;i>=0;i--)
   {
   printf("%d",*ptr);
   
   printf("\n");
   ptr--;
   }
return 0;
}
