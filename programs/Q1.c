#include <stdio.h>
int main()
{
int i,n;
printf("enter limit");
scanf("%d", &n);
int a[n];
 printf("enter values in array");
for(int i = 0; i < n; i++)
{
  scanf("%d", &a[i]);
}
 printf("the elements of array are :");
 for(int i = 0; i < n; i++)
{
   printf("%d", a[i]);
}
  return 0;
}
