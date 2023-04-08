#include <stdio.h>
int main()
{
int n,max=0;min=0, c=0;
printf("enter limit of array");
scanf("%d", &n);
int a[n];
printf("enter values in array");
for(int i = 0; i < n; i++)
{
  scanf("%d", a[i]);
}
max  = a[0];
min  = a[0];
for(int i = 1; i < n; i++)
{
  if(max > a[i])
    max = a[i];
  if(min < a[i])
    min = a[i];
}
