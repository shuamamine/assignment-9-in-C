#include <stdio.h>
int main()
{
int m,n,p=0,temp;
printf("enter limit of first array");
scanf("%d", &n);
printf("enter limit of second array");
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
  for(int i = 0; i < m; i++)
{
  c[i] = b[i];
}
 for(int i = 0; i < n; i++)
{
  c[i] = a[i];
}
for(int i = 0; i < p; i++)
{
  for(int j = 0; j < p - 1; j++)
  {
    if(c[j] < c[j+1]){
      temp = c[j];
      c[j] = c[j+1];
      c[j+1] = temp;
    }
  }
}
for(int i = 0; i < p; i++)
{
  printf("%d", c[i]);
}
 return 0;
}
