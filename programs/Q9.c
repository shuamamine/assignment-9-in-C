#include <stdio.h>
int main()
{
int n,i,j=0,k=0;
printf("enter limit of array");
scanf("%d", &n);
int a[n],b[n],c[n];
printf("enter values in array");
for(int i = 0; i < n; i++)
{
  scanf("%d", a[i]);
}
for(int i = 0; i < n; i++)
{
  if(a[i]%2==0)
  {
    b[j] = a[i];
    j++;
  }
  else
  {
    c[k]=a[i];
    k++}
}
 printf("odd elements are");
 for(int i = 0; i < k; i++)
{
   printf("%d",c[i]);
 }
 printf("even elements are");
 for(int i = 0; i < j; i++)
{
   printf("%d",b[i]);
 }
  return 0;
}
