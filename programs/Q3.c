#include <stdio.h>
int main()
{
int n;
printf("enter limit");
scanf("%d", &n);
int a[n], b[n];
 printf("enter values in array");
for(int i = 0; i < n; i++)
{
  scanf("%d", a[i]);
}
printf("the copying of elements of array are :");
 for(int i = 0; i < n; i++)
{
   b[i] = a[i];
}
 printf("original array");
 for(int i = 0; i < n; i++)
{
   printf("%d", a[i]);
}
  printf("duplicate array");
 for(int i = 0; i < n; i++)
{
   printf("%d", b[i]);
}
  return 0;
}
