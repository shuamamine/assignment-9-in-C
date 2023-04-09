#include <stdio.h>
int main()
{
int n;
printf("enter limit");
scanf("%d", &n);
int a[n];
printf("enter values in array");
for(int i = 0; i < n; i++)
{
  scanf("%d", &a[i]);
}
printf("original array");
 for(int i = 0; i < n; i++)
{
   printf("%d", a[i]);
 }
 for(int i = 0; i < n; i++)
{
   flag = 1;
    for(int j = i+1; j < n; j++)
   {
      if(a[i] == a[j])
      {
         flag = 0;
      }
    }
 if(flag == 1)
 {
    printf("%d", a[i]);
 }
 }
 return 0;
} 
   
