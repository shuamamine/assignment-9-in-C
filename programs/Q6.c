#include <stdio.h>
int main()
{
int m,n,p=0;
printf("enter limit of first array");
scanf("%d", &n);
printf("enter limit of first array");
scanf("%d", &m);
int a[n], b[n];
printf("enter values in array 1 ");
for(int i = 0; i < n; i++)
{
  scanf("%d", a[i]);
}
printf("enter values in array 2");
for(int i = 0; i < m; i++)
{
   scanf("%d", b[i]);
}
p = m+n;
int c[p];
for(int i = 0; i < m; i++)
{
   scanf("%d", b[i]);
}
