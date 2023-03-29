#include <stdio.h>
int main()
{
int sm=0,n;
printf("enter limit");
scanf("%d", &n);
int a[n];
 printf("enter values in array");
for(int i = 0; i < n; i++)
{
  scanf("%d", a[i]);
}
printf("the sum of elements of array are :");
 for(int i = 0; i < n; i++)
{
   sm = sm + a[i];
}
  return 0;
}
